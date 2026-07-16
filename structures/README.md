# CS2 core structures — layouts for VMP RE

---

## English

Human-readable summaries of the ~10 CS2 C++ classes any RE project keeps coming back to. Field offsets are current as of build 14170 (2026-07-15) — same as build 14169. See `schema/client_dll.json` for machine-readable canonical data.

### CCSPlayerController

Local + remote player controller (a "controller" owns the pawn — a "pawn" is the world entity). Reachable via `[client.dll + dwLocalPlayerController]`.

```
offset  type            field
0x818   InventoryServices*      m_pInventoryServices
0x860   CUtlSymbolLarge         m_szClan                     // 8-byte handle into intern table (not raw string)
0x888   int32                   m_iCompetitiveRanking        // 0..18 (classic/wingman) or 0..40000 (premier)
0x88C   int32                   m_iCompetitiveWins
0x890   uint8                   m_iCompetitiveRankType       // 6/7/11 enum
0x894   int32                   m_iCompetitiveRankingPredicted_Win
0x898   int32                   m_iCompetitiveRankingPredicted_Loss
0x89C   int32                   m_iCompetitiveRankingPredicted_Tie
0x914   CHandle<Pawn>           m_hPlayerPawn                // deref to pawn entity
0x93C   int32                   m_iScore                     // in-round
0x950   int32                   m_iMusicKitID
0x954   int32                   m_iMusicKitMVPs
0x958   int32                   m_iMVPs                      // scoreboard star
```

_Verified against `schema/client_dll.json` (cs2-dumper HEAD, 2026-07-16)._

**Notes:**

- `m_szClan` is a `CUtlSymbolLarge` — 8-byte handle into an intern table, NOT a raw string. Direct 16-byte writes may show garbage.
- `m_iCompetitiveRanking` for premier mode = CS Rating Elo (0..40000).

### CCSPlayerController_InventoryServices

Reached via `CCSPlayerController + 0x818` → deref pointer.

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

### C_CSGameRules

Global game rules entity. Reachable via `[client.dll + dwGameRules]`.

```
offset  type      field
0xA0    int32     m_nQueuedMatchmakingMode
0xA4    bool      m_bIsValveDS                              // 1 = Valve DS, 0 = community
```

**FVA gate byte semantics:** `m_bIsValveDS` is what FVA reads (via FNV1a-64 hash `0xB6E8F068409FEF6C`) into its gate byte at `image_base + 0x23A9A0`. See `vmp_targets/README.md`.

### C_BaseEntity

Base for all entities (pawns, weapons, world props, ...).

```
offset  type   field
0x34C   int32  m_iHealth                                    // 0 = dead
```

### CBasePlayerController

Base class of `CCSPlayerController`.

```
offset  type   field
0x6B8   int32  m_nTickBase                                  // live subtick counter
```

### Protobuf message layouts (on-wire)

#### CBaseUserCmdPB

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

