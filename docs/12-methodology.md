# 12 — Methodology and correction of earlier claims

Historical operations are preserved in the root JACK reports. The current
status is in the [README](../README.md) and [JACK XVII](jack-xvii.md), rather
than inferred from the most optimistic earlier operation title.

## Evidence hierarchy

A fixed-vector primitive test, a memory-pattern hit, a captured logical-state
comparison and a native-instruction differential prove different things.
Prefer original PE bytes and attributed state/memory observations over a
report's conclusion. Two copies of an inferred formula are not independent
oracles. Matching final strings does not establish VM devirtualization.

Use original-instruction execution under Unicorn for small bounded regions;
record supplied ABI, memory, TLS and clock inputs. Use Windows captures when
OS exception/runtime behavior matters. Keep patched gate variants distinct
from the original PE, and rekeying distinct from original acceptance.

## Corrections established by later evidence

- The old 72/73 User bytecode result is superseded by full 1,752-byte extraction;
  the old canonical dump agrees in only 89 bytes. No missing-SSE explanation
  is needed for the recovered final segment.
- `0x1400074d0` is an alias remapper, not a general operand reader returning
  the next opcode. u32/u16/u8 readers are separate functions.
- The five selected wrappers are DROP, transfer and STORE_REG bodies. The
  actual output byte store is in the native host at `0x140048a3a`.
- The older 35-handler catalog and hidden-dispatch ratios are historical
  sample observations. Aliases, thunks, native targets and semantic operations
  must be counted separately.
- Long-string output is observable through proper SSO/heap decoding and is
  covered by newer native comparisons. It is not a permanent oracle blind spot.
- Standard RC4/SHA-256 replacements do not reconstruct their virtual ISAs.
  Similar helper pools do not imply identical four-VM architectures.
- Hex has a corpus-validated autonomous literal executor; it is not simply
  `bytes.fromhex`. Reduced semantic recovery still differs from literal execution.

## Current validation chain

JACK XVII extracts the program without captured instructions, lifts ordered
effects, checks stack shape and control, and emits C++. Native logical states,
actual byte stores, IR, an independent bytecode model and generated code are
compared at explicitly defined boundaries. Optimized code is checked at block
exits. Missing measurements are listed. Model mutations and memory-only negative
controls confirm that the tests detect semantic errors.

A failure is retained as evidence. XXVII's native context mismatch remains
unresolved; agreement of the new logical projection does not erase it. Finite
corpus coverage, conditional dead-code proofs and universal equivalence remain
separate claims. The next experiment should resolve a specific missing mechanism,
not turn an unproved operation into a guessed no-op.
