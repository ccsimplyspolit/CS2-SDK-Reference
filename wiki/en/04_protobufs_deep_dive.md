# Protobufs deep dive

CS2 uses Google Protocol Buffers for everything on the wire — user
commands, game events, matchmaking, demo files. The `protobufs/`
directory is a mirror of `SteamDatabase/Protobufs/csgo/` and contains
all 43 `.proto` files CS2 ships.

## Why 43 files matter

Most tutorials show one or two, and everyone re-copies the same
`cs_usercmd.proto` snippet. In reality, protobufs are cross-referenced —
`CSGOUserCmdPB` imports `CBaseUserCmdPB` from `usercmd.proto`, which
imports `CInButtonStatePB` and `CMsgQAngle` from `networkbasetypes.proto`.
You cannot build a serializer without all three. This repo keeps every
file so a fresh `protoc` invocation works out of the box.

## Files by domain

### On-wire user command — the FVA / VLB target zone

| File | What's in it |
|---|---|
| `cs_usercmd.proto` | `CSGOUserCmdPB` (base + input_history), `CSGOInputHistoryEntryPB` (view_angles is the FVA angle-fixup target). |
| `usercmd.proto` | `CBaseUserCmdPB` — outer envelope, contains `subtick_moves`, `move_crc`, buttons, tick_count. |
| `networkbasetypes.proto` | `CInButtonStatePB`, `CMsgQAngle`, `CMsgVector`, `CMsgTransform` — primitives every message reuses. |

If you're auditing an anti-aim helper, these three files are 90 % of the
picture. See `06_vmp_targets.md` for the actual field tags each plugin
touches.

### Game events

| File | What's in it |
|---|---|
| `gameevents.proto` | Generic event dispatch (`CMsgSource1LegacyGameEventList` and friends). |
| `cs_gameevents.proto` | CS-specific events — round start, weapon fire, etc. |
| `cs_prediction_events.proto` | Prediction events the client fires locally before server confirmation. |
| `prediction_events.proto` | Generic prediction events. |

### GameCoordinator (Steam matchmaking, ranks, inventory)

| File | What's in it |
|---|---|
| `base_gcmessages.proto` | Base GC infrastructure. |
| `cstrike15_gcmessages.proto` | **CSGO-specific GC** — rank, wins, medals, badges. The classic **rank spoofer target** when spoofing over the wire (as opposed to spoofing in memory via `CCSPlayerController + 0x888`). |
| `econ_gcmessages.proto` | Economy — inventory items, skins. |
| `gcsdk_gcmessages.proto` | GC SDK plumbing. |
| `gcsystemmsgs.proto` | GC system-level messages. |
| `engine_gcmessages.proto` | Engine ↔ GC bridge. |

### Client / server user messages

| File | What's in it |
|---|---|
| `clientmessages.proto` | Client → server generic. |
| `cstrike15_usermessages.proto` | CS-specific user messages — chat, HUD, notifications. |
| `usermessages.proto` | Generic user messages. |
| `c_peer2peer_netmessages.proto` | P2P messages (SDR). |

### Network layer

| File | What's in it |
|---|---|
| `netmessages.proto` | Core net messages, connection setup. |
| `network_connection.proto` | Connection state. |
| `connectionless_netmessages.proto` | Handshake, stateless queries. |
| `networksystem_protomessages.proto` | Network subsystem RPCs. |
| `steamnetworkingsockets_messages*.proto` | Steam Networking Sockets (SDR transport). |
| `steamdatagram_messages*.proto` | Steam Datagram (SDR relays). |

### Demo format

| File | What's in it |
|---|---|
| `demo.proto` | CS2 demo container — `CDemoFileHeader`, `CDemoPacket`, etc. |
| `fatdemo.proto` | "Fat demo" — extended format with more state per packet. |

### Steam infrastructure (rarely relevant for CS2 RE)

