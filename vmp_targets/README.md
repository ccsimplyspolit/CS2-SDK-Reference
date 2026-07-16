# CS2 fields that VMP-protected DLLs target

---

## English

Cross-reference between (a) known VMP-protected CS2 helper plugins and (b) the specific CS2 fields, protobuf tags, and function RVAs they touch. Compiled from live reversing of production samples (FVA/FuckVacAgain, VacLiveBypass port, RankSpoofer projects).

### Matrix — what touches what

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
| **CCSPlayerController.m_iCompetitiveRanking** | `CCSPlayerController + 0x888` | int32 | RankSpooferDriver (Phase 1.5 direct-write) | Local rank spoofing |
| **CCSPlayerController.m_iCompetitiveWins** | `CCSPlayerController + 0x88C` | int32 | RankSpooferDriver | Wins count spoofing |
| **InventoryServices.m_nPersonaDataPublicLevel** | `CCSPlayerController.m_pInventoryServices → +0x74` | int32 | RankSpoofer (v1.14+ profile block) | Steam CS level spoof |
| **InventoryServices.m_nPersonaDataXpTrailLevel** | `+0x84` | int32 | RankSpoofer | XP trail spoof |
| **`m_hPlayerPawn`** | `CCSPlayerController + 0x914` | CHandle | FVA (subobj gate via FNV1a `0x737DDDA9E99E0B5D`), VLB | Local pawn resolution |
| **`m_iHealth`** | `C_BaseEntity + 0x34C` | int32 | FVA (fire flag byte via FNV1a `0x9320AED4F2DDF04B`), VLB | Alive check for fire gate |
| **`m_nTickBase`** | `CBasePlayerController + 0x6B8` | int32 | FVA (live subtick counter via FNV1a `0xC08C21B68A2C746D`) | Tick reference |

### FVA's 4 FNV1a-64 schema hashes

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

### Notes on drift

Between builds 14169 and 14170 (2026-07-11 → 2026-07-15), **every entry in the "Type" column above stayed at the same offset in its class**. Only the FUNCTION RVAs moved:

- H1 CreateMove: unchanged (still `0xB09528`)
- H2 LevelInit: unchanged (still `0xB3A600`)
- H3 SerializePartial: moved `+0x40` (`0x11AD4E0 → 0x11AD520`)
- H4 ShouldUpdate: moved `+0x960` (`0x14EFF0 → 0x14F950`)

VLB's pattern-scan design absorbs both drifts without a rebuild. Verified live 2026-07-16.

### Recent verifications

