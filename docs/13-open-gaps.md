# 13 — Open gaps and research priorities

The current [JACK XXXVI status](../jack_xxxvi_evidence/status.json), [JACK XXXV matrix](../jack_xxxv_evidence/status.json), earlier
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

[JACK XXXIV](../PAFET_JACK_XXXIV.md) reconstructs opcode `0x1a` at PC20,
its unit-label permutation, deferred request, queued wrapper return and armed
attestation/PC commit. Three processes validate seven instructions through
the scheduler transfer to PC2028. Two cross natural remaps. Three more
processes materialize unit 1, transition both window schemes and execute ten
instructions through PC2041/SP1. The candidate starts once and uses no
intermediate native state. New evidence also closes LOAD domain 2; all four
LOAD and XOR domains have natural comparisons. Opcode `0x1a` has natural
evidence for domains 0, 1 and 3; domain 2 is static only.

[JACK XXXV](../PAFET_JACK_XXXV.md) recovers opcode `0x3a` (sign extension),
`0x1f` (DROP) and `0x20` (host CALL with encoded TLS frames). The candidate
supports native callback functions 0/1, a scalar index setter/signed getter;
other callbacks fail explicitly. Three processes validate seventeen continuous
instructions plus the next handler entry. The third materialization unit and
second deferred destination, PC1742, are covered. New evidence also closes
domain 2 of `0x1a`; all four branch and sign-extension domains have natural
proofs. HOST CALL domain 0 and DROP domains 0/1/3 remain static-only.

Next: recover opcode `0x16` at PC1753 and its continuation. Its header is
observed through PC1754, but its core is not executed by the model. The
[partial native-derived CFG](../jack_xxxv_evidence/virtual_cfg.json) contains
18 observed PCs and 17 executed PCs, with observed/static edges distinguished.
No virtual cycle, return opcode or natural termination is demonstrated. The
static decoder's out-of-range route sets runtime work `0xfe1ab` and a halt
control; complete cleanup/return and its reachability remain unverified.
Total reachable instructions, iteration counts and a global percentage are
still unknown.

[JACK XXXVI](../PAFET_JACK_XXXVI.md) recovers `0x16` (`CMP_LT_S64`) and the
rest of the reachable ISA: `ADD`, `CMP_NE`, `CMP_GT`, `NOT`, zero extension,
conditional deferred branches (`0x1b`/`0x1c`, via the generalized `1f10a0`
request) and `HALT` (`0x1e`). All 23 cases of the host-callback switch
`232e20` are modeled as scalar/byte primitives, plus the decoder epoch and the
scheduler's C++ exception route (throw in `1f0db0` → FH4 catch funclet
`3cab48` → dispatcher loop). A static recursive decode from PC0 closes the
reachable program at 478 instructions with three natural loops (headers 1742,
2522, 2184), eight conditional branches and one HALT; all seven captures
decode identically. The whole program (46,722 instructions, all three loops)
executes to `HALT` and the cleanup entry `22b0af` in two processes. A
window-cache defect inherited from XXXIV (`1f0660` fast path) was found at
step 45948 and fixed. Depth beyond the Windows traces is verified against original x64
emulated from the same Windows entry (plus a modeled OS exception
dispatcher), not against new Windows captures: no Windows lab was reachable.

Next (XXXVII): Windows confirmation of the long runs (checkpoint collector),
the native halt cleanup from `22b0af` (output writer `232e00`, `memset`,
destructors, heap free) and the return of Serial-VM, the other outer states,
and the remaining unobserved domain bindings.

A natural scheduler exception is preserved in `seventeen_a`: its 136,246-step
capture stops outside the PE and is rejected as a complete proof. The model
also stops on the actual enqueue predicate; no repair or skipped frame turns
it into a success. Seven cataloged outer states, other callback functions,
reentrant/clamped TLS-frame paths, native guard/exception delivery, rekey TLS
callbacks, halt/cleanup and further window routes remain open. Kernel
`0xaf41e` is now observed in complete runs; coverage is 62/64, with
`0x2c1549` and `0x32a5e8` still unobserved. SHA's independent state/ISA work
and the User/Hex limits above remain unchanged.
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