| File | What's in it |
|---|---|
| `steammessages.proto`, `steammessages_base.proto` | Steam RPC base. |
| `steammessages_cloud.steamworkssdk.proto` | Steam Cloud. |
| `steammessages_gamenetworkingui.proto` | Networking UI. |
| `steammessages_helprequest.steamworkssdk.proto` | Help/support. |
| `steammessages_oauth.steamworkssdk.proto` | OAuth. |
| `steammessages_player.steamworkssdk.proto` | Player RPCs. |
| `steammessages_publishedfile.steamworkssdk.proto` | Workshop / published files. |
| `steammessages_unified_base.steamworkssdk.proto` | Unified messaging base. |
| `steammessages_gc.proto` | Steam ↔ GC bridge. |
| `source2_steam_stats.proto` | Stats reporting. |

### Miscellaneous

| File | What's in it |
|---|---|
| `enums_clientserver.proto` | Shared enums (`PlayerConnectedState`, `RoundEndReason`, ...). |
| `te.proto` | Temp entities (particle effects, decals, ...). |
| `uifontfile_format.proto` | Bitmap-font container used by the UI. |
| `valveextensions.proto` | Valve-specific `.proto` extensions. |

## The three messages that matter for VMP work

### `CSGOUserCmdPB` (from `cs_usercmd.proto`)

The outermost user-command envelope actually sent. Composed of a
`CBaseUserCmdPB` (below) plus a `repeated CSGOInputHistoryEntryPB
input_history` — the per-subtick history slots that FVA Section-J rewrites.

Key tags:
- Tag 1: `base` (`CBaseUserCmdPB`)
- Tag 2: `input_history` (repeated `CSGOInputHistoryEntryPB`)
- Tag 3: `attack1_start_history_index` (int32)
- Tag 4: `attack2_start_history_index` (int32)

### `CBaseUserCmdPB` (from `usercmd.proto`)

The base envelope. Every CS2 usercmd is this plus CSGO-specific
extensions. Notable tags:

- Tag 1: `command_number` (int32)
- Tag 2: `tick_count` (int32)
- Tag 20: `buttons_pb` (`CInButtonStatePB`)
- Tag 27: `move_crc` (string) — FVA writes composed scratch here (Hook A)
- Tag 18: `subtick_moves` (repeated `CSubtickMoveStep`) — commonly (and
  wrongly) rumoured to be the anti-aim target. FVA does not touch it.

### `CSGOInputHistoryEntryPB` (from `cs_usercmd.proto`)

A single subtick's worth of input state. Rebuilt every tick, sent inside
`input_history`. Notable tags:

- Tag 2: `view_angles` (`CMsgQAngle`) — **the actual FVA anti-aim target**
- Tag 3: `cl_interp` (`CMsgVector`)
- Tag 4: `render_tick_count` (int32) — preserved during FVA rewrite

## Compiling for your own use

```bash
protoc -I. --cpp_out=<outdir> \
    cs_usercmd.proto usercmd.proto networkbasetypes.proto
```

Use the same protoc version as CS2 (v3.x). If you get "cannot find
import" errors, add whichever file the failing proto imports — the
protobufs are heavily cross-referenced.

For Python:

```bash
protoc -I. --python_out=<outdir> cs_usercmd.proto usercmd.proto networkbasetypes.proto
```

## Refresh workflow

Handled by `sync_from_upstream.py`. It calls
`api.github.com/repos/SteamDatabase/Protobufs/contents/csgo?ref=master`
to list every file, then fetches each `raw.githubusercontent.com` URL.
SHA-256 comparison; only writes changed files.

Manual equivalent:

```bash
git clone --depth=1 https://github.com/SteamDatabase/Protobufs.git tmp
cp tmp/csgo/*.proto ./protobufs/
rm -rf tmp
```

## Common myth: subtick vs input_history

A large fraction of publicly posted CS2 anti-aim writeups say the plugin
"rewrites `subtick_moves`". They are wrong. `CBaseUserCmdPB.subtick_moves`
is the intra-tick movement steps (mouse deltas, key transitions timed
sub-tick). FVA — and every real anti-aim in production — rewrites
`CSGOUserCmdPB.input_history[i].view_angles` instead. When you inspect a
VMP'd sample and see it walking `input_history`, you're looking at the
real target.
