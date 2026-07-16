# English wiki — index

Deep dives into every part of CS2-SDK-Reference. Each page is self-contained
and can be read on its own; cross-references are optional context.

## Contents

| # | Page | Reader |
|---|---|---|
| 01 | [Repo overview](01_repo_overview.md) | Everyone. Read once. |
| 02 | [Offsets deep dive](02_offsets_deep_dive.md) | Plugin authors, RE. |
| 03 | [Schema deep dive](03_schema_deep_dive.md) | Anyone reading `client_dll.json`. |
| 04 | [Protobufs deep dive](04_protobufs_deep_dive.md) | Anyone hooking `SerializePartialToArray` or reading demos. |
| 05 | [Structures](05_structures.md) | Plugin authors. |
| 06 | [VMP targets](06_vmp_targets.md) | Anyone porting or auditing FVA / VLB / RankSpoofer. |
| 07 | [Sync workflow](07_sync_workflow.md) | Repo maintainer, contributors. |
| 08 | [Runtime verification](08_runtime_verification.md) | Anyone with a live cs2 process handy. |
| 09 | [CI recipes](09_ci_recipes.md) | Repo maintainer. |
| 10 | [Glossary](10_glossary.md) | First-time RE readers. |

## Conventions

- **Hex offsets** are shown both decimal and `0x` — the JSON files store decimal, everything downstream uses hex.
- **RVAs** ("relative virtual addresses") are relative to the module's `image_base` — the actual VA in a running cs2 is `image_base + RVA`.
- **"Live values"** in this wiki come from build 14170 (2026-07-15) `client.dll` unless labeled otherwise. Values are also present in `offsets/latest/offsets.json` — that JSON is the source of truth.
- **CS2 has two side-by-side C++ mangling conventions** (Source 2 codegen + traditional MSVC). Anything called `dw*` is a runtime global; anything called `m_*` is a member field; anything called `C*` or `C_*` is a class; anything called `CMsg*PB` is a protobuf-generated C++ class.

## What CS2 is, in one paragraph

Counter-Strike 2 is Valve's Source 2 shooter. Client-side logic lives in
`client.dll`; engine layer in `engine2.dll`; server logic (also loaded
client-side for prediction) in `server.dll`. The game exposes a **schema
system** — a runtime type introspection layer — that lets both Valve tools and
external dumpers walk classes by name and read every member's offset. That is
how `a2x/cs2-dumper` generates the JSON files in `schema/` — it attaches to a
running cs2 and asks its own schema system where every field lives. This wiki
documents what to do with those numbers.

## What VMP is, in one paragraph

VMProtect ("VMP") is a commercial code virtualizer: it takes native x86-64
functions and replaces them with a custom instruction stream executed by an
embedded software VM. Reverse-engineering VMP'd code is orders of magnitude
harder than reversing plain x86. Anti-cheat helper plugins in the CS2 scene
(FVA "FuckVacAgain", VacLiveBypass, RankSpoofer, IsValveDS) ship VMP'd DLLs.
To interoperate with or audit those plugins you need to know the CS2 fields
they touch — offsets, protobuf tags, function RVAs — which is exactly what
[`vmp_targets/README.md`](../../vmp_targets/README.md) and [`06_vmp_targets.md`](06_vmp_targets.md) collect.
