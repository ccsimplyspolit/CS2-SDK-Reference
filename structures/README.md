# CS2 core structures — layouts for VMP RE

---

## English

Human-readable summaries of the ~10 CS2 C++ classes any RE project keeps coming back to. Class field offsets are current through build 14172 (unchanged from 14169/14170 — only the runtime globals in the access-pattern example below shifted +0x1000 in 14172), verified field-by-field against the installed game. See `schema/client_dll.json` for machine-readable canonical data.

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

_Verified against `schema/client_dll.json` (cs2-dumper HEAD build 14169) and the installed game, 2026-07-19._

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

### CSkeletonInstance / CModelState — world-space bone matrix (ESP skeleton)

The animated bone transforms an ESP draws live inside the entity's scene node. For any animated pawn `m_pGameSceneNode` (offset `0x330`) **is** a `CSkeletonInstance` (`CSkeletonInstance : CGameSceneNode`, class size `0x490`), which embeds a `CModelState` (class size `0x2b0`) at `0x140` and, in its engine-internal region, a pointer to the world-space bone array.

**Access chain (every offset verified against build 14172):**

```
pawn                            // C_CSPlayerPawn*
  +0x330  m_pGameSceneNode   -> CSkeletonInstance*         [schema: C_BaseEntity]
skel = *(pawn + 0x330)
  +0x140  m_modelState       -> CModelState (embedded)     [schema + SDK static_assert]
  +0x1C0  (= m_modelState+0x80) -> CTransform* boneArray   [disasm/IDA: CalculateWorldSpaceBones]
  +0x1D4  (= m_modelState+0x94) -> uint16 boneCount
boneArray = *(skel + 0x1C0)
  bone[i] = boneArray + i*0x20                             // CTransform, 0x20 bytes
    +0x00  VectorAligned m_vPosition   // world-space xyz   <- ESP reads this
    +0x10  Quaternion    m_orientation
```

**Forum cross-check (yougame.biz post, 2026-05-19):** that post lists `m_modelState = 0x150`. For the current build 14172 this is **wrong** — the real offset is **`0x140`** (client) / `0x120` (server). Confirmed three independent ways:

1. **Schema** — `schema/client_dll.json`: `CSkeletonInstance.m_modelState = 0x140`.
2. **Regenerated SDK** — `CSkeletonInstance` (0x490) embeds `CModelState m_modelState` at `0x140`; `CModelState.m_hModel` sits at `0xA0`.
3. **Disassembly** — `CalculateWorldSpaceBones` (`client.dll+0xA49A50`) does `lea rcx, [this+0x140]` and passes it as the `CModelState*`, and reads `m_hModel` at `this+0x1E0` (= `0x140 + 0xA0`). IDA Hex-Rays confirms the bone array as `*(this+0x1C0)` indexed `+ 32*i` (`0x20` stride, two 16-byte SIMD stores per bone).

The post predates 14172 by ~2 months; treat its `0x150` as a stale build.

**Reading a bone:**

```cpp
uintptr_t skel  = read<uintptr_t>(pawn + 0x330);       // m_pGameSceneNode == CSkeletonInstance
uintptr_t bones = read<uintptr_t>(skel + 0x1C0);       // world-space CTransform array
uint16_t  count = read<uint16_t>(skel + 0x1D4);
Vector    head  = read<Vector>(bones + BONE_HEAD * 0x20); // position at CTransform+0x0
```

**Bone indices.** These are the *standard CS2 player-model skeleton* order. They live in the model's `.vmdl_c` skeleton, **not** in `client.dll` or the schema — so they are model data, not a binary offset, and cannot be verified against the DLL. They are stable for the shared player rig and match the forum's list:

| idx | bone | idx | bone | idx | bone |
|----|------|----|------|----|------|
| 0 | ORIGIN | 12 | CLAVICLE_R | 23 | CHEST |
| 1 | PELVIS | 13 | SHOULDER_R | 24 | GUN |
| 2 | SPINE0 | 14 | ELBOW_R | 25 | EYE_L |
| 3 | SPINE1 | 15 | HAND_R | 26 | EYE_R |
| 4 | SPINE2 | 17 | HIP_L | 27 | RANDOM |
| 6 | NECK | 18 | KNEE_L | 28 | CVJ_BONE |
| 7 | HEAD | 19 | FOOT_HEEL_L | 74 | FOOT_TOES_L_T |
| 8 | CLAVICLE_L | 20 | HIP_R | 77 | FOOT_TOES_R_T |
| 9 | SHOULDER_L | 21 | KNEE_R | 81 | FOOT_TOES_L_CT |
| 10 | ELBOW_L | 22 | FOOT_HEEL_R | 86 | FOOT_TOES_R_CT |
| 11 | HAND_L |  |  | 128 | BONE_MAX (count cap) |

