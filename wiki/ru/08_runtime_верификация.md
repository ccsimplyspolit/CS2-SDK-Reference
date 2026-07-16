# Runtime-верификация

`verify_offsets.py` — тот самый чек "а этот репо вообще матчится с тем
cs2, который у меня сейчас крутится?". Читает каждый TRACKED
`dw*`-global из живого cs2 и проверяет, что deref упирается во
что-то правдоподобное.

## Требования

- **Windows.** `verify_offsets.py` ходит в `kernel32`, `psapi`,
  `advapi32` через `ctypes`. Windows-only. cs2 и так только под Windows
  в production.
- **Elevated shell.** Скрипт зовёт `AdjustTokenPrivileges` для
  `SeDebugPrivilege`. Без этого `OpenProcess(cs2_pid)` не пройдёт.
  Правый клик на терминале → "Run as administrator".
- **Запущенный cs2.** Скрипт cs2 не поднимает. Запусти вручную (или
  через Steam), потом узнай PID (Task Manager → Details, либо
  `Get-Process cs2 | Select Id`).

## Запуск

```powershell
python tools/verify_offsets.py --pid 53000
```

## Что проверяется

Две категории:

### 1. `dw*`-globals дереференсятся в правдоподобный указатель

Каждый TRACKED global ожидается дерефом во что-то из "user-mode
canonical pointer range" `0x00007ff0_00000000..0x00007fff_ffffffff`.
Это верхний user-VA-диапазон, где Windows размещает images + heaps на
x64. Значение оттуда почти наверняка — валидный CS2-указатель. Что-то
другое (кроме `NULL`) — drift.

### 2. Статус загрузки модуля

Каждый модуль в `tracked`-словаре должен быть загружен в целевой
процесс. Если `engine2.dll` не грузится — всё очень плохо (cs2 не
запущен или PID неверный).

## Как читать output

```
=== client.dll @ 0x7ffcaba00000  (size 0x2554000) ===
  dwLocalPlayerController              offset=0x237eba0  va=0x7ffcabd7eba0  → ptr 0x7ffcaef53080 (in user-mode range)
  dwGameRules                          offset=0x23a39d8  va=0x7ffcabda39d8  → ptr 0x7ffcaee06210 (in user-mode range)
  dwLocalPlayerPawn                    offset=0x23a4238  va=0x7ffcabda4238  → ptr 0x7ffcae4c05f0 (in user-mode range)
  dwCSGOInput                          offset=0x23b95f0  va=0x7ffcabdb95f0  → ptr 0x7ffcaee06550 (in user-mode range)
  dwGlobalVars                         offset=0x208fd60  va=0x7ffcaba8fd60  → ptr 0x7ffcaee01a80 (in user-mode range)

=== engine2.dll @ 0x7ffcc4200000  (size 0x1080000) ===
  dwNetworkGameClient                  offset=0x90d4b0  va=0x7ffcc4b0d4b0  → ptr 0x7ffcc4d02420 (in user-mode range)

[+] verified 6 / 6 fields
```

Exit `0`. Каждый TRACKED global указывает во что-то осмысленное. Репо
матчится с cs2.

## Режимы отказа

### `NULL (game may not be fully loaded)`

```
dwLocalPlayerController  offset=0x237eba0  va=...  → NULL (game may not be fully loaded)
```

`[dwLocalPlayerController]` = 0. Классика для главного меню — pointer
популируется только в матче. Скрипт считает это `ok`, так как это
валидное состояние cs2, не drift. Ретрайни после захода в игру.

### `value 0x... (unexpected)`

```
dwGameRules  offset=0x23a39d8  va=...  → value 0x1234 (unexpected)
```

Read прошёл, значение не `NULL` и не в pointer-range. Два варианта:

1. **Оффсет неверный.** Скорее всего — читаешь маленький int или bool
   там, где ждал pointer. Гоняй `sync_from_upstream.py`.
2. **Тут реально сырая int-переменная.** Часть `dw*`-символов — не
   pointer, а прямые данные — например `dwBuildNumber`. Сверь по JSON,
   что за символ, перед тем как называть это drift'ом.

### `UNREADABLE`

```
dwLocalPlayerController  offset=...  va=0x7ffcabd7eba0  → UNREADABLE
```

`ReadProcessMemory` упал. Варианты:

1. **PID неверный.** Не тот процесс.
2. **Не elevated.** Скрипт выше выругался бы про "SeDebugPrivilege not
   granted" и вышел, но если ты видишь module-инфу и падает только
   read — возможно, cs2 запущен от админа, а shell — нет; нужна
   одинаковая tier. Elevate shell.
3. **Anti-cheat вмешивается.** VAC RPM обычно не блокирует свой
   процесс, но паранойные пользователи ловили сторонний AC, который
   блочит. Попробуй с cs2 вне официальных серверов.

### `not loaded in PID`

```
[-] client.dll: not loaded in PID 53000
```

cs2 работает, но `client.dll` ещё не подгружен — процесс на ранней
init. Подожди пару секунд и ретрайни.

## Расширение TRACKED-списка

Сейчас скрипт трекает 5 полей client + 1 engine. Добавить — правь
`tracked` в `verify_offsets.py`:

```python
tracked = {
    'client.dll':  [
        'dwLocalPlayerController',
        'dwGameRules',
        'dwLocalPlayerPawn',
        'dwCSGOInput',
        'dwGlobalVars',
        'dwEntityList',              # добавить
        'dwViewMatrix',              # добавить
    ],
    'engine2.dll': ['dwNetworkGameClient'],
    'inputsystem.dll': ['dwInputSystem'],  # добавить
}
```

## Что НЕ проверяется

- **Оффсеты member'ов классов.** Только top-level `dw*`-globals. Для
  сверки member'ов (`m_iCompetitiveRanking` etc.) нужен более длинный
  walk: deref `dwLocalPlayerController`, читай `+0x888`, проверяй,
  что значение — валидный competitive rank (0..40000). Не
  автоматизировано здесь.
- **RVA функций.** CreateMove / SerializePartial и т.п. — см. sig-scan
  валидатор в
  [VMP-Deob/tools/analysis_suite/rt_verify_all_hooks.py](https://github.com/ccsimplyspolit/VMP-Deob/blob/main/tools/analysis_suite/rt_verify_all_hooks.py).
- **Protobuf-теги.** Wire-schema без реального декодирования пакета —
  runtime-невалидируема.

## Интеграция с `sync_from_upstream.py`

Два пути:

```powershell
# Явный PID
python tools/sync_from_upstream.py --live-pid 53000

# Автодетект через tasklist
python tools/sync_from_upstream.py --verify
```

`--verify` гоняет `tasklist /FI "IMAGENAME eq cs2.exe" /NH /FO CSV`,
парсит PID, передаёт в `verify_offsets.py`. Работает только если
крутится ровно один cs2.

## Почему pointer-range чек работает

x64-Windows canonical VA выше `0x00007fff_ffffffff` — kernel space;
ниже `0x00007ff0_00000000` — где живут heap-ы + images + стеки.
Практически всё, что аллоцирует cs2-модуль, попадает в
`0x00007ff*`-окно. Значение в этом окне не гарантирует, что это
именно правильный pointer, но крайне вероятно; значение вне окна —
почти гарантированно неверное. Чек робастный без полного VA-walk.

Для стрички чего построже — `VirtualQueryEx(target_handle, val, ...)`
скажет точно, в какой region указывает pointer и коммитнут ли он.
Апгрейд следующего уровня, если нужно наверняка.