Vtable RVA in `client.dll` build 14170 identifies the type at runtime (FVA's Hook C compares vtable ptr, not `GetTypeName`, because CS2 has broken `GetTypeName` via `LazyString`).

#### CSGOUserCmdPB

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

#### CSGOInputHistoryEntryPB

Individual history entry. Allocated via `CSGOInputHistoryEntryPB::New` (~120 B). FVA identifies the factory via FNV1a-hashed callsite disambiguation because sig `B9 78` isn't unique.

```proto
message CSGOInputHistoryEntryPB {
    optional CMsgQAngle view_angles = 2;                    // ← FVA writes wrapped angles here
    optional CMsgVector cl_interp = 3;
    optional int32 render_tick_count = 4;
    // ...
}
```

#### CInButtonStatePB

Button state per user command. Used as gate input by FVA and other input helpers.

```proto
message CInButtonStatePB {
    optional int64 changed = 1;
    optional int64 held = 2;
    optional int64 pressed = 3;
    // ...
}
```

FVA checks the `attack` bit for fire-gate mode; VLB has additional `attack_pressed || button_state_changed` policy.

### Access patterns

Every RE project ends up writing the same 3-4 helper functions. Sketched below.

```cpp
// Get local player controller
uintptr_t client_base = /* ... via LdrGetProcedureAddress or PEB walk ... */;
uintptr_t lpc_ptr = client_base + 0x2383730;  // dwLocalPlayerController
uintptr_t lpc = *(uintptr_t*)lpc_ptr;
if (!lpc) return; // no controller yet

// Read rank
int rank = *(int*)(lpc + 0x888);

// Get inventory services
uintptr_t inv = *(uintptr_t*)(lpc + 0x818);
if (!inv) return;
int level = *(int*)(inv + 0x74);

// Get game rules
uintptr_t gr_ptr = client_base + 0x23A39D8;  // dwGameRules
uintptr_t gr = *(uintptr_t*)gr_ptr;
uint8_t is_valve_ds = *(uint8_t*)(gr + 0xA4);
```

### Update discipline

**When you update this file:**

1. Bump the build reference in the header.
2. Only change offsets that ACTUALLY changed (compare via a diff of `schema/client_dll.json`).
3. Add a row to `vmp_targets/README.md` "Recent verifications" with your session date + cs2 PID.

**Sources of truth:** `schema/client_dll.json` (canonical), `a2x/cs2-dumper` (upstream), running cs2 at time of writing.

---

## Русский

Читаемые сводки по ~10 C++-классам CS2, к которым RE-проекты возвращаются постоянно. Оффсеты полей актуальны для билда 14170 (2026-07-15) — идентичны билду 14169. Machine-readable canonical data — в `schema/client_dll.json`.

### CCSPlayerController

Локальный + удалённый player controller (контроллер владеет pawn'ом, pawn — это world-entity). Достижим через `[client.dll + dwLocalPlayerController]`.

```
offset  type            field
0x818   InventoryServices*      m_pInventoryServices
0x860   CUtlSymbolLarge         m_szClan                     // 8-байтный handle в intern-таблицу (не сырая строка)
0x888   int32                   m_iCompetitiveRanking        // 0..18 (classic/wingman) или 0..40000 (premier)
0x88C   int32                   m_iCompetitiveWins
0x890   uint8                   m_iCompetitiveRankType       // enum 6/7/11
0x894   int32                   m_iCompetitiveRankingPredicted_Win
0x898   int32                   m_iCompetitiveRankingPredicted_Loss
0x89C   int32                   m_iCompetitiveRankingPredicted_Tie
0x914   CHandle<Pawn>           m_hPlayerPawn                // deref → pawn-entity
0x93C   int32                   m_iScore                     // очки за раунд
0x950   int32                   m_iMusicKitID
0x954   int32                   m_iMusicKitMVPs
0x958   int32                   m_iMVPs                      // звёздочка на scoreboard
```

_Сверено против `schema/client_dll.json` (`cs2-dumper` HEAD, 2026-07-16)._

**Заметки:**

- `m_szClan` — это `CUtlSymbolLarge`, 8-байтный handle в intern-таблицу, а НЕ сырая строка. Прямая запись 16 байт покажет мусор.
- `m_iCompetitiveRanking` в premier-режиме = CS Rating Elo (0..40000).

### CCSPlayerController_InventoryServices

Достигается через `CCSPlayerController + 0x818` → deref pointer'а.

```
offset  type            field
0x58    uint32          m_unMusicID
0x5C    Rank[6]         m_rank                              // массив на 6 записей {rank, month, year} (service-медали + коины)
0x74    int32           m_nPersonaDataPublicLevel           // Steam CS level 1..40
0x78    int32           m_nPersonaDataPublicCommendsLeader
0x7C    int32           m_nPersonaDataPublicCommendsTeacher
0x80    int32           m_nPersonaDataPublicCommendsFriendly
0x84    int32           m_nPersonaDataXpTrailLevel           // XP-progress trail
```

### C_CSGameRules

Глобальная game-rules entity. Достижима через `[client.dll + dwGameRules]`.

```
offset  type      field
0xA0    int32     m_nQueuedMatchmakingMode
0xA4    bool      m_bIsValveDS                              // 1 = Valve DS, 0 = community
```

**Семантика FVA gate byte:** `m_bIsValveDS` — то, что FVA читает (через FNV1a-64 хэш `0xB6E8F068409FEF6C`) в свой gate-byte по адресу `image_base + 0x23A9A0`. См. `vmp_targets/README.md`.

### C_BaseEntity

Базовый для всех entity (pawn'ы, оружие, world props и т.д.).

```
offset  type   field
0x34C   int32  m_iHealth                                    // 0 = мёртв
```

### CBasePlayerController

Базовый класс `CCSPlayerController`.

```
offset  type   field
0x6B8   int32  m_nTickBase                                  // live subtick counter
```

### Layout'ы protobuf-сообщений (on-wire)

#### CBaseUserCmdPB

Базовый envelope user command. Инстансы сериализуются через `SerializePartialToArray`. FVA и rank/aim-хелперы хукают это, чтобы читать или менять исходящий input.

Ключевые поля (proto):

```proto
message CBaseUserCmdPB {
    optional int32 command_number = 1;
    optional int32 tick_count = 2;
    optional CInButtonStatePB buttons_pb = 20;
    // ...
    optional string move_crc = 27;                          // сюда FVA пишет composed-scratch
    repeated CSubtickMoveStep subtick_moves = 18;           // FVA НЕ трогает (миф)
    // ...
}
```

Vtable-RVA в `client.dll` билда 14170 идентифицирует тип в рантайме (Hook C у FVA сравнивает vtable-ptr, а не `GetTypeName`, потому что CS2 сломала `GetTypeName` через `LazyString`).

#### CSGOUserCmdPB

Содержит `input_history` — мишень angle-fixup'а FVA.

```proto
message CSGOUserCmdPB {
    optional CBaseUserCmdPB base = 1;
    repeated CSGOInputHistoryEntryPB input_history = 2;     // Section-J FVA целится в [i].view_angles
    optional int32 attack1_start_history_index = 3;
    optional int32 attack2_start_history_index = 4;
    // ...
}
```

#### CSGOInputHistoryEntryPB

Отдельная history-запись. Аллокируется через `CSGOInputHistoryEntryPB::New` (~120 B). FVA идентифицирует фабрику через FNV1a-hashed disambiguation callsite'а, потому что sig `B9 78` не уникален.

```proto
message CSGOInputHistoryEntryPB {
    optional CMsgQAngle view_angles = 2;                    // ← сюда FVA пишет обёрнутые углы
    optional CMsgVector cl_interp = 3;
    optional int32 render_tick_count = 4;
    // ...
}
```

#### CInButtonStatePB

Button-state на каждый user command. Используется как gate-input FVA и другими input-хелперами.

```proto
message CInButtonStatePB {
    optional int64 changed = 1;
    optional int64 held = 2;
    optional int64 pressed = 3;
    // ...
}
```

FVA проверяет бит `attack` для fire-gate mode; у VLB дополнительная политика `attack_pressed || button_state_changed`.

### Паттерны доступа

Каждый RE-проект в конце концов пишет одни и те же 3-4 хелпера. Эскизы ниже.

```cpp
// Get local player controller
uintptr_t client_base = /* ... via LdrGetProcedureAddress or PEB walk ... */;
uintptr_t lpc_ptr = client_base + 0x2383730;  // dwLocalPlayerController
uintptr_t lpc = *(uintptr_t*)lpc_ptr;
if (!lpc) return; // no controller yet

// Read rank
int rank = *(int*)(lpc + 0x888);

// Get inventory services
uintptr_t inv = *(uintptr_t*)(lpc + 0x818);
if (!inv) return;
int level = *(int*)(inv + 0x74);

// Get game rules
uintptr_t gr_ptr = client_base + 0x23A39D8;  // dwGameRules
uintptr_t gr = *(uintptr_t*)gr_ptr;
uint8_t is_valve_ds = *(uint8_t*)(gr + 0xA4);
```

### Дисциплина обновления

**При апдейте этого файла:**

1. Обнови build-reference в заголовке.
2. Меняй ТОЛЬКО те оффсеты, которые ДЕЙСТВИТЕЛЬНО сдвинулись (сверься через diff `schema/client_dll.json`).
3. Добавь строку в `vmp_targets/README.md` «Recent verifications» с датой сессии и PID cs2.

**Источники истины:** `schema/client_dll.json` (canonical), `a2x/cs2-dumper` (upstream), running cs2 на момент правки.
