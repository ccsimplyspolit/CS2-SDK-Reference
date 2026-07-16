# Glossary — CS2 / VMP / RE terminology

Alphabetical. Aimed at readers who know general RE but are new to CS2 or
new to VMP-adjacent work.

## a2x/cs2-dumper

Rust project that attaches to a running CS2 and prints every runtime
global, every class + field offset, and every schema enum. Upstream
source of everything in `offsets/` and `schema/`. Repo:
[github.com/a2x/cs2-dumper](https://github.com/a2x/cs2-dumper).

## Anti-cheat

The systems Valve deploys to detect and block cheating. **VAC** is
signature-based (client-side scan on match end). **Overwatch** is
demo-review based. Real-time anti-cheat lives inside cs2 itself.

## Anti-aim

A cheat class that manipulates a player's outgoing angles so their model
faces one direction on other players' screens while their crosshair
faces another. In CS2 this is done by rewriting
`CSGOInputHistoryEntryPB.view_angles` in every outgoing user command.

## Build number

CS2's internal integer version. Live-readable at `[engine2.dll +
dwBuildNumber]`. Also derivable from the SHA-256 of `client.dll` on
disk. Recent examples: 14169 (2026-07-11), 14170 (2026-07-15).

## CHandle

CS2's entity handle type. Packed 32-bit `{ index : 15, serial : 17 }`.
Not a raw pointer. Resolve via the entity list.

## CInButtonStatePB

Protobuf message carrying button state per user command. Field: attack,
attack2, jump, duck, use, forward, back, moveleft, moveright, etc.
Located in `networkbasetypes.proto`.

## Controller vs pawn

A **controller** in Source 2 is the persistent per-player object —
survives death, holds rank / wins / stats. A **pawn** is the per-life
entity — has position, health, weapons. `CCSPlayerController` owns
`C_CSPlayerPawn` via `m_hPlayerPawn`.

## CS Rating

Premier mode's Elo score. 0..40000. Lives at
`CCSPlayerController + 0x888` with rank type = 11.

## CSGOInputHistoryEntryPB

Protobuf message representing one entry in `input_history`. ~120-byte
struct. Contains `view_angles` (FVA's anti-aim target).

## CSGOUserCmdPB

Outer user-command envelope. Contains a `CBaseUserCmdPB base` +
`repeated CSGOInputHistoryEntryPB input_history`.

## CUtlSymbolLarge

CS2 string intern-table handle. 8 bytes. Not a raw string — points into
a global intern table. Direct 16-byte writes over a `CUtlSymbolLarge`
member (like `m_szClan`) will show garbage.

## Drift

When cs2 updates and previously-valid offsets no longer point at the
right thing. Between minor patches: rare. Between major patches: can be
wholesale. Detect via `verify_offsets.py`.

## dwGameRules / dwLocalPlayerController / etc.

CS2's runtime globals — `dw*`-prefixed symbols exposed at fixed RVAs in
each DLL. Point at singletons or the entity list. See
`02_offsets_deep_dive.md`.

## Entity list

The array of all networked entities. Reachable via `[client.dll +
dwEntityList]`. Each slot is a `CEntityInstance*`.

## FNV1a-64

Fowler-Noll-Vo hash, 64-bit, "alternate" variant.
`h = offset_basis; for byte b: h ^= b; h *= prime`. FVA uses it to
identify schema fields by name — see `06_vmp_targets.md` for four
concrete hashes.

## FVA / FuckVacAgain

A VMP-protected anti-VAC helper plugin. Section-J is its anti-aim body.
Uses FNV1a-hashed schema lookup for offset resilience.

## GC / GameCoordinator

Steam's out-of-band matchmaking service. Communicates with cs2 over its
own protobuf channel. Rank updates come through here.

## Hex-Rays

The most-used x64 decompiler. Not directly relevant to this repo, but
inevitably referenced when reversing VMP.

## Image base

The address the OS loader picks to map a DLL at.
`GetModuleHandleW(L"client.dll")` returns the current image base for
`client.dll`. `dw*` globals are offsets relative to this.

## Input history

`CSGOUserCmdPB.input_history` — a `repeated CSGOInputHistoryEntryPB`.
Sub-tick input state. Rewrite target for anti-aim.

## LazyString

CS2's deferred-string type. `CTypeName::Get()` returns a broken value
before the LazyString is materialised. FVA works around this by
comparing vtable pointers directly.

## Manifest

FVA's runtime schema table. A binary blob shipped alongside FVA
containing pre-computed FNV1a-64 → { field_offset, type_hint } entries.
Reloaded per cs2 build.

## MVP

Round MVP star. Persistent count at `CCSPlayerController + 0x958`.

## Pawn

See "controller vs pawn". `C_CSPlayerPawn` for a live player.

## Premier

Competitive mode with a numeric Elo (0..40000) instead of a rank icon.
Rank type = 11.

## Protobuf

Google Protocol Buffers. CS2's wire format for everything. This repo
mirrors all 43 `.proto` files from `SteamDatabase/Protobufs/csgo/`.

## QAngle

Valve's 3-float angle struct: `{ float x /* pitch */, float y /* yaw */,
float z /* roll */ }`. In protobufs: `CMsgQAngle`.

## Rank type

`CCSPlayerController.m_iCompetitiveRankType` at `+0x890`. Enum:
6 = classic competitive, 7 = wingman, 11 = premier.

## RankSpooferDriver

Kernel-driver-based CS2 plugin that writes into
`CCSPlayerController.m_iCompetitiveRanking` etc. to fake rank.

## Ranking

Classic competitive: 0..18 (silver-1 through global elite). Premier:
0..40000. Meaning depends on rank type.

## RVA

Relative virtual address. Offset from a module's image base.
`0xB09528` = the CreateMove function is at
`client.dll base + 0xB09528` in build 14170.

## Schema system

CS2's runtime C++-type introspection layer. Every class + field has
metadata queryable at runtime. Basis for both `a2x/cs2-dumper` and for
FVA's manifest-based lookup.

## SeDebugPrivilege

Windows token privilege required to `OpenProcess` a process running as
a different user or protected in various ways. Elevate the shell to
get it.

## Section-J

The specific section of FVA that does anti-aim angle rewriting. Reads
button state, wraps angles into (-180, 180], writes back.

## SerializePartialToArray

Virtual method on every protobuf-generated C++ class in CS2. FVA hooks
it on `CBaseUserCmdPB` to inspect / mutate outgoing user commands.

## Signon state

Where the client is in the connection handshake. `SIGNONSTATE_FULL = 6`
means "in a game". Read via `[[engine2.dll + dwNetworkGameClient] +
0x230]`.

## Source 2

Valve's engine, replacement for GoldSrc / Source. Powers cs2, Deadlock,
Dota 2.

## Subtick

CS2 processes user input at sub-tick granularity — multiple movement
steps per server tick. `CBaseUserCmdPB.subtick_moves` carries these
steps.

## SubtickMoveStep

Individual entry in `subtick_moves`. Timestamp + button state + mouse
delta. Common myth: FVA rewrites these. It does not.

## Symbol intern table

A global hash table CS2 uses to dedupe strings. Referenced by
`CUtlSymbolLarge` handles.

## Tick / TickBase

CS2 runs at 64 Hz server-side. `m_nTickBase` at `CBasePlayerController +
0x6B8` is the local per-player tick reference.

## VAC

Valve Anti-Cheat. Signature-based scanner. Delayed bans (weeks) so bans
correlate less obviously with specific cheat versions.

## VacLiveBypass / VLB

CS2 plugin that uses pattern-scan for hook locations (as opposed to
FVA's FNV1a-schema approach). Sees also `create_move_hook.cpp` and
`serialize_to_array_hook.cpp` in its source.

## Vtable

C++ virtual function table. FVA uses vtable pointer comparison (rather
than `CTypeName::Get`) for message-type identification.

## VMProtect / VMP

Commercial code virtualiser. Converts native x86 to bytecode for an
embedded VM. Anti-reverse. FVA, VLB, and RankSpooferDriver all ship
VMP-protected binaries.

## Wingman

CS2's 2v2 competitive mode. Rank type = 7.
