# CS2 Protobufs — 43 .proto files from SteamTracking

---

## English

Protocol Buffers definitions used by CS2 (client + server + Steam GC + demo format). Mirror of the `csgo/` subdirectory of [SteamDatabase/Protobufs](https://github.com/SteamDatabase/Protobufs). Refresh from upstream after every major CS2 update.

### Files organised by domain

**On-wire user command (input):**

- **`cs_usercmd.proto`** — CSGO-specific extensions to UserCmd (contains `CSGOUserCmdPB` with `input_history`, `attack1_start_history_index`, `attack2_start_history_index`). **Primary VMP target.**
- **`usercmd.proto`** — Base `CBaseUserCmdPB` envelope.
- **`networkbasetypes.proto`** — `CInButtonStatePB`, `CMsgQAngle`, `CMsgVector`, ...

**Game events:**

- **`gameevents.proto`** — Base game events.
- **`cs_gameevents.proto`** — CS-specific game events.
- **`cs_prediction_events.proto`** — Prediction-related events.

**GameCoordinator (Steam-side matchmaking, ranks):**

- **`base_gcmessages.proto`** — Base GC messages.
- **`cstrike15_gcmessages.proto`** — CSGO-specific GC messages (rank, wins, medals). **Rank spoofer target.**
- **`econ_gcmessages.proto`** — Economy (inventory, items).
- **`gcsdk_gcmessages.proto`**, **`gcsystemmsgs.proto`** — GC infrastructure.
- **`engine_gcmessages.proto`** — Engine ↔ GC.

**Client user messages:**

- **`clientmessages.proto`** — Client to server.
- **`cstrike15_usermessages.proto`** — CSGO-specific.
- **`c_peer2peer_netmessages.proto`** — P2P.

**Network layer:**

- **`netmessages.proto`** — Core net messages.
- **`network_connection.proto`** — Connection state.
- **`connectionless_netmessages.proto`** — Handshake / stateless.

**Demo format:**

- **`demo.proto`** — CS2 demo container.
- **`fatdemo.proto`** — Extended demo format.

**Misc:**

- **`enums_clientserver.proto`** — Shared enums.
- Others in this dir — full mirror of SteamTracking.

### What VMP-protected plugins actually touch

For the impatient — the messages VMP-protected plugins in the wild manipulate:

| Message | Where | Purpose |
|---|---|---|
| **`CSGOUserCmdPB.input_history`** | `cs_usercmd.proto` | FVA Section-J angle wrap target (rewrite `[i].view_angles` for anti-aim) |
| **`CBaseUserCmdPB.move_crc`** | `usercmd.proto` | FVA writes composed scratch here (Hook A composition) |
| **`CInButtonStatePB.attack`** (bit) | `networkbasetypes.proto` | Fire gate check |
| **`CMsgQAngle`** | `networkbasetypes.proto` | Angle representation (pitch/yaw/roll) |
| **`CSGOInputHistoryEntryPB.view_angles`** | `cs_usercmd.proto` | The concrete angle field FVA rewrites |
| **`CSGOInputHistoryEntryPB.render_tick_count`** | `cs_usercmd.proto` | Timestamp preserved during rewrite |

**Common myth:** `CBaseUserCmdPB.subtick_moves` is often assumed to be the anti-aim target. **It is not** — FVA (and by extension VLB) rewrite `input_history[i].view_angles`, not subtick moves. Any RE writeup claiming subtick is wrong.

### Compile

```bash
protoc -I. --cpp_out=<outdir> cs_usercmd.proto usercmd.proto networkbasetypes.proto
```

Requires `protoc` from the same protobuf version CS2 uses (v3.x). Some messages reference each other across files — pass all needed `.proto`s at once.

### Update workflow

1. Pull HEAD of https://github.com/SteamDatabase/Protobufs `csgo/` subdirectory.
2. Diff against files here.
3. If a field's tag number changed, cross-reference `../vmp_targets/README.md` for impact on downstream plugins.
4. Commit with a source attribution comment.

### Source

- Upstream: https://github.com/SteamDatabase/Protobufs (public-domain-effective)
- Refresh command:
  ```bash
  git clone --depth=1 https://github.com/SteamDatabase/Protobufs.git tmp
  cp tmp/csgo/*.proto ./
  rm -rf tmp
  ```

---

## Русский

Определения Protocol Buffers, используемые CS2 (клиент + сервер + Steam GC + demo-формат). Зеркало `csgo/`-подпапки из [SteamDatabase/Protobufs](https://github.com/SteamDatabase/Protobufs). Обновляй из upstream после каждого крупного апдейта CS2.

### Файлы по доменам

**On-wire user command (input):**

- **`cs_usercmd.proto`** — CSGO-специфичные расширения UserCmd (содержит `CSGOUserCmdPB` с `input_history`, `attack1_start_history_index`, `attack2_start_history_index`). **Основная VMP-мишень.**
- **`usercmd.proto`** — базовый envelope `CBaseUserCmdPB`.
- **`networkbasetypes.proto`** — `CInButtonStatePB`, `CMsgQAngle`, `CMsgVector` и др.

**Игровые события:**

- **`gameevents.proto`** — базовые game events.
- **`cs_gameevents.proto`** — CS-специфичные события.
- **`cs_prediction_events.proto`** — события, связанные с prediction.

**GameCoordinator (Steam-сторона matchmaking, ранги):**

- **`base_gcmessages.proto`** — базовые GC-сообщения.
- **`cstrike15_gcmessages.proto`** — CSGO-специфичные GC-сообщения (ранг, wins, медали). **Мишень rank-спуферов.**
- **`econ_gcmessages.proto`** — экономика (инвентарь, айтемы).
- **`gcsdk_gcmessages.proto`**, **`gcsystemmsgs.proto`** — инфраструктура GC.
- **`engine_gcmessages.proto`** — Engine ↔ GC.

**Client user messages:**

- **`clientmessages.proto`** — от клиента к серверу.
- **`cstrike15_usermessages.proto`** — CSGO-специфичные.
- **`c_peer2peer_netmessages.proto`** — P2P.

**Сетевой слой:**

- **`netmessages.proto`** — базовые net-сообщения.
- **`network_connection.proto`** — состояние соединения.
- **`connectionless_netmessages.proto`** — handshake / stateless.

**Demo-формат:**

- **`demo.proto`** — контейнер demo CS2.
- **`fatdemo.proto`** — расширенный demo-формат.

**Разное:**

- **`enums_clientserver.proto`** — общие enum'ы.
- Всё остальное в директории — полное зеркало SteamTracking.

### Что реально трогают VMP-защищённые плагины

Быстро — сообщения, которыми в диких сэмплах манипулируют VMP-плагины:

| Сообщение | Где | Зачем |
|---|---|---|
| **`CSGOUserCmdPB.input_history`** | `cs_usercmd.proto` | Мишень angle-wrap'а FVA Section-J (переписать `[i].view_angles` для anti-aim) |
| **`CBaseUserCmdPB.move_crc`** | `usercmd.proto` | Сюда FVA пишет composed-scratch (композиция Hook A) |
| **`CInButtonStatePB.attack`** (бит) | `networkbasetypes.proto` | Проверка fire-gate |
| **`CMsgQAngle`** | `networkbasetypes.proto` | Представление угла (pitch/yaw/roll) |
| **`CSGOInputHistoryEntryPB.view_angles`** | `cs_usercmd.proto` | Конкретное поле углов, которое FVA переписывает |
| **`CSGOInputHistoryEntryPB.render_tick_count`** | `cs_usercmd.proto` | Timestamp, сохраняемый при перезаписи |

**Распространённый миф:** часто считают, что anti-aim мишень — это `CBaseUserCmdPB.subtick_moves`. **Это не так** — FVA (а за ним и VLB) переписывают `input_history[i].view_angles`, а не subtick moves. Любой RE-writeup, утверждающий про subtick, — неверный.

### Компиляция

```bash
protoc -I. --cpp_out=<outdir> cs_usercmd.proto usercmd.proto networkbasetypes.proto
```

Нужен `protoc` той же версии protobuf, которую использует CS2 (v3.x). Часть сообщений ссылается друг на друга через файлы — передавай все нужные `.proto` за раз.

### Workflow обновления

1. Забери HEAD подпапки `csgo/` из https://github.com/SteamDatabase/Protobufs.
2. Diff против файлов здесь.
3. Если у поля сменился номер тега — сверься с `../vmp_targets/README.md` на предмет влияния на downstream-плагины.
4. Коммить с комментарием source attribution.

### Источник

- Upstream: https://github.com/SteamDatabase/Protobufs (фактически public-domain)
- Команда обновления:
  ```bash
  git clone --depth=1 https://github.com/SteamDatabase/Protobufs.git tmp
  cp tmp/csgo/*.proto ./
  rm -rf tmp
  ```
