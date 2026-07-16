# Protobufs подробно

CS2 гоняет по сети всё через Google Protocol Buffers — user commands,
game events, matchmaking, demo. Папка `protobufs/` — зеркало
`SteamDatabase/Protobufs/csgo/` и содержит все 43 `.proto` файла cs2.

## Почему нужны все 43

В большинстве туториалов показывают один-два, и все кочуют один и тот
же `cs_usercmd.proto` snippet. По факту protobuf'ы кросс-ссылаются:
`CSGOUserCmdPB` импортит `CBaseUserCmdPB` из `usercmd.proto`, тот —
`CInButtonStatePB` и `CMsgQAngle` из `networkbasetypes.proto`. Без всех
трёх сериализатор не соберётся. Репо держит все файлы, чтобы `protoc`
из коробки работал.

## Файлы по доменам

### On-wire user command — зона FVA / VLB

| Файл | Что внутри |
|---|---|
| `cs_usercmd.proto` | `CSGOUserCmdPB` (base + input_history), `CSGOInputHistoryEntryPB` (view_angles — цель FVA angle-fixup). |
| `usercmd.proto` | `CBaseUserCmdPB` — внешний envelope; содержит `subtick_moves`, `move_crc`, buttons, tick_count. |
| `networkbasetypes.proto` | `CInButtonStatePB`, `CMsgQAngle`, `CMsgVector`, `CMsgTransform` — примитивы, которые переиспользуют все сообщения. |

Аудитишь anti-aim хелпер? Эти три файла — 90 % картины. Реальные
теги полей, которые трогают плагины, — в `06_vmp_мишени.md`.

### Game events

| Файл | Что внутри |
|---|---|
| `gameevents.proto` | Общий event-dispatch (`CMsgSource1LegacyGameEventList` и т.п.). |
| `cs_gameevents.proto` | CS-специфичные события — round start, weapon fire и т.д. |
| `cs_prediction_events.proto` | Prediction-события, которые клиент шлёт до подтверждения сервером. |
| `prediction_events.proto` | Generic prediction-events. |

### GameCoordinator (Steam matchmaking, ranks, инвентарь)

| Файл | Что внутри |
|---|---|
| `base_gcmessages.proto` | Базовая GC-инфра. |
| `cstrike15_gcmessages.proto` | **CSGO-специфичный GC** — ранки, wins, медали, значки. Классическая **rank-spoofer мишень** при спуфинге по проводу (в противовес спуфу в памяти через `CCSPlayerController + 0x888`). |
| `econ_gcmessages.proto` | Economy — предметы инвентаря, скины. |
| `gcsdk_gcmessages.proto` | GC SDK plumbing. |
| `gcsystemmsgs.proto` | GC системные сообщения. |
| `engine_gcmessages.proto` | Мост Engine ↔ GC. |

### Client / server user messages

| Файл | Что внутри |
|---|---|
| `clientmessages.proto` | Клиент → сервер generic. |
| `cstrike15_usermessages.proto` | CS-специфичные user messages — чат, HUD, уведомления. |
| `usermessages.proto` | Generic user messages. |
| `c_peer2peer_netmessages.proto` | P2P (SDR). |

### Сетевой слой

| Файл | Что внутри |
|---|---|
| `netmessages.proto` | Ядро net-сообщений, connection setup. |
| `network_connection.proto` | Состояние соединения. |
| `connectionless_netmessages.proto` | Handshake, stateless-запросы. |
| `networksystem_protomessages.proto` | RPC network-подсистемы. |
| `steamnetworkingsockets_messages*.proto` | Steam Networking Sockets (SDR transport). |
| `steamdatagram_messages*.proto` | Steam Datagram (SDR relays). |

### Демо-формат

| Файл | Что внутри |
|---|---|
| `demo.proto` | CS2 demo-контейнер — `CDemoFileHeader`, `CDemoPacket` и т.д. |
| `fatdemo.proto` | "Fat demo" — расширенный формат, больше state per packet. |

### Steam-инфра (для CS2-RE обычно не нужна)

