# Offsets — runtime globals

---

## English

Runtime address offsets exposed by CS2's DLLs — **32 globals across 5 modules**: `client.dll`, `engine2.dll`, `inputsystem.dll`, `matchmaking.dll`, `soundsystem.dll`. These are `image_base + offset` locations from which entities, controllers, and gameplay state can be read.

### Contents

- [`latest/`](latest/) — Current a2x/cs2-dumper HEAD (build 14174).
  - `offsets.json`, `offsets.rs`, `offsets.hpp`, `offsets.cs` — the 32 globals in 4 formats.
  - `info.json` — build number (14174) + dump timestamp. `interfaces.json` — 112 interface factories across 32 modules. `buttons.json` — the 16 in-button bitmasks.
- [`history/`](history/) — Historical snapshots per CS2 build.
  - `build_14170_2026-07-15/` — the 2026-07-15 update (identical to 14169 for tracked fields).
  - `pre_sync_*/` — pre-sync snapshots for each upstream refresh.

### Key globals

**Build 14174 (2026-08-04) — current installed CS2 build:**

| Field | Value | Meaning |
|---|---|---|
| `client.dll.dwLocalPlayerController` | `0x237FB80` | ptr → CCSPlayerController* |
| `client.dll.dwLocalPlayerPawn` | `0x23A5238` | ptr → C_CSPlayerPawn* |
| `client.dll.dwCSGOInput` | `0x23BA790` | input state ctx |
| `client.dll.dwGlobalVars` | `0x2090D60` | game-wide vars |
| `client.dll.dwGameRules` | `0x23A49D8` | ptr → C_CSGameRules* |
| `engine2.dll.dwNetworkGameClient` | `0x90D4B0` | net client (engine2 unchanged in 14174) |
| `engine2.dll.dwNetworkGameClient_signOnState` | `+0x230` | signon state offset |

_Verified against the installed CS2 binaries (build 14174) with `tools/verify_offsets_static.py`, 2026-08-08._

### Update procedure

1. Run `python tools/sync_from_upstream.py` (or `--commit` to push).
2. If HEAD is stale, check open PRs at `github.com/a2x/cs2-dumper/pulls` and pull one with `--pr <N>`.
3. Compare diff — if any TRACKED global moved, add a note to `history/`.
4. `python tools/verify_offsets_static.py` to confirm the new offsets resolve against your installed build.

### Fingerprinting the current cs2

SHA-256 of `client.dll` on disk uniquely identifies the CS2 build:

```powershell
Get-FileHash "D:\SteamLibrary\steamapps\common\Counter-Strike Global Offensive\game\csgo\bin\win64\client.dll" -Algorithm SHA256
```

Known SHAs:

- Build 14169 (2026-07-11): `868E1DF4BA4A2A1E73C3A5A563405BBF49ABC24330E0DC6E24F7CC9D186C0BAC`
- Build 14170 (2026-07-15): `72786E9EBDD82E85C5E9EDC38D3758A348300AD55AAE8DB27FD9E6D73344F486`
- Build 14172 (2026-07-20, ClientVersion 2000877): `92228E5CF38BCDFFC4C5D694A3B2D470AED3DA1E57460B6AC317D6F22172E21A`
- Build 14174 (2026-08-04, ClientVersion 2000880): `EA2B721E3432D650A0CD7191235F29C4989FA28B2FE404A182999B3916FDF17A`

---

## Русский

Runtime-оффсеты адресов, экспортируемые DLL-ками CS2 — **32 global'а по 5 модулям**: `client.dll`, `engine2.dll`, `inputsystem.dll`, `matchmaking.dll`, `soundsystem.dll`. Это адреса вида `image_base + offset`, откуда читаются entity, контроллеры и gameplay state.

### Содержимое

- [`latest/`](latest/) — текущий HEAD `a2x/cs2-dumper` (билд 14174).
  - `offsets.json`, `offsets.rs`, `offsets.hpp`, `offsets.cs` — 32 global'а в 4 форматах.
  - `info.json` — номер билда (14174) + timestamp дампа. `interfaces.json` — 112 interface-фабрик по 32 модулям. `buttons.json` — 16 in-button битмасок.
- [`history/`](history/) — исторические срезы по билдам CS2.
  - `build_14170_2026-07-15/` — апдейт от 2026-07-15 (идентичен 14169 по трекаемым полям).
  - `pre_sync_*/` — срезы перед каждым обновлением upstream.

### Ключевые globals

**Билд 14174 (2026-08-04) — текущий установленный билд CS2:**

| Поле | Значение | Смысл |
|---|---|---|
| `client.dll.dwLocalPlayerController` | `0x237FB80` | ptr → CCSPlayerController* |
| `client.dll.dwLocalPlayerPawn` | `0x23A5238` | ptr → C_CSPlayerPawn* |
| `client.dll.dwCSGOInput` | `0x23BA790` | контекст input state |
| `client.dll.dwGlobalVars` | `0x2090D60` | game-wide vars |
| `client.dll.dwGameRules` | `0x23A49D8` | ptr → C_CSGameRules* |
| `engine2.dll.dwNetworkGameClient` | `0x90D4B0` | net client (engine2 в 14174 не менялся) |
| `engine2.dll.dwNetworkGameClient_signOnState` | `+0x230` | оффсет signon state |

_Сверено против установленных бинарников CS2 (билд 14174) через `tools/verify_offsets_static.py`, 2026-08-08._

### Процедура обновления

1. Запусти `python tools/sync_from_upstream.py` (или `--commit` для push).
2. Если HEAD отстаёт — посмотри открытые PR-ы на `github.com/a2x/cs2-dumper/pulls` и тяни через `--pr <N>`.
3. Сравни diff — если какой-то TRACKED global сдвинулся, добавь заметку в `history/`.
4. `python tools/verify_offsets_static.py` — убедись, что новые оффсеты резолвятся против установленного билда.

### Идентификация текущего билда cs2

SHA-256 диска `client.dll` уникально идентифицирует билд CS2:

```powershell
Get-FileHash "D:\SteamLibrary\steamapps\common\Counter-Strike Global Offensive\game\csgo\bin\win64\client.dll" -Algorithm SHA256
```

Известные SHA:

- Билд 14169 (2026-07-11): `868E1DF4BA4A2A1E73C3A5A563405BBF49ABC24330E0DC6E24F7CC9D186C0BAC`
- Билд 14170 (2026-07-15): `72786E9EBDD82E85C5E9EDC38D3758A348300AD55AAE8DB27FD9E6D73344F486`
