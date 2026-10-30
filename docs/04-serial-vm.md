# 04 — Serial-VM: behavior and unresolved virtualization

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

## Still unknown

No validated Serial opcode grammar, materializer, instruction-to-handler map,
complete internal state layout, virtual registers/stack/flags or virtual CFG
is available. Entry RCX is an ABI argument, not sufficient evidence for the
internal VM context base. Four pool-reader candidates have finite ALU-helper
comparisons documented in [the pool report](../PAFET_SERIALVM_POOL.md). Their
similarity to User-VM does not prove an identical ISA or dispatcher.

Next: attribute reads of the verified blob to the first materialized buffer and
capture opcode/operand boundaries. Keep RC4's algorithm state separate from
unrecovered virtualization state. No complete Serial devirtualization is claimed.