| Date | cs2 PID | Build | H1 | H2 | H3 | H4 | Method |
|---|---|---|---|---|---|---|---|
| 2026-07-16 | 53000 | 14170 | OK | OK | OK | OK | ctypes RPM + capstone (script in [VMP-Deob/tools/analysis_suite/rt_verify_all_hooks.py](https://github.com/ccsimplyspolit/VMP-Deob/blob/main/tools/analysis_suite/rt_verify_all_hooks.py)) |

Add new rows here after each verification session.

---

## Русский

Cross-reference между (а) известными VMP-защищёнными CS2-хелпер-плагинами и (б) конкретными полями CS2, protobuf-тегами и RVA-функциями, которые они трогают. Собрано из живого реверса production-сэмплов (FVA/FuckVacAgain, VacLiveBypass-порт, RankSpoofer-проекты).

### Матрица — что во что залезает

| Концерн | Поле CS2 / RVA | Тип | Кто трогает | Зачем |
|---|---|---|---|---|
| **`m_bIsValveDS` gate** | `C_CSGameRules + 0xA4` | bool | FVA (читает через FNV1a `0xB6E8F068409FEF6C`), VLB, IsValveDS | Gate-байт для anti-VAC-хелперов; при 1 = официальный сервер, активироваться |
| **CreateMove hook** | `client.dll + 0xACEF90` (live) / `0xB09528` (14170) | function | FVA (Hook A), VLB (`create_move_hook.cpp`) | Перехват сборки user command на каждый тик |
| **SerializePartialToArray** | `client.dll + 0x1189930` (live) / `0x11AD520` (14170) | function | FVA (Hook C), VLB (`serialize_to_array_hook.cpp`) | Инспекция / мутация исходящих UserCmd-protobuf'ов |
| **LevelInit** | `client.dll + 0xAFDFB0` (live) / `0xB3A600` (14170) | function | FVA (Hook B), VLB (`level_init_hook.cpp`) | Сброс кэшей при загрузке карты |
| **ShouldUpdateSequences** | `animationsystem.dll + 0x14F950` (14170, было `0x14EFF0`) | function | FVA (Hook D), VLB (`animation_hook.cpp`) | Пропуск animation-апдейтов при определённых условиях |
| **input_history[i].view_angles** | `CSGOInputHistoryEntryPB.view_angles` (proto tag 2) | float3 | FVA Section-J, VLB (`phase_b2.cpp`) | Обёртка дельт в диапазон (-180,180], echo-back — anti-aim |
| **subtick_moves** | `CBaseUserCmdPB.subtick_moves` (proto tag 18) | repeated | **FVA НЕ трогает** (распространённый миф); VLB тоже не трогает | Все думают, что мишень тут, но это неверно — FVA целится в `input_history` |
| **CInButtonStatePB.attack** | `CInButtonStatePB` (proto tag ~3, бит) | flag | FVA (fire gate), VLB (`FVA_GATE_MODE_ATTACK`) | Стрелять углами только при нажатой attack |
| **CCSPlayerController.m_iCompetitiveRanking** | `CCSPlayerController + 0x888` | int32 | RankSpooferDriver (Phase 1.5 direct-write) | Локальный ранк-спуф |
| **CCSPlayerController.m_iCompetitiveWins** | `CCSPlayerController + 0x88C` | int32 | RankSpooferDriver | Спуф счётчика wins |
| **InventoryServices.m_nPersonaDataPublicLevel** | `CCSPlayerController.m_pInventoryServices → +0x74` | int32 | RankSpoofer (v1.14+, блок профиля) | Спуф Steam CS level |
| **InventoryServices.m_nPersonaDataXpTrailLevel** | `+0x84` | int32 | RankSpoofer | Спуф XP-trail |
| **`m_hPlayerPawn`** | `CCSPlayerController + 0x914` | CHandle | FVA (subobj-gate через FNV1a `0x737DDDA9E99E0B5D`), VLB | Резолв локального pawn'а |
| **`m_iHealth`** | `C_BaseEntity + 0x34C` | int32 | FVA (fire-flag-байт через FNV1a `0x9320AED4F2DDF04B`), VLB | Alive-check для fire gate |
| **`m_nTickBase`** | `CBasePlayerController + 0x6B8` | int32 | FVA (live subtick-counter через FNV1a `0xC08C21B68A2C746D`) | Референс тика |

### 4 FNV1a-64 schema-хэша FVA

Отреверсено из FVA (SafetyPlugin-Unprotected) — плагин резолвит schema-поля, хэшируя `type_name + "->" + field_name` в 64-битный FNV1a и ища результат в runtime-загружаемом манифесте.

```
hash = FNV1a-64(type_name + "->" + field_name)

0xB6E8F068409FEF6C  →  C_CSGameRules->m_bIsValveDS         (gate byte)
0x737DDDA9E99E0B5D  →  CCSPlayerController->m_hPlayerPawn   (subobj base)
0x9320AED4F2DDF04B  →  C_BaseEntity->m_iHealth              (fire flag)
0xC08C21B68A2C746D  →  CBasePlayerController->m_nTickBase   (live subtick counter)
```

Любой плагин может переиспользовать этот паттерн. Достаточно реализовать FNV1a-64 и lookup против runtime-таблицы schema.

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

### Заметки про drift

Между билдами 14169 и 14170 (2026-07-11 → 2026-07-15) **все записи в колонке «Тип» выше остались на прежних оффсетах в своих классах**. Сдвинулись только RVA ФУНКЦИЙ:

- H1 CreateMove: без изменений (всё ещё `0xB09528`)
- H2 LevelInit: без изменений (всё ещё `0xB3A600`)
- H3 SerializePartial: сдвиг `+0x40` (`0x11AD4E0 → 0x11AD520`)
- H4 ShouldUpdate: сдвиг `+0x960` (`0x14EFF0 → 0x14F950`)

Pattern-scan-архитектура VLB съедает оба drift'а без ребилда. Подтверждено live 2026-07-16.

### Свежие верификации

| Дата | cs2 PID | Билд | H1 | H2 | H3 | H4 | Метод |
|---|---|---|---|---|---|---|---|
| 2026-07-16 | 53000 | 14170 | OK | OK | OK | OK | ctypes RPM + capstone (скрипт в [VMP-Deob/tools/analysis_suite/rt_verify_all_hooks.py](https://github.com/ccsimplyspolit/VMP-Deob/blob/main/tools/analysis_suite/rt_verify_all_hooks.py)) |

Добавляй новые строки сюда после каждой сессии верификации.
