"""
Verify CS2-SDK-Reference offsets against the CS2 binaries on disk.

This is the counterpart to verify_offsets.py. That one reads a live cs2 process,
which needs the game running and fails with ERROR_ACCESS_DENIED whenever
anti-cheat handle protection is active. This one only parses the PE files, so it
needs no elevation, no running game, and never touches the game process.

For every offset it resolves the RVA against the module's section table and
reports which section it lands in — a real offset always lands in writable data.
Values below 0x10000 are struct member offsets rather than RVAs and are reported
as such.

Usage:
  python verify_offsets_static.py
  python verify_offsets_static.py --game-path "D:\\SteamLibrary\\steamapps\\common\\Counter-Strike Global Offensive"

Exit codes:
  0 — every offset resolves to a plausible location
  1 — game not found / offsets.json missing
  2 — at least one offset failed to resolve
"""
import argparse
import json
import struct
import sys
from pathlib import Path

REPO_ROOT = Path(__file__).resolve().parent.parent

STEAM_REG = r"SOFTWARE\Valve\Steam"
CS2_APPID = "730"
CS2_DIRNAME = "Counter-Strike Global Offensive"

IMAGE_SCN_MEM_WRITE   = 0x80000000
IMAGE_SCN_MEM_EXECUTE = 0x20000000

def info(msg):  print(f"[*] {msg}")
def ok(msg):    print(f"[+] {msg}")
def warn(msg):  print(f"[!] {msg}")
def err(msg):   print(f"[-] {msg}", file=sys.stderr)


class PE:
    """Minimal PE reader: section table + RVA resolution."""

    def __init__(self, path):
        self.path = Path(path)
        d = self.path.read_bytes()
        self.data = d

        if d[:2] != b"MZ":
            raise ValueError(f"{path}: not a PE file")
        pe_off = struct.unpack_from("<I", d, 0x3C)[0]
        if d[pe_off:pe_off + 4] != b"PE\0\0":
            raise ValueError(f"{path}: bad PE signature")

        coff = pe_off + 4
        _, n_sections, self.timestamp = struct.unpack_from("<HHI", d, coff)
        opt_size = struct.unpack_from("<H", d, coff + 16)[0]
        opt = coff + 20
        self.size_of_image = struct.unpack_from("<I", d, opt + 56)[0]

        self.sections = []
        sec_off = opt + opt_size
        for i in range(n_sections):
            s = sec_off + i * 40
            name = d[s:s + 8].rstrip(b"\0").decode("latin1")
            vsize, vaddr, rsize, _raddr = struct.unpack_from("<IIII", d, s + 8)
            chars = struct.unpack_from("<I", d, s + 36)[0]
            self.sections.append(dict(name=name, vaddr=vaddr, vsize=vsize,
                                      rsize=rsize, chars=chars))

    def section_of(self, rva):
        for s in self.sections:
            if s["vaddr"] <= rva < s["vaddr"] + max(s["vsize"], s["rsize"]):
                return s
        return None


def find_game_path():
    """Locate the CS2 install through the Steam registry key + library folders."""
    try:
        import winreg
    except ImportError:
        return None

    try:
        with winreg.OpenKey(winreg.HKEY_CURRENT_USER, STEAM_REG) as k:
            steam = Path(winreg.QueryValueEx(k, "SteamPath")[0])
    except OSError:
        return None

    libraries = [steam]
    vdf = steam / "steamapps" / "libraryfolders.vdf"
    if vdf.exists():
        # The file is small and regular; pulling out "path" values is enough.
        for line in vdf.read_text(encoding="utf-8", errors="replace").splitlines():
            parts = line.split('"')
            if len(parts) >= 4 and parts[1] == "path":
                libraries.append(Path(parts[3].replace("\\\\", "\\")))

    for lib in libraries:
        candidate = lib / "steamapps" / "common" / CS2_DIRNAME
        if candidate.is_dir():
            return candidate
    return None


def main():
    ap = argparse.ArgumentParser(description="Verify offsets against the CS2 binaries on disk.")
    ap.add_argument("--game-path", help="CS2 install directory (default: auto-detect via Steam).")
    args = ap.parse_args()

    offsets_path = REPO_ROOT / "offsets" / "latest" / "offsets.json"
    if not offsets_path.exists():
        err(f"{offsets_path} not found; run sync_from_upstream.py first.")
        return 1
    offsets = json.loads(offsets_path.read_text(encoding="utf-8"))

    game = Path(args.game_path) if args.game_path else find_game_path()
    if not game or not game.is_dir():
        err("CS2 install not found. Pass it explicitly with --game-path.")
        return 1
    info(f"game path: {game}")

    bin_dirs = [game / "game" / "bin" / "win64",
                game / "game" / "csgo" / "bin" / "win64"]

    def locate(module):
        for d in bin_dirs:
            p = d / module
            if p.exists():
                return p
        return None

    total = resolved = failed = members = 0

    for module, fields in offsets.items():
        path = locate(module)
        if not path:
            warn(f"{module}: not found on disk — skipping {len(fields)} offset(s)")
            failed += len(fields)
            total += len(fields)
            continue

        pe = PE(path)
        print(f"\n=== {module}  (SizeOfImage=0x{pe.size_of_image:x}, {len(pe.sections)} sections) ===")

        for field, off in sorted(fields.items()):
            total += 1

            if off < 0x10000:
                members += 1
                print(f"  {field:44s} 0x{off:<8x} struct member offset")
                continue

            section = pe.section_of(off)
            if section is None or off >= pe.size_of_image:
                failed += 1
                print(f"  {field:44s} 0x{off:<8x} UNRESOLVED — outside the image")
                continue

            writable = bool(section["chars"] & IMAGE_SCN_MEM_WRITE)
            execable = bool(section["chars"] & IMAGE_SCN_MEM_EXECUTE)
            file_backed = (off - section["vaddr"]) < section["rsize"]
            kind = "file-backed" if file_backed else "zero-filled at load"

            resolved += 1
            flags = f"{'W' if writable else '-'}{'X' if execable else '-'}"
            print(f"  {field:44s} 0x{off:<8x} {section['name']:<8s} {flags}  {kind}")

    print()
    print(f"[+] {resolved} offset(s) resolved, {members} struct member offset(s), "
          f"{failed} unresolved, {total} total")

    if failed:
        err("some offsets did not resolve — the local build likely differs from offsets/latest/")
        return 2
    ok("every offset resolves against the installed CS2 binaries")
    return 0


if __name__ == "__main__":
    sys.exit(main())
