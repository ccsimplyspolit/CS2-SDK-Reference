# CS2-SDK-Reference wiki

Bilingual deep-dive wiki. The top-level `README.md` and per-folder `README.md`
files are the quick-scan surface; everything under `wiki/` is the long-form
material with concrete numbers, examples, and workflow recipes.

Двуязычная (EN + RU) deep-dive вики. Верхнеуровневый `README.md` и `README.md`
в каждой папке — это быстрая справка; всё под `wiki/` — длинные разборы с
конкретными числами, примерами и рецептами workflow.

---

## English

- [`en/00_index.md`](en/00_index.md) — index / table of contents
- [`en/01_repo_overview.md`](en/01_repo_overview.md) — what this repo is + upstream sources
- [`en/02_offsets_deep_dive.md`](en/02_offsets_deep_dive.md) — every runtime global explained
- [`en/03_schema_deep_dive.md`](en/03_schema_deep_dive.md) — class layouts, drift discipline
- [`en/04_protobufs_deep_dive.md`](en/04_protobufs_deep_dive.md) — 43 `.proto` files by domain
- [`en/05_structures.md`](en/05_structures.md) — human-readable class summaries
- [`en/06_vmp_targets.md`](en/06_vmp_targets.md) — which fields VMP-protected plugins touch
- [`en/07_sync_workflow.md`](en/07_sync_workflow.md) — `sync.cmd` / `sync_from_upstream.py` walk-through
- [`en/08_runtime_verification.md`](en/08_runtime_verification.md) — `verify_offsets.py` explained
- [`en/09_ci_recipes.md`](en/09_ci_recipes.md) — GitHub Actions recipes
- [`en/10_glossary.md`](en/10_glossary.md) — CS2 / VMP / RE terminology

## Русский

- [`ru/00_index.md`](ru/00_index.md) — оглавление
- [`ru/01_обзор_репо.md`](ru/01_обзор_репо.md) — зачем этот репо и откуда данные
- [`ru/02_offsets_подробно.md`](ru/02_offsets_подробно.md) — каждый runtime global подробно
- [`ru/03_schema_подробно.md`](ru/03_schema_подробно.md) — layouts классов, дисциплина drift
- [`ru/04_protobufs_подробно.md`](ru/04_protobufs_подробно.md) — 43 `.proto` файла по доменам
- [`ru/05_структуры.md`](ru/05_структуры.md) — читаемые описания классов
- [`ru/06_vmp_мишени.md`](ru/06_vmp_мишени.md) — какие поля трогают VMP-плагины
- [`ru/07_воркфлоу_sync.md`](ru/07_воркфлоу_sync.md) — разбор `sync.cmd` / `sync_from_upstream.py`
- [`ru/08_runtime_верификация.md`](ru/08_runtime_верификация.md) — разбор `verify_offsets.py`
- [`ru/09_ci_рецепты.md`](ru/09_ci_рецепты.md) — рецепты GitHub Actions
- [`ru/10_глоссарий.md`](ru/10_глоссарий.md) — терминология CS2 / VMP / RE

---

## When to read what / Когда что читать

**"I just want to run this"** → [`../USAGE.md`](../USAGE.md).

**"I just need one offset for a script"** → [`../offsets/latest/offsets.json`](../offsets/latest/offsets.json) — machine-readable, no wiki page needed.

**"I'm writing a runtime plugin against CS2"** → start with `01_repo_overview`, then `05_structures`, then `06_vmp_targets`.

**"CS2 just updated and my hooks broke"** → `07_sync_workflow` → `08_runtime_verification` → `02_offsets_deep_dive`.

**"I'm porting FVA / VLB and need to know what hooks what"** → `06_vmp_targets` is the whole point of this repo for you.

**"Я хочу просто запустить это"** → [`../USAGE.md`](../USAGE.md).

**"Мне нужен один оффсет для скрипта"** → сразу в [`../offsets/latest/offsets.json`](../offsets/latest/offsets.json).

**"Я пишу runtime-плагин под CS2"** → `01_обзор_репо` → `05_структуры` → `06_vmp_мишени`.

**"CS2 обновился, хуки отвалились"** → `07_воркфлоу_sync` → `08_runtime_верификация` → `02_offsets_подробно`.

**"Портирую FVA / VLB, нужно узнать что во что хукает"** → `06_vmp_мишени` — весь репо ради этого.
