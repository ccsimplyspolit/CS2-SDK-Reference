# VMP targets — which CS2 fields VMP-protected plugins touch

Reversed from live samples of FVA ("FuckVacAgain"), VacLiveBypass ("VLB"),
RankSpooferDriver, and IsValveDS. This is the cross-reference this repo
exists for.

## The matrix

| Concern | CS2 field / RVA | Type | Touched by | Purpose |
|---|---|---|---|---|
| `m_bIsValveDS` gate | `C_CSGameRules + 0xA4` | bool | FVA (FNV1a `0xB6E8F068409FEF6C`), VLB, IsValveDS | Gate byte for anti-VAC helpers |
| CreateMove hook | `client.dll + 0xACEF90` (live) / `0xB09528` (14170) | function | FVA (Hook A), VLB (`create_move_hook.cpp`) | Intercept per-tick user command build |
| SerializePartialToArray | `client.dll + 0x1189930` (live) / `0x11AD520` (14170) | function | FVA (Hook C), VLB (`serialize_to_array_hook.cpp`) | Inspect/mutate outgoing UserCmd protobufs |
| LevelInit | `client.dll + 0xAFDFB0` (live) / `0xB3A600` (14170) | function | FVA (Hook B), VLB (`level_init_hook.cpp`) | Reset caches on map load |
| ShouldUpdateSequences | `animationsystem.dll + 0x14F950` (14170) | function | FVA (Hook D), VLB (`animation_hook.cpp`) | Skip animation updates when hidden |
| `input_history[i].view_angles` | `CSGOInputHistoryEntryPB.view_angles` (tag 2) | float3 | FVA Section-J, VLB `phase_b2.cpp` | Wrap deltas → (-180, 180], echo back |
| `subtick_moves` | `CBaseUserCmdPB.subtick_moves` (tag 18) | repeated | **NOT touched by FVA** — myth. VLB does not touch it either. | — |
| `CInButtonStatePB.attack` | tag ~3, bit-field | flag | FVA (fire gate), VLB `FVA_GATE_MODE_ATTACK` | Only apply angle changes when attack pressed |
| `CCSPlayerController.m_iCompetitiveRanking` | `+0x888` | int32 | RankSpooferDriver Phase 1.5 | Local rank spoofing |
| `CCSPlayerController.m_iCompetitiveWins` | `+0x88C` | int32 | RankSpooferDriver | Wins count spoofing |
| `InventoryServices.m_nPersonaDataPublicLevel` | `+0x74` | int32 | RankSpoofer v1.14+ profile block | Steam CS level spoof |
| `InventoryServices.m_nPersonaDataXpTrailLevel` | `+0x84` | int32 | RankSpoofer | XP trail spoof |
| `m_hPlayerPawn` | `CCSPlayerController + 0x914` | CHandle | FVA (FNV1a `0x737DDDA9E99E0B5D`), VLB | Local pawn resolution |
| `m_iHealth` | `C_BaseEntity + 0x34C` | int32 | FVA (fire-flag byte, FNV1a `0x9320AED4F2DDF04B`), VLB | Alive check for fire gate |
| `m_nTickBase` | `CBasePlayerController + 0x6B8` | int32 | FVA (live subtick counter, FNV1a `0xC08C21B68A2C746D`) | Tick reference |

## FVA's 4 FNV1a-64 schema hashes

FVA does not hard-code offsets. Instead it hashes `type_name + "->" +
field_name` with FNV1a-64 and looks the result up in a runtime schema
manifest (loaded from `assets/manifest.bin`). This is why the same VMP
DLL survives cs2 schema updates — as long as the field name doesn't
change and the manifest is refreshed, the code works.

```
hash = FNV1a-64(type_name + "->" + field_name)

0xB6E8F068409FEF6C  ←  fnv1a("C_CSGameRules->m_bIsValveDS")
0x737DDDA9E99E0B5D  ←  fnv1a("CCSPlayerController->m_hPlayerPawn")
0x9320AED4F2DDF04B  ←  fnv1a("C_BaseEntity->m_iHealth")
0xC08C21B68A2C746D  ←  fnv1a("CBasePlayerController->m_nTickBase")
```

Verifiable in Python:

