# Offsets подробно

Каждый `dw*`-символ, который экспортит CS2, что за ним лежит и как от
него дойти до полезного. Значения ниже — из `offsets/latest/offsets.json`
на момент написания (билд 14170, 2026-07-15); всегда сверяйся с JSON.

## Сам JSON

`offsets/latest/offsets.json` — один плоский файл. Ключи — имена
модулей, значения — словари `symbol → integer_offset` (десятично):

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
    "dwNetworkGameClient":            9491632,
    "dwNetworkGameClient_signOnState": 560
  }
}
```

В hex: `hex(37219232) == '0x237eba0'`.

## Что за что отвечает

### `client.dll.dwLocalPlayerController` — `0x237EBA0`

`[client.dll + dwLocalPlayerController]` — это **указатель** на локальный
`CCSPlayerController*`. Читай `qword` по этому адресу; если ненулевой —
получил локального контроллера. `NULL` — значит игрок ещё не
полностью инициализирован (главное меню, ранний загруз); ретраить в
следующем фрейме.

### `client.dll.dwLocalPlayerPawn` — `0x23A4238`

Указатель на `C_CSPlayerPawn*` — локальную "пешку" игрока. В
терминологии Source 2 **controller** владеет **pawn**'ом: контроллер
несёт персистентное per-player состояние (ранг, wins, MVPs), пешка —
per-life entity-state (позиция, оружие, HP). Пешку можно достать и
через `CCSPlayerController + m_hPlayerPawn` — см. `05_структуры.md`.

### `client.dll.dwGameRules` — `0x23A39D8`

Указатель на `C_CSGameRules*` — глобальный синглтон game-state. Для VMP
ключевой член — `m_bIsValveDS` в `+0xA4` (1-байтовый флаг: `1` на
официальных Valve-серверах, `0` на community). FVA-шный gate-byte в
`image_base + 0x23A9A0` (уже FVA-image, не cs2) — это его зеркало.

### `client.dll.dwCSGOInput` — `0x23B95F0`

Глобальный `CCSGOInput`. Здесь живёт пайплайн сборки user-command'ов.
`CreateMove` читает отсюда.

### `client.dll.dwGlobalVars` — `0x208FD60`

`CGlobalVarsBase*` — время игры, frame time, tick count. Любая
tick-based логика entity читает это.

### `client.dll.dwEntityList` / `dwGameEntitySystem` — `0x254EE60`

Корень entity-list. Отсюда можно пройти по всем networked-entity в
мире. В текущих билдах оба символа = одно значение — алиасы.

### `client.dll.dwGlowManager` — `0x23A0708`

Registry glow-эффектов. Для VMP-работы почти не важен; ESP-плагинам —
полезен.

### `client.dll.dwPrediction` — `0x23A4140`

`C_Prediction*` — куда упирается client-side prediction.

### `client.dll.dwSensitivity` — `0x23A1228`

`CSensitivity*` — mouse sensitivity + `dwSensitivity_sensitivity`
(`+0x58`) — тот float, который нужен, если масштабируешь raw-mouse
дельты.

### `client.dll.dwViewAngles` — `0x23B9C78`

Текущие view-angles (pitch/yaw/roll) как `QAngle` — 3-float struct.

### `client.dll.dwViewMatrix` — `0x23A9340`

4×4 world-to-screen матрица. 16 подряд идущих float; нужна для
проекции мировых координат в экран (ESP).

### `client.dll.dwPlantedC4` / `dwWeaponC4`

Локации entity бомбы. Триггер для bomb-overlay.

### `engine2.dll.dwNetworkGameClient` — `0x90D4B0`

`INetworkGameClient*`. Sub-оффсеты:
- `+0x230` (`dwNetworkGameClient_signOnState`) — enum: `SIGNONSTATE_FULL` = 6 значит "в игре".
- `+0x24C` (`dwNetworkGameClient_deltaTick`) — последний акнутый server-tick.
- `+0x24C` (`dwNetworkGameClient_serverTickCount`) — текущий server-tick.
- `+0x378` (`dwNetworkGameClient_clientTickCount`) — текущий client-tick.
- `+0xF8`  (`dwNetworkGameClient_localPlayer`) — слот локального игрока.
- `+0x240` (`dwNetworkGameClient_maxClients`) — вместимость сервера.

### `engine2.dll.dwBuildNumber` — `0x60F594`

Билд-номер игры. Читай как `int32` в `engine2.dll + dwBuildNumber` —
самый быстрый способ узнать в коде, против какого cs2-билда работаешь.
Матчи с известным SHA-256 `client.dll` — для полного identifying.

### `engine2.dll.dwWindowWidth` / `dwWindowHeight`

Разрешение экрана — floats в `+0x91`{2050,2054}. Нужны для проекции
через view-matrix.

## Как оффсеты резолвятся в runtime

`a2x/cs2-dumper` получает эти цифры сканом `.rdata` cs2 по известным
сигнатурам возле каждой ссылки на `dw*`. В плагине у тебя два выбора:

1. **Вкомпилить JSON.** Проще. Нужно ребилдить на каждый cs2-апдейт.
   На runtime — самый быстрый вариант.
2. **Собственный pattern-scan.** Робастен к минорным апдейтам, но
   добавляет скан в init плагина. VacLiveBypass идёт этим путём —
   см. его `pattern_scanner.cpp`. Сигнатур в cs2-dumper output нет;
   их берут из Rust-исходников dumper'а.

## Дисциплина per-build history

Каждый раз, когда `sync_from_upstream.py` собирается что-то переписать,
он сначала копирует текущий `offsets/latest/` + все `schema/*.json`
в `offsets/history/pre_sync_<UTC-timestamp>/` — ничего не теряется.
Когда прилетает новый cs2-билд, курируешь эту auto-generated
`pre_sync_*` в честную `history/build_<N>_<date>/`, дропая файлы,
которые фактически не менялись.

Проверено 2026-07-16: между 14169 и 14170 все `dw*`-globals
байт-в-байт идентичны. Единственное изменение — внутренний anonymous
inner struct получил новый name-hash. На пользователя это не влияет.

## Форматы — `.rs`, `.hpp`, `.cs`

Те же данные в Rust
(`pub const dwLocalPlayerController: usize = 0x...;`), C++
(`namespace client_dll { constexpr std::ptrdiff_t dwLocalPlayerController = ...; }`)
и C# (`public const nint dwLocalPlayerController = ...;`). Выбирай под
свой билд. `.json` — canonical, остальные — codegen из него.

## Типичные грабли

- **Нулевые проверки.** Каждый deref через `dw*`-global обязателен NULL-
  check; игра не всегда загружена.
- **Wrong module base.** `dwLocalPlayerController` — относительно базы
  `client.dll`, не базы процесса. `GetModuleHandleW("client.dll")` даст
  правильную базу.
- **Путаница controller/pawn.** Контроллер — персистентен (переживает
  смерть), pawn — per-life. Rank — на контроллере. Position/health —
  на pawn'е.
- **"Числа не двигаются, ну и ладно."** В минорных патчах — почти. В
  мажорных — могут уехать оптом. Всегда прогоняй `verify_offsets.py`
  перед релизом.
