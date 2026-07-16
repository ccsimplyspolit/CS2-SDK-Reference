# Structures — human-readable class layouts

`structures/README.md` has the quick-scan table. This page adds context and
covers a few classes the top-level page skips. All offsets are current as of
build 14170 (2026-07-15).

## CCSPlayerController

Reachable via `[client.dll + dwLocalPlayerController]`. Owns persistent
per-player state (rank, wins, MVPs). Extends `CBasePlayerController`.

```
offset  type                                   field
0x818   CCSPlayerController_InventoryServices* m_pInventoryServices
0x860   CUtlSymbolLarge                        m_szClan
0x888   int32                                  m_iCompetitiveRanking
0x88C   int32                                  m_iCompetitiveWins
0x890   uint8                                  m_iCompetitiveRankType
0x894   int32                                  m_iCompetitiveRankingPredicted_Win
0x898   int32                                  m_iCompetitiveRankingPredicted_Loss
0x89C   int32                                  m_iCompetitiveRankingPredicted_Tie
0x914   CHandle<C_CSPlayerPawn>                m_hPlayerPawn
0x93C   int32                                  m_iScore
0x950   int32                                  m_iMusicKitID
0x954   int32                                  m_iMusicKitMVPs
0x958   int32                                  m_iMVPs
```

### Notes

- **`m_szClan`** is a `CUtlSymbolLarge` — an 8-byte handle into an intern
  table, not a raw string. Naïve 16-byte writes here look like garbage in
  the scoreboard. RankSpoofer solves this by writing through the intern
  API rather than the raw member.
- **`m_iCompetitiveRanking`** meaning depends on rank type
  (`m_iCompetitiveRankType` at `+0x890`):
  - Type 6 (classic competitive): 0..18 (silver-1 through global elite)
  - Type 7 (wingman): 0..18
  - Type 11 (premier): 0..40000 — CS Rating Elo
- **`m_hPlayerPawn`** is a `CHandle` (packed { index : 15, serial : 17 })
  not a raw pointer. Resolve via `EntitySystem::LookupEntity(handle)` or
  the traditional `(handle & 0x7FFF) → EntityList[index]` walk.

## CCSPlayerController_InventoryServices

Reached via `[CCSPlayerController + 0x818]`.

```
offset  type            field
0x58    uint32          m_unMusicID
0x5C    Rank[6]         m_rank                              // 6-entry service medals array
0x74    int32           m_nPersonaDataPublicLevel           // Steam CS level 1..40
0x78    int32           m_nPersonaDataPublicCommendsLeader
0x7C    int32           m_nPersonaDataPublicCommendsTeacher
0x80    int32           m_nPersonaDataPublicCommendsFriendly
0x84    int32           m_nPersonaDataXpTrailLevel
```

Each `Rank` entry is 12 bytes `{ int32 rank, int32 month, int32 year }`.
Service medals + operation coins live here.

## C_CSGameRules

Reachable via `[client.dll + dwGameRules]`. Global game-state singleton.

```
offset  type      field
0xA0    int32     m_nQueuedMatchmakingMode
0xA4    bool      m_bIsValveDS
```

**`m_bIsValveDS` is the FVA gate byte source.** FVA resolves this field by
FNV1a-64 hash `0xB6E8F068409FEF6C` (equal to `fnv1a("C_CSGameRules->m_bIsValveDS")`),
reads the byte, and mirrors it into its own gate byte at
`FVA_image_base + 0x23A9A0`. Sections J of FVA are gated on that byte.

## C_BaseEntity

Base for all entities. All pawn, weapon, and world-prop classes inherit.

```
offset  type            field
0x34C   int32           m_iHealth               // 0 = dead
```

`m_iHealth` at `+0x34C` is FVA's fire-flag input, resolved via
FNV1a-64 hash `0x9320AED4F2DDF04B`.

## CBasePlayerController

Parent of `CCSPlayerController`. Own its own fields.

```
offset  type            field
0x6B8   int32           m_nTickBase             // live subtick counter
```

FVA reads this at FNV1a-64 hash `0xC08C21B68A2C746D` to align its own
tick counter with cs2's.

## C_CSPlayerPawn

