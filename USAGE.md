# USAGE — quick-start / быстрый старт

Two-language quick-start. Longer material in [`wiki/`](wiki/).

Двуязычный быстрый старт. Развёрнутая документация — в [`wiki/`](wiki/).

---

## English

### First-time setup (5 lines)

```powershell
git clone https://github.com/ccsimplyspolit/CS2-SDK-Reference.git
cd CS2-SDK-Reference
# Requires Python 3.9+. No pip installs needed — only stdlib.
python --version
python tools\sync_from_upstream.py --dry-run       # sanity check
```

### Update everything (1 command)

```powershell
# Windows — just double-click sync.cmd.
# CLI:
python tools\sync_from_upstream.py

# With auto-commit + push:
python tools\sync_from_upstream.py --commit
```

Snapshots current state to `offsets/history/pre_sync_<UTC-timestamp>/`,
overwrites only files whose SHA-256 changed, prints a per-file diff.

### Verify offsets (1 command)

Preferred — against the CS2 you have installed. No admin, no running game, no
contact with the game process:

```powershell
python tools\verify_offsets_static.py
```

Finds the install through Steam and resolves every offset against the DLLs'
section tables. Prints where each one lands and exits non-zero on any that
don't resolve.

Against a running cs2 (reads live memory):

```powershell
python tools\verify_offsets.py --pid 53000
python tools\sync_from_upstream.py --verify        # auto-detect PID
```

Prints one line per tracked global — MATCH / NULL / UNREADABLE. Note: CS2
strips process handles while anti-cheat protection is active, so this returns
`ERROR_ACCESS_DENIED` unless the game was launched with
`-insecure -allow_third_party_software`. Use the static verifier otherwise.

### Verify the docs haven't rotted (1 command)

```powershell
python tools\verify_docs.py
```

Checks every offset cited in the READMEs and wiki against the current schema.
Exits non-zero if any doc offset no longer matches — run it after a sync.

### Handle a new CS2 update (3 steps)

1. `python tools\sync_from_upstream.py --dry-run` — check if upstream already has new data.
   - If it does — run without `--dry-run` (or with `--commit`).
   - If it doesn't — check open PRs at `github.com/a2x/cs2-dumper/pulls`, then run `--pr <N>`.
2. `python tools\verify_offsets.py --pid <cs2_pid>` — confirm the new offsets dereference to plausible pointers.
3. Update `structures/README.md` header line ("current as of build …") and add a row to `vmp_targets/README.md` "Recent verifications" with your date + PID.

### Contribute a new field mapping (3 steps)

1. Confirm the field's existence in `schema/client_dll.json` (or `engine2_dll.json` / `server_dll.json`) — check that `<Class>.<field>` really has the offset you're claiming.
2. Add a row to the matrix in `vmp_targets/README.md` with: field, type, which plugin touches it, purpose. Include an FNV1a-64 hash if the plugin resolves via schema hash.
3. Optionally add a note under the relevant class in `structures/README.md` and/or add a full deep-dive section in `wiki/en/06_vmp_targets.md` + `wiki/ru/06_vmp_мишени.md`.

Open a PR — every field mapping should carry a source attribution (which live sample / cs2 build / PID).

### More

- Deep dives: [`wiki/en/`](wiki/en/).
- Full CLI reference for the sync tool: [`wiki/en/07_sync_workflow.md`](wiki/en/07_sync_workflow.md).
- Runtime verification: [`wiki/en/08_runtime_verification.md`](wiki/en/08_runtime_verification.md).
- Glossary: [`wiki/en/10_glossary.md`](wiki/en/10_glossary.md).

---

## Русский

### Первичная установка (5 строк)

```powershell
git clone https://github.com/ccsimplyspolit/CS2-SDK-Reference.git
cd CS2-SDK-Reference
# Нужен Python 3.9+. Никакого pip — только stdlib.
python --version
python tools\sync_from_upstream.py --dry-run       # sanity-check
```

### Обновить всё (одной командой)

```powershell
# Windows — просто двойной клик по sync.cmd.
# Из CLI:
python tools\sync_from_upstream.py

# С auto-commit + push:
python tools\sync_from_upstream.py --commit
```

Снапшотит текущее состояние в `offsets/history/pre_sync_<UTC-timestamp>/`,
переписывает только те файлы, у которых сменился SHA-256, печатает
per-file diff.

### Сверка оффсетов (одной командой)

Предпочтительно — с установленным CS2. Без админа, без запущенной игры, без
касания процесса игры:

```powershell
python tools\verify_offsets_static.py
```

Находит установку через Steam и резолвит каждый оффсет по таблицам секций DLL.
Печатает, куда попадает каждый, и выходит с ненулевым кодом, если что-то не
зарезолвилось.

С живым cs2 (читает память процесса):

```powershell
python tools\verify_offsets.py --pid 53000
python tools\sync_from_upstream.py --verify        # автодетект PID
```

Печатает по строке на tracked-global — MATCH / NULL / UNREADABLE. Учти: пока
активна защита анти-чита, CS2 срезает доступ к хендлам, и скрипт вернёт
`ERROR_ACCESS_DENIED`, если игра не запущена с
`-insecure -allow_third_party_software`. В остальных случаях используй
статический верификатор.

### Проверить, что доки не протухли (одной командой)

```powershell
python tools\verify_docs.py
```

Сверяет каждый оффсет из README и wiki с текущей схемой. Выходит с ненулевым
кодом, если хоть один оффсет в доках больше не совпадает — гоняй после sync.

### Разобраться с новым апдейтом CS2 (3 шага)

1. `python tools\sync_from_upstream.py --dry-run` — проверить, есть ли уже свежак в upstream.
   - Есть — гони без `--dry-run` (или с `--commit`).
   - Нет — смотри открытые PR-ы на `github.com/a2x/cs2-dumper/pulls`, потом гоняй `--pr <N>`.
2. `python tools\verify_offsets.py --pid <cs2_pid>` — убедись, что новые оффсеты дереференсятся в правдоподобные pointer'ы.
3. Обнови header-строку в `structures/README.md` ("current as of build …") и добавь строку в `vmp_targets/README.md` "Recent verifications" с датой + PID.

### Добавить новый маппинг поля (3 шага)

1. Убедись, что поле есть в `schema/client_dll.json` (или `engine2_dll.json` / `server_dll.json`) — сверь, что `<Класс>.<поле>` реально по тому оффсету, который ты заявляешь.
2. Добавь строку в матрицу `vmp_targets/README.md`: поле, тип, кто трогает, зачем. Если плагин резолвит через schema-hash — приложи FNV1a-64.
3. Опционально — заметка под соответствующим классом в `structures/README.md` и/или full deep-dive секция в `wiki/en/06_vmp_targets.md` + `wiki/ru/06_vmp_мишени.md`.

Открывай PR — каждый маппинг поля должен нести source attribution (какой live-сэмпл / cs2-билд / PID).

### Дальше

- Deep-dive'ы: [`wiki/ru/`](wiki/ru/).
- Полный CLI-референс sync-инструмента: [`wiki/ru/07_воркфлоу_sync.md`](wiki/ru/07_воркфлоу_sync.md).
- Runtime-верификация: [`wiki/ru/08_runtime_верификация.md`](wiki/ru/08_runtime_верификация.md).
- Глоссарий: [`wiki/ru/10_глоссарий.md`](wiki/ru/10_глоссарий.md).
