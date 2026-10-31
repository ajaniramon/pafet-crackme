# Serial-VM → `serial.cpp` (follow-up to JACK XXXVI)

Plan steps 1, 2, 4, 5 and 6 (step 3, executing the callback-9 arm, is out
of scope). Each step is committed separately.

## Step 1 — Host binding: what every receiver pointer is

[Evidence](serial_cpp_evidence/host_binding.json).

Call chain: main dispatcher `0x396990` **case 11** (`0x396c36`) → outer
wrapper `0x264a60` (itself virtualized, 36 KB; not analysed here) →
`std::function` lambda (vtable `0x3f19f0`,
`_Func_impl_no_alloc<lambda_487f57e9…>`), `operator()` = `0x39d740` →
Serial-VM dispatcher `0x22a120(out[24], 24, receiver)`.

Lambda captures: `+8` work string, `+0x10` input = `ctx+0x10` (the serial),
`+0x18` key string, `+0x20` output string (moved into `ctx+0x20` afterwards,
the "transformed serial" of earlier reports). `operator()` commands:
`0` → `work = *input`; `1` → run Serial-VM on `work.data()/work.size()`;
`2` → `*output = work`.

The 104-byte callback receiver (vtable `0x3f1820`) is filled by `0x39d740`
with pointers into its own frame:

| Field | Type | Meaning |
|---|---|---|
| R0 | `int32` | loop-1 index |
| R1 | `uint8[256]` | byte table (frame, zeroed) |
| R2 | `uint8` | loop-2 accumulator |
| R3 | `std::string*` | **key** — `string_decoder(7)`, the empty string |
| R4 | `uint64` | key length (stack garbage until callback 5) |
| R5 | `int32` | loop-2 index |
| R6, R7 | `uint8` | loop-3 cursors |
| R8 | `uint64` | loop-3 byte counter |
| R9 | `uint64` | data length = `work.size()` |
| R10 | `uint8` | keystream byte |
| R11 | `char*` | `work.data()` (SSO-aware), transformed in place |

Capture memory confirms it in three processes: data `serial01`, length 8,
key length 0.

**Consequence.** The key is a compile-time constant (decoder slot 7 is empty,
[DES3 recovery](PAFET_DES3_RECOVERY.md)). Bifurcation 2392
(`CMP_NE fn8(),0`) is therefore constant for this binary: the callback-9 arm
is dead for every username/serial, not merely unobserved. The order of the
three commands inside `0x264a60` is inferred from their effects, not traced.

## Step 2 — Cleanup and return after HALT

[Evidence](serial_cpp_evidence/cleanup_return.json). From the verified
cleanup entry `22b0af`:

| RVA | Effect |
|---|---|
| `229750` | `VirtualFree(ctx[0x1190], 0, MEM_RELEASE)` of the generated thunk pool; clear pointer/size |
| `22b0d6` loop | `out[i] = R[i]` for `i ∈ [r12, 24)` via `232e00 → 1ee650` (decoded virtual registers) |
| `22b10f` | `memset(bytecode, 0, 0xa76)` |
| `22b138` | result = `1ee310` = logical control 3, which HALT sets to **0** |
| `22b148` | `1edd60`: destroy the `std::function` holding the callback receiver (`ctx+0xb0`) |
| `22b156…22b18e` | four vector frees and one more `std::function` destroy; cookie check; `ret result` |

**What the host sees.** The adapter `0x39d740` calls `0x22a120` and then
returns 0 without reading the result or `out[24]` (both live in its own
frame). The only host-visible effect of Serial-VM is therefore the in-place
transformation of `work`'s bytes through callback 22. The cleanup itself is
established statically; the emulator stops at the `VirtualFree` import.

## Step 4 — The obfuscation layer is not host-observable

[Evidence](serial_cpp_evidence/observable.json),
[`pafet_serial_observable.py`](scripts/pafet_serial_observable.py).

**Static (abstract interpretation to fixpoint, all 478 instructions / 111
blocks).** A stack/register value is `CONST` (pool constant or
constant-derived), `HOST` (derived from a callback result) or `JUNK` (from a
register the program never stores). Result: **no `HOST_CALL` argument is ever
`JUNK`** (0 findings). Junk is stored only into the scratch registers r16/r23,
which are never loaded back into a callback argument. The uninitialised
registers that steer the four reconverging diamonds (936, 997, 1664, 1950)
therefore influence only comparisons whose results are dropped and padding
whose arms rejoin with identical callbacks (confirmed in `loops.json`).

**Dynamic (cross-process).** The two full HALT runs each make exactly **3188**
callbacks; their stored callback (function, argc, result) prefixes and tails
are identical, and the 64-callback prefix is identical across all seven
processes — even though users, rekeys (585 vs 589), remaps (1746 vs 1904) and
C++ exception counts (196 vs 219) differ. Encoded controls, keys, PRNG,
remaps, rekeys and decoder epochs leave the callback stream unchanged.

Together with step 2 (the only host-visible effect of Serial-VM is callback 22
writing `work`'s bytes in place), the entire obfuscation layer is invisible to
the host. The readable `serial.cpp` may omit it.
