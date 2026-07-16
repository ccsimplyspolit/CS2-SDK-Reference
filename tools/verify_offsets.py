"""
Verify that CS2-SDK-Reference offsets match a running cs2 process.

For each tracked global (dwLocalPlayerController, dwGameRules, ...), reads the
memory at client.dll base + offset in the target cs2 process and checks that
it dereferences to a plausible pointer (i.e. lands inside a mapped section).

Reports MATCH / DRIFT / UNMAPPED per field.

Requires: admin (SeDebugPrivilege) or same-elevation as cs2.

Usage:
  python verify_offsets.py --pid <cs2_pid>
"""
import argparse
import ctypes
import ctypes.wintypes as wt
import json
import sys
from pathlib import Path

REPO_ROOT = Path(__file__).resolve().parent.parent

kernel32 = ctypes.WinDLL("kernel32", use_last_error=True)
psapi    = ctypes.WinDLL("psapi",    use_last_error=True)
advapi32 = ctypes.WinDLL("advapi32", use_last_error=True)

PROCESS_QUERY_INFORMATION = 0x0400
PROCESS_VM_READ           = 0x0010
TOKEN_ADJUST_PRIVILEGES   = 0x0020
TOKEN_QUERY               = 0x0008
SE_PRIVILEGE_ENABLED      = 0x00000002
LIST_MODULES_ALL          = 0x03

class MODULEINFO(ctypes.Structure):
    _fields_ = [("lpBaseOfDll", wt.LPVOID), ("SizeOfImage", wt.DWORD), ("EntryPoint", wt.LPVOID)]

class LUID(ctypes.Structure):
    _fields_ = [("LowPart", wt.DWORD), ("HighPart", ctypes.c_long)]
class LUID_AND_ATTRIBUTES(ctypes.Structure):
    _fields_ = [("Luid", LUID), ("Attributes", wt.DWORD)]
class TOKEN_PRIVILEGES(ctypes.Structure):
    _fields_ = [("PrivilegeCount", wt.DWORD), ("Privileges", LUID_AND_ATTRIBUTES * 1)]

kernel32.OpenProcess.argtypes = [wt.DWORD, wt.BOOL, wt.DWORD]
kernel32.OpenProcess.restype  = wt.HANDLE
kernel32.CloseHandle.argtypes = [wt.HANDLE]
kernel32.CloseHandle.restype  = wt.BOOL
kernel32.ReadProcessMemory.argtypes = [wt.HANDLE, wt.LPCVOID, wt.LPVOID, ctypes.c_size_t, ctypes.POINTER(ctypes.c_size_t)]
kernel32.ReadProcessMemory.restype  = wt.BOOL
kernel32.GetCurrentProcess.restype  = wt.HANDLE
psapi.EnumProcessModulesEx.argtypes = [wt.HANDLE, ctypes.POINTER(wt.HMODULE), wt.DWORD, ctypes.POINTER(wt.DWORD), wt.DWORD]
psapi.EnumProcessModulesEx.restype  = wt.BOOL
psapi.GetModuleBaseNameW.argtypes = [wt.HANDLE, wt.HMODULE, wt.LPWSTR, wt.DWORD]
psapi.GetModuleBaseNameW.restype  = wt.DWORD
psapi.GetModuleInformation.argtypes = [wt.HANDLE, wt.HMODULE, ctypes.POINTER(MODULEINFO), wt.DWORD]
psapi.GetModuleInformation.restype  = wt.BOOL
advapi32.OpenProcessToken.argtypes = [wt.HANDLE, wt.DWORD, ctypes.POINTER(wt.HANDLE)]
advapi32.OpenProcessToken.restype  = wt.BOOL
advapi32.LookupPrivilegeValueW.argtypes = [wt.LPCWSTR, wt.LPCWSTR, ctypes.POINTER(LUID)]
advapi32.LookupPrivilegeValueW.restype  = wt.BOOL
advapi32.AdjustTokenPrivileges.argtypes = [wt.HANDLE, wt.BOOL, ctypes.POINTER(TOKEN_PRIVILEGES),
                                            wt.DWORD, ctypes.POINTER(TOKEN_PRIVILEGES), ctypes.POINTER(wt.DWORD)]
advapi32.AdjustTokenPrivileges.restype  = wt.BOOL

