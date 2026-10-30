# 13 — Open gaps and research priorities

The current per-mechanism [status matrix](../jack_xvii_evidence/status_matrix.json)
and [JACK XVII report](jack-xvii.md) distinguish demonstrated facts, partial
reconstruction, hypotheses and unknowns. No VM is declared completely
devirtualized at the native-mechanism level.

## User-VM

The bytecode is recovered and its 339-instruction logical program can be
translated to explicit effect IR and readable C++. Seventeen Windows executions
validate 334 static PCs. Five PCs form a dead arm under an explicit abstract
contract; a model-only mutation exercises them. Missing post snapshots remain
listed rather than reconstructed as measurements.

Native encoded-state updates, alias scheduling, guards and OS exceptions are
not fully reproduced. XXVII's captured-cookie replay stops at a 764-byte context
mismatch in `ramon/1`, despite matching return GPRs and C++/Unicorn lockstep.
The first replay write associated with a final mismatch is `0x140004ef1`; it
is not yet a proven first native divergence. No speculative cause is adopted.
Cookie-sensitive return validation and queue exception coverage remain open.

Next: collect native intermediate inputs/states at that table transformation,
identify the earliest actual disagreement and only then change the model.

## Serial and SHA

Behavioral RC4/SHA-256 replacements and output-pattern observations do not
recover virtual programs. JACK XVII verifies initializer blob references and
seed folds, but their materializers, opcode grammars, virtual states, handler
maps, virtual CFGs and encoded execution remain unknown. Shared ALU helpers
are not proof of identical VMs.

Next: follow the verified blob reads into first materialized buffers, establish
instruction boundaries, then lift one instruction with independent state tests.
Do not substitute standard primitive rounds for unproved virtual semantics.

## Hex

XXVI supplies autonomous literal execution for a finite corpus, including
initialization, remap, thunks, callbacks, audited exceptions and cleanup.
This supersedes early host/unwind blockers. The compact semantic core and
complete reduced program IR remain partial; the 72 observed virtual PCs do
not prove universal control coverage. Seeds, allocation failures and additional
exception/host paths require separate tests.

Next: slice literal bodies into explicit encoded-slot, queue, control and
callback effects, preserving side effects until proven irrelevant at the
chosen boundary. Use the new effect IR/backend without importing User's ISA.

## Final project objective

The goal remains a clean, readable four-VM `pafet.cpp` faithful to the recovered
mechanisms. Functional primitives, a giant literal translation or matching final
outputs alone do not meet that goal. Original credentials and flag remain unknown;
no brute-force work is part of this operation.

The crypto/controller has additional limits, including native partial-block
reads dependent on string memory slack. See [the README](../README.md) and
[crypto audit](../PAFET_CRYPTO_AUDIT.md) before making whole-program claims.
