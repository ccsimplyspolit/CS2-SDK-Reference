"""
One-button sync from upstream sources:
  - a2x/cs2-dumper       → offsets/latest/ + schema/
  - SteamDatabase/Protobufs (csgo/) → protobufs/

Auto-snapshots current data to offsets/history/<label>/ before overwrite so
nothing is lost. Optionally auto-commits + pushes.

Usage:
  python sync_from_upstream.py                # sync everything from HEAD
  python sync_from_upstream.py --pr 670       # sync offsets from a cs2-dumper PR
  python sync_from_upstream.py --offsets-only # skip protobufs
  python sync_from_upstream.py --protobufs-only
  python sync_from_upstream.py --commit       # auto-commit + push after
  python sync_from_upstream.py --dry-run      # show diff without writing
  python sync_from_upstream.py --live-pid 53000 --verify  # also verify against running cs2

Exit codes:
  0 — no changes OR sync applied successfully
  1 — error (network, git, invalid PR)
  2 — drift detected in --dry-run mode
"""
import argparse
import hashlib
import json
import os
import shutil
import subprocess
import sys
import tempfile
from datetime import datetime, timezone
from pathlib import Path
from urllib.request import urlopen, Request
from urllib.error import URLError, HTTPError

REPO_ROOT = Path(__file__).resolve().parent.parent
LATEST    = REPO_ROOT / "offsets" / "latest"
HISTORY   = REPO_ROOT / "offsets" / "history"
SCHEMA    = REPO_ROOT / "schema"
PROTOS    = REPO_ROOT / "protobufs"

# -- upstream sources ---------------------------------------------------------
CS2DUMPER_RAW = "https://raw.githubusercontent.com/{owner}/cs2-dumper/{branch}/output/{name}"
CS2DUMPER_PR  = "https://api.github.com/repos/a2x/cs2-dumper/pulls/{n}"
STEAMDB_API   = "https://api.github.com/repos/SteamDatabase/Protobufs/contents/csgo?ref=master"
STEAMDB_RAW   = "https://raw.githubusercontent.com/SteamDatabase/Protobufs/master/csgo/{name}"

OFFSET_FILES = ["offsets.json", "offsets.rs", "offsets.hpp", "offsets.cs"]
SCHEMA_FILES = ["client_dll.json", "engine2_dll.json", "server_dll.json"]

# -- helpers ------------------------------------------------------------------
def info(msg):  print(f"[*] {msg}")
def ok(msg):    print(f"[+] {msg}")
def warn(msg):  print(f"[!] {msg}")
def err(msg):   print(f"[-] {msg}", file=sys.stderr)

def http_get(url, timeout=20):
    req = Request(url, headers={"User-Agent": "cs2-sdk-reference-sync/1.0",
                                 "Accept": "application/vnd.github+json"})
    try:
        with urlopen(req, timeout=timeout) as r:
            return r.read()
    except HTTPError as e:
        return None if e.code == 404 else (_ for _ in ()).throw(RuntimeError(f"HTTP {e.code}: {url}"))
    except URLError as e:
        raise RuntimeError(f"URL error for {url}: {e}") from e

def read_json_bytes(b):
    return json.loads(b.decode('utf-8')) if b else None

def sha256_of(data):  return hashlib.sha256(data).hexdigest() if data else None
def sha256_of_file(p): return sha256_of(p.read_bytes()) if p.exists() else None

def resolve_pr(pr_num):
    """Return (owner, branch) for a cs2-dumper PR."""
    data = http_get(CS2DUMPER_PR.format(n=pr_num))
    if not data: raise RuntimeError(f"PR #{pr_num} not found on a2x/cs2-dumper")
    pr = read_json_bytes(data)
    return pr['head']['user']['login'], pr['head']['ref'], pr['title']

def summarise_offsets(path):
    """Extract key globals for quick drift comparison."""
    if not path.exists(): return {}
    try:
        o = read_json_bytes(path.read_bytes())
        c = o.get('client.dll', {})
        e = o.get('engine2.dll', {})
        return {
            'dwLocalPlayerController':      c.get('dwLocalPlayerController'),
            'dwGameRules':                  c.get('dwGameRules'),
            'dwLocalPlayerPawn':            c.get('dwLocalPlayerPawn'),
            'dwCSGOInput':                  c.get('dwCSGOInput'),
            'dwGlobalVars':                 c.get('dwGlobalVars'),
            'engine2.dwNetworkGameClient':  e.get('dwNetworkGameClient'),
        }
    except Exception:
        return {}

