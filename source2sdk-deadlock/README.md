# Source2SDK — Deadlock

Full Deadlock (Citadel) SDK generated from the installed game by
[`../source2gen/`](../source2gen/) (built with `-o game=DEADLOCK`).

**9016 headers across 32 modules**, generated 2026-07-19 against Deadlock
`ClientVersion=6624` (VersionDate Jul 08 2026). 4377 `CCitadel*`/`C_Citadel*`
classes. Schema stats: 11449 registrations.

> The upstream that produced these SDKs — `neverlosecc/source2sdk` — is **404**.
> This tree is generated fresh from the `source2gen` in this repo.

## Layout

```
sdk/
  CMakeLists.txt        header-only INTERFACE target + a compile-test target
  conanfile.py          conan recipe
  include/source2sdk/   32 modules; client is the largest (3623 headers)
```

Header-only. Point your include path at `sdk/include`. Placeholder types
(`CUtlVector`, `CHandle`, …) live in
[`../source2gen/sdk-static.toml`](../source2gen/sdk-static.toml).

## Regenerating

```powershell
cd ../source2gen
conan build -o "&:game=DEADLOCK" --build=missing .
cd build/bin/Release
./source2gen-loader.exe --game-path "K:\SteamLibrary\steamapps\common\Deadlock"
```

Then copy `build/bin/Release/sdk/include` over `sdk/include` here.

The dump completed with **0 skipped types**.

## Compile status

**All 32 modules compile with 0 errors** under MSVC (`/std:c++17 /permissive-`),
verified per-module. Two former edge-case categories are now handled in
`source2gen`:

- **Per-game type sizes** — `CAnimGraphTagRef`/`CAnimGraphTagOptionalRef` are
  `0x20` in Deadlock but `0x18` in CS2. `sdk-static.toml` now carries
  `size-DEADLOCK` overrides, and `generate_static.py --game DEADLOCK` applies them.
- **Forward declarations for undumped pointer types** — e.g.
  `CCitadel_Bullet_Base*` points at a class that isn't in the dump; the generator
  now forward-declares such pointee types so the header is self-contained.

### License

Generated output. See the original Source2Gen project for license information.
