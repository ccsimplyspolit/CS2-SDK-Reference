# CS2-SDK-Reference

Curated reference for **CS2 (Counter-Strike 2) SDK, offsets, protobufs, and structures** — geared for VMProtect analysis and reverse-engineering of any CS2-adjacent project.

Курируемый референс по **CS2 SDK, offsets, protobufs и структурам** — для VMProtect-анализа и реверс-инжиниринга любого CS2-проекта.

---

## What's inside / Что внутри

| Directory | EN | RU |
|---|---|---|
| [`offsets/`](offsets/) | Latest a2x/cs2-dumper HEAD + per-build historical snapshots | Свежие offsets из a2x/cs2-dumper HEAD + исторические срезы по билдам |
| [`schema/`](schema/) | Class field offsets (`client_dll.json`, `engine2_dll.json`, `server_dll.json`) — 3189+ fields across 300+ classes | Оффсеты полей классов (~3189 fields, 300+ classes) |
| [`protobufs/`](protobufs/) | 43 `.proto` files copied from SteamTracking — CS2's on-wire message formats | 43 `.proto` файла из SteamTracking — форматы сетевых сообщений CS2 |
| [`structures/`](structures/) | Human-readable class layouts for VMP-critical CS2 types | Классы CS2, важные для VMP-анализа, в читаемом виде |
| [`vmp_targets/`](vmp_targets/) | Which CS2 fields VMP-protected DLLs actually touch (input_history, rank display, gate byte, etc.) | Какие поля CS2 реально трогают защищённые VMP плагины |
| [`tools/`](tools/) | Fetch + verify scripts | Скрипты обновления + сверки |
| [`wiki/`](wiki/) | Bilingual long-form deep dives — 10 pages each in EN + RU | Двуязычные развёрнутые разборы — по 10 страниц на EN + RU |
| [`USAGE.md`](USAGE.md) | Bilingual quick-start (first-time setup, update, verify, CS2 update, contribute) | Двуязычный quick-start (установка, обновление, сверка, апдейт cs2, contrib) |

---

## Why this exists / Зачем это существует

**EN:** Any RE project against a CS2-adjacent binary (anti-VAC helper, aim-assist, rank spoofer, ...) needs the same 4 kinds of information: **runtime globals** (`dwLocalPlayerController`, `dwGameRules`), **class member offsets** (`CCSPlayerController.m_iCompetitiveRanking`), **wire protobufs** (`CSGOUserCmdPB.input_history`), and **structure layouts** (how `CBaseUserCmdPB` composes with `CInButtonStatePB`). Everyone re-collects the same data. This repo is a one-stop shop refreshed against upstream sources.

**RU:** Любому RE-проекту про CS2-бинарник (anti-VAC хелпер, aim-ассист, ранк-спуфер, ...) нужны 4 типа информации: **runtime globals** (`dwLocalPlayerController`, `dwGameRules`), **class member offsets** (`CCSPlayerController.m_iCompetitiveRanking`), **wire protobufs** (`CSGOUserCmdPB.input_history`) и **layouts структур** (как `CBaseUserCmdPB` соотносится с `CInButtonStatePB`). Все каждый раз собирают одно и то же. Этот репо — one-stop, обновляемый из upstream-источников.

---

## One-click sync / Синхронизация в один клик

**EN:** Just run one command / double-click one file. Fetches offsets + schema from `a2x/cs2-dumper` HEAD + all 43 protobufs from `SteamDatabase/Protobufs`, snapshots current state to `offsets/history/pre_sync_<timestamp>/` before overwriting, and optionally auto-commits + pushes:

**RU:** Одной командой / двойной клик по файлу. Тянет offsets + schema из `a2x/cs2-dumper` HEAD и все 43 protobuf'а из `SteamDatabase/Protobufs`, снапшотит текущее состояние в `offsets/history/pre_sync_<timestamp>/` перед перезаписью, и опционально auto-commit + push:

```powershell
# Windows: just double-click sync.cmd
# CLI (Windows/Linux/macOS):
python tools/sync_from_upstream.py                # dry-run intent: fetch HEAD + diff
python tools/sync_from_upstream.py --dry-run      # show diff without writing
python tools/sync_from_upstream.py --commit       # sync + git add/commit/push
python tools/sync_from_upstream.py --pr 670       # sync offsets from an open cs2-dumper PR
python tools/sync_from_upstream.py --offsets-only # skip protobufs
python tools/sync_from_upstream.py --protobufs-only
python tools/sync_from_upstream.py --verify --live-pid 53000  # verify against running cs2
```

Options / Опции:
- `--pr N` — fetch offsets from an open cs2-dumper PR by number
- `--commit` — auto-commit and push if anything changed
- `--dry-run` — show what would change, write nothing (exit 2 if drift detected)
- `--verify` / `--live-pid PID` — verify offsets against a running cs2 process

