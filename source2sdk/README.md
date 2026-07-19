# Source2SDK — CS2

Full CS2 SDK generated from the installed game by [`../source2gen/`](../source2gen/).

**3748 headers across 33 modules**, generated 2026-07-19 against CS2
`ClientVersion=2000876` / `PatchVersion=1.41.7.1` (VersionDate Jul 16 2026),
matching a2x/cs2-dumper build 14169.

> The upstream this came from — `neverlosecc/source2sdk` — now returns **404**,
> as does `neverlosecc/source2gen`. Both directories here are the surviving copy.

---

## What changed

Upstream kept one branch per game (`csgo`, `dota`, `hlvr`, `deadlock`, …) and the
copy vendored here was taken from the **wrong branch**: it held the Dota 2 SDK —
17831 headers, 6928 `CDOTA*`/`C_DOTA*` classes, and **zero** CS2 classes. No
`CCSPlayerController`, no `C_CSPlayerPawn`, no `CCSGameRules`. It has been
regenerated for CS2.

Sanity check:

```bash
find sdk/include -name 'CCSPlayerController.hpp'   # 2 hits (client + server)
find sdk/include -name 'C_DOTA*'                   # 0 hits
```

---

## Layout

```
sdk/
  CMakeLists.txt        header-only INTERFACE target + a compile-test target
  conanfile.py          conan recipe
  include/source2sdk/
    client/    858 headers      server/       817 headers
    particles/ 507              animgraphlib/ 300
    animlib/   217              smartprops/   167
    ...        33 modules total
```

## Using it

Header-only. Point your include path at `sdk/include` and include what you need:

```cpp
#include "source2sdk/client/CCSPlayerController.hpp"

// offsets are asserted at compile time
static_assert(offsetof(source2sdk::client::CCSPlayerController, m_iCompetitiveRanking) == 0x888);
```

Types the generator cannot express (`CUtlVector`, `CHandle`, `CTransform`, …) are
`char[N]` placeholders declared in
[`../source2gen/sdk-static.toml`](../source2gen/sdk-static.toml). Replace them
with real implementations if you need to touch those fields.

## Regenerating

```powershell
cd ../source2gen
conan build -o "&:game=CS2" --build=missing .
cd build/bin/Release
./source2gen-loader.exe            # writes ./sdk
```

Then copy `build/bin/Release/sdk/include` over `sdk/include` here.

---

## Verification

Cross-checked against `../schema/*.json` (independently produced by
a2x/cs2-dumper): **7004 field offsets compared across 758 shared classes in
client.dll and server.dll — 100% agreement, zero mismatches.**

Compile-tested per module with MSVC 19.44 (`/std:c++17 /permissive-`):

| | |
|---|---|
| Headers compiled | 3748 |
| Modules clean | **33 of 33** |
| Errors | **0** |

For reference, the same test on the tree as vendored produced 241 errors, of
which 74 were undefined types and 167 were failing asserts. Those were fixed by
adding 16 missing types to `sdk-static.toml`, correcting two whose sizes had
drifted (`CUtlBinaryBlock` 0x18 → 0x10, `CPulseValueFullType` 0x10 → 0x18), and
fixing an MSVC bitfield-packing bug in the generator (below).

### Fixed: MSVC bitfield over-allocation

`client/CClientAlphaProperty.hpp` used to fail its `sizeof` assert on MSVC. The
class has a 24-bit bitfield block. The generator emitted it as `uint32_t`
members, and MSVC gives a `uint32_t` bitfield a full 4-byte storage unit — but
the real (also MSVC-built) game packs that block into **3 bytes**, so every
field after it shifted forward by one byte on Windows. The schema agrees: it
puts `m_nAlpha` at 0x17 and `m_flFadeScale` at 0x18, which the old 4-byte block
made impossible.

Fixed in the generator (`source2gen/source2gen/src/sdk/sdk.cpp`,
`AssembleBitfield`): when a bitfield block's real width — the gap to the next
field — is narrower than the storage unit named bitfields would occupy, it is
now emitted as a raw byte array of the real width, with the field breakdown kept
in a comment:

```cpp
// start of bitfield block
// bitfield m_nDesyncOffset : 14 bit(s)
// bitfield m_bAlphaOverride : 1 bit(s)
// ...
uint8_t _bitfield0014[0x3];
// end of bitfield block  // 24 bits
std::uint8_t m_nAlpha; // 0x17
```

This reproduces the real layout on every compiler. Blocks that already round to
a natural unit (8/16/32/64 bits) keep their named bitfields — only the odd-sized
block that couldn't pack correctly is converted (1 class in the whole dump).

---

### License

Generated output. See the original Source2Gen project for license information.
