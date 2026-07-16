# CS2 fields that VMP-protected DLLs target

**EN:** Cross-reference between (a) known VMP-protected CS2 helper plugins and (b) the specific CS2 fields, protobuf tags, and function RVAs they touch. Compiled from live reversing of production samples (FVA/FuckVacAgain, VacLiveBypass port, RankSpoofer projects).

**RU:** Cross-reference между (a) известными VMP-протектнутыми CS2-хелперами и (b) конкретными полями CS2, protobuf-тегами и RVA-функциями, которые они трогают. Собрано из живого реверса production-сэмплов (FVA/FuckVacAgain, VacLiveBypass port, RankSpoofer проекты).

---

## Matrix: what touches what

| Concern | CS2 field / RVA | Type | Touched by | Purpose |
|---|---|---|---|---|
| **`m_bIsValveDS` gate** | `C_CSGameRules + 0xA4` | bool | FVA (read via FNV1a `0xB6E8F068409FEF6C`), VLB, IsValveDS | Gate byte for anti-VAC helpers; when 1 = official server, activate |
| **CreateMove hook** | `client.dll + 0xACEF90` (live) / `0xB09528` (14170) | function | FVA (Hook A), VLB (`create_move_hook.cpp`) | Intercept per-tick user command build |
| **SerializePartialToArray** | `client.dll + 0x1189930` (live) / `0x11AD520` (14170) | function | FVA (Hook C), VLB (`serialize_to_array_hook.cpp`) | Inspect/mutate outgoing UserCmd protobufs |
| **LevelInit** | `client.dll + 0xAFDFB0` (live) / `0xB3A600` (14170) | function | FVA (Hook B), VLB (`level_init_hook.cpp`) | Reset caches on map load |
| **ShouldUpdateSequences** | `animationsystem.dll + 0x14F950` (14170, was `0x14EFF0`) | function | FVA (Hook D), VLB (`animation_hook.cpp`) | Skip animation updates for certain conditions |
| **input_history[i].view_angles** | `CSGOInputHistoryEntryPB.view_angles` (proto tag 2) | float3 | FVA Section-J, VLB (`phase_b2.cpp`) | Wrap deltas into (-180,180], echo back — anti-aim |
| **subtick_moves** | `CBaseUserCmdPB.subtick_moves` (proto tag 18) | repeated | **NOT touched by FVA** (common myth); VLB does not touch either | Widely believed but incorrect — FVA targets input_history instead |
| **CInButtonStatePB.attack** | `CInButtonStatePB` (proto tag ~3, bit) | flag | FVA (fire gate), VLB (`FVA_GATE_MODE_ATTACK`) | Only fire angles on attack-pressed |
| **CCSPlayerController.m_iCompetitiveRanking** | `CCSPlayerController + 0x880` | int32 | RankSpooferDriver (Phase 1.5 direct-write) | Local rank spoofing |
| **CCSPlayerController.m_iCompetitiveWins** | `CCSPlayerController + 0x884` | int32 | RankSpooferDriver | Wins count spoofing |
| **InventoryServices.m_nPersonaDataPublicLevel** | `CCSPlayerController.m_pInventoryServices → +0x74` | int32 | RankSpoofer (v1.14+ profile block) | Steam CS level spoof |
| **InventoryServices.m_nPersonaDataXpTrailLevel** | `+0x84` | int32 | RankSpoofer | XP trail spoof |
| **`m_hPlayerPawn`** | `CCSPlayerController + 0x914` | CHandle | FVA (subobj gate via FNV1a `0x737DDDA9E99E0B5D`), VLB | Local pawn resolution |
| **`m_iHealth`** | `C_BaseEntity + 0x34C` | int32 | FVA (fire flag byte via FNV1a `0x9320AED4F2DDF04B`), VLB | Alive check for fire gate |
| **`m_nTickBase`** | `CBasePlayerController + 0x6B8` | int32 | FVA (live subtick counter via FNV1a `0xC08C21B68A2C746D`) | Tick reference |

---

## FVA's 4 FNV1a-64 schema hashes

Reversed from FVA (SafetyPlugin-Unprotected) — the plugin resolves schema fields by hashing `type_name + "->" + field_name` into 64-bit FNV1a and looking up the result in a runtime-loaded manifest.

```
hash = FNV1a-64(type_name + "->" + field_name)

0xB6E8F068409FEF6C  →  C_CSGameRules->m_bIsValveDS         (gate byte)
0x737DDDA9E99E0B5D  →  CCSPlayerController->m_hPlayerPawn   (subobj base)
0x9320AED4F2DDF04B  →  C_BaseEntity->m_iHealth              (fire flag)
0xC08C21B68A2C746D  →  CBasePlayerController->m_nTickBase   (live subtick counter)
```

Any plugin can reuse this pattern. Just implement FNV1a-64 + lookup against the runtime schema table.

**Python:**
```python
def fnv1a_64(s: str) -> int:
    h = 0xcbf29ce484222325
    for b in s.encode('utf-8'):
        h ^= b
        h = (h * 0x100000001b3) & 0xffffffffffffffff
    return h

assert fnv1a_64("C_CSGameRules->m_bIsValveDS") == 0xB6E8F068409FEF6C
```

---

## Notes on drift

**EN:** Between builds 14169 and 14170 (2026-07-11 → 2026-07-15), **every entry in the "Type" column above stayed at the same offset in its class**. Only the FUNCTION RVAs moved:
- H1 CreateMove: unchanged (still `0xB09528`)
- H2 LevelInit: unchanged (still `0xB3A600`)
- H3 SerializePartial: moved `+0x40` (`0x11AD4E0 → 0x11AD520`)
- H4 ShouldUpdate: moved `+0x960` (`0x14EFF0 → 0x14F950`)

VLB's pattern-scan design absorbs both drifts without a rebuild. Verified live 2026-07-16.

**RU:** Между билдами 14169 и 14170 **все поля выше остались на прежних смещениях в своих классах**. Только RVA ФУНКЦИЙ сдвинулись (H3 на +0x40, H4 на +0x960). VLB pattern-scan это ест без ребилда. Подтверждено live 2026-07-16.

---

## Recent verifications

| Date | cs2 PID | Build | H1 | H2 | H3 | H4 | Method |
|---|---|---|---|---|---|---|---|
| 2026-07-16 | 53000 | 14170 | ✅ | ✅ | ✅ | ✅ | ctypes RPM + capstone (script in [VMP-Deob/tools/analysis_suite/rt_verify_all_hooks.py](https://github.com/ccsimplyspolit/VMP-Deob/blob/main/tools/analysis_suite/rt_verify_all_hooks.py)) |

Add new rows here after each verification session.
