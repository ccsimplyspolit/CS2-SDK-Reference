# Sync-воркфлоу

Всё в `offsets/`, `schema/`, `protobufs/` берётся из upstream. Здесь —
разбор одно-кликера, который держит их актуальными.

## Точки входа

- **Windows** — двойной клик по `sync.cmd`.
- **POSIX / Git-Bash** — `./sync.sh`.
- **Везде** — `python tools/sync_from_upstream.py <args>`.

Оба `.cmd` и `.sh` просто прокидывают все CLI-аргументы в
`sync_from_upstream.py`.

## Что делает `sync_from_upstream.py`

Четыре последовательные фазы:

1. **Резолв источника.** Либо `a2x/cs2-dumper@main` (default), либо, с
   `--pr N`, head-branch открытого PR (owner + branch резолвятся
   через GitHub API).
2. **Fetch offsets + schema.** Тянет
   `output/offsets.{json,rs,hpp,cs}` и
   `output/{client,engine2,server}_dll.json` через
   `raw.githubusercontent.com`. SHA-256 сравнивается с локальными
   копиями; собираем только изменившееся.
3. **Fetch protobufs.** Листит `SteamDatabase/Protobufs/csgo` через
   GitHub contents API, тянет каждый `.proto` через
   `raw.githubusercontent.com`. Тот же SHA-256 diff.
4. **Запись.** Перед записью снапшотит текущий `offsets/latest/` +
   все `schema/*.json` в `offsets/history/pre_sync_<UTC-timestamp>/`.
   Потом пишет только реально изменившиеся файлы.

Опциональные пост-фазы:

5. **Verify** (`--verify` или `--live-pid PID`) — гоняет
   `verify_offsets.py` против живого cs2.
6. **Commit + push** (`--commit`) — `git add -A` + `git commit -m
   "Sync from upstream: N files updated"` + `git push`.

## CLI-флаги

```
python tools/sync_from_upstream.py [OPTIONS]

  --offsets-only          Пропустить protobufs.
  --protobufs-only        Пропустить offsets + schema.
  --pr N                  Тянуть из PR #N (например, --pr 670).
  --owner NAME            cs2-dumper owner (default: a2x).
  --branch NAME           cs2-dumper branch (default: main).
  --commit                git add + commit + push, если что-то изменилось.
  --dry-run               Показать что бы изменилось; ничего не писать.
                          Exit code 2 = drift обнаружен.
  --live-pid PID          Проверить оффсеты против этого cs2 PID.
  --verify                Автодетект cs2 PID через tasklist (Windows).
```

## Примеры запусков

### Ничего не изменилось

```
[*] === syncing offsets + schema ===
[+] offsets/schema: 0 changed, 7 unchanged
[*] === syncing protobufs ===
[+] protobufs: 0 changed, 43 unchanged

[+] All up-to-date. 50 files verified unchanged.
```

Exit code `0`. Ноль записи.

### Что-то изменилось

```
Applying sync:
  offsets + schema  ← a2x/cs2-dumper@main
  protobufs         ← SteamDatabase/Protobufs/csgo (master)

[*] === syncing offsets + schema ===
[*]   offsets/offsets.json  a1b2c3d4 → f0e9d8c7
[*]   schema/client_dll.json  aabbccdd → 11223344  (219314 B)
[+] snapshotted current state → offsets/history/pre_sync_20260716T081123Z/
[+] wrote 2 files
[+] offsets/schema: 2 changed, 5 unchanged
[*] === syncing protobufs ===
[+] protobufs: 0 changed, 43 unchanged

[SUMMARY] 2 files changed, 48 files unchanged
```

Exit `0`. Записано 2 файла. Старые копии — в
`offsets/history/pre_sync_20260716T081123Z/`.

### Dry-run с drift

```
DRY-RUN — no writes:
  offsets + schema  ← a2x/cs2-dumper@main

[*] === syncing offsets + schema ===
[*]   offsets/offsets.json  a1b2c3d4 → f0e9d8c7
[+] offsets/schema: 1 changed, 6 unchanged
```

Exit `2`. Ничего на диске. Отлично для CI — заметить drift без
коммита.

### Из открытого PR

Если HEAD `a2x/cs2-dumper` отстаёт, но открыт PR для свежего билда:

```
python tools/sync_from_upstream.py --pr 670 --commit
```

Скрипт резолвит PR #670 через `api.github.com`, получает head-owner +
branch, тянет оттуда. Классика: cs2 обновился в четверг, мейнтейнер
dumper'а ещё не мержил.

## Механизм snapshot'а

Перед каждой записью зовётся `snapshot_current(label)`:

1. Создаёт `offsets/history/<label>/` (идемпотентно — если существует,
   пропускает).
2. Копирует все файлы из `offsets/latest/` → `history/<label>/`.
3. Копирует все `schema/*.json` → `history/<label>/`.

`<label>` — `pre_sync_<UTC timestamp>` по умолчанию. Когда потом
промоутишь snapshot в честную build-папку:

```bash
cd offsets/history
mv pre_sync_20260716T081123Z build_14170_2026-07-15
```

Потом курируешь — дропаешь файлы, что не поменялись, и кидаешь
`README.md` внутри с описанием изменений.

## Когда sync падает

| Симптом | Причина | Фикс |
|---|---|---|
| `HTTP 404` на `output/*.json` | Раскладка cs2-dumper поменялась | Проверь `github.com/a2x/cs2-dumper/tree/main/output/` и обнови `OFFSET_FILES` / `SCHEMA_FILES` в `sync_from_upstream.py`. |
| `HTTP 403` на GitHub API | Rate limit | Подожди 60 мин или задай `GITHUB_TOKEN` (скрипт его пока не прокидывает — простой патч). |
| `git push` падает на `--commit` | Нет push-прав | Гони вручную без `--commit`, `git push` сам. |
| `PR #N not found` | PR закрыт / неверный номер | Смотри `github.com/a2x/cs2-dumper/pulls`. |
| `SeDebugPrivilege not granted` на `--verify` | Не elevated | Правый клик по терминалу → Run as administrator. |

## `fetch_head_offsets.py` — legacy

Старый offsets-only fetcher. Работает, но предшествует SHA-based
change detection из `sync_from_upstream.py`. Для нового —
`sync_from_upstream.py`.

## `--dry-run` в скриптах

Идеально для ночного крона:

```powershell
# nightly-check.ps1
$exit = & python C:\path\to\CS2-SDK-Reference\tools\sync_from_upstream.py --dry-run
if ($LASTEXITCODE -eq 2) {
    Send-MailMessage -To "you@example.com" -Subject "CS2 drift detected"
}
```

Или в GitHub Actions — см. `09_ci_рецепты.md`.