Exit codes / Коды возврата: 0 = OK, 1 = network/git error, 2 = dry-run drift.

---

## Quick start / Быстрый старт

### Get the current globals / Получить текущие globals

```bash
cat offsets/latest/offsets.json | jq '.["client.dll"]'
```

Live output (2026-07-15 HEAD, build 14169-14170 are identical for these fields):

```json
{
  "dwLocalPlayerController": 36832624,     // 0x2383730 → follow ptr → CCSPlayerController*
  "dwGameRules":             36966376,     // 0x23A39D8 → C_CSGameRules*
  "dwLocalPlayerPawn":       37125176,     // 0x23A4238
  "dwCSGOInput":             37205488,     // 0x23B95F0
  "dwGlobalVars":            34275680      // 0x208FD60
}
```

### Get a class field offset / Получить оффсет поля класса

```bash
python -c "
import json
c = json.load(open('schema/client_dll.json'))
fields = c['client.dll']['classes']['CCSPlayerController']['fields']
for k, v in list(fields.items())[:10]:
    print(f'{k:40s} 0x{v:X}')
"
```

### Verify a running cs2 matches / Свериться с running cs2

```bash
python tools/verify_offsets.py --pid <cs2_pid>
```

Requires admin (SeDebugPrivilege). Reports drift between the JSONs here and the live memory layout.

---

## Structure: what to read first / С чего начать

**EN:**
1. [`offsets/latest/offsets.json`](offsets/latest/offsets.json) — the 32 runtime globals CS2 exposes (client.dll, engine2.dll, server.dll).
2. [`schema/client_dll.json`](schema/client_dll.json) — every class + every field offset for `client.dll` (~3189 fields).
3. [`protobufs/cs_usercmd.proto`](protobufs/cs_usercmd.proto) + [`usercmd.proto`](protobufs/usercmd.proto) — the two message types VMP-protected input-manipulation plugins care about most.
4. [`structures/`](structures/) — human-readable summaries of the ~10 CS2 classes any RE project keeps coming back to.
5. [`vmp_targets/`](vmp_targets/) — cross-reference: for each known VMP-plugin behavior, which schema fields + protobuf tags are touched.

**RU:** тот же порядок 1→5.

---

## Update workflow / Как обновлять

**EN:** All data here is fetched from upstream. Rerun `tools/fetch_head_offsets.py` after every CS2 update. If `a2x/cs2-dumper` HEAD is behind, check open PRs (recent history: PR #670 was the 2026-07-15 build).

**RU:** Всё тянется из upstream. Запусти `tools/fetch_head_offsets.py` после каждого обновления CS2. Если `a2x/cs2-dumper` HEAD отстаёт, посмотри открытые PR (например, PR #670 — 2026-07-15 build).

---

## Historical snapshots / Исторические срезы

| Build | Date | Directory |
|---|---|---|
| 14169 (HEAD) | 2026-07-10 | [`offsets/latest/`](offsets/latest/) |
| 14170 | 2026-07-15 | [`offsets/history/build_14170_2026-07-15/`](offsets/history/build_14170_2026-07-15/) |

**Fun fact / Интересный факт:** Between 14169 and 14170 all **32 globals + 3189 class field offsets are BYTE-FOR-BYTE IDENTICAL**. Only one internal anonymous struct name hash (`_4z__`) changed — the update was purely code-level.

---

## Related repos / Связанные репозитории

- **[VMP-Deob](https://github.com/ccsimplyspolit/VMP-Deob)** — VMProtect research + tooling. Uses these offsets/schemas for runtime memory verification.
- **[CS2-P2C-TEMPLATES](https://github.com/ccsimplyspolit/CS2-P2C-TEMPLATES)** — Runtime CS2 plugins (VacLiveBypass, RankSpoofer, IsValveDS) that consume these offsets via autofetch.
- **[a2x/cs2-dumper](https://github.com/a2x/cs2-dumper)** — Upstream source of offsets + schemas (Rust project that dumps a running CS2 process).
- **[SteamTracking/Protobufs](https://github.com/SteamDatabase/Protobufs)** — Upstream source of `.proto` files.

---

## Contributing / Contributing

**EN:** PRs adding new historical snapshots, cross-references between schema and known VMP targets, or fresh protobuf definitions welcome. Every offset should carry a source attribution (which cs2-dumper commit + which live cs2 PID/build).

**RU:** PR-ы с новыми историческими срезами, cross-references между schema и известными VMP-мишенями, или свежими protobuf определениями — welcome. Каждый offset должен нести source attribution (какой commit cs2-dumper + какой live cs2 PID/build).

---

## License / Лицензия

Data mirrored from public upstream sources retains its original license (a2x/cs2-dumper is MIT; SteamTracking is public-domain-effective). Original documentation and tooling in this repo: MIT.

Данные из публичных upstream-источников сохраняют оригинальные лицензии. Собственная документация и инструментарий: MIT.
