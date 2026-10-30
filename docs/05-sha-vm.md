# 05 — SHA-VM: digest behavior and unresolved virtualization

The executor is at `0x14027aba0`. The existing
[replacement](../src/pafet_shavm_native_xix.h) implements SHA-256. Its twelve
fixed-vector tests validate the replacement. The historical
[native capture](../vm_pools_evidence/shavm_vectors_xix.json) records expected
digests in searched memory windows for short usernames and empty input; it is
not a virtual-instruction or SHA-round trace.

Separate [crypto-audit evidence](../audit_evidence/native_audit.json) checks
seven native message-preparation/compression cases, including padding boundaries
and embedded NULs, under an adapted Linux PE host. Those cases must not be
attributed to the twelve-case Windows collector or to unmodified acceptance.

## Verified initialization region

[JACK XVII](jack-xvii.md) verifies the original initializer's blob reference at
RVA `0x3e3f10`, with `0xdb6` (3,510) bytes read:

```text
acc = 0xe0f078b65dfb2724
for i in 0 .. 3509:
    acc = fmix64(acc XOR i XOR blob[i])
```

[Disassembly, extracted bytes and effect IR](../jack_xvii_evidence/regions/)
are available. Every iteration is checked against original x64 and generated
C++. This establishes a native initialization recurrence, not decryption,
virtual SHA instructions or a decoded program length.

## Still unknown

The virtual opcode format, materialization, handler resolution, encoded virtual
state, virtual control transfers and mapping to SHA rounds remain unrecovered.
A digest occurrence in an ABI-object memory window does not identify the full
internal virtual context. Standard SHA arithmetic and cloned helper pools do
not establish an ISA shared with User, Serial or Hex.

The digest remains part of the username gate described in
[the pipeline](02-pipeline.md). No matching original username or original flag
is known. Next: trace the verified blob into its first decoded program buffer,
then establish per-instruction state effects independently of a SHA-256 oracle.
