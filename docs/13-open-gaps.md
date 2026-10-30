# 13 — Open gaps and research priorities

The current [JACK XXXIII matrix](../jack_xxxiii_evidence/status.json), earlier
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
probe continuously. [JACK XXXII](../PAFET_JACK_XXXII.md) now resumes the outer dispatcher,
selects queued work and executes a fourth instruction continuously to PC 16/SP 2
in three fresh processes. Two delimited helpers validate dynamic remap rebuild;
that local proof is not a continuous rebuild-path claim. The replay loader's
readonly-PE relocation defect is fixed with separate validation/image objects.

[JACK XXXIII](../PAFET_JACK_XXXIII.md) crosses PC 16 with opcode `0x29`
(`XOR_U64`), including its nested native-ALU variant. Three independent
processes execute six continuous instructions to PC 20/SP 0; three others
execute five. Two natural processes traverse a full remap rebuild and continue
with equivalent declared state. Job `0x2e0073` is now reconstructed; seven
outer states remain unsupported. This is finite memory-boundary equivalence,
separate from the accompanying instruction-by-instruction x64 replay.

Next: recover opcode `0x1a` at PC 20, its label decoder at `0x1ed270`, deferred
request helper `0x1f10a0`, pending-queue wrapper return and subsequent scheduler
work. A complete capture matches six instructions plus the seventh handler
entry; the seventh instruction is explicitly unsupported. No ten-step claim
is made. Kernel coverage remains 61/64: `0xaf41e` requires a domain-2 budget
exit and the relevant noise condition; incoming edges for `0x2c1549` and
`0x32a5e8` remain unknown outside the reduced graph.

Armed attestation, scheduler exceptions, rekey TLS callbacks, unobserved
fallback branches, other windows and the full ISA/CFG remain open. LOAD domain
1 now has native coverage; LOAD domain 2 retains a static-only binding. All
four XOR domains have natural boundary comparisons. SHA's materializer, ISA
and state still require independent discovery. The historical truncated
rebuild capture remains rejected; the new complete captures are independent
evidence and do not repair its missing observations.
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
