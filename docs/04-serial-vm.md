# 04 — Serial-VM: continuous first steps and remaining virtualization

The executor is at `0x14022a120`. The existing
[replacement](../src/pafet_serialvm_native_xviii.h) computes RC4 using a one-byte
zero key. Its ten fixed-vector C++ tests validate that implementation's RC4
behavior. The historical [native collector](../scripts/pafet_serialvm_capture_xviii.py)
searches process memory for expected output bytes; this is not an attributed
instruction/state trace of a complete virtualized RC4 computation.

A zero-key RC4 KSA does not leave the S-box equal to identity. Neither matching
RC4 outputs nor failing to find a contiguous keystream in selected memory
ranges proves the native VM's internal KSA/PRGA instruction sequence.

## Verified initialization region

[JACK XVII](jack-xvii.md) verifies the original initializer's reference to RVA
`0x3e9c10` and a read count of `0xa76` (2,678 bytes). The raw encrypted-blob
candidate and original loop disassembly are in
[regions/](../jack_xvii_evidence/regions/).

```text
acc = 0x3f7bc48565f9022a
for i in 0 .. 2677:
    acc = fmix64(acc XOR i XOR blob[i])
```

That native region has an explicit effect IR and generated C++, checked against
original x64 at every iteration. It hashes blob bytes; it does not decrypt them.
The read count alone does not establish a decoded instruction-stream length.

## First virtual instruction: JACK XXIX

[JACK XXIX](../PAFET_JACK_XXIX.md) recovers the materializer at `RVA 0x1f1fe0`:
103 permuted units of 26 bytes, three XOR passes, feedback, shadow and window
masks. A scalar implementation checks all 2,678 bytes, the counter and bitmap
after every original-x64 helper call in three synthetic cases. These helper
tests run in isolated Unicorn and are not extra Windows paths.

The observed internal context is at post-prologue RSP+0x190. Its register-bank
and stack pointers are `+0x180/+0x188`, distinct from User-VM's layout.
The first decoder at `RVA 0x229c70` maps unmasked header `0x21` through the
table at `RVA 0x3ecf00` using XOR constants `0xdd/0x63`, producing opcode 1.
Four remapped domains resolve through signed table entries and generated thunks.

Opcode 1, `PUSH_POOL_U32`, reads a scrambled four-byte selector, resolves the
constant pool, advances virtual PC and pushes an encoded uint64. The first
instance uses selector 0 and advances PC 1→5, SP 0→1. A readable
[semantic implementation](../devirt/serial.py) matches the whole declared
virtual context and pointed roots in two Windows captures at the boundary
after PUSH and before scheduler continuation. The first decoder transition
also matches its native final virtual state. No RC4 output is used as input.

Reproduce with `python -m devirt.serial_validate`. The
[results](../jack_xxix_evidence/validation.json) separate eight full native/x64
capture comparisons (35,699 instructions), reduced semantic comparisons and
synthetic materializer tests. XXIX left a natural table-dependent key refresh
unknown to its reduced decoder; XXX recovers that branch separately below.

## Continuous interval: JACK XXX

[JACK XXX](../PAFET_JACK_XXX.md) closes the first PUSH continuation, identifies
the actual next instruction as `STORE_REG_U16` at PC 5, and executes both from
one captured initial state. The second instruction decodes register 16, pops
and scrubs the stack cell, writes the encoded bank cell, and updates integrity
state. Final logical state is PC 8, SP 0.

Three fresh Windows processes match every declared virtual-state byte at the
next inline decoder. A fourth matches a child-wrapper return handoff to its
pending parent; that baseline does not resume native callers. Both control
encodings and both register encodings occur in the validated fresh cases. A separate retained decoder
capture verifies the table-dependent key probe; that branch does not rewrite
the remap table. See [validation](../jack_xxx_evidence/validation.json).

The public API is `SerialVMState.from_initial_capture(before, original_pe)`
followed by repeated `step()` calls, exported from `devirt.serial`. The second
step consumes only the first step's state. Incomplete captures and unknown
routes fail explicitly. Native replay and continuous semantics are distinct.

## Three instructions: JACK XXXI

[JACK XXXI](../PAFET_JACK_XXXI.md) adds a scalar reduction of rekey helper
`RVA 0x1ef7c0`, then executes opcode 4, `LOAD_REG_U16`, at PC 8. It reads the
register stored by the preceding instruction and pushes its value, ending at
PC 11/SP 1. The exhausted-budget branch and context-free parent-wrapper tails
are reconstructed through return to the outer dispatcher.

Three fresh Windows processes compare every declared byte at 13 boundaries,
including rekey entry/exit, the third core and all return frontiers. One crosses
the decoder key probe continuously. Four synthetic helper cases independently
check nonempty-stack rekey and the 1,023-cell limit against original x64; they
are not Windows program paths. LOAD domains 0/3 have native differential proof;
the other two have static bindings only.

Use `ExtendedSerialVMState` from `devirt.serial_extended`, then three `step()`
calls from the same initial capture. See [validation](../jack_xxxi_evidence/validation.json)
and [reproduction](../PAFET_JACK_XXXI.md#8-reproduction). The original two-step
class and evidence remain as a narrower regression contract.

## Still unknown

The first three instructions and supported continuation paths are demonstrated
within their recorded state contracts. The full ISA/CFG, callbacks, general
register/flag architecture, the outer dispatcher loop, full remap rebuild and
other rekey/window/guard cases remain partial or unknown. Entry RCX is the caller's argument array, not the internal
context base. Four older pool-reader candidates have finite ALU-helper
comparisons documented in [the pool report](../PAFET_SERIALVM_POOL.md). Their
similarity to User-VM does not prove an identical ISA or dispatcher.

Next: resume the outer dispatcher at PC 11, reconstruct full remap rebuild and
rekey TLS callbacks, and extend to additional opcodes/windows. Keep RC4's algorithm state separate from
the recovered virtualization mechanisms. No complete Serial devirtualization
is claimed.
