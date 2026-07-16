# CS2 Protobufs — 43 .proto files from SteamTracking

**EN:** Protocol Buffers definitions used by CS2 (client + server + Steam GC + demo format). Mirror of the `csgo/` subdirectory of [SteamDatabase/Protobufs](https://github.com/SteamDatabase/Protobufs). Refresh from upstream after every major CS2 update.

**RU:** Определения Protocol Buffers, используемые CS2 (клиент + сервер + Steam GC + demo-формат). Зеркало `csgo/` подпапки из [SteamDatabase/Protobufs](https://github.com/SteamDatabase/Protobufs). Обновляй из upstream после каждого крупного апдейта CS2.

---

## Files organised by domain

### On-wire user command (input) / Сетевой user command

- **`cs_usercmd.proto`** — CSGO-specific extensions to UserCmd (contains `CSGOUserCmdPB` with `input_history`, `attack1_start_history_index`, `attack2_start_history_index`). **Primary VMP target.**
- **`usercmd.proto`** — Base `CBaseUserCmdPB` envelope.
- **`networkbasetypes.proto`** — `CInButtonStatePB`, `CMsgQAngle`, `CMsgVector`, ...

### Game events / Игровые события

- **`gameevents.proto`** — Base game events.
- **`cs_gameevents.proto`** — CS-specific game events.
- **`cs_prediction_events.proto`** — Prediction-related events.

### GameCoordinator (Steam-side matchmaking, ranks) / Steam GC

- **`base_gcmessages.proto`** — Base GC messages.
- **`cstrike15_gcmessages.proto`** — CSGO-specific GC messages (rank, wins, medals). **Rank spoofer target.**
- **`econ_gcmessages.proto`** — Economy (inventory, items).
- **`gcsdk_gcmessages.proto`**, **`gcsystemmsgs.proto`** — GC infrastructure.
- **`engine_gcmessages.proto`** — Engine ↔ GC.

### Client user messages / Клиентские user messages

- **`clientmessages.proto`** — Client to server.
- **`cstrike15_usermessages.proto`** — CSGO-specific.
- **`c_peer2peer_netmessages.proto`** — P2P.

### Network layer / Сетевой слой

- **`netmessages.proto`** — Core net messages.
- **`network_connection.proto`** — Connection state.
- **`connectionless_netmessages.proto`** — Handshake / stateless.

### Demo format / Формат demo

- **`demo.proto`** — CS2 demo container.
- **`fatdemo.proto`** — Extended demo format.

### Misc

- **`enums_clientserver.proto`** — Shared enums.
- Others in this dir — full mirror of SteamTracking.

---

## What VMP-protected plugins actually touch

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

---

## Compile / Skompilirovat'

```bash
protoc -I. --cpp_out=<outdir> cs_usercmd.proto usercmd.proto networkbasetypes.proto
```

Requires `protoc` from the same protobuf version CS2 uses (v3.x). Some messages reference each other across files — pass all needed `.proto`s at once.

---

## Update workflow / Обновление

**EN:**
1. Pull HEAD of https://github.com/SteamDatabase/Protobufs `csgo/` subdirectory.
2. Diff against files here.
3. If a field's tag number changed, cross-reference `../vmp_targets/README.md` for impact on downstream plugins.
4. Commit with a source attribution comment.

**RU:** аналогично.

---

## Source / Источник

- Upstream: https://github.com/SteamDatabase/Protobufs (public-domain-effective)
- Refresh command:
  ```bash
  git clone --depth=1 https://github.com/SteamDatabase/Protobufs.git tmp
  cp tmp/csgo/*.proto ./
  rm -rf tmp
  ```
