# CS2 signature patterns + net-message layouts

---

## English

Byte-signature patterns that locate CS2's hookable functions, plus the C++
layout of its network protobufs. Companion to `../schema/` (field offsets) and
`../offsets/` (runtime globals): those tell you *where a field is*; these tell
you *where a function is* and *what a wire message looks like in memory*.

### Files

| File | Contents |
|---|---|
| [`cs2_patterns.json`](cs2_patterns.json) | 141 signatures across 8 modules — machine-readable (`{module: {name: pattern}}`) |
| [`cs2_patterns.h`](cs2_patterns.h) | The same signatures as `#define NAME_PATTERN "..."` for C/C++ |
| [`cs2_netmessages.hpp`](cs2_netmessages.hpp) | In-memory C++ structs for the CS2 wire protobufs + resolved function prototypes. Compiles clean (MSVC `/std:c++17`). |

### Verification

Every pattern is checked against the installed game by
[`../tools/verify_patterns.py`](../tools/verify_patterns.py) — a masked search
over each DLL's executable sections (no admin, no running game, no external
tools):

```bash
python tools/verify_patterns.py
```

Last run (2026-07-19, build 14170 / installed game):

```
141 pattern(s): 140 unique, 0 ambiguous, 0 not-found, 0 dll-missing;
exports 1 ok / 0 missing
[+] every pattern resolves uniquely against the installed build
```

**All 140 byte-patterns resolve to exactly one address**, and the one export
(`tier0!LoadKV3`) is present. A sample of resolved addresses was independently
disassembled and confirmed to land on real function entries (e.g.
`createmove` → `0xC97750`, a `mov rax, rsp` prologue with a `.pdata` unwind
record; `getlocalpawn` → `0x926960`, 259+ callers).

### How the patterns were made

From the notes at [cspatterns.dev/tutorials](https://cspatterns.dev/tutorials).
Requires IDA + [Sigmaker](https://github.com/A200K/IDA-Pro-SigMaker) +
[Class Informer](https://github.com/kweatherman/IDA_ClassInformer_PlugIn).

- **Get a pattern from a function:** go to the function, `Ctrl+Alt+S`, OK. If it
  says *"Signature left function scope"*, tick *"Continue when leaving function
  scope"* and retry.
- **Present** (`GameOverlayRenderer64.dll`, in the Steam root): Strings →
  `DXGISwapChain_Present` → xref → the `sub_...` passed as the callback is
  Present.
- **CreateMove** (`client.dll`): Strings →
  `cl: CreateMove clamped invalid attack history index %d in frame h` → first
  xref.
- **OverrideView / ValidateInput:** Class Informer → `ClientModeCSNormal` (idx
  16) / `CCSGOInput` (idx 9). Indices drift between updates — scan neighbours.
- **LevelInit / LevelShutdown:** Strings → `game_newmap` / `map_shutdown` →
  xref.

### Sources

- [cspatterns.dev](https://cspatterns.dev) — [cpp](https://cspatterns.dev/cpp) ·
  [json](https://cspatterns.dev/json) ·
  [declarations](https://cspatterns.dev/declarations) ·
  [structs](https://cspatterns.dev/structs) ·
  [tutorials](https://cspatterns.dev/tutorials)

---

## Русский

Байт-сигнатуры, которыми находятся хукабельные функции CS2, плюс C++-layout её
сетевых protobuf'ов. Дополняет `../schema/` (оффсеты полей) и `../offsets/`
(runtime-globals): те говорят *где поле*, эти — *где функция* и *как wire-сообщение
выглядит в памяти*.

### Файлы

| Файл | Содержимое |
|---|---|
| [`cs2_patterns.json`](cs2_patterns.json) | 141 сигнатура по 8 модулям — machine-readable (`{module: {name: pattern}}`) |
| [`cs2_patterns.h`](cs2_patterns.h) | Те же сигнатуры как `#define NAME_PATTERN "..."` для C/C++ |
| [`cs2_netmessages.hpp`](cs2_netmessages.hpp) | C++-структуры wire-protobuf'ов CS2 в памяти + прототипы функций. Компилируется чисто (MSVC `/std:c++17`). |

### Верификация

Каждая сигнатура сверяется с установленной игрой через
[`../tools/verify_patterns.py`](../tools/verify_patterns.py) — masked-поиск по
исполняемым секциям каждой DLL (без админа, без запущенной игры, без внешних
инструментов):

```bash
python tools/verify_patterns.py
```

Последний прогон (2026-07-19, билд 14170 / установленная игра):

```
141 pattern(s): 140 unique, 0 ambiguous, 0 not-found, 0 dll-missing;
exports 1 ok / 0 missing
[+] every pattern resolves uniquely against the installed build
```

**Все 140 байт-паттернов резолвятся ровно в один адрес**, экспорт
(`tier0!LoadKV3`) на месте. Выборка адресов независимо дизассемблирована и
подтверждена как реальные входы функций (`createmove` → `0xC97750`, пролог
`mov rax, rsp` с `.pdata`-unwind; `getlocalpawn` → `0x926960`, 259+ вызывающих).

### Как получены паттерны

По заметкам с [cspatterns.dev/tutorials](https://cspatterns.dev/tutorials).
Нужны IDA + [Sigmaker](https://github.com/A200K/IDA-Pro-SigMaker) +
[Class Informer](https://github.com/kweatherman/IDA_ClassInformer_PlugIn).

- **Паттерн из функции:** встань на функцию, `Ctrl+Alt+S`, OK. Если пишет
  *"Signature left function scope"* — включи *"Continue when leaving function
  scope"* и повтори.
- **Present** (`GameOverlayRenderer64.dll`, в корне Steam): Strings →
  `DXGISwapChain_Present` → xref → переданный `sub_...` и есть Present.
- **CreateMove** (`client.dll`): Strings →
  `cl: CreateMove clamped invalid attack history index %d in frame h` → первый
  xref.
- **OverrideView / ValidateInput:** Class Informer → `ClientModeCSNormal` (idx
  16) / `CCSGOInput` (idx 9). Индексы плывут между апдейтами — смотри соседей.
- **LevelInit / LevelShutdown:** Strings → `game_newmap` / `map_shutdown` →
  xref.

### Источники

- [cspatterns.dev](https://cspatterns.dev) — [cpp](https://cspatterns.dev/cpp) ·
  [json](https://cspatterns.dev/json) ·
  [declarations](https://cspatterns.dev/declarations) ·
  [structs](https://cspatterns.dev/structs) ·
  [tutorials](https://cspatterns.dev/tutorials)
