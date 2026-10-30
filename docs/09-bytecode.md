# 09 — Bytecode, materialization and semantic lifting

For the exact recovered User-VM formulas and evidence, read
[14-real-bytecode-xxiii.md](14-real-bytecode-xxiii.md). For the current compiler,
read [JACK XVII](jack-xvii.md).

## User program identity

- Original encrypted blob: RVA `0x3e5020`, 1,752 bytes.
- Physical materialization: 73 units of 24 bytes, with a permuted logical map.
- Decoded program: 339 variable-length instructions, 15 logical opcode kinds.
- Default materialized SHA-256:
  `a15f43b7d8afa2b3ea2b4cbb77c5ae740a9b4ccc240fbd49fcb9bd8492d5d815`.

The old `user_bytecode_canonical_vi.bin` matches only 89 bytes of this result;
it is historical evidence, not the current compiler's input. Block 28 is not a
repeated-0x5A block; block 54's bytes are recovered, not missing. The latter maps
to PC384 and is a five-instruction dead arm under the stated abstract contract.

The current extractor reads the PE directly and applies the complete scalar
materialization formula, rather than replaying captured plaintext. The operand
readers use position-dependent masks and modular multiplication; u32 byte order
is permuted. Logical opcodes are decoded through the PE table at RVA `0x3dfcb0`.
Constants come from separate PE tables. The native writer's `xor dl,0x5a`
remains a native instruction; it is not evidence that all output constants reside
only in bytecode.

## Bytecode to effects

`python -m devirt` produces materialized bytes, per-instruction encoded-byte
provenance, a conservative logical CFG, explicit effect IR and direct/optimized/
structured C++. It validates stack shape at joins and retains memory effects,
conditions and deferred transfers. Unknown instruction lengths/semantics stop
lifting paths explicitly; they are never filled with guessed no-ops.

The decoder covers the recovered program, not every possible interpreter opcode.
Native aliases, scheduler decisions, reencoding and exceptional guard paths
remain a distinct reconstruction problem.

## Other VM blobs

Verified initializer reads in JACK XVII locate candidate program blobs at:

| VM | RVA | Bytes hashed by initializer |
| --- | --- | ---: |
| Serial | `0x3e9c10` | 2,678 |
| SHA | `0x3e3f10` | 3,510 |
| Hex | `0x3ec120` | 1,975 |

The [initialization-region evidence](../jack_xvii_evidence/regions/validation.json)
checks the native recurrence, not decrypted instruction lengths or a common ISA.
The earlier assertion that only User-VM has encrypted program material is not
supported. Serial/SHA formats and materializers remain unknown; Hex has a
validated literal decoder but an incomplete reduced semantic instruction model.
