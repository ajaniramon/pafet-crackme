# 06 — Hex-VM

The Hex-VM executes at `0x1400804c0`. Earlier work observed 72 output bytes
from 144 ASCII hex characters at `0x1403dbbc0`; matching those bytes does not
reconstruct its architecture. JACK XXVI is a partial reconstruction; see
[PAFET_JACK_XXVI.md](../PAFET_JACK_XXVI.md) for classifications and evidence.

## State and dispatch

The real virtual context lives on the executor's stack at `rsp+0x180`.
Executor-entry RCX is an external output-state argument, not this context.

| Offset | Meaning |
|---|---|
| `0x230`, `0x4b0`, `0x940` | A, K, B |
| `0x2b0`, `0x4b8` | Pending LIFO entries, length (capacity 64) |
| `0x4c0` | Push counter |
| `0x9b8` | Persistent eight-entry secondary handler table |
| `0x10d0` | Encoded VPC |
| `0x1180`, `0x1188` | LCG, step counter |

At initialization (`0x1400811c4..0x140081277`), the handler table is rotated
by the initial K's low three bits. It is not recomputed from K on every drain.
The secondary dispatcher (`0x14004c720`) consumes at most eight entries:

```text
encoded = pending[--length]
decoded = K_before XOR encoded
selector = high3(K_before * phi + encoded) // uint64 wrapping
K = fmix64(decoded)
execute persistent_table[selector]
advance LCG and step counter
tag = byte(LCG >> 27)
mask = tag*ctx[0x10c0] XOR ctx[0x10b8] XOR ctx[0x10b0]
encoded_VPC = ctx[0x10c8] != 0 ? mask + uint32(decoded)
                              : mask XOR uint32(decoded)
```

The selector uses pre-fmix K; the handler sees post-fmix K. The logical VPC
returned by the VPC reader differs from the encoded value in memory.

| Handler | State transformation |
|---|---|
| H0 | `A = fmix64(K ^ A)` |
| H1 | `B = fmix64((K >> 7) ^ B); K += phi` |
| H2 | `K ^= fmix64(A + 1)` |
| H3 | `A += (K & 6) \| 1` |
| H4 | `B ^= fmix64(K ^ A)` |
| H5 | `K = fmix64(B ^ K)` |
| H6 | `A ^= (K >> 32) & 255` |
| H7 | `B = fmix64(K + B)` |

Here fmix64 is the MurmurHash3 finalizer. `phi = 0x9e3779b97f4a7c15`.

## Queue and exceptions

`0x14004c880` increments counter, forms `uint32(item) ^ K`, conditionally
remaps, then throws if counter is 1 or `((counter * -0x3eb) ^ K) & 0xfff`
equals `0x1f`. Otherwise it appends the encoded item, subject to capacity.
The thrown payload carries the encoded item; reconstruction needs the catch
path, not merely a boolean reporting a throw.

The historical trace records 59 throws. The full-executor Unicorn host still
stops at unsupported `RtlPcToFileHeader`; MSVC unwind is not implemented.

## Observed graph and local predictions

The committed XXV capture contains 72 logical PCs. Its observed fanouts are
59 with one successor, eight with two, one with four and four with nine.
These are observations from one run, not proof of exhaustive CFG coverage.
`jack_xxvi_evidence/blocks.json` records each PC, observed successors, native
anchor where found and explicit semantic status.

Both invariants hold for all 281206 captured pushes:

- item equals the next VPC-write callback's logical PC argument;
- counter before push equals the zero-based push index.

The original CFG script uses the wrong column for counter in the ten-field
trace. Use `scripts/pafet_hexvm_audit_xxvi.py` for the corrected audit.

Keeping the table's initial rotation raises K prediction from 139873/281205
to 281205/281205. This corrects the previous claim that unmatched K values
demonstrated block writes to K. Predictions start from each captured push's
state; this is not full instruction lockstep or an autonomous execution.

K/A/B together match only 8047/281205 without block bodies. The first A
difference is explained by PC `0x2d409a` at native `0x14008735f`:

```text
A ^= fmix64(A + 1)
enqueue(0x8453b)
```

This block is implemented and differentially checked. The other 71 bodies
remain unreconstructed here. No blocks are unified merely from graph shape.

## Remap and the supposed output_build

`0x14007fb70` rebuilds four groups of 62 entries, with permutations, inverse
maps, encoded targets and optional generated thunks. It differs from the
eight-entry secondary handler table. The report and saved disassembly describe
its dependencies; a complete C++ remap and differential are still missing.

`0x1400889e0`, previously called output_build, forwards to `0x14004a0e0`:
it reads a virtual slot selected by the low byte of RDX, decodes the selected
bank cell, advances the LCG, changes its byte tag and reencodes the same value.
It returns a uint64. The new C++ preserves these effects. Sixteen calls in the
capture do not show how the final 72-byte buffer is constructed. That path
remains open; no conventional hex decoder substitutes for it in the new core.

## Reproducible candidate and limits

`src/pafet_hexvm_core_xxvi.h` contains clean primitives, separately from
`src/main_hexvm_probe_xxvi.cpp` and the Python harnesses. Its supported program
block is explicit; requesting an unreconstructed block fails.

`scripts/pafet_hexvm_diff_xxvi.py` compiles C++ and compares against original
`pafet.bin` x64 under Unicorn: 512 handler, 256 dispatcher, 256 slot-adapter and
64 block cases pass. Emulation failures abort. Requirements and exact commands
are in the XXVI report. Finite tests do not establish universal equivalence.

Historical evidence is preserved. Its Windows capture used a PE with two changed
bytes and lacks handler events, effective tables, thread IDs and proper executor
context snapshots. No new Windows capture, final-buffer comparison or complete
input differential is claimed. Next: the first B divergence at push 3 / PC
`0x295b7f`, exceptions, remaining blocks and actual buffer stores. The other
three VMs are outside this operation.
