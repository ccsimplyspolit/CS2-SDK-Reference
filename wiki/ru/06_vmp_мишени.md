# VMP-мишени — какие поля CS2 трогают VMP-плагины

Реверснуто из живых сэмплов FVA ("FuckVacAgain"), VacLiveBypass ("VLB"),
RankSpooferDriver и IsValveDS. Это тот cross-reference, ради которого
этот репо существует.

## Матрица

| Что | Поле CS2 / RVA | Тип | Кто трогает | Зачем |
|---|---|---|---|---|
| `m_bIsValveDS` gate | `C_CSGameRules + 0xA4` | bool | FVA (FNV1a `0xB6E8F068409FEF6C`), VLB, IsValveDS | Gate-byte для anti-VAC хелперов |
| CreateMove хук | `client.dll + 0xACEF90` (live) / `0xB09528` (14170) | function | FVA (Hook A), VLB (`create_move_hook.cpp`) | Перехват сборки usercmd за тик |
| SerializePartialToArray | `client.dll + 0x1189930` (live) / `0x11AD520` (14170) | function | FVA (Hook C), VLB (`serialize_to_array_hook.cpp`) | Инспекция / мутация исходящих UserCmd |
| LevelInit | `client.dll + 0xAFDFB0` (live) / `0xB3A600` (14170) | function | FVA (Hook B), VLB (`level_init_hook.cpp`) | Сброс кэшей на map-load |
| ShouldUpdateSequences | `animationsystem.dll + 0x14F950` (14170) | function | FVA (Hook D), VLB (`animation_hook.cpp`) | Пропуск animation-обновлений |
| `input_history[i].view_angles` | `CSGOInputHistoryEntryPB.view_angles` (тег 2) | float3 | FVA Section-J, VLB `phase_b2.cpp` | Wrap дельт → (-180, 180], echo back |
| `subtick_moves` | `CBaseUserCmdPB.subtick_moves` (тег 18) | repeated | **НЕ трогает FVA** — миф. VLB — тоже нет. | — |
| `CInButtonStatePB.attack` | тег ~3, bit-field | flag | FVA (fire gate), VLB `FVA_GATE_MODE_ATTACK` | Angle-изменения только при attack-pressed |
| `CCSPlayerController.m_iCompetitiveRanking` | `+0x888` | int32 | RankSpooferDriver Phase 1.5 | Спуф ранка локально |
| `CCSPlayerController.m_iCompetitiveWins` | `+0x88C` | int32 | RankSpooferDriver | Спуф wins-счётчика |
| `InventoryServices.m_nPersonaDataPublicLevel` | `+0x74` | int32 | RankSpoofer v1.14+ profile-block | Спуф Steam CS-level |
| `InventoryServices.m_nPersonaDataXpTrailLevel` | `+0x84` | int32 | RankSpoofer | Спуф XP-trail |
| `m_hPlayerPawn` | `CCSPlayerController + 0x914` | CHandle | FVA (FNV1a `0x737DDDA9E99E0B5D`), VLB | Резолв локальной pawn |
| `m_iHealth` | `C_BaseEntity + 0x34C` | int32 | FVA (fire-flag byte, FNV1a `0x9320AED4F2DDF04B`), VLB | Alive-check для fire gate |
| `m_nTickBase` | `CBasePlayerController + 0x6B8` | int32 | FVA (live subtick counter, FNV1a `0xC08C21B68A2C746D`) | Тик-референс |

## Четыре FNV1a-64 хэша FVA

FVA не хардкодит оффсеты. Он хэширует `type_name + "->" + field_name`
через FNV1a-64 и ищет результат в runtime schema-manifest (грузится из
`assets/manifest.bin`). Именно поэтому один и тот же VMP-DLL переживает
cs2-schema апдейты — пока имя поля не меняется и manifest свежий, код
работает.

```
hash = FNV1a-64(type_name + "->" + field_name)

0xB6E8F068409FEF6C  ←  fnv1a("C_CSGameRules->m_bIsValveDS")
0x737DDDA9E99E0B5D  ←  fnv1a("CCSPlayerController->m_hPlayerPawn")
0x9320AED4F2DDF04B  ←  fnv1a("C_BaseEntity->m_iHealth")
0xC08C21B68A2C746D  ←  fnv1a("CBasePlayerController->m_nTickBase")
```