def snapshot_current(label):
    """Copy current offsets/latest/ + schema/ into offsets/history/<label>/."""
    if not LATEST.exists() or not any(LATEST.iterdir()):
        info("nothing to snapshot (offsets/latest/ empty)")
        return None
    dst = HISTORY / label
    if dst.exists():
        info(f"snapshot dir already exists: {dst}, skipping")
        return dst
    dst.mkdir(parents=True, exist_ok=True)
    for f in LATEST.iterdir():
        shutil.copy(f, dst / f.name)
    for f in SCHEMA.glob("*.json"):
        shutil.copy(f, dst / f.name)
    ok(f"snapshotted current state → offsets/history/{label}/")
    return dst

# -- sync steps ---------------------------------------------------------------
def sync_offsets(owner, branch, dry_run=False):
    """Fetch offsets + schema JSONs from a cs2-dumper branch."""
    changed = 0
    unchanged = 0
    to_write = {}

    for name in OFFSET_FILES:
        data = http_get(CS2DUMPER_RAW.format(owner=owner, branch=branch, name=name))
        if not data:
            warn(f"  {name}: 404 — skipping")
            continue
        dst = LATEST / name
        new_sha = sha256_of(data)
        old_sha = sha256_of_file(dst)
        if new_sha == old_sha:
            unchanged += 1; continue
        changed += 1
        to_write[dst] = data
        info(f"  offsets/{name}  {(old_sha or 'new')[:8]} → {new_sha[:8]}")

    for name in SCHEMA_FILES:
        data = http_get(CS2DUMPER_RAW.format(owner=owner, branch=branch, name=name))
        if not data:
            warn(f"  schema/{name}: 404 — skipping")
            continue
        dst = SCHEMA / name
        new_sha = sha256_of(data)
        old_sha = sha256_of_file(dst)
        if new_sha == old_sha:
            unchanged += 1; continue
        changed += 1
        to_write[dst] = data
        info(f"  schema/{name}  {(old_sha or 'new')[:8]} → {new_sha[:8]}  ({len(data)} B)")

    if dry_run:
        return changed, unchanged, {}
    if changed > 0:
        # Snapshot BEFORE writing, using a timestamp label.
        label = datetime.now(timezone.utc).strftime("pre_sync_%Y%m%dT%H%M%SZ")
        snapshot_current(label)
        for dst, data in to_write.items():
            dst.parent.mkdir(parents=True, exist_ok=True)
            dst.write_bytes(data)
        ok(f"wrote {len(to_write)} files")
    return changed, unchanged, to_write

def sync_protobufs(dry_run=False):
    """Fetch every .proto in SteamDatabase/Protobufs/csgo/ into protobufs/."""
    data = http_get(STEAMDB_API)
    if not data:
        raise RuntimeError("Could not list SteamDatabase/Protobufs/csgo — GitHub API unreachable")
    listing = read_json_bytes(data)
    if not isinstance(listing, list):
        raise RuntimeError("Unexpected GitHub API response")

    changed = unchanged = 0
    to_write = {}
    PROTOS.mkdir(parents=True, exist_ok=True)

    for entry in listing:
        if entry.get('type') != 'file' or not entry.get('name', '').endswith('.proto'):
            continue
        name = entry['name']
        content = http_get(STEAMDB_RAW.format(name=name))
        if not content:
            warn(f"  {name}: fetch failed"); continue
        dst = PROTOS / name
        new_sha = sha256_of(content)
        old_sha = sha256_of_file(dst)
        if new_sha == old_sha:
            unchanged += 1; continue
        changed += 1
        to_write[dst] = content
        info(f"  protobufs/{name}  {(old_sha or 'new')[:8]} → {new_sha[:8]}  ({len(content)} B)")

    if not dry_run:
        for dst, content in to_write.items():
            dst.write_bytes(content)
        if changed > 0: ok(f"wrote {len(to_write)} .proto files")
    return changed, unchanged, to_write

def verify_against_cs2(pid):
    """Run verify_offsets.py against a live cs2 process."""
    script = REPO_ROOT / "tools" / "verify_offsets.py"
    if not script.exists():
        warn("verify_offsets.py not found — skipping runtime verification")
        return None
    r = subprocess.run([sys.executable, str(script), "--pid", str(pid)],
                        capture_output=True, text=True)
    print(r.stdout)
    if r.stderr: print(r.stderr, file=sys.stderr)
    return r.returncode == 0

