#!/usr/bin/env bash
# One-click launcher for sync_from_upstream.py (Linux/macOS/Git-Bash).
set -e
cd "$(dirname "$0")"
python tools/sync_from_upstream.py "$@"
