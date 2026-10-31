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
