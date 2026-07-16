# Schema deep dive

`schema/client_dll.json` — and its two siblings — contain the byte-offset of
every member of every C++ class that ships with cs2. This page explains how
they're structured, why offsets rarely change, and how to walk them
programmatically.

## The three files

| File | Approx size | What's inside |
|---|---|---|
| `client_dll.json` | ~214 KB | 300+ client-side classes (`CCSPlayerController`, `C_CSGameRules`, `C_BaseEntity`, entities, weapons). ~3189 fields. |
| `engine2_dll.json` | ~11 KB | Engine-layer classes. Smaller because most engine state lives behind opaque interfaces. |
| `server_dll.json` | ~495 KB | Server-side classes. Largest because the server has more logic; also loaded client-side for prediction. |

## JSON structure

Every file has the same shape:

```json
{
  "<module.dll>": {
    "classes": {
      "<ClassName>": {
        "parent": "<ParentClassName>" | null,
        "fields": {
          "m_iSomeField": <byte-offset-decimal>,
          "m_pSomePointer": <byte-offset-decimal>
        },
        "metadata": [...]        // optional
      }
    },
    "enums": {
      "<EnumName>": {
        "align": <bytes>,
        "size": <bytes>,
        "members": [...]
      }
    }
  }
}
```

Live example from `client.dll`:

```json
{
  "client.dll": {
    "classes": {
      "CCSPlayerController": {
        "parent": "CBasePlayerController",
        "fields": {
          "m_iCompetitiveRanking": 2184,
          "m_iCompetitiveWins":    2188,
          "m_iCompetitiveRankType": 2192,
          "m_hPlayerPawn":         2324,
          "m_iScore":              2364
        }
      }
    }
  }
}
```

- `2184` decimal is `0x888` — that's the byte at which
  `m_iCompetitiveRanking` starts inside a `CCSPlayerController` instance.
- Fields are int-typed; the JSON does not carry per-field type info. You
  read type semantics from CS2 SDK headers or by cross-referencing the
  `metadata` array — cs2-dumper preserves `MNetworkVarType` and similar
  attributes there when present.

## Reading a field, minimal Python

```python
import json
c = json.load(open('schema/client_dll.json'))
fields = c['client.dll']['classes']['CCSPlayerController']['fields']
for k, v in list(fields.items())[:10]:
    print(f'{k:40s} 0x{v:X}')
```

Output (2026-07-16, build 14170):

```
m_bAbandonAllowsSurrender                0x8F2
m_bAbandonOffersInstantSurrender         0x8F3
m_bCanControlObservedBot                 0x910
m_bCannotBeKicked                        0x8F0
m_bControllingBot                        0x908
m_bEverFullyConnected                    0x898
m_bEverPlayedOnTeam                      0x8F1
...
```

## Why offsets rarely change

The `MNetworkVar` / `MNetworkVarNames` macros in CS2's C++ code declare
fields as parts of a "network table" whose byte layout is stable across
patches — Valve wants prediction and demo files to work across builds.
Adding a new field appends to the end; existing fields keep their offsets.
The exceptions are:

1. **Major schema restructures** — Valve renames or splits classes. Rare;
   maybe once a quarter. Everything moves.
2. **Compiler layout changes** — a new MSVC version reorders bitfield
   packing. Very rare.
3. **Anonymous inner struct name-hash changes** — cosmetic in JSON, no
   offset movement. This is what happened between 14169 and 14170.

**Verified: build 14169 → 14170 (2026-07-11 → 2026-07-15) — zero field
offset changes across all 3189 tracked fields.** Only cosmetic hash on one
anonymous inner struct changed.

## Walking parents

`CCSPlayerController` extends `CBasePlayerController`. Parent fields are NOT
duplicated into the child's `fields` block — you get them by walking the
`parent` chain. Example: `CBasePlayerController.m_nTickBase` at `0x6B8` is
still at `+0x6B8` inside a `CCSPlayerController` instance (single inheritance,
no virtual bases in the CS2 SDK).

```python
def resolve_field(schema, klass, field):
    cur = klass
    while cur:
        classes = schema['client.dll']['classes']
        info = classes.get(cur)
        if info is None: break
        if field in info['fields']:
            return info['fields'][field]
        cur = info.get('parent')
    return None
```

## The 10 fields any CS2 plugin will need

Copy-paste-ready. Live values as of 2026-07-16 build 14170:

| Class | Field | Offset (hex) | Type |
|---|---|---|---|
| `CCSPlayerController` | `m_pInventoryServices` | `0x818` | `CCSPlayerController_InventoryServices*` |
| `CCSPlayerController` | `m_szClan` | `0x860` | `CUtlSymbolLarge` |
| `CCSPlayerController` | `m_iCompetitiveRanking` | `0x888` | `int32` |
| `CCSPlayerController` | `m_iCompetitiveWins` | `0x88C` | `int32` |
| `CCSPlayerController` | `m_iCompetitiveRankType` | `0x890` | `uint8` |
| `CCSPlayerController` | `m_hPlayerPawn` | `0x914` | `CHandle<C_CSPlayerPawn>` |
| `CCSPlayerController` | `m_iScore` | `0x93C` | `int32` |
| `CCSPlayerController` | `m_iMVPs` | `0x958` | `int32` |
| `C_CSGameRules` | `m_bIsValveDS` | `0xA4` | `bool` |
| `C_BaseEntity` | `m_iHealth` | `0x34C` | `int32` |
| `CBasePlayerController` | `m_nTickBase` | `0x6B8` | `int32` |

These are the reads FVA, VLB, and RankSpoofer all end up doing. See
`06_vmp_targets.md` for the full "who touches what" table.

## Drift discipline

Every time cs2 updates:

1. Run `sync_from_upstream.py` — pulls latest schema JSONs.
2. Run `verify_offsets.py --pid <cs2_pid>` — checks the `dw*` globals still
   dereference to plausible pointers.
3. For members of critical classes, do a live-read spot-check against a
   fresh cs2 process — e.g. read `[client.dll + dwLocalPlayerController]`,
   deref, read `+0x888`, and check that value is a valid competitive rank
   (0..40000).
4. If anything moved: commit the new `schema/*.json` and add a row to
   `vmp_targets/README.md` "Recent verifications".

## Regenerating from scratch

If you want to produce your own JSONs against a specific cs2 build without
waiting for `a2x/cs2-dumper` HEAD:

```powershell
git clone https://github.com/a2x/cs2-dumper.git
cd cs2-dumper
# Run cs2 in the background first, then:
cargo run --release
# Output lands in .\output\
copy .\output\client_dll.json C:\path\to\CS2-SDK-Reference\schema\client_dll.json
```

Requirements: Rust toolchain (rustup), a running cs2 process, elevated
shell (SeDebugPrivilege). The dumper takes ~5-10 seconds on modern hardware.
