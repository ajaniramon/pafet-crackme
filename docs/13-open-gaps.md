# 13 — Open gaps and research priorities

The current [JACK XXXI matrix](../jack_xxxi_evidence/status.json), earlier
[mechanism matrix](../jack_xvii_evidence/status_matrix.json) and
[JACK XVII report](jack-xvii.md) distinguish demonstrated facts, partial
reconstruction, hypotheses and unknowns. No VM is declared completely
devirtualized at the native-mechanism level.

## User-VM

The bytecode is recovered and its 339-instruction logical program can be
translated to explicit effect IR and readable C++. Seventeen Windows executions
validate 334 static PCs. Five PCs form a dead arm under an explicit abstract
contract; a model-only mutation exercises them. Missing post snapshots remain
listed rather than reconstructed as measurements.

Native encoded-state updates, alias scheduling, guards and OS exceptions are
not fully reproduced. The [native-state follow-up](native-state-divergence.md)
demonstrates why XXVII's inputs were incomplete: native-stack pointers to the
register/virtual-stack arrays had been skipped. The first affected native reads
are now observed directly; complete entry memory fixes fresh DROP/rekey traces
without changing instruction semantics or supplying expected outputs.

The old snapshots cannot independently recover their lost before-memory and
are rejected by strict validation. Next: extend native comparisons beyond the
new [JACK XXVIII](../PAFET_JACK_XXVIII.md) remap/resolver/STORE_REG/transfer and
cookie cases. The pinned runner preserves two missing C++ translations
(`RVA 0x3ebb0` and `0x2d5d0`) and a queue exception boundary at
`RtlPcToFileHeader`; these are not C++ or exception equivalence. The capture
flaw is resolved; universal VM equivalence and broader seed/guard/storage
coverage remain open.

## Serial and SHA

Behavioral RC4/SHA-256 replacements and output-pattern observations do not
recover virtual programs. JACK XVII verifies initializer blob references and
seed folds. [JACK XXIX](../PAFET_JACK_XXIX.md) now recovers Serial's 103-unit
materializer, first decoder route, selected encoded state and opcode 1
(`PUSH_POOL_U32`), with two native semantic core comparisons.
[JACK XXX](../PAFET_JACK_XXX.md) now executes that instruction's continuation,
the inlined decoder and `STORE_REG_U16` at PC 5 continuously from one before-state.
[JACK XXXI](../PAFET_JACK_XXXI.md) extends this to opcode 4 (`LOAD_REG_U16`)
and PC 11/SP 1, including rekey, budget exit and parent-wrapper unwind. Three
fresh processes pass 13 full virtual-memory boundaries; one takes the key
probe continuously. The full remap rebuild is still open: `process_c` reaches
its call at RVA `0x209a34` during PC 5 decode, then exceeds the observation limit
and is rejected. Early-return routes stop at the outer loop at PC 5/8.

Next: resume the outer dispatcher at PC 11, cross the full remap rebuild and
rekey TLS callback branches, and extend the ISA/CFG and windows. LOAD domains
1/2 are static-only; active-stack rekey is checked against isolated original
x64 with synthetic inputs, not extra Windows routes. SHA's materializer, ISA
and virtual state still need independent discovery. Shared ALU helpers do not
prove identical VMs.
Do not substitute standard primitive rounds for unproved virtual semantics.
JACK XXVIII supplies a generic capture profile and an 18-instruction Windows/
Unicorn Serial seed-region comparison. It validates reusable transport, not a
Serial ISA or a SHA state contract; discover the latter independently.

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