**Skeleton links** — the bone pairs an ESP connects into a stick figure, derived from the indices above:

```
HEAD(7)-NECK(6)  NECK-SPINE2(4)  SPINE2-SPINE1(3)  SPINE1-SPINE0(2)  SPINE0-PELVIS(1)
NECK-SHOULDER_L(9)  SHOULDER_L-ELBOW_L(10)  ELBOW_L-HAND_L(11)
NECK-SHOULDER_R(13) SHOULDER_R-ELBOW_R(14)  ELBOW_R-HAND_R(15)
PELVIS-HIP_L(17)  HIP_L-KNEE_L(18)  KNEE_L-FOOT_HEEL_L(19)
PELVIS-HIP_R(20)  HIP_R-KNEE_R(21)  KNEE_R-FOOT_HEEL_R(22)
```

_Bone-chain offsets verified via `schema/client_dll.json`, the regenerated SDK static-asserts, and IDA/mydisasm of `CalculateWorldSpaceBones` (`client.dll+0xA49A50`), build 14172, 2026-07-23. Bone indices are model-skeleton data (informational, not a binary offset)._

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
uintptr_t lpc_ptr = client_base + 0x237FB70;  // dwLocalPlayerController (build 14172)
uintptr_t lpc = *(uintptr_t*)lpc_ptr;
if (!lpc) return; // no controller yet

// Read rank
int rank = *(int*)(lpc + 0x888);

// Get inventory services
uintptr_t inv = *(uintptr_t*)(lpc + 0x818);
if (!inv) return;
int level = *(int*)(inv + 0x74);

// Get game rules
uintptr_t gr_ptr = client_base + 0x23A49D8;  // dwGameRules (build 14172)
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

Читаемые сводки по ~10 C++-классам CS2, к которым RE-проекты возвращаются постоянно. Оффсеты полей классов актуальны по билд 14172 включительно (не менялись с 14169/14170 — в 14172 сдвинулись на +0x1000 только runtime-globals в примере доступа ниже), сверены пополе с установленной игрой. Machine-readable canonical data — в `schema/client_dll.json`.

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

_Сверено против `schema/client_dll.json` (`cs2-dumper` HEAD, билд 14169) и установленной игры, 2026-07-19._

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

### CSkeletonInstance / CModelState — world-space bone-матрица (ESP-скелет)

Анимированные bone-трансформы, которые рисует ESP, живут внутри scene-node'а entity. У любого анимированного pawn'а `m_pGameSceneNode` (оффсет `0x330`) — **это** `CSkeletonInstance` (`CSkeletonInstance : CGameSceneNode`, размер класса `0x490`), который встраивает `CModelState` (размер класса `0x2b0`) по `0x140` и, в своей engine-internal области, указатель на world-space bone-массив.

**Цепочка доступа (каждый оффсет сверен с билдом 14172):**

```
pawn                            // C_CSPlayerPawn*
  +0x330  m_pGameSceneNode   -> CSkeletonInstance*         [schema: C_BaseEntity]
skel = *(pawn + 0x330)
  +0x140  m_modelState       -> CModelState (встроен)      [schema + SDK static_assert]
  +0x1C0  (= m_modelState+0x80) -> CTransform* boneArray   [disasm/IDA: CalculateWorldSpaceBones]
  +0x1D4  (= m_modelState+0x94) -> uint16 boneCount
boneArray = *(skel + 0x1C0)
  bone[i] = boneArray + i*0x20                             // CTransform, 0x20 байт
    +0x00  VectorAligned m_vPosition   // world-space xyz   <- это читает ESP
    +0x10  Quaternion    m_orientation
```

**Сверка с форумом (пост yougame.biz, 2026-05-19):** там указан `m_modelState = 0x150`. Для текущего билда 14172 это **неверно** — реальный оффсет **`0x140`** (client) / `0x120` (server). Подтверждено тремя независимыми способами:

1. **Схема** — `schema/client_dll.json`: `CSkeletonInstance.m_modelState = 0x140`.
2. **Регенерированный SDK** — `CSkeletonInstance` (0x490) встраивает `CModelState m_modelState` по `0x140`; `CModelState.m_hModel` — по `0xA0`.
3. **Дизасм** — `CalculateWorldSpaceBones` (`client.dll+0xA49A50`) делает `lea rcx, [this+0x140]` и передаёт как `CModelState*`, а `m_hModel` читает по `this+0x1E0` (= `0x140 + 0xA0`). IDA Hex-Rays подтверждает bone-массив как `*(this+0x1C0)` с индексацией `+ 32*i` (шаг `0x20`, две 16-байтные SIMD-записи на кость).

