"""
Verify the byte-signature patterns in patterns/*.json against the CS2 binaries.

For each IDA-style pattern ("48 89 5C 24 ? ...") it builds a byte+mask and scans
every executable section of the target DLL, reporting:
  * how many times the pattern matches (a good signature matches exactly once),
  * the RVA of the first match.

Entries whose name ends in `_proc_address` hold a mangled export name rather
than a byte pattern; those are checked against the module's export table.

No admin, no running game, no external tools — it only reads the DLLs on disk.

Usage:
  python tools/verify_patterns.py                      # auto-detect CS2 via Steam
  python tools/verify_patterns.py --game-path "D:\\...\\Counter-Strike Global Offensive"
  python tools/verify_patterns.py --json patterns/cs2_patterns.json

Exit codes: 0 = every pattern resolves uniquely, 2 = some missing/ambiguous.
"""
import argparse
import json
import struct
import sys
from pathlib import Path

REPO_ROOT = Path(__file__).resolve().parent.parent
STEAM_REG = r"SOFTWARE\Valve\Steam"
CS2_DIRNAME = "Counter-Strike Global Offensive"

IMAGE_SCN_MEM_EXECUTE = 0x20000000


def info(m): print(f"[*] {m}")
def ok(m):   print(f"[+] {m}")
def warn(m): print(f"[!] {m}")
def err(m):  print(f"[-] {m}", file=sys.stderr)


class PE:
    def __init__(self, path):
        d = Path(path).read_bytes()
        self.data = d
        pe = struct.unpack_from("<I", d, 0x3C)[0]
        assert d[pe:pe + 4] == b"PE\0\0", "bad PE"
        coff = pe + 4
        _, nsec, _ = struct.unpack_from("<HHI", d, coff)
        opt_size = struct.unpack_from("<H", d, coff + 16)[0]
        opt = coff + 20
        self.magic = struct.unpack_from("<H", d, opt)[0]
        self.image_base = struct.unpack_from("<Q", d, opt + 24)[0] if self.magic == 0x20b \
            else struct.unpack_from("<I", d, opt + 28)[0]
        # export directory: data dir index 0
        dd = opt + (112 if self.magic == 0x20b else 96)
        self.export_rva, self.export_size = struct.unpack_from("<II", d, dd)
        self.sections = []
        so = opt + opt_size
        for i in range(nsec):
            s = so + i * 40
            name = d[s:s + 8].rstrip(b"\0").decode("latin1")
            vsize, vaddr, rsize, raddr = struct.unpack_from("<IIII", d, s + 8)
            chars = struct.unpack_from("<I", d, s + 36)[0]
            self.sections.append(dict(name=name, vaddr=vaddr, vsize=vsize,
                                      rsize=rsize, raddr=raddr, chars=chars))

    def exec_sections(self):
        return [s for s in self.sections if s["chars"] & IMAGE_SCN_MEM_EXECUTE]

    def rva_to_off(self, rva):
        for s in self.sections:
            if s["vaddr"] <= rva < s["vaddr"] + max(s["vsize"], s["rsize"]):
                return s["raddr"] + (rva - s["vaddr"])
        return None

    def read_cstr(self, rva):
        off = self.rva_to_off(rva)
        if off is None:
            return None
        end = self.data.find(b"\0", off)
        return self.data[off:end].decode("latin1", "replace")

    def exports(self):
        """set of exported symbol names."""
        if not self.export_rva:
            return set()
        off = self.rva_to_off(self.export_rva)
        if off is None:
            return set()
        n_names = struct.unpack_from("<I", self.data, off + 24)[0]
        names_rva = struct.unpack_from("<I", self.data, off + 32)[0]
        names_off = self.rva_to_off(names_rva)
        out = set()
        if names_off is None:
            return out
        for i in range(n_names):
            name_ptr = struct.unpack_from("<I", self.data, names_off + i * 4)[0]
            s = self.read_cstr(name_ptr)
            if s:
                out.add(s)
        return out


def parse_pattern(pat):
    """'48 89 ? 5C' -> (bytes, mask) where mask byte 0 means wildcard."""
    b, m = bytearray(), bytearray()
    for tok in pat.split():
        if tok in ("?", "??"):
            b.append(0); m.append(0)
        else:
            b.append(int(tok, 16)); m.append(0xFF)
    return bytes(b), bytes(m)


