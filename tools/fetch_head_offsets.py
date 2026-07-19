"""
Refresh CS2-SDK-Reference from upstream (legacy, offsets + schema only).

- Fetches a2x/cs2-dumper HEAD offsets + schema.
- Optionally fetches a specific PR branch (--pr <number>).
- Backs up existing latest/ to history/build_<N>_<date>/ before overwriting.

For the full one-button sync (protobufs too, snapshots, verify, commit) use
sync_from_upstream.py instead. This script is kept because it is referenced
from older docs; both now discover every *_dll.json module rather than a fixed
three.

Usage:
  python fetch_head_offsets.py
  python fetch_head_offsets.py --pr 670
"""
import argparse
import json
import os
import shutil
import sys
from pathlib import Path
from urllib.request import urlopen, Request
from urllib.error import URLError

REPO_ROOT = Path(__file__).resolve().parent.parent
LATEST    = REPO_ROOT / "offsets" / "latest"
HISTORY   = REPO_ROOT / "offsets" / "history"
SCHEMA    = REPO_ROOT / "schema"

RAW = "https://raw.githubusercontent.com/{owner}/cs2-dumper/{branch}/output/{name}"
API = "https://api.github.com/repos/{owner}/cs2-dumper/contents/output?ref={branch}"

FILES_LATEST  = ["offsets.json", "offsets.rs", "offsets.hpp", "offsets.cs",
                 "info.json", "interfaces.json", "buttons.json"]
FILES_SCHEMA_FALLBACK = ["client_dll.json", "engine2_dll.json", "server_dll.json"]


def discover_schema(owner, branch):
    """Every *_dll.json the upstream output currently publishes."""
    url = API.format(owner=owner, branch=branch)
    try:
        req = Request(url, headers={"User-Agent": "cs2-sdk-reference/1.0",
                                    "Accept": "application/vnd.github+json"})
        with urlopen(req, timeout=20) as r:
            listing = json.loads(r.read())
        found = sorted(e["name"] for e in listing
                       if e.get("type") == "file" and e.get("name", "").endswith("_dll.json"))
        if found:
            return found
    except Exception as e:
        print(f"    ! could not list output/ ({e}); using built-in module list")
    return FILES_SCHEMA_FALLBACK

def fetch(owner, branch, name, dest):
    url = RAW.format(owner=owner, branch=branch, name=name)
    print(f"  GET {url}")
    try:
        with urlopen(url, timeout=15) as r:
            data = r.read()
        dest.write_bytes(data)
        return len(data)
    except URLError as e:
        print(f"    ! failed: {e}")
        return 0

def load_json(path):
    if path.exists():
        try: return json.loads(path.read_text(encoding='utf-8'))
        except Exception: return None
    return None

def snapshot_current(build_hint=None):
    """Back up current latest/ into a dated history/ dir."""
    if not LATEST.exists() or not any(LATEST.iterdir()):
        return None
    stamp = f"snapshot_{build_hint or 'unknown'}"
    dst = HISTORY / stamp
    if dst.exists():
        print(f"  history dir already exists: {dst}, skipping snapshot")
        return dst
    dst.mkdir(parents=True, exist_ok=True)
    for f in LATEST.iterdir():
        shutil.copy(f, dst / f.name)
    for f in SCHEMA.glob("*.json"):
        shutil.copy(f, dst / f.name)
    print(f"  snapshotted current data → {dst}")
    return dst

def summarise_offsets(path):
    o = load_json(path) or {}
    c = o.get('client.dll', {})
    return {
        'dwLocalPlayerController': c.get('dwLocalPlayerController'),
        'dwGameRules':             c.get('dwGameRules'),
        'dwLocalPlayerPawn':       c.get('dwLocalPlayerPawn'),
    }

def main():
    ap = argparse.ArgumentParser(description="Refresh CS2-SDK-Reference from upstream cs2-dumper.")
    ap.add_argument("--pr", type=int, help="Pull from a specific PR (fetches head-branch offsets). Example: --pr 670")
    ap.add_argument("--owner", default="a2x", help="GitHub owner (default: a2x — the maintainer).")
    ap.add_argument("--branch", default="main", help="Branch name (default: main).")
    args = ap.parse_args()

    if args.pr:
        # Look up PR head branch.
        pr_url = f"https://api.github.com/repos/a2x/cs2-dumper/pulls/{args.pr}"
        print(f"[*] fetching PR metadata: {pr_url}")
        import json as _json
        with urlopen(pr_url, timeout=15) as r:
            pr = _json.loads(r.read())
        args.owner  = pr['head']['user']['login']
        args.branch = pr['head']['ref']
        print(f"    PR #{args.pr}: '{pr['title']}' from {args.owner}/{args.branch}")

    # 0. Snapshot current
    old_summary = summarise_offsets(LATEST / "offsets.json")
    snapshot_current(build_hint="pre_refresh")

    LATEST.mkdir(parents=True, exist_ok=True)
    SCHEMA.mkdir(parents=True, exist_ok=True)

    print(f"\n[*] fetching from {args.owner}/cs2-dumper@{args.branch}")

    # 1. Offsets in all 4 formats
    total = 0
    for name in FILES_LATEST:
        total += fetch(args.owner, args.branch, name, LATEST / name)

    # 2. Schema JSONs — every module upstream publishes
    schema_files = discover_schema(args.owner, args.branch)
    print(f"    {len(schema_files)} schema module(s)")
    for name in schema_files:
        total += fetch(args.owner, args.branch, name, SCHEMA / name)

    print(f"\n[+] fetched {total} total bytes")

    # 3. Diff summary
    new_summary = summarise_offsets(LATEST / "offsets.json")
    changes = 0
    for k in old_summary:
        if old_summary[k] != new_summary[k]:
            print(f"  CHG  {k}  0x{old_summary[k] or 0:X} → 0x{new_summary[k] or 0:X}")
            changes += 1
    if changes == 0:
        print("  no drift on core globals")

if __name__ == "__main__":
    main()