Пост старше 14172 на ~2 месяца; его `0x150` — устаревший билд.

**Чтение кости:**

```cpp
uintptr_t skel  = read<uintptr_t>(pawn + 0x330);       // m_pGameSceneNode == CSkeletonInstance
uintptr_t bones = read<uintptr_t>(skel + 0x1C0);       // world-space CTransform-массив
uint16_t  count = read<uint16_t>(skel + 0x1D4);
Vector    head  = read<Vector>(bones + BONE_HEAD * 0x20); // позиция по CTransform+0x0
```

**Bone-индексы.** Это порядок *стандартного скелета player-модели CS2*. Они лежат в скелете `.vmdl_c` модели, а **не** в `client.dll` и не в схеме — то есть это model-данные, а не оффсет в бинаре, и их нельзя сверить с DLL. Для общего player-рига они стабильны и совпадают со списком форума:

| idx | кость | idx | кость | idx | кость |
|----|------|----|------|----|------|
| 0 | ORIGIN | 12 | CLAVICLE_R | 23 | CHEST |
| 1 | PELVIS | 13 | SHOULDER_R | 24 | GUN |
| 2 | SPINE0 | 14 | ELBOW_R | 25 | EYE_L |
| 3 | SPINE1 | 15 | HAND_R | 26 | EYE_R |
| 4 | SPINE2 | 17 | HIP_L | 27 | RANDOM |
| 6 | NECK | 18 | KNEE_L | 28 | CVJ_BONE |
| 7 | HEAD | 19 | FOOT_HEEL_L | 74 | FOOT_TOES_L_T |
| 8 | CLAVICLE_L | 20 | HIP_R | 77 | FOOT_TOES_R_T |
| 9 | SHOULDER_L | 21 | KNEE_R | 81 | FOOT_TOES_L_CT |
| 10 | ELBOW_L | 22 | FOOT_HEEL_R | 86 | FOOT_TOES_R_CT |
| 11 | HAND_L |  |  | 128 | BONE_MAX (потолок счётчика) |

**Skeleton links** — пары костей, которые ESP соединяет в «палочного человечка», выведены из индексов выше:

```
HEAD(7)-NECK(6)  NECK-SPINE2(4)  SPINE2-SPINE1(3)  SPINE1-SPINE0(2)  SPINE0-PELVIS(1)
NECK-SHOULDER_L(9)  SHOULDER_L-ELBOW_L(10)  ELBOW_L-HAND_L(11)
NECK-SHOULDER_R(13) SHOULDER_R-ELBOW_R(14)  ELBOW_R-HAND_R(15)
PELVIS-HIP_L(17)  HIP_L-KNEE_L(18)  KNEE_L-FOOT_HEEL_L(19)
PELVIS-HIP_R(20)  HIP_R-KNEE_R(21)  KNEE_R-FOOT_HEEL_R(22)
```

_Оффсеты bone-цепочки сверены через `schema/client_dll.json`, static-asserts регенерированного SDK и IDA/mydisasm по `CalculateWorldSpaceBones` (`client.dll+0xA49A50`), билд 14172, 2026-07-23. Bone-индексы — данные скелета модели (информационно, не оффсет в бинаре)._

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
uintptr_t lpc_ptr = client_base + 0x237FB70;  // dwLocalPlayerController (build 14172)
uintptr_t lpc = *(uintptr_t*)lpc_ptr;
if (!lpc) return; // no controller yet

// Read rank
int rank = *(int*)(lpc + 0x888);

// Get inventory services
uintptr_t inv = *(uintptr_t*)(lpc + 0x818);
if (!inv) return;
int level = *(int*)(inv + 0x74);

// Get game rules
uintptr_t gr_ptr = client_base + 0x23A49D8;  // dwGameRules (build 14172)
uintptr_t gr = *(uintptr_t*)gr_ptr;
uint8_t is_valve_ds = *(uint8_t*)(gr + 0xA4);
```

### Дисциплина обновления

**При апдейте этого файла:**

1. Обнови build-reference в заголовке.
2. Меняй ТОЛЬКО те оффсеты, которые ДЕЙСТВИТЕЛЬНО сдвинулись (сверься через diff `schema/client_dll.json`).
3. Добавь строку в `vmp_targets/README.md` «Recent verifications» с датой сессии и PID cs2.

**Источники истины:** `schema/client_dll.json` (canonical), `a2x/cs2-dumper` (upstream), running cs2 на момент правки.