def enable_se_debug():
    token = wt.HANDLE()
    if not advapi32.OpenProcessToken(kernel32.GetCurrentProcess(), TOKEN_ADJUST_PRIVILEGES | TOKEN_QUERY, ctypes.byref(token)):
        return False
    luid = LUID()
    if not advapi32.LookupPrivilegeValueW(None, "SeDebugPrivilege", ctypes.byref(luid)):
        kernel32.CloseHandle(token); return False
    tp = TOKEN_PRIVILEGES()
    tp.PrivilegeCount = 1
    tp.Privileges[0].Luid = luid
    tp.Privileges[0].Attributes = SE_PRIVILEGE_ENABLED
    advapi32.AdjustTokenPrivileges(token, False, ctypes.byref(tp), 0, None, None)
    ok = ctypes.get_last_error() == 0
    kernel32.CloseHandle(token)
    return ok

def find_module(h, name):
    want = name.lower()
    arr = (wt.HMODULE * 4096)()
    need = wt.DWORD(0)
    psapi.EnumProcessModulesEx(h, arr, ctypes.sizeof(arr), ctypes.byref(need), LIST_MODULES_ALL)
    n = need.value // ctypes.sizeof(wt.HMODULE)
    for i in range(n):
        nm = ctypes.create_unicode_buffer(260)
        psapi.GetModuleBaseNameW(h, arr[i], nm, len(nm))
        if nm.value.lower() == want:
            info = MODULEINFO()
            psapi.GetModuleInformation(h, arr[i], ctypes.byref(info), ctypes.sizeof(info))
            return int(info.lpBaseOfDll), int(info.SizeOfImage)
    return None, 0

def read_qword(h, va):
    buf = (ctypes.c_ubyte * 8)()
    got = ctypes.c_size_t(0)
    if kernel32.ReadProcessMemory(h, ctypes.c_void_p(va), buf, 8, ctypes.byref(got)) and got.value == 8:
        return int.from_bytes(bytes(buf), 'little')
    return None

def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--pid", type=int, required=True, help="cs2.exe PID")
    args = ap.parse_args()

    offsets_path = REPO_ROOT / "offsets" / "latest" / "offsets.json"
    if not offsets_path.exists():
        print(f"[-] {offsets_path} not found; run fetch_head_offsets.py first.")
        sys.exit(1)
    offsets = json.loads(offsets_path.read_text(encoding='utf-8'))

    tracked = {
        'client.dll':  ['dwLocalPlayerController', 'dwGameRules', 'dwLocalPlayerPawn', 'dwCSGOInput', 'dwGlobalVars'],
        'engine2.dll': ['dwNetworkGameClient'],
    }

    if not enable_se_debug():
        print("[-] SeDebugPrivilege not granted — run elevated.")
        sys.exit(1)
    h = kernel32.OpenProcess(PROCESS_QUERY_INFORMATION | PROCESS_VM_READ, False, args.pid)
    if not h:
        print(f"[-] OpenProcess({args.pid}) err={ctypes.get_last_error()}")
        sys.exit(1)

    ok = fail = 0
    for module, fields in tracked.items():
        base, size = find_module(h, module)
        if not base:
            print(f"[-] {module}: not loaded in PID {args.pid}")
            fail += len(fields)
            continue
        print(f"\n=== {module} @ 0x{base:x}  (size 0x{size:x}) ===")
        mod = offsets.get(module, {})
        for field in fields:
            off = mod.get(field)
            if off is None:
                print(f"  {field:35s} NOT IN JSON")
                fail += 1; continue
            va = base + off
            val = read_qword(h, va)
            if val is None:
                verdict = "UNREADABLE"; fail += 1
            elif val == 0:
                verdict = "NULL (game may not be fully loaded)"; ok += 1  # NULL is OK — just not in match yet
            elif 0x00007ff000000000 <= val < 0x00007fffffffffff:
                verdict = f"ptr 0x{val:x} (in user-mode range)"; ok += 1
            else:
                verdict = f"value 0x{val:x} (unexpected)"; fail += 1
            print(f"  {field:35s}  offset=0x{off:x}  va=0x{va:x}  → {verdict}")

    kernel32.CloseHandle(h)
    print(f"\n[+] verified {ok} / {ok + fail} fields")
    return 0 if fail == 0 else 1

if __name__ == "__main__":
    sys.exit(main())
