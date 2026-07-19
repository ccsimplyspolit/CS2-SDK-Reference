# Schema подробно

Файлы `schema/` содержат byte-offset каждого члена каждого класса, что идёт с
cs2. Ниже — как они устроены, почему оффсеты почти не двигаются и как их
обходить программно.

## Файлы

В `schema/` лежит по одному JSON на каждый модуль, который выдаёт cs2-dumper —
всего **18 модулей, 3330 классов, 16595 полей**. Три, к которым обращаешься чаще
всего:

| Файл | Примерный размер | Что внутри |
|---|---|---|
| `client_dll.json` | ~214 КБ | 563 клиентских класса (`CCSPlayerController`, `C_CSGameRules`, `C_BaseEntity`, entity, оружие). 3189 полей. |
| `server_dll.json` | ~495 КБ | 990 серверных классов, 5871 поле. Самый большой — на сервере логики больше; ещё и на клиенте грузится для prediction. Учти: `CCSPlayerController` есть и здесь, но по *другим* оффсетам, чем клиентская копия. |
| `engine2_dll.json` | ~11 КБ | Engine-слой классов. Маленький, потому что большинство engine-state прячется за opaque-интерфейсами. |

Остальные — `animationsystem_dll`, `particles_dll`, `soundsystem_dll`,
`pulse_system_dll`, `vphysics2_dll`, `worldrenderer_dll`, `materialsystem2_dll`,
`schemasystem_dll` и другие — устроены точно так же. `tools/sync_from_upstream.py`
подхватывает любой `*_dll.json`, что публикует upstream, так что новые модули
появляются здесь автоматически.

## Структура JSON

Формат одинаковый:

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
        "metadata": [...]
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

Живой пример из `client.dll`:

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

- `2184` десятично — `0x888`; с этого байта начинается
  `m_iCompetitiveRanking` внутри экземпляра `CCSPlayerController`.
- Поля — int'ы; JSON не несёт per-field type info. Тип узнаёшь либо из
  CS2 SDK-хэдеров, либо через массив `metadata` — cs2-dumper туда
  кладёт `MNetworkVarType` и подобные атрибуты, когда они есть.

## Чтение поля, минимальный Python

```python
import json
c = json.load(open('schema/client_dll.json'))
fields = c['client.dll']['classes']['CCSPlayerController']['fields']
for k, v in list(fields.items())[:10]:
    print(f'{k:40s} 0x{v:X}')
```

Вывод (билд 14169, сверено с установленной игрой 2026-07-19):

```
m_bAbandonAllowsSurrender                0x8F2
m_bAbandonOffersInstantSurrender         0x8F3
m_bCanControlObservedBot                 0x910
m_bCannotBeKicked                        0x8F0
m_bControllingBot                        0x908
m_bDisconnection1MinWarningPrinted       0x8F4
m_bEverFullyConnected                    0x8F1
m_bEverPlayedOnTeam                      0x854
m_bFireBulletsSeedSynchronized           0x95D
m_bHasBeenControlledByPlayerThisRound    0x90A
```

## Почему оффсеты почти не двигаются

`MNetworkVar` / `MNetworkVarNames` в CS2-шном C++ объявляют поля частью
"network table", у которой byte-layout стабилен между патчами — Valve
хочет, чтобы prediction и demo работали кросс-билд. Новое поле
аппендится в конец; существующие остаются на прежних оффсетах.
Исключения:

1. **Мажорные schema-реструктуры** — Valve переименовывает / разбивает
   классы. Редко; ~раз в квартал. Всё едет.
2. **Изменения compiler-layout** — новый MSVC меняет bitfield-packing.
   Очень редко.
3. **Изменение name-hash anonymous inner struct** — в JSON только
   косметика, оффсеты не двигаются. Это и случилось между 14169 и
   14170.

**Проверено: 14169 → 14170 (2026-07-11 → 2026-07-15) — ноль изменений
оффсетов по всем 3189 полям.** Только косметический hash на одном
anonymous inner struct.

## Прогулка по parent-цепочке

`CCSPlayerController extends CBasePlayerController`. Parent-поля НЕ
дублируются в `fields` ребёнка — их достаёшь, идя по цепочке `parent`.
Пример: `CBasePlayerController.m_nTickBase` в `0x6B8` останется в
`+0x6B8` внутри экземпляра `CCSPlayerController` (одиночное
наследование, virtual base'ов в SDK нет).

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

## 10 полей, которые понадобятся любому CS2-плагину

Copy-paste ready. Live-значения на 2026-07-16 (билд 14170):

| Класс | Поле | Оффсет (hex) | Тип |
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

Это тот набор чтений, к которому приходят FVA, VLB и RankSpoofer. Полная
таблица "кто что трогает" — в `06_vmp_мишени.md`.

## Дисциплина drift

Каждый раз при cs2-апдейте:

1. Запускай `sync_from_upstream.py` — тянет свежие schema JSON.
2. Запускай `verify_offsets.py --pid <cs2_pid>` — проверяет, что
   `dw*`-globals по-прежнему дереферятся в валидные pointer.
3. Для member'ов критических классов — spot-check живой read: возьми
   `[client.dll + dwLocalPlayerController]`, деференцируй, читай
   `+0x888`, проверяй, что значение — валидный competitive rank
   (0..40000).
4. Если что-то двинулось — коммить новые `schema/*.json` и добавь
   строку в `vmp_targets/README.md` "Recent verifications".

## Регенерация с нуля

Если хочешь свой JSON под конкретный cs2-билд, не дожидаясь HEAD
`a2x/cs2-dumper`:

```powershell
git clone https://github.com/a2x/cs2-dumper.git
cd cs2-dumper
# Сначала запусти cs2 в фоне, потом:
cargo run --release
# Output ложится в .\output\
copy .\output\client_dll.json C:\path\to\CS2-SDK-Reference\schema\client_dll.json
```

Требования: Rust toolchain (rustup), запущенный cs2, elevated shell
(SeDebugPrivilege). На современном железе dumper отрабатывает за
5–10 секунд.
