# Repo overview

## What CS2-SDK-Reference collects

Any RE project touching a CS2-adjacent binary — an anti-VAC helper, an
aim-assist, a rank spoofer, a demo parser — needs the same four categories of
data:

1. **Runtime globals** — the `dw*` symbols exposed by CS2's DLLs. These are
   the entry points from which every other pointer chain starts:
   `client.dll + dwLocalPlayerController`, `client.dll + dwGameRules`, etc.
2. **Class member offsets** — inside every `CCSPlayerController`,
   `C_CSGameRules`, `C_BaseEntity` instance, at what byte does each field
   live? `m_iCompetitiveRanking`, `m_pInventoryServices`, `m_iHealth`, …
3. **Wire protobufs** — the `.proto` definitions of every message CS2 puts on
   the wire, including `CBaseUserCmdPB`, `CSGOUserCmdPB`,
   `CSGOInputHistoryEntryPB`, and everything else.
4. **Structure layouts** — human-readable summaries of the ~10 C++ classes an
   RE project keeps coming back to. `schema/client_dll.json` has 3189 fields
   across 300+ classes; only a handful matter for VMP work, and this repo
   highlights which ones.

Historically every project re-collected these itself. This repo is the
one-stop version, refreshed from the same upstream sources everyone else uses.

## The four upstream sources

| Source | What it gives us | How we fetch |
|---|---|---|
| [`a2x/cs2-dumper`](https://github.com/a2x/cs2-dumper) `output/*` | `offsets.json` + `client_dll.json` + `engine2_dll.json` + `server_dll.json` | `raw.githubusercontent.com` — `tools/sync_from_upstream.py` fetches `HEAD/main` or an open PR branch. |
| [`SteamDatabase/Protobufs`](https://github.com/SteamDatabase/Protobufs) `csgo/*.proto` | 43 `.proto` files | GitHub contents API (`api.github.com/.../contents/csgo`), then per-file raw fetches. |
| **Live cs2 process** | Ground truth for verifying anything | `verify_offsets.py` uses `ReadProcessMemory` + `SeDebugPrivilege`. |
| **Reversed VMP samples** | The mapping of "which schema field maps to which VMP-plugin hook" | Manual — collected in `vmp_targets/README.md`. |

`a2x/cs2-dumper` is a Rust project that attaches to a running CS2, walks the
schema system, and prints every class + every field offset. When cs2 updates,
someone runs cs2-dumper against the new build and either commits to `main` or
opens a PR against `a2x/cs2-dumper`. That's when this repo's `sync.cmd`
starts finding new data.

## Repo layout

```
CS2-SDK-Reference/
├── README.md                 top-level, bilingual, points here
├── USAGE.md                  quick-start recipes
├── sync.cmd                  Windows double-click launcher
├── sync.sh                   POSIX launcher
├── offsets/
│   ├── README.md
│   ├── latest/               HEAD dump — offsets.{json,rs,hpp,cs} + info/interfaces/buttons.json
│   └── history/              per-build snapshots
├── schema/
│   ├── README.md
│   ├── client_dll.json       563 classes, 3189 fields
│   ├── server_dll.json       990 classes, 5871 fields (largest)
│   ├── engine2_dll.json      engine-side classes
│   └── *_dll.json            15 more modules (particles, animationsystem, ...) — 18 total
├── protobufs/
│   ├── README.md
│   └── *.proto               43 files
├── structures/
│   └── README.md             human-readable summaries
├── vmp_targets/
│   └── README.md             VMP-plugin ↔ schema cross-reference
├── source2gen/               the SDK generator (C++23), builds source2sdk/
├── source2sdk/               generated CS2 SDK — 3748 headers, 33 modules
├── cs2-dumper/               snapshot of the a2x dumper + its output/
├── steamtracking-protos/     raw SteamTracking proto tree
├── tools/
│   ├── sync_from_upstream.py      main sync driver
│   ├── fetch_head_offsets.py      legacy offsets-only fetcher
│   ├── verify_offsets_static.py   offset verifier (installed binaries, no admin)
│   ├── verify_offsets.py          live cs2 verifier
│   └── verify_docs.py             checks doc-cited offsets against the schema
└── wiki/                     this directory — deep dives
    ├── en/
    └── ru/
```

## What this repo is NOT

- Not a CS2 SDK for compiling anything. If you want to build a game plugin,
  use Metamod:Source or Source2Mod. This repo is a data reference.
- Not a real-time offset service. If cs2 updates and `sync.cmd` runs, the
  data lands here on a delay of hours (dumper turnaround). For sub-minute
  ground truth, run cs2-dumper yourself against your live cs2.
- Not affiliated with Valve. Every byte here comes from public reversing
  work and public protobuf definitions.

## Related repositories

- [VMP-Deob](https://github.com/ccsimplyspolit/VMP-Deob) — VMProtect research + tooling. Consumes this repo's offsets for runtime memory verification.
- [CS2-P2C-TEMPLATES](https://github.com/ccsimplyspolit/CS2-P2C-TEMPLATES) — CS2 plugins (VacLiveBypass, RankSpoofer, IsValveDS) that autofetch from this repo.
- [a2x/cs2-dumper](https://github.com/a2x/cs2-dumper) — upstream offsets/schema source.
- [SteamDatabase/Protobufs](https://github.com/SteamDatabase/Protobufs) — upstream protobuf source.