```python
def fnv1a_64(s: str) -> int:
    h = 0xcbf29ce484222325
    for b in s.encode('utf-8'):
        h ^= b
        h = (h * 0x100000001b3) & 0xffffffffffffffff
    return h

assert fnv1a_64("C_CSGameRules->m_bIsValveDS")            == 0xB6E8F068409FEF6C
assert fnv1a_64("CCSPlayerController->m_hPlayerPawn")     == 0x737DDDA9E99E0B5D
assert fnv1a_64("C_BaseEntity->m_iHealth")                == 0x9320AED4F2DDF04B
assert fnv1a_64("CBasePlayerController->m_nTickBase")     == 0xC08C21B68A2C746D
```

Any plugin can reuse this pattern — the FNV1a-64 constant polynomial is
`0x100000001b3`, offset basis `0xcbf29ce484222325`. Look up against your
own manifest or against a live cs2 by walking the schema system.

## Section-J angle wrap semantics

FVA's Section J is the anti-aim body. Simplified pseudocode after
de-obfuscation:

```
for each entry in usercmd.input_history:
    yaw   = entry.view_angles.y
    pitch = entry.view_angles.x
    // Wrap into (-180, 180]
    yaw = wrap180(yaw)
    pitch = wrap180(pitch)
    // Apply desync / anti-aim policy (delta)
    entry.view_angles.y = wrap180(yaw + delta.yaw)
    entry.view_angles.x = wrap180(pitch + delta.pitch)
    // Preserve render_tick_count
```

Delta = 0 means "self-echo" — write the wrapped-but-unchanged angles
back. FVA uses this in disarm / diagnostic mode to prove Section-J is
running without changing gameplay. The `wrap180` function looks like:

```c
float wrap180(float a) {
    while (a > 180.f)  a -= 360.f;
    while (a <= -180.f) a += 360.f;
    return a;
}
```

## Common myths

1. **"FVA writes subtick_moves"** — no. Subtick moves are the sub-tick
   mouse/key transitions and stay untouched. The rewrite target is
   `input_history[i].view_angles`.
2. **"FVA hard-codes offsets"** — no. It uses FNV1a-hashed schema lookup
   plus RTTI-guarded vtable identification.
3. **"The gate byte is `m_bIsHostFrame`"** — no. It's `m_bIsValveDS`.
   `m_bIsHostFrame` is unrelated.
4. **"Hook C compares GetTypeName"** — no. `CTypeName::Get()` is broken by
   CS2's `LazyString` path (returns garbage before first call to a
   materialisation routine). FVA compares the vtable pointer directly.

## Recent verifications

| Date | cs2 PID | Build | H1 | H2 | H3 | H4 | Method |
|---|---|---|---|---|---|---|---|
| 2026-07-16 | 53000 | 14170 | ✅ | ✅ | ✅ | ✅ | ctypes RPM + capstone. Script: [VMP-Deob/tools/analysis_suite/rt_verify_all_hooks.py](https://github.com/ccsimplyspolit/VMP-Deob/blob/main/tools/analysis_suite/rt_verify_all_hooks.py) |

Add new rows to `vmp_targets/README.md` after each verification session.

## Drift discipline

Between 14169 and 14170:
- All schema fields above stayed at the same offset in their class.
- H1 CreateMove: **unchanged** (`0xB09528`)
- H2 LevelInit: **unchanged** (`0xB3A600`)
- H3 SerializePartial: **moved +0x40** (`0x11AD4E0 → 0x11AD520`)
- H4 ShouldUpdate: **moved +0x960** (`0x14EFF0 → 0x14F950`)

VLB uses pattern-scan for hook locations so both drifts are absorbed
without rebuild. FVA re-loads its manifest at startup — if the manifest
is updated to match the new build, FVA also survives without rebuild.
This is the entire design goal of the manifest-plus-FNV1a pattern: cs2
updates should not require re-VMP'ing the DLL.

## Where these numbers come from

- Schema hashes: reversed from FVA's `Section-J` unprotected build
  (`SafetyPlugin-Unprotected.dll`) — the branch that ships with debug
  symbols for research.
- Function RVAs: sig-scanned via `capstone` against a running cs2 —
  script referenced above.
- Field offsets: `schema/client_dll.json` (this repo, from `a2x/cs2-dumper`).
- Protobuf tags: `protobufs/cs_usercmd.proto` (this repo, from `SteamDatabase/Protobufs`).