The per-life pawn entity for a CS2 player. Reachable via
`[client.dll + dwLocalPlayerPawn]` or by resolving `CCSPlayerController.m_hPlayerPawn`.

Fields are numerous — `client_dll.json` lists everything. What plugins
usually want:

- `C_BaseEntity` fields (inherited) — `m_iHealth`, `m_MoveType`, etc.
- Velocity / position — CS2 uses `CGameSceneNode` for spatial state; the
  pawn's `m_pGameSceneNode` points at it.
- Weapons — `m_pWeaponServices` gives you the equipped-weapon list.

## CBaseUserCmdPB (protobuf)

Wire envelope for user input. Instances are serialised via
`SerializePartialToArray` — a virtual method — before being sent. FVA
Hook C is on that function.

```proto
message CBaseUserCmdPB {
    optional int32              command_number = 1;
    optional int32              tick_count     = 2;
    optional CInButtonStatePB   buttons_pb     = 20;
    repeated CSubtickMoveStep   subtick_moves  = 18;   // NOT touched by FVA
    optional string             move_crc       = 27;   // FVA scratch (Hook A)
    // ...many more...
}
```

## CSGOUserCmdPB (protobuf)

The outer envelope — contains a `CBaseUserCmdPB` plus CSGO-specific input
history.

```proto
message CSGOUserCmdPB {
    optional CBaseUserCmdPB              base                          = 1;
    repeated CSGOInputHistoryEntryPB     input_history                 = 2;   // Section-J target
    optional int32                       attack1_start_history_index   = 3;
    optional int32                       attack2_start_history_index   = 4;
}
```

Vtable RVA `0x1A1E028` (build 14170) — FVA uses this for type
identification because `CTypeName::Get()` is broken by CS2's LazyString
lookup path.

## CSGOInputHistoryEntryPB (protobuf)

A single subtick input entry. Allocated via
`CSGOInputHistoryEntryPB::New` (~120-byte struct). FVA disambiguates the
factory by FNV1a-hashed callsite because signature `B9 78` (an inlined
120-byte struct-size mov) matches multiple candidates.

```proto
message CSGOInputHistoryEntryPB {
    optional CMsgQAngle    view_angles         = 2;   // ← FVA rewrites here
    optional CMsgVector    cl_interp           = 3;
    optional int32         render_tick_count   = 4;
    // ...
}
```

## CInButtonStatePB (protobuf)

Button state per user command.

```proto
message CInButtonStatePB {
    optional int64  changed = 1;
    optional int64  held    = 2;
    optional int64  pressed = 3;
}
```

FVA reads the `attack` bit for its fire-gate mode. VLB adds
`attack_pressed || button_state_changed` policy on top for a stricter
gate.

## Access patterns

Every plugin ends up writing the same three helpers. Copy-paste sketches:

```cpp
// 0. Get client.dll base
uintptr_t client_base = (uintptr_t)GetModuleHandleW(L"client.dll");

// 1. Get local player controller
uintptr_t lpc_ptr = client_base + 0x237EBA0;      // dwLocalPlayerController
uintptr_t lpc = *(uintptr_t*)lpc_ptr;
if (!lpc) return; // not in a game yet

// 2. Read persistent stats
int rank = *(int*)(lpc + 0x888);
int wins = *(int*)(lpc + 0x88C);

// 3. Get inventory services + Steam level
uintptr_t inv = *(uintptr_t*)(lpc + 0x818);
int cs_level = 0;
if (inv) cs_level = *(int*)(inv + 0x74);

// 4. Get game rules + gate byte
uintptr_t gr_ptr = client_base + 0x23A39D8;       // dwGameRules
uintptr_t gr = *(uintptr_t*)gr_ptr;
uint8_t is_valve_ds = gr ? *(uint8_t*)(gr + 0xA4) : 0;
```

## Update discipline for this page

When cs2 updates:

1. Cross-check every hex in this page against `schema/client_dll.json`.
2. Only edit numbers that actually changed.
3. If any TRACKED field moved, add an entry to `vmp_targets/README.md`
   "Recent verifications" with the date + PID.
4. Bump the "current as of build …" line in the header.
