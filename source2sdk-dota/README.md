# Source2SDK — Dota 2

Full Dota 2 SDK generated from the installed game by [`../source2gen/`](../source2gen/)
(built with `-o game=DOTA2`).

**17219 headers across 32 modules**, generated 2026-07-19 against Dota 2
`ClientVersion=6861` (VersionDate Jul 17 2026). 13180 `CDOTA*`/`C_DOTA*` classes.

> The upstream that produced these SDKs — `neverlosecc/source2sdk` — is **404**.
> This tree is generated fresh from the `source2gen` in this repo.

## Layout

```
sdk/
  CMakeLists.txt        header-only INTERFACE target + a compile-test target
  conanfile.py          conan recipe
  include/source2sdk/   32 modules; client is the largest (7967 headers)
```

Header-only. Point your include path at `sdk/include`. Placeholder types
(`CUtlVector`, `CHandle`, …) live in
[`../source2gen/sdk-static.toml`](../source2gen/sdk-static.toml).

## Regenerating

```powershell
cd ../source2gen
conan build -o "&:game=DOTA2" --build=missing .
cd build/bin/Release
./source2gen-loader.exe --game-path "K:\SteamLibrary\steamapps\common\dota 2 beta"
```

Then copy `build/bin/Release/sdk/include` over `sdk/include` here.

## Notes on robustness

Dota's `client` type-scope is huge (7473 classes). One enum in it faults the
schema walk on the current build; `source2gen` now catches that (a structured
exception → C++ exception → skip-and-log) so the dump completes instead of
crashing. **1 type was skipped**; the log names it.

## Compile status

**All 32 modules compile with 0 errors** under MSVC (`/std:c++17 /permissive-`),
verified per-module. The one former edge case (`dota_minimap_boundary`, a
name-only entity with no schema binding whose guessed size can't be asserted) is
handled: `source2gen` now omits the size assertion for such classes.

### License

Generated output. See the original Source2Gen project for license information.