| Файл | Что внутри |
|---|---|
| `steammessages.proto`, `steammessages_base.proto` | База Steam-RPC. |
| `steammessages_cloud.steamworkssdk.proto` | Steam Cloud. |
| `steammessages_gamenetworkingui.proto` | Networking UI. |
| `steammessages_helprequest.steamworkssdk.proto` | Help/support. |
| `steammessages_oauth.steamworkssdk.proto` | OAuth. |
| `steammessages_player.steamworkssdk.proto` | Player RPC. |
| `steammessages_publishedfile.steamworkssdk.proto` | Workshop / published files. |
| `steammessages_unified_base.steamworkssdk.proto` | Unified messaging base. |
| `steammessages_gc.proto` | Мост Steam ↔ GC. |
| `source2_steam_stats.proto` | Stats reporting. |

### Прочее

| Файл | Что внутри |
|---|---|
| `enums_clientserver.proto` | Общие enum'ы (`PlayerConnectedState`, `RoundEndReason`, ...). |
| `te.proto` | Temp entities (партиклы, декали, ...). |
| `uifontfile_format.proto` | Bitmap-font контейнер для UI. |
| `valveextensions.proto` | Valve-специфичные `.proto`-расширения. |

## Три сообщения, важные для VMP-работы

### `CSGOUserCmdPB` (из `cs_usercmd.proto`)

Самый внешний envelope user-command'а, который реально уходит. Состоит
из `CBaseUserCmdPB` (ниже) + `repeated CSGOInputHistoryEntryPB
input_history` — per-subtick history-слоты, которые переписывает
Section-J FVA.

Ключевые теги:
- Tag 1: `base` (`CBaseUserCmdPB`)
- Tag 2: `input_history` (repeated `CSGOInputHistoryEntryPB`)
- Tag 3: `attack1_start_history_index` (int32)
- Tag 4: `attack2_start_history_index` (int32)

### `CBaseUserCmdPB` (из `usercmd.proto`)

Базовый envelope. Каждый cs2-usercmd — это он + CSGO-расширения.
Заметные теги:

- Tag 1: `command_number` (int32)
- Tag 2: `tick_count` (int32)
- Tag 20: `buttons_pb` (`CInButtonStatePB`)
- Tag 27: `move_crc` (string) — FVA пишет сюда composed scratch (Hook A)
- Tag 18: `subtick_moves` (repeated `CSubtickMoveStep`) — часто (и
  ошибочно) считается anti-aim целью. FVA его не трогает.

### `CSGOInputHistoryEntryPB` (из `cs_usercmd.proto`)

Одна subtick-запись input-state. Пересобирается каждый тик, шлётся
внутри `input_history`. Теги:

- Tag 2: `view_angles` (`CMsgQAngle`) — **реальная anti-aim цель FVA**
- Tag 3: `cl_interp` (`CMsgVector`)
- Tag 4: `render_tick_count` (int32) — сохраняется при перезаписи FVA

## Сборка под свой проект

```bash
protoc -I. --cpp_out=<outdir> \
    cs_usercmd.proto usercmd.proto networkbasetypes.proto
```

Ту же версию protoc, что и у CS2 (v3.x). Если словил "cannot find
import" — добавляй файл, который импортит падающий proto. Они сильно
кросс-ссылаются.

Для Python:

```bash
protoc -I. --python_out=<outdir> cs_usercmd.proto usercmd.proto networkbasetypes.proto
```

## Refresh-воркфлоу

Делается `sync_from_upstream.py`. Он дёргает
`api.github.com/repos/SteamDatabase/Protobufs/contents/csgo?ref=master`
за листингом, потом тянет каждый файл с `raw.githubusercontent.com`.
SHA-256 сравнение; пишет только изменённое.

Ручной эквивалент:

```bash
git clone --depth=1 https://github.com/SteamDatabase/Protobufs.git tmp
cp tmp/csgo/*.proto ./protobufs/
rm -rf tmp
```

## Типичный миф: subtick vs input_history

Большая часть публичных CS2 anti-aim writeup'ов утверждает, что плагин
"переписывает `subtick_moves`". Они ошибаются.
`CBaseUserCmdPB.subtick_moves` — это интра-тик movement-шаги (мышь-дельты,
key-transitions с sub-tick таймингом). FVA — и любой реальный
production anti-aim — переписывает `CSGOUserCmdPB.input_history[i].view_angles`,
а не subtick. Когда в дизасме VMP-сэмпла видишь обход `input_history` —
это и есть настоящая цель.
