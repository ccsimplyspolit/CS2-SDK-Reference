# Offsets deep dive

Every `dw*` symbol CS2 exposes, what it points at, and how to walk from it to
something useful. Values below are from `offsets/latest/offsets.json` at the
time of writing (build 14170, 2026-07-15) — always cross-check the JSON.

## The JSON

`offsets/latest/offsets.json` is a single flat file. Keys are module names,
values are dictionaries of `symbol → integer_offset` (decimal). Example:

```json
{
  "client.dll": {
    "dwLocalPlayerController": 37219232,
    "dwGameRules":             37370328,
    "dwLocalPlayerPawn":       37372472,
    "dwCSGOInput":             37459440,
    "dwGlobalVars":            34143584
  },
  "engine2.dll": {
    "dwNetworkGameClient":     9491632,
    "dwNetworkGameClient_signOnState": 560
  }
}
```

To convert to hex for reading: `hex(37219232) == '0x237eba0'`.

## What each global points at

### `client.dll.dwLocalPlayerController` — `0x237EBA0`

`[client.dll + dwLocalPlayerController]` is a **pointer** to the local
`CCSPlayerController*`. Read `qword` at that address; if non-zero, you have
the local player controller. This dereferences to `NULL` when the local
player is not fully initialised (main menu, early load) — treat `NULL` as a
signal to try again next frame.

### `client.dll.dwLocalPlayerPawn` — `0x23A4238`

Pointer to `C_CSPlayerPawn*` for the local player's pawn. In CS2's Source 2
terminology, a **controller** owns a **pawn**: the controller carries
persistent per-player state (rank, wins, MVPs), the pawn carries per-life
entity state (position, weapons, health). You can also reach the pawn via
`CCSPlayerController + m_hPlayerPawn` — see `05_structures.md`.

### `client.dll.dwGameRules` — `0x23A39D8`

Pointer to `C_CSGameRules*`. This is the global game-state singleton. Its
key member for VMP work is `m_bIsValveDS` at `+0xA4` — a 1-byte flag that
is `1` on official Valve dedicated servers and `0` on community servers.
FVA's gate byte at `image_base + 0x23A9A0` (of FVA, not cs2) mirrors this.

### `client.dll.dwCSGOInput` — `0x23B95F0`

The `CCSGOInput` global. This is where the user-command build pipeline lives.
`CreateMove` reads from here.

### `client.dll.dwGlobalVars` — `0x208FD60`

`CGlobalVarsBase*` — game time, frame time, tick count. Every entity
tick-based logic reads these.

### `client.dll.dwEntityList` / `dwGameEntitySystem` — `0x254EE60`

The entity list root. From here you can walk every networked entity in the
world. Same offset for both symbols in current builds — they alias.

### `client.dll.dwGlowManager` — `0x23A0708`

Glow effects registry. Rarely relevant for VMP work; useful for ESP-adjacent
plugins.

### `client.dll.dwPrediction` — `0x23A4140`

`C_Prediction*` — where client-side prediction state lives.

### `client.dll.dwSensitivity` — `0x23A1228`

`CSensitivity*` — mouse sensitivity + `dwSensitivity_sensitivity` (`+0x58`)
is the float you want if you're scaling raw mouse deltas.

### `client.dll.dwViewAngles` — `0x23B9C78`

Current view angles (pitch/yaw/roll) as a `QAngle` — a 3-float struct.

### `client.dll.dwViewMatrix` — `0x23A9340`

The 4x4 world-to-screen matrix. Read as 16 consecutive floats; used for
projecting world coords to screen for ESP.

### `client.dll.dwPlantedC4` / `dwWeaponC4`

Locations for the bomb entity. Trigger for bomb-related overlays.

### `engine2.dll.dwNetworkGameClient` — `0x90D4B0`

The `INetworkGameClient*`. Its sub-offsets:
- `+0x230` (`dwNetworkGameClient_signOnState`) — enum: `SIGNONSTATE_FULL` = 6 means we're in a game.
- `+0x24C` (`dwNetworkGameClient_deltaTick`) — last acked server tick.
- `+0x24C` (`dwNetworkGameClient_serverTickCount`) — current server tick.
- `+0x378` (`dwNetworkGameClient_clientTickCount`) — current client tick.
- `+0xF8`  (`dwNetworkGameClient_localPlayer`) — local player slot.
- `+0x240` (`dwNetworkGameClient_maxClients`) — server capacity.

### `engine2.dll.dwBuildNumber` — `0x60F594`

Game build number. Read as `int32` at `engine2.dll + dwBuildNumber` — this
is the fastest way in code to know which cs2 build you're running against.
Match against known SHA-256 of `client.dll` for full identification.

### `engine2.dll.dwWindowWidth` / `dwWindowHeight`

Screen resolution — floats at `+0x91`{2050,2054}. Needed for the view-matrix
projection.

## How offsets are resolved at runtime

`a2x/cs2-dumper` produces these by scanning cs2's `.rdata` for known
signatures near each `dw*` reference. In your plugin you have two choices:

1. **Copy the offsets JSON into your build.** Simplest. Rebuild on every
   cs2 update. Fastest at runtime.
2. **Do your own pattern scan.** Robust to minor updates but adds a scan
   at plugin init. VacLiveBypass takes this path — see its
   `pattern_scanner.cpp`. The signatures don't ship with cs2-dumper output;
   copy them from cs2-dumper's Rust source.

## Per-build history discipline

Every time `sync_from_upstream.py` runs and any file would change, it first
copies the current `offsets/latest/` + all `schema/*.json` into
`offsets/history/pre_sync_<UTC-timestamp>/` — nothing is destroyed. When a
new CS2 build lands, curate a proper `history/build_<N>_<date>/` directory
by renaming the auto-generated `pre_sync_*` and dropping any files that
didn't actually change.

Verified 2026-07-16: between build 14169 and 14170, every `dw*` global is
byte-for-byte identical. The only cs2 change was internal — an anonymous
inner struct got a new name-hash. That's not user-visible.

## Format variants — `.rs`, `.hpp`, `.cs`

Same data in Rust (`pub const dwLocalPlayerController: usize = 0x...;`), C++
(`namespace client_dll { constexpr std::ptrdiff_t dwLocalPlayerController = ...; }`),
and C# (`public const nint dwLocalPlayerController = ...;`). Pick whichever
matches your build. The `.json` is canonical — the others are `cs2-dumper`
codegen from it.

## Common pitfalls

- **Zero-checks.** Every dereference through a `dw*` global must NULL-check;
  the game is not always fully loaded.
- **Wrong module base.** `dwLocalPlayerController` is relative to
  `client.dll`'s base, not the process base. `GetModuleHandleW("client.dll")`
  gives you the right base.
- **Confusing controller and pawn.** Controller is persistent (survives your
  death), pawn is per-life. Rank is on the controller. Position/health is on
  the pawn.
- **Assuming numbers don't change.** They mostly don't between minor
  patches; they can move wholesale on major updates. Always cross-check via
  `verify_offsets.py` before shipping.
