#!/usr/bin/env bash
# One-click launcher for sync_from_upstream.py (Linux/macOS/Git-Bash).
# No `set -e`: the tool uses exit 2 for "drift detected" in --dry-run, which is
# a normal result, not a crash — swallowing it here would hide the report.
cd "$(dirname "$0")" || exit 1
exec python tools/sync_from_upstream.py "$@"