def git_commit_push(msg):
    """git add -A / commit / push. Returns True on success."""
    try:
        subprocess.run(["git", "add", "-A"], cwd=REPO_ROOT, check=True, capture_output=True)
        # Check if there's anything to commit
        st = subprocess.run(["git", "status", "--porcelain"], cwd=REPO_ROOT,
                            capture_output=True, text=True, check=True)
        if not st.stdout.strip():
            info("nothing to commit")
            return True
        subprocess.run(["git", "commit", "-m", msg], cwd=REPO_ROOT, check=True, capture_output=True)
        r = subprocess.run(["git", "push"], cwd=REPO_ROOT, capture_output=True, text=True)
        if r.returncode != 0:
            err(f"push failed:\n{r.stderr}")
            return False
        ok("committed + pushed")
        return True
    except subprocess.CalledProcessError as e:
        err(f"git error: {e.stderr.decode() if isinstance(e.stderr, bytes) else e.stderr}")
        return False

# -- main ---------------------------------------------------------------------
def main():
    ap = argparse.ArgumentParser(description="One-click sync CS2-SDK-Reference from upstream.")
    ap.add_argument("--offsets-only",   action="store_true", help="Skip protobufs sync.")
    ap.add_argument("--protobufs-only", action="store_true", help="Skip offsets + schema sync.")
    ap.add_argument("--pr", type=int, help="Fetch offsets from a specific cs2-dumper PR (e.g. --pr 670).")
    ap.add_argument("--owner",  default="a2x",  help="cs2-dumper owner (default: a2x).")
    ap.add_argument("--branch", default="main", help="cs2-dumper branch (default: main).")
    ap.add_argument("--commit", action="store_true", help="git add / commit / push if anything changed.")
    ap.add_argument("--dry-run", action="store_true", help="Show what would change; write nothing.")
    ap.add_argument("--live-pid", type=int, help="After sync, verify against this cs2 PID (needs admin).")
    ap.add_argument("--verify", action="store_true", help="Alias for --live-pid autodetect (Windows-only).")
    args = ap.parse_args()

    if args.offsets_only and args.protobufs_only:
        err("--offsets-only and --protobufs-only are mutually exclusive"); return 1

    # Resolve --pr into (owner, branch).
    pr_title = None
    if args.pr:
        info(f"resolving cs2-dumper PR #{args.pr}...")
        try:
            args.owner, args.branch, pr_title = resolve_pr(args.pr)
            ok(f"PR #{args.pr}: '{pr_title[:80]}' from {args.owner}/{args.branch}")
        except Exception as e:
            err(f"could not resolve PR: {e}"); return 1

    # Report intent
    print()
    print(f"{'DRY-RUN — no writes' if args.dry_run else 'Applying sync'}:")
    if not args.protobufs_only:
        print(f"  offsets + schema  ← {args.owner}/cs2-dumper@{args.branch}")
    if not args.offsets_only:
        print(f"  protobufs         ← SteamDatabase/Protobufs/csgo (master)")
    print()

    total_changed = 0
    total_unchanged = 0

    if not args.protobufs_only:
        info("=== syncing offsets + schema ===")
        ch, un, _ = sync_offsets(args.owner, args.branch, dry_run=args.dry_run)
        total_changed += ch; total_unchanged += un
        ok(f"offsets/schema: {ch} changed, {un} unchanged")

    if not args.offsets_only:
        info("=== syncing protobufs ===")
        ch, un, _ = sync_protobufs(dry_run=args.dry_run)
        total_changed += ch; total_unchanged += un
        ok(f"protobufs: {ch} changed, {un} unchanged")

    print()
    if total_changed == 0:
        ok(f"All up-to-date. {total_unchanged} files verified unchanged.")
    else:
        print(f"[SUMMARY] {total_changed} files changed, {total_unchanged} files unchanged")

    # Runtime verify.
    if args.live_pid:
        info(f"=== runtime verify against cs2 PID {args.live_pid} ===")
        verify_against_cs2(args.live_pid)
    elif args.verify:
        # Auto-detect cs2.exe PID via tasklist.
        try:
            r = subprocess.run(["tasklist", "/FI", "IMAGENAME eq cs2.exe", "/NH", "/FO", "CSV"],
                                capture_output=True, text=True, check=True)
            for line in r.stdout.splitlines():
                if 'cs2.exe' in line.lower():
                    pid = int(line.split(',')[1].strip('" '))
                    info(f"detected cs2.exe PID {pid}")
                    verify_against_cs2(pid); break
            else:
                warn("cs2.exe not running — skipping runtime verification")
        except Exception as e:
            warn(f"PID autodetect failed: {e}")

    # Commit.
    if args.commit:
        if args.dry_run:
            warn("--dry-run and --commit both set; skipping commit")
        elif total_changed == 0:
            info("no changes, no commit")
        else:
            msg = f"Sync from upstream: {total_changed} files updated"
            if pr_title:
                msg += f" (via PR #{args.pr}: {pr_title[:60]})"
            git_commit_push(msg)

    return 2 if (args.dry_run and total_changed > 0) else 0

if __name__ == "__main__":
    sys.exit(main())
