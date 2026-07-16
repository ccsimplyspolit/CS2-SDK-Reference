# Sync workflow

Everything in `offsets/`, `schema/`, and `protobufs/` is fetched from
upstream. This page explains the one-button refresh that keeps them
up to date.

## The entry points

- **Windows** — double-click `sync.cmd`.
- **POSIX / Git-Bash** — `./sync.sh`.
- **All platforms** — `python tools/sync_from_upstream.py <args>`.

Both `.cmd` and `.sh` just chain into `sync_from_upstream.py` with all
CLI args forwarded.

## What `sync_from_upstream.py` does

Four sequential phases:

1. **Resolve source.** Either `a2x/cs2-dumper@main` (the default) or,
   with `--pr N`, the head branch of an open PR (owner + branch resolved
   through the GitHub API).
2. **Fetch offsets + schema.** Downloads
   `output/offsets.{json,rs,hpp,cs}` and
   `output/{client,engine2,server}_dll.json` via
   `raw.githubusercontent.com`. SHA-256s are compared against local
   copies; only changed files are collected.
3. **Fetch protobufs.** Lists `SteamDatabase/Protobufs/csgo` via the
   GitHub contents API, then fetches every `.proto` via
   `raw.githubusercontent.com`. Same SHA-256 diff.
4. **Write.** Before writing anything, snapshots the current
   `offsets/latest/` + all `schema/*.json` into
   `offsets/history/pre_sync_<UTC-timestamp>/`. Then writes only the
   files that actually changed.

Optional post-phases:

5. **Verify** (`--verify` or `--live-pid PID`) — runs
   `verify_offsets.py` against a running cs2 process.
6. **Commit + push** (`--commit`) — `git add -A` + `git commit -m
   "Sync from upstream: N files updated"` + `git push`.

## CLI flags

```
python tools/sync_from_upstream.py [OPTIONS]

  --offsets-only          Skip the protobufs pass.
  --protobufs-only        Skip the offsets + schema pass.
  --pr N                  Fetch offsets from PR #N (e.g. --pr 670).
  --owner NAME            cs2-dumper owner (default: a2x).
  --branch NAME           cs2-dumper branch (default: main).
  --commit                git add + commit + push if anything changed.
  --dry-run               Show what would change; write nothing.
                          Exit code 2 = drift detected.
  --live-pid PID          Verify offsets against this cs2 PID.
  --verify                Auto-detect cs2 PID via tasklist (Windows).
```

## Sample runs

### Nothing changed

```
[*] === syncing offsets + schema ===
[+] offsets/schema: 0 changed, 7 unchanged
[*] === syncing protobufs ===
[+] protobufs: 0 changed, 43 unchanged

[+] All up-to-date. 50 files verified unchanged.
```

Exit code `0`. No writes.

### Something changed

```
Applying sync:
  offsets + schema  ← a2x/cs2-dumper@main
  protobufs         ← SteamDatabase/Protobufs/csgo (master)

[*] === syncing offsets + schema ===
[*]   offsets/offsets.json  a1b2c3d4 → f0e9d8c7
[*]   schema/client_dll.json  aabbccdd → 11223344  (219314 B)
[+] snapshotted current state → offsets/history/pre_sync_20260716T081123Z/
[+] wrote 2 files
[+] offsets/schema: 2 changed, 5 unchanged
[*] === syncing protobufs ===
[+] protobufs: 0 changed, 43 unchanged

[SUMMARY] 2 files changed, 48 files unchanged
```

Exit code `0`. Wrote 2 new files. Old copies preserved under
`offsets/history/pre_sync_20260716T081123Z/`.

### Dry-run with drift

```
DRY-RUN — no writes:
  offsets + schema  ← a2x/cs2-dumper@main

[*] === syncing offsets + schema ===
[*]   offsets/offsets.json  a1b2c3d4 → f0e9d8c7
[+] offsets/schema: 1 changed, 6 unchanged
```

Exit code `2`. Nothing on disk. Great for CI — spot drift without
committing.

### From an open PR

If HEAD of `a2x/cs2-dumper` is stale but there's an open PR for the
newest build:

```
python tools/sync_from_upstream.py --pr 670 --commit
```

`sync_from_upstream.py` resolves PR #670 through `api.github.com`, gets
the head owner + branch, fetches from there. Common when cs2 updates on
a Thursday but the dumper maintainer hasn't merged yet.

## The snapshot mechanism

Before every write, the script calls `snapshot_current(label)` which:

1. Creates `offsets/history/<label>/` (fails idempotently if it exists).
2. Copies every file in `offsets/latest/` → `history/<label>/`.
3. Copies every `schema/*.json` → `history/<label>/`.

`<label>` is `pre_sync_<UTC timestamp>` by default. When you later
promote a snapshot to a proper build directory:

```bash
cd offsets/history
mv pre_sync_20260716T081123Z build_14170_2026-07-15
```

Then curate down — drop files that didn't actually change, and add a
`README.md` in the build dir noting the change.

## When the sync fails

| Symptom | Cause | Fix |
|---|---|---|
| `HTTP 404` on `output/*.json` | cs2-dumper repo layout changed | Check `github.com/a2x/cs2-dumper/tree/main/output/` and update `OFFSET_FILES` / `SCHEMA_FILES` in `sync_from_upstream.py`. |
| `HTTP 403` on GitHub API | Rate limit | Wait 60 min or set `GITHUB_TOKEN` env var (script does not currently pass it — trivial patch). |
| `git push` fails on `--commit` | No push permission | Run manually without `--commit`, `git push` yourself. |
| `PR #N not found` | PR closed / bad number | Check `github.com/a2x/cs2-dumper/pulls`. |
| `SeDebugPrivilege not granted` on `--verify` | Not elevated | Right-click terminal → Run as administrator. |

## `fetch_head_offsets.py` — legacy

The older, offsets-only fetcher. Still works but predates the SHA-based
change detection in `sync_from_upstream.py`. Use `sync_from_upstream.py`
for new work.

## `--dry-run` in scripts

Great for a nightly cron:

```powershell
# nightly-check.ps1
$exit = & python C:\path\to\CS2-SDK-Reference\tools\sync_from_upstream.py --dry-run
if ($LASTEXITCODE -eq 2) {
    Send-MailMessage -To "you@example.com" -Subject "CS2 drift detected"
}
```

Or on GitHub Actions — see `09_ci_recipes.md`.
