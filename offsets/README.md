# Offsets — runtime globals

**EN:** Runtime address offsets exposed by CS2's DLLs (`client.dll`, `engine2.dll`, `server.dll`). These are `image_base + offset` locations from which entities, controllers, and gameplay state can be read.

**RU:** Runtime адресные оффсеты, экспортируемые DLL-ками CS2. Это адреса `image_base + offset`, откуда можно читать entities, контроллеры и gameplay state.

---

## Contents / Содержимое

- [`latest/`](latest/) — Current a2x/cs2-dumper HEAD (build 14169 as of 2026-07-16).
  - `offsets.json`, `offsets.rs`, `offsets.hpp`, `offsets.cs` — same data in 4 formats.
- [`history/`](history/) — Historical snapshots per CS2 build.
  - `build_14170_2026-07-15/` — the 2026-07-15 update (identical to 14169 for tracked fields).

## Key globals / Ключевые globals

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

---

## Update procedure / Процедура обновления

**EN:**
1. Run `tools/fetch_head_offsets.py`.
2. If HEAD is stale, check open PRs at github.com/a2x/cs2-dumper/pulls.
3. Compare diff — if any TRACKED global moved, add a note to `history/`.
4. Commit + push.

**RU:**
1. Запусти `tools/fetch_head_offsets.py`.
2. Если HEAD отстаёт — посмотри открытые PR на github.com/a2x/cs2-dumper/pulls.
3. Diff — если TRACKED global сдвинулся, добавь заметку в `history/`.
4. Commit + push.

---

## Fingerprinting the current cs2 / Идентификация текущего билда cs2

**EN:** SHA-256 of `client.dll` on disk uniquely identifies the CS2 build:

```powershell
Get-FileHash "D:\SteamLibrary\steamapps\common\Counter-Strike Global Offensive\game\csgo\bin\win64\client.dll" -Algorithm SHA256
```

Known SHAs:
- Build 14169 (2026-07-11): `868E1DF4BA4A2A1E73C3A5A563405BBF49ABC24330E0DC6E24F7CC9D186C0BAC`
- Build 14170 (2026-07-15): `72786E9EBDD82E85C5E9EDC38D3758A348300AD55AAE8DB27FD9E6D73344F486`

**RU:** SHA-256 диска `client.dll` уникально идентифицирует билд CS2. Известные SHA см. выше.
