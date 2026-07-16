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

### Verify against running cs2 (1 command)

Requires an elevated shell (SeDebugPrivilege) and a running cs2 process.

```powershell
# Explicit PID
python tools\verify_offsets.py --pid 53000

# Or auto-detect + verify in one go
python tools\sync_from_upstream.py --verify
```

Prints one line per tracked global — MATCH / NULL / DRIFT / UNREADABLE.

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

### Сверка с живым cs2 (одной командой)

Нужен elevated shell (SeDebugPrivilege) и запущенный процесс cs2.

```powershell
# Явный PID
python tools\verify_offsets.py --pid 53000

# Или автодетект + verify одной командой
python tools\sync_from_upstream.py --verify
```

Печатает по одной строке на TRACKED-global — MATCH / NULL / DRIFT / UNREADABLE.

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