def count_matches(haystack, needle, mask, limit=4):
    """Return up to `limit` offsets where needle matches under mask."""
    hits = []
    n = len(needle)
    if n == 0:
        return hits
    # anchor on the first non-wildcard byte for speed
    anchor_i = next((i for i, mm in enumerate(mask) if mm), 0)
    anchor_b = needle[anchor_i]
    start = 0
    while True:
        idx = haystack.find(bytes([anchor_b]), start)
        if idx < 0:
            break
        base = idx - anchor_i
        if base >= 0 and base + n <= len(haystack):
            if all((haystack[base + j] & mask[j]) == needle[j] for j in range(n)):
                hits.append(base)
                if len(hits) >= limit:
                    return hits
        start = idx + 1
    return hits


def locate_dll(game, module):
    if module.lower() == "gameoverlayrenderer64.dll":
        # lives in the Steam root, not the game dir
        try:
            import winreg
            with winreg.OpenKey(winreg.HKEY_CURRENT_USER, STEAM_REG) as k:
                steam = Path(winreg.QueryValueEx(k, "SteamPath")[0])
            p = steam / module
            if p.exists():
                return p
        except OSError:
            pass
        return None
    for d in (game / "game" / "csgo" / "bin" / "win64",
              game / "game" / "bin" / "win64"):
        p = d / module
        if p.exists():
            return p
    return None


def find_game(cli):
    if cli:
        return Path(cli)
    try:
        import winreg
        with winreg.OpenKey(winreg.HKEY_CURRENT_USER, STEAM_REG) as k:
            steam = Path(winreg.QueryValueEx(k, "SteamPath")[0])
    except OSError:
        return None
    libs = [steam]
    vdf = steam / "steamapps" / "libraryfolders.vdf"
    if vdf.exists():
        for line in vdf.read_text(encoding="utf-8", errors="replace").splitlines():
            p = line.split('"')
            if len(p) >= 4 and p[1] == "path":
                libs.append(Path(p[3].replace("\\\\", "\\")))
    for lib in libs:
        c = lib / "steamapps" / "common" / CS2_DIRNAME
        if c.is_dir():
            return c
    return None


def main():
    ap = argparse.ArgumentParser(description="Verify signature patterns against the CS2 binaries.")
    ap.add_argument("--game-path")
    ap.add_argument("--json", default=str(REPO_ROOT / "patterns" / "cs2_patterns.json"))
    args = ap.parse_args()

    patterns = json.loads(Path(args.json).read_text(encoding="utf-8"))
    game = find_game(args.game_path)
    if not game:
        err("CS2 install not found; pass --game-path.")
        return 1
    info(f"game: {game}")

    total = unique = multi = zero = missing_dll = export_ok = export_bad = 0

    for module, sigs in patterns.items():
        dll = locate_dll(game, module)
        if not dll:
            warn(f"{module}: not found on disk — skipping {len(sigs)} pattern(s)")
            missing_dll += len(sigs); total += len(sigs)
            continue
        pe = PE(dll)
        exec_secs = pe.exec_sections()
        exps = None
        print(f"\n=== {module} ===")
        for name, sig in sorted(sigs.items()):
            total += 1
            if name.endswith("_proc_address"):
                if exps is None:
                    exps = pe.exports()
                hit = sig in exps
                export_ok += hit; export_bad += (not hit)
                print(f"  {name:40s} export {'FOUND' if hit else 'MISSING'}")
                continue
            needle, mask = parse_pattern(sig)
            hits = []
            for s in exec_secs:
                seg = pe.data[s["raddr"]: s["raddr"] + s["rsize"]]
                for off in count_matches(seg, needle, mask):
                    hits.append(s["vaddr"] + off)
                if len(hits) >= 4:
                    break
            if len(hits) == 1:
                unique += 1
                print(f"  {name:40s} UNIQUE  rva=0x{hits[0]:X}")
            elif len(hits) == 0:
                zero += 1
                print(f"  {name:40s} NOT FOUND")
            else:
                multi += 1
                print(f"  {name:40s} {len(hits)}+ matches (ambiguous) e.g. 0x{hits[0]:X}")

    print()
    print(f"[summary] {total} pattern(s): {unique} unique, {multi} ambiguous, "
          f"{zero} not-found, {missing_dll} dll-missing; "
          f"exports {export_ok} ok / {export_bad} missing")
    bad = multi + zero + export_bad
    if bad == 0 and missing_dll == 0:
        ok("every pattern resolves uniquely against the installed build")
        return 0
    return 2


if __name__ == "__main__":
    sys.exit(main())
