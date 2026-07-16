# CI recipes

Suggested GitHub Actions setups. None of these are currently deployed in
this repo — they're a menu.

## Recipe 1 — Nightly drift check (dry-run only)

Runs the sync in `--dry-run` mode every night. If it detects drift,
opens an issue.

`.github/workflows/nightly-drift-check.yml`:

```yaml
name: Nightly drift check
on:
  schedule:
    - cron: "17 4 * * *"      # 04:17 UTC daily
  workflow_dispatch:

jobs:
  check:
    runs-on: ubuntu-latest
    steps:
      - uses: actions/checkout@v4
      - uses: actions/setup-python@v5
        with: { python-version: "3.11" }
      - name: Dry-run sync
        id: sync
        run: |
          python tools/sync_from_upstream.py --dry-run
          echo "exit=$?" >> $GITHUB_OUTPUT
        continue-on-error: true
      - name: Open drift issue
        if: steps.sync.outputs.exit == '2'
        uses: actions/github-script@v7
        with:
          script: |
            github.rest.issues.create({
              owner: context.repo.owner,
              repo:  context.repo.repo,
              title: "CS2 offsets drift detected — sync required",
              body:  "Nightly dry-run detected upstream changes. Run `sync.cmd` locally or trigger the auto-sync workflow."
            });
```

Exit code `2` from `sync_from_upstream.py --dry-run` is the signal.

## Recipe 2 — Nightly auto-sync + PR

Fetches the latest, commits to a branch, opens a PR.

`.github/workflows/nightly-sync-pr.yml`:

```yaml
name: Nightly auto-sync
on:
  schedule:
    - cron: "23 4 * * *"
  workflow_dispatch:

jobs:
  sync:
    runs-on: ubuntu-latest
    permissions:
      contents: write
      pull-requests: write
    steps:
      - uses: actions/checkout@v4
        with: { fetch-depth: 0 }
      - uses: actions/setup-python@v5
        with: { python-version: "3.11" }
      - name: Configure git
        run: |
          git config user.name  "cs2-sdk-sync-bot"
          git config user.email "actions@users.noreply.github.com"
      - name: Sync
        run: python tools/sync_from_upstream.py
      - name: Check for changes
        id: diff
        run: |
          if [[ -n "$(git status --porcelain)" ]]; then
            echo "changed=true" >> $GITHUB_OUTPUT
          else
            echo "changed=false" >> $GITHUB_OUTPUT
          fi
      - name: Create PR
        if: steps.diff.outputs.changed == 'true'
        uses: peter-evans/create-pull-request@v6
        with:
          branch: auto-sync/${{ github.run_id }}
          title: "Sync from upstream ($(date -u +%Y-%m-%d))"
          body: |
            Automated sync from `a2x/cs2-dumper` HEAD + `SteamDatabase/Protobufs`.
            Review the diff — if fields moved, update `structures/README.md`
            and `vmp_targets/README.md` before merging.
          commit-message: "Auto-sync from upstream"
```

## Recipe 3 — Sync-on-PR-open

When someone opens a PR that adds a build snapshot, verify the JSONs
parse:

```yaml
name: Verify JSON
on:
  pull_request:
    paths:
      - "offsets/**/*.json"
      - "schema/*.json"

jobs:
  verify:
    runs-on: ubuntu-latest
    steps:
      - uses: actions/checkout@v4
      - name: Validate JSON
        run: |
          for f in offsets/**/*.json schema/*.json; do
            python -c "import json,sys; json.load(open('$f'))" || exit 1
          done
      - name: Validate protobufs compile
        run: |
          sudo apt-get install -y protobuf-compiler
          protoc -I protobufs \
            --descriptor_set_out=/dev/null \
            protobufs/*.proto
```

## Recipe 4 — Sync-from-PR-N (manual trigger)

Sometimes the offsets you need aren't merged to `a2x/cs2-dumper` main yet.
Trigger a sync from a specific PR:

```yaml
name: Sync from cs2-dumper PR
on:
  workflow_dispatch:
    inputs:
      pr_number:
        description: "cs2-dumper PR number"
        required: true
        type: number

jobs:
  sync:
    runs-on: ubuntu-latest
    permissions:
      contents: write
    steps:
      - uses: actions/checkout@v4
      - uses: actions/setup-python@v5
        with: { python-version: "3.11" }
      - name: Sync from PR
        run: |
          git config user.name  "cs2-sdk-sync-bot"
          git config user.email "actions@users.noreply.github.com"
          python tools/sync_from_upstream.py --pr ${{ inputs.pr_number }} --commit
```

## Recipe 5 — Verify on Windows self-hosted runner

Only works if you have a Windows self-hosted runner with cs2 installed
and running. Rare, but occasionally people do this.

```yaml
name: Runtime verification
on:
  push:
    branches: [main]
    paths: ["offsets/**", "schema/**", "tools/**"]

jobs:
  verify:
    runs-on: [self-hosted, windows, cs2]
    steps:
      - uses: actions/checkout@v4
      - name: Ensure cs2 is running
        shell: pwsh
        run: |
          $p = Get-Process cs2 -ErrorAction SilentlyContinue
          if (-not $p) { throw "cs2 is not running on this runner" }
          echo "PID=$($p.Id)" >> $env:GITHUB_ENV
      - name: Verify
        shell: pwsh
        run: python tools\verify_offsets.py --pid $env:PID
```

## GitHub API rate limits

Unauthenticated calls to `api.github.com` are limited to 60 / hour /
IP. `sync_from_upstream.py` currently does no auth. If you're running
recipe 2 twice a day it's fine; if you're running verify-per-PR it's
also fine (only two GitHub API hits per sync — the PR resolver and the
protobufs listing).

If you push the frequency up, patch `http_get()` in
`sync_from_upstream.py` to pass `GITHUB_TOKEN`:

```python
def http_get(url, timeout=20):
    headers = {"User-Agent": "cs2-sdk-reference-sync/1.0",
               "Accept": "application/vnd.github+json"}
    tok = os.environ.get("GITHUB_TOKEN")
    if tok:
        headers["Authorization"] = f"Bearer {tok}"
    req = Request(url, headers=headers)
    # ...
```

Actions automatically injects `GITHUB_TOKEN` — no additional secret
needed.

## Not recommended: auto-commit to main

Some repos let a bot force-commit sync results to `main`. Don't. The
whole point of `structures/README.md` and `vmp_targets/README.md` is
human curation on top of the raw JSON. Auto-merging without review
means those hand-maintained pages fall out of sync with the numbers.
Always go via PR (recipe 2) and treat the PR as the "please review the
diff" prompt.
