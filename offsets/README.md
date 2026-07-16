# Offsets — runtime globals

---

## English

Runtime address offsets exposed by CS2's DLLs (`client.dll`, `engine2.dll`, `server.dll`). These are `image_base + offset` locations from which entities, controllers, and gameplay state can be read.

### Contents

- [`latest/`](latest/) — Current a2x/cs2-dumper HEAD (build 14169 as of 2026-07-16).
  - `offsets.json`, `offsets.rs`, `offsets.hpp`, `offsets.cs` — same data in 4 formats.
- [`history/`](history/) — Historical snapshots per CS2 build.
  - `build_14170_2026-07-15/` — the 2026-07-15 update (identical to 14169 for tracked fields).

### Key globals

**Build 14169-14170 (identical for these):**

| Field | Value | Meaning |
|---|---|---|
| `client.dll.dwLocalPlayerController` | `0x2383730` | ptr → CCSPlayerController* |
| `client.dll.dwLocalPlayerPawn` | `0x23A4238` | ptr → C_CSPlayerPawn* |
| `client.dll.dwCSGOInput` | `0x23B95F0` | input state ctx |
| `client.dll.dwGlobalVars` | `0x208FD60` | game-wide vars |
| `client.dll.dwGameRules` | `0x23A39D8` | ptr → C_CSGameRules* |
| `engine2.dll.dwNetworkGameClient` | `0x90D4B0` | net client |
| `engine2.dll.dwNetworkGameClient_signOnState` | `+0x230` | signon state offset |

_Verified against `offsets/latest/offsets.json` (cs2-dumper HEAD, 2026-07-16)._

### Update procedure

1. Run `tools/fetch_head_offsets.py`.
2. If HEAD is stale, check open PRs at `github.com/a2x/cs2-dumper/pulls`.
3. Compare diff — if any TRACKED global moved, add a note to `history/`.
4. Commit + push.

### Fingerprinting the current cs2

SHA-256 of `client.dll` on disk uniquely identifies the CS2 build:

```powershell
Get-FileHash "D:\SteamLibrary\steamapps\common\Counter-Strike Global Offensive\game\csgo\bin\win64\client.dll" -Algorithm SHA256
```

Known SHAs:

- Build 14169 (2026-07-11): `868E1DF4BA4A2A1E73C3A5A563405BBF49ABC24330E0DC6E24F7CC9D186C0BAC`
- Build 14170 (2026-07-15): `72786E9EBDD82E85C5E9EDC38D3758A348300AD55AAE8DB27FD9E6D73344F486`

---

## Русский

Runtime-оффсеты адресов, экспортируемые DLL-ками CS2 (`client.dll`, `engine2.dll`, `server.dll`). Это адреса вида `image_base + offset`, откуда читаются entity, контроллеры и gameplay state.

### Содержимое

- [`latest/`](latest/) — текущий HEAD `a2x/cs2-dumper` (билд 14169 на 2026-07-16).
  - `offsets.json`, `offsets.rs`, `offsets.hpp`, `offsets.cs` — одни и те же данные в 4 форматах.
- [`history/`](history/) — исторические срезы по билдам CS2.
  - `build_14170_2026-07-15/` — апдейт от 2026-07-15 (идентичен 14169 по трекаемым полям).

### Ключевые globals

**Билды 14169-14170 (для этих полей идентичны):**

| Поле | Значение | Смысл |
|---|---|---|
| `client.dll.dwLocalPlayerController` | `0x2383730` | ptr → CCSPlayerController* |
| `client.dll.dwLocalPlayerPawn` | `0x23A4238` | ptr → C_CSPlayerPawn* |
| `client.dll.dwCSGOInput` | `0x23B95F0` | контекст input state |
| `client.dll.dwGlobalVars` | `0x208FD60` | game-wide vars |
| `client.dll.dwGameRules` | `0x23A39D8` | ptr → C_CSGameRules* |
| `engine2.dll.dwNetworkGameClient` | `0x90D4B0` | net client |
| `engine2.dll.dwNetworkGameClient_signOnState` | `+0x230` | оффсет signon state |

_Сверено против `offsets/latest/offsets.json` (`cs2-dumper` HEAD, 2026-07-16)._

### Процедура обновления

1. Запусти `tools/fetch_head_offsets.py`.
2. Если HEAD отстаёт — посмотри открытые PR-ы на `github.com/a2x/cs2-dumper/pulls`.
3. Сравни diff — если какой-то TRACKED global сдвинулся, добавь заметку в `history/`.
4. Commit + push.

### Идентификация текущего билда cs2

SHA-256 диска `client.dll` уникально идентифицирует билд CS2:

```powershell
Get-FileHash "D:\SteamLibrary\steamapps\common\Counter-Strike Global Offensive\game\csgo\bin\win64\client.dll" -Algorithm SHA256
```

Известные SHA:

- Билд 14169 (2026-07-11): `868E1DF4BA4A2A1E73C3A5A563405BBF49ABC24330E0DC6E24F7CC9D186C0BAC`
- Билд 14170 (2026-07-15): `72786E9EBDD82E85C5E9EDC38D3758A348300AD55AAE8DB27FD9E6D73344F486`