Проверяемо в Python:

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

Паттерн переиспользуемый — polynomial FNV1a-64 `0x100000001b3`,
offset basis `0xcbf29ce484222325`. Ищи против своего manifest или
против живого cs2, обходя schema system.

## Section-J — angle-wrap семантика

Section-J FVA — тело anti-aim. Упрощённый псевдокод после
де-обфускации:

```
для каждого entry в usercmd.input_history:
    yaw   = entry.view_angles.y
    pitch = entry.view_angles.x
    // Wrap в (-180, 180]
    yaw = wrap180(yaw)
    pitch = wrap180(pitch)
    // Применяем desync / anti-aim (delta)
    entry.view_angles.y = wrap180(yaw + delta.yaw)
    entry.view_angles.x = wrap180(pitch + delta.pitch)
    // render_tick_count сохраняем
```

Delta = 0 — "self-echo", пишем wrapped-but-unchanged angles обратно.
FVA этим пользуется в disarm / diagnostic режиме — доказывает, что
Section-J крутится, не меняя геймплей. `wrap180`:

```c
float wrap180(float a) {
    while (a > 180.f)  a -= 360.f;
    while (a <= -180.f) a += 360.f;
    return a;
}
```

## Типичные мифы

1. **"FVA пишет subtick_moves"** — нет. Subtick-moves — sub-tick
   mouse/key transitions, они не трогаются. Цель перезаписи —
   `input_history[i].view_angles`.
2. **"FVA хардкодит оффсеты"** — нет. FNV1a-хэшированный schema
   lookup + RTTI-guarded vtable identification.
3. **"Gate byte — `m_bIsHostFrame`"** — нет. Это `m_bIsValveDS`.
   `m_bIsHostFrame` — не про то.
4. **"Hook C сравнивает GetTypeName"** — нет. `CTypeName::Get()` сломан
   `LazyString` (возвращает мусор до первого вызова
   materialisation-функции). FVA сравнивает vtable-pointer напрямую.

## Recent verifications

| Дата | cs2 PID | Билд | H1 | H2 | H3 | H4 | Метод |
|---|---|---|---|---|---|---|---|
| 2026-07-16 | 53000 | 14170 | ✅ | ✅ | ✅ | ✅ | ctypes RPM + capstone. Скрипт: [VMP-Deob/tools/analysis_suite/rt_verify_all_hooks.py](https://github.com/ccsimplyspolit/VMP-Deob/blob/main/tools/analysis_suite/rt_verify_all_hooks.py) |

Новые строки — в `vmp_targets/README.md` после каждой сессии
верификации.

## Дисциплина drift

Между 14169 и 14170:
- Все schema-поля выше остались на прежних оффсетах в своих классах.
- H1 CreateMove: **не менялся** (`0xB09528`)
- H2 LevelInit: **не менялся** (`0xB3A600`)
- H3 SerializePartial: **сдвинулся на +0x40** (`0x11AD4E0 → 0x11AD520`)
- H4 ShouldUpdate: **сдвинулся на +0x960** (`0x14EFF0 → 0x14F950`)

VLB pattern-scan это ест без ребилда. FVA перегружает manifest на
старте — если manifest обновили под новый билд, FVA тоже выживает
без ребилда. Это и есть весь дизайн-цель паттерна
manifest+FNV1a: cs2-апдейт не должен требовать пере-VMP'ить DLL.

## Откуда числа

- Schema-хэши: реверс `Section-J` unprotected-билда FVA
  (`SafetyPlugin-Unprotected.dll`) — ветка с debug-символами для
  research.
- RVA функций: sig-scan через `capstone` против живого cs2 — скрипт
  выше.
- Оффсеты полей: `schema/client_dll.json` (этот репо, из
  `a2x/cs2-dumper`).
- Protobuf-теги: `protobufs/cs_usercmd.proto` (этот репо, из
  `SteamDatabase/Protobufs`).
