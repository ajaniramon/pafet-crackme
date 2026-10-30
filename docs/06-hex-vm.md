# 06 — Hex-VM: literal execution and partial reduced semantics

The executor at `0x1400804c0` has an autonomous literal C++ reconstruction for
the validated XXVI corpus. The definitive implementation inventory and limits
are in [XXVI closure](../PAFET_JACK_XXVI_CLOSURE.md). Older XXV/early-XXVI reports
record intermediate states; their earlier host/unwind blockers are not the
current literal executor's status.

## State and dispatch

The internal VM context is stack-resident at executor `rsp+0x180`; entry RCX is
an external ABI argument. Important fields include:

| Offset | Role |
| --- | --- |
| `0x230`, `0x4b0`, `0x940` | A, K, B |
| `0x2b0`, `0x4b8`, `0x4c0` | Pending LIFO entries, length, push counter |
| `0x9b8` | Persistent eight-handler secondary table |
| `0x10d0` | Encoded VPC |
| `0x1180`, `0x1188` | LCG and step counter |

The secondary table's rotation is derived from initial K and persists as K
changes. The drain selects from pre-fmix K, updates K, invokes the selected
mixer, advances encoding state and reencodes the VPC. Four remapped 62-entry
domains, 61 distinct native bodies and generated thunks are a separate layer.
The literal executor reconstructs decoder, remap, callbacks, queue throws,
audited catch/unwind handling, initialization and cleanup for its corpus.

## Program and output

The historical graph contains 72 observed virtual PCs, not a proven exhaustive
ISA. The virtual program controls callbacks that obtain substrings of up to two
characters, parse them through C++ streams, append the low byte and publish a
string. The embedded 144-character source produces 72 ciphertext bytes.
Sixteen calls through `0x1400889e0` instead refresh/read encoded virtual slots;
their consumers store 128 bytes of uint64 register output.

This is not a strict hex decoder: the tested contract includes `abc -> ab0c`,
`g0 -> 00` and space-plus-`a -> 0a`. A `bytes.fromhex` replacement loses those
semantics and all VM mechanisms.

## Evidence contracts

- 58,662 unique native instructions and 187 CFG roots describe literal recovery.
- Six native decoder/remap frames compare 16 GPRs and captured memory.
- The detailed replay matches 286,214 push boundaries and final state/buffers;
  its 293 million C++ steps are not native instruction-by-instruction comparisons.
- Ten independent standalone cases construct their own state and match native
  outputs, including the final string and 128-byte register buffer.
- 1,024 arithmetic cases compare selected portable operations with original x64.

These are recorded XXVI results, not newly rerun whole-Hex tests in JACK XVII.
The [smaller semantic core](../src/pafet_hexvm_core_xxvi.h) still covers only
selected handlers/decoder/slot/program effects. A compact complete program IR
and universal equivalence remain open.

## New initialization IR

[JACK XVII](jack-xvii.md) verifies the initializer's RVA `0x3ec120` blob reference,
1,975-byte read count and seed `0x671ae3e65cd34f0d`. Its inline recurrence is
`acc = fmix64(acc XOR index XOR byte)`. This region now has effect IR and C++
checked per iteration against original x64. It does not turn the 1,975 bytes into
a newly recovered reduced instruction stream. See
[region evidence](../jack_xvii_evidence/regions/validation.json).
