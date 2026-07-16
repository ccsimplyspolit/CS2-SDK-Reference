# Runtime verification

`verify_offsets.py` is the "does this repo match the cs2 I'm actually
running?" check. It reads each tracked `dw*` global from the live cs2
process and asserts the dereference lands somewhere plausible.

## Prerequisites

- **Windows.** `verify_offsets.py` uses `kernel32`, `psapi`, `advapi32`
  through `ctypes`. It's Windows-only. cs2 is Windows-only anyway in
  practice.
- **Elevated shell.** The script calls `AdjustTokenPrivileges` to enable
  `SeDebugPrivilege`. Without it, `OpenProcess(cs2_pid)` fails. Right-click
  Terminal → "Run as administrator".
- **cs2 running.** The script does not launch cs2. Start it manually first
  (or via Steam), then note the PID (Task Manager → Details, or
  `Get-Process cs2 | Select Id`).

## Invocation

```powershell
python tools/verify_offsets.py --pid 53000
```

## What it checks

Two categories:

### 1. `dw*` globals dereference to a plausible pointer

Each tracked global is expected to deref to something in the "user-mode
canonical pointer range" `0x00007ff0_00000000..0x00007fff_ffffffff`.
That's the top-of-user-VA window Windows uses for images + heaps on x64.
A value in that range is almost certainly a valid CS2 pointer. Anything
else (except `NULL`) is drift.

### 2. Module load status

Every module in the `tracked` dictionary must be loaded in the target
process. If `engine2.dll` is missing, something is very wrong (cs2 is
not actually running, or the PID is wrong).

## Reading the output

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

Exit code `0`. Every tracked global points somewhere sensible. Repo
matches cs2.

## Failure modes

### `NULL (game may not be fully loaded)`

```
dwLocalPlayerController  offset=0x237eba0  va=...  → NULL (game may not be fully loaded)
```

`[dwLocalPlayerController]` is 0. Common at main menu — the pointer only
populates once you're in a match. The script treats this as `ok` because
it's a valid CS2 state, not drift. Re-run after joining a game.

### `value 0x... (unexpected)`

```
dwGameRules  offset=0x23a39d8  va=...  → value 0x1234 (unexpected)
```

The read succeeded but the value isn't `NULL` and isn't in the pointer
range. Two possibilities:

1. **Offset is wrong.** Most likely — you're reading a small integer or
   a bool where you expected a pointer. Rerun `sync_from_upstream.py`.
2. **Actually a plain int at that offset.** Some `dw*` symbols are
   direct data, not pointers — e.g. `dwBuildNumber`. Check what the JSON
   claims the symbol is before assuming drift.

### `UNREADABLE`

```
dwLocalPlayerController  offset=...  va=0x7ffcabd7eba0  → UNREADABLE
```

`ReadProcessMemory` failed. Possibilities:

1. **PID wrong.** Not actually cs2.
2. **Not elevated.** Script printed "SeDebugPrivilege not granted" and
   bailed earlier, but if you saw the module info and only this fails,
   you may have opened cs2 as admin while your shell is not — same-tier
   requirement. Elevate the shell.
3. **Anti-cheat interference.** VAC does not typically prevent RPM on
   its own process, but paranoid users have run into third-party AC that
   does. Try with cs2 in non-official-server mode.

### `not loaded in PID`

```
[-] client.dll: not loaded in PID 53000
```

cs2 is running but `client.dll` isn't loaded — the process is still
early-init. Wait a few seconds and re-run.

## Extending the tracked list

Currently the script tracks 5 client fields + 1 engine field. To add
more, edit the `tracked` dictionary in `verify_offsets.py`:

```python
tracked = {
    'client.dll':  [
        'dwLocalPlayerController',
        'dwGameRules',
        'dwLocalPlayerPawn',
        'dwCSGOInput',
        'dwGlobalVars',
        'dwEntityList',              # add
        'dwViewMatrix',              # add
    ],
    'engine2.dll': ['dwNetworkGameClient'],
    'inputsystem.dll': ['dwInputSystem'],  # add
}
```

## What it does NOT check

- **Class member offsets.** Only the top-level `dw*` globals. To verify
  members (`m_iCompetitiveRanking` etc.), you need a longer walk: deref
  `dwLocalPlayerController`, read `+0x888`, check the value is a valid
  competitive rank (0..40000). Not automated here.
- **Function RVAs.** For CreateMove / SerializePartial hook targets, see
  the sig-scan validator in
  [VMP-Deob/tools/analysis_suite/rt_verify_all_hooks.py](https://github.com/ccsimplyspolit/VMP-Deob/blob/main/tools/analysis_suite/rt_verify_all_hooks.py).
- **Protobuf tags.** Wire schema is not runtime-verifiable without
  actually decoding a packet.

## Integrating with `sync_from_upstream.py`

Two ways:

```powershell
# Explicit PID
python tools/sync_from_upstream.py --live-pid 53000

# Autodetect via tasklist
python tools/sync_from_upstream.py --verify
```

`--verify` runs `tasklist /FI "IMAGENAME eq cs2.exe" /NH /FO CSV`,
parses out the PID, and hands it to `verify_offsets.py`. Works only if
exactly one cs2 is running.

## Why the pointer-range check works

x64 Windows canonical VAs above `0x00007fff_ffffffff` are reserved for
kernel space; below `0x00007ff0_00000000` is where heaps + images +
stacks live. Almost everything a cs2 module allocates lands in the
`0x00007ff*` window. Values in that window aren't guaranteed to be
correct pointers, but they're extremely likely; values outside it are
almost guaranteed to be wrong. This makes the check robust without
needing a full VA-region walk.

For a stricter check, `VirtualQueryEx(target_handle, val, ...)` will
tell you exactly which region the pointee lands in and whether it's
committed. That's the next-level upgrade if you need certainty.
