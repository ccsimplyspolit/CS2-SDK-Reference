# CS2 core structures — layouts for VMP RE

**EN:** Human-readable summaries of the ~10 CS2 C++ classes any RE project keeps coming back to. Field offsets are current as of build 14170 (2026-07-15) — same as build 14169. See `schema/client_dll.json` for machine-readable canonical data.

**RU:** Читаемые описания ~10 CS2 C++ классов, к которым RE-проекты обращаются постоянно. Оффсеты полей актуальны для билда 14170 (2026-07-15) — идентичны с билдом 14169. Machine-readable canonical data — в `schema/client_dll.json`.

---

## CCSPlayerController

Local + remote player controller (a "controller" owns the pawn — a "pawn" is the world entity). Reachable via `[client.dll + dwLocalPlayerController]`.

```
offset  type            field
0x810   InventoryServices*      m_pInventoryServices
0x858   char[16]                m_szClan                     // may go through CUtlSymbolLarge intern
0x880   int32                   m_iCompetitiveRanking        // 0..18 (classic/wingman) or 0..40000 (premier)
0x884   int32                   m_iCompetitiveWins
0x888   uint8                   m_iCompetitiveRankType       // 6/7/11 enum
0x88C   int32                   m_iCompetitiveRankingPredicted_Win
0x890   int32                   m_iCompetitiveRankingPredicted_Loss
0x894   int32                   m_iCompetitiveRankingPredicted_Tie
0x914   CHandle<Pawn>           m_hPlayerPawn                // deref to pawn entity
0x934   int32                   m_iScore                     // in-round
0x948   int32                   m_iMusicKitID
0x94C   int32                   m_iMusicKitMVPs
0x950   int32                   m_iMVPs                      // scoreboard star
```

**Notes:**
- `m_szClan` is a `CUtlSymbolLarge` — 8-byte handle into an intern table, NOT a raw string. Direct 16-byte writes may show garbage.
- `m_iCompetitiveRanking` for premier mode = CS Rating Elo (0..40000).

---

## CCSPlayerController_InventoryServices

Reached via `CCSPlayerController + 0x810` → deref pointer.

```
offset  type            field
0x58    uint32          m_unMusicID
0x5C    Rank[6]         m_rank                              // 6-entry array of {rank, month, year} (service medals + coins)
0x74    int32           m_nPersonaDataPublicLevel           // Steam CS level 1..40
0x78    int32           m_nPersonaDataPublicCommendsLeader
0x7C    int32           m_nPersonaDataPublicCommendsTeacher
0x80    int32           m_nPersonaDataPublicCommendsFriendly
0x84    int32           m_nPersonaDataXpTrailLevel           // XP progress trail
```

---

## C_CSGameRules

Global game rules entity. Reachable via `[client.dll + dwGameRules]`.

```
offset  type      field
0xA0    int32     m_nQueuedMatchmakingMode
0xA4    bool      m_bIsValveDS                              // 1 = Valve DS, 0 = community
```

**FVA gate byte semantics:** `m_bIsValveDS` is what FVA reads (via FNV1a-64 hash `0xB6E8F068409FEF6C`) into its gate byte at `image_base + 0x23A9A0`. See `vmp_targets/README.md`.

---

## C_BaseEntity

Base for all entities (pawns, weapons, world props, ...).

```
offset  type   field
0x34C   int32  m_iHealth                                    // 0 = dead
```

---

## CBasePlayerController

Base class of `CCSPlayerController`.

```
offset  type   field
0x6B8   int32  m_nTickBase                                  // live subtick counter
```

---

## Protobuf message layouts (on-wire)

### CBaseUserCmdPB

Base user command envelope. Instances serialize via `SerializePartialToArray`. FVA and rank/aim helpers hook this to inspect or modify outgoing input.

Key fields (proto):
```proto
message CBaseUserCmdPB {
    optional int32 command_number = 1;
    optional int32 tick_count = 2;
    optional CInButtonStatePB buttons_pb = 20;
    // ...
    optional string move_crc = 27;                          // FVA writes composed scratch here
    repeated CSubtickMoveStep subtick_moves = 18;           // NOT touched by FVA (myth)
    // ...
}
```

Vtable RVA in client.dll build 14170: identifies the type at runtime (FVA's Hook C compares vtable ptr, not GetTypeName, because CS2 has broken GetTypeName via LazyString).

### CSGOUserCmdPB

Contains `input_history` — the FVA angle-fixup target.

```proto
message CSGOUserCmdPB {
    optional CBaseUserCmdPB base = 1;
    repeated CSGOInputHistoryEntryPB input_history = 2;     // FVA Section-J targets [i].view_angles
    optional int32 attack1_start_history_index = 3;
    optional int32 attack2_start_history_index = 4;
    // ...
}
```

### CSGOInputHistoryEntryPB

Individual history entry. Allocated via `CSGOInputHistoryEntryPB::New` (~120 B). FVA identifies the factory via FNV1a-hashed callsite disambiguation because sig `B9 78` isn't unique.

```proto
message CSGOInputHistoryEntryPB {
    optional CMsgQAngle view_angles = 2;                    // ← FVA writes wrapped angles here
    optional CMsgVector cl_interp = 3;
    optional int32 render_tick_count = 4;
    // ...
}
```

### CInButtonStatePB

Button state per user command. Used as gate input by FVA and other input helpers.

```proto
message CInButtonStatePB {
    optional int64 changed = 1;
    optional int64 held = 2;
    optional int64 pressed = 3;
    // ...
}
```

FVA checks `attack` bit for fire-gate mode; VLB has additional `attack_pressed || button_state_changed` policy.

---

## Access patterns / Паттерны доступа

**EN:** Every RE project ends up writing the same 3-4 helper functions. Sketched below.

**RU:** Каждый RE-проект пишет одни и те же 3-4 хелпера. Ниже — эскизы.

```cpp
// Get local player controller
uintptr_t client_base = /* ... via LdrGetProcedureAddress or PEB walk ... */;
uintptr_t lpc_ptr = client_base + 0x2383730;  // dwLocalPlayerController
uintptr_t lpc = *(uintptr_t*)lpc_ptr;
if (!lpc) return; // no controller yet

// Read rank
int rank = *(int*)(lpc + 0x880);

// Get inventory services
uintptr_t inv = *(uintptr_t*)(lpc + 0x810);
if (!inv) return;
int level = *(int*)(inv + 0x74);

// Get game rules
uintptr_t gr_ptr = client_base + 0x23A39D8;  // dwGameRules
uintptr_t gr = *(uintptr_t*)gr_ptr;
uint8_t is_valve_ds = *(uint8_t*)(gr + 0xA4);
```

---

## Update discipline / Дисциплина обновления

**When you update this file:**
1. Bump the build reference in the header.
2. Only change offsets that ACTUALLY changed (compare via a diff of `schema/client_dll.json`).
3. Add a row to `vmp_targets/README.md` "Recent verifications" with your session date + cs2 PID.

**Ссылки на источники истины:** `schema/client_dll.json` (canonical), `a2x/cs2-dumper` (upstream), running cs2 at time of writing.
