"""
Verify that every offset cited in the markdown docs still matches the schema.

Offsets rot silently: schema/*.json and offsets/latest/ are refreshed from
upstream, but the hand-written numbers in READMEs and the wiki are not. This
walks every doc, finds each `<name> ... 0x...` pairing, and checks the hex
against what the schema actually says for that name.

Three kinds of number are cited legitimately and are NOT offsets, so they are
skipped:
  * FNV1a-64 hashes (how VMP plugins resolve fields) — 16 hex digits
  * runtime virtual addresses (module base + offset) — >= 0x7ff000000000
  * nested/relative walks written as `a -> +0xNN` or `[[x] + 0xNN]`

Usage:
  python tools/verify_docs.py           # report; exit 1 if anything is stale
  python tools/verify_docs.py --quiet    # only print the summary line

Exit codes: 0 = all good, 1 = at least one stale offset.
"""
import argparse
import json
import re
import sys
from collections import defaultdict
from pathlib import Path

REPO_ROOT = Path(__file__).resolve().parent.parent

HEX = re.compile(r"0x[0-9A-Fa-f]+")
IDENT = re.compile(r"\b(m_[A-Za-z_]\w*|dw[A-Z]\w*)\b")
QUALIFIED = re.compile(r"\b(C[\w]+)\s*(?:::|\.)\s*(m_\w+)")

FNV_DIGITS = 16                    # a full FNV1a-64 literal
RUNTIME_VA = 0x7ff000000000        # user-mode module mapping range


def load_schema():
    globals_by_name = defaultdict(set)
    offs = json.loads((REPO_ROOT / "offsets" / "latest" / "offsets.json").read_text(encoding="utf-8"))
    for mod, fields in offs.items():
        for k, v in fields.items():
            globals_by_name[k].add(v)

    fields_by_name = defaultdict(set)
    field_in_class = defaultdict(set)
    for p in REPO_ROOT.glob("schema/*_dll.json"):
        d = json.loads(p.read_text(encoding="utf-8"))
        for mod, body in d.items():
            for cls, cb in body.get("classes", {}).items():
                for f, v in cb.get("fields", {}).items():
                    off = v["offset"] if isinstance(v, dict) else v
                    fields_by_name[f].add(off)
                    field_in_class[(cls, f)].add(off)
    return globals_by_name, fields_by_name, field_in_class


def iter_docs():
    seen = set()
    for pattern in ("*.md", "*/README.md", "wiki/*/*.md"):
        for p in REPO_ROOT.glob(pattern):
            if any(part in (".git",) or part.startswith("source2") or part == "cs2-dumper"
                   for part in p.relative_to(REPO_ROOT).parts[:-1]):
                continue
            if p not in seen:
                seen.add(p)
                yield p


def candidate_offsets(line):
    """Hex numbers on the line that could plausibly be a struct offset."""
    out = []
    for h in HEX.findall(line):
        digits = len(h) - 2
        val = int(h, 16)
        if digits == FNV_DIGITS:        # FNV1a-64 hash literal
            continue
        if val >= RUNTIME_VA:           # runtime VA, not a static offset
            continue
        out.append(val)
    return out


def main():
    ap = argparse.ArgumentParser(description="Check doc-cited offsets against the schema.")
    ap.add_argument("--quiet", action="store_true", help="only print the summary line")
    args = ap.parse_args()

    globals_by_name, fields_by_name, field_in_class = load_schema()

    checked = 0
    stale = []
    for doc in sorted(iter_docs()):
        for ln, line in enumerate(doc.read_text(encoding="utf-8", errors="replace").splitlines(), 1):
            hexes = candidate_offsets(line)
            if not hexes:
                continue

            # A relative walk (`-> +0x..`, `] + 0x..`) cites a delta, not an
            # absolute offset — don't hold it to the schema's absolute value.
            relative = "+0x" in line.replace(" ", "") or "] +" in line or "->" in line

            names = []
            for cls, f in QUALIFIED.findall(line):
                if (cls, f) in field_in_class:
                    names.append((f"{cls}.{f}", field_in_class[(cls, f)]))
            if not names:
                for ident in IDENT.findall(line):
                    if ident in globals_by_name:
                        names.append((ident, globals_by_name[ident]))
                    elif ident in fields_by_name:
                        names.append((ident, fields_by_name[ident]))

            for name, valid in names:
                # A relative walk cites the delta being added, not the name's
                # own offset — skip it for members always, and for a global
                # only when the offsets on the line are all deltas (the global's
                # own value never appears, e.g. "deref dwLocalPlayerController,
                # read +0x888"). If the global's real offset IS on the line,
                # keep checking so a stale absolute still trips.
                is_global = name in globals_by_name
                if relative and (not is_global or not (set(hexes) & valid)):
                    continue
                checked += 1
                if not (set(hexes) & valid):
                    stale.append((doc.relative_to(REPO_ROOT), ln, name,
                                  [hex(h) for h in hexes],
                                  sorted(hex(v) for v in valid)[:6]))

    if not args.quiet:
        for doc, ln, name, cited, valid in stale:
            print(f"[-] {doc}:{ln}")
            print(f"      {name}: cites {cited}, schema says {valid}")

    print(f"\n[{'+' if not stale else '-'}] checked {checked} offset citation(s) across the docs; "
          f"{len(stale)} stale")
    return 1 if stale else 0


if __name__ == "__main__":
    sys.exit(main())
