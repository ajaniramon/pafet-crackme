# 12 — Methodology: Jack I-XXII

The overnight work was organized as a chain of 22 iterations ("Jacks")
each with a specific adversarial objective, byte-exact validation and
honest discard criteria. This is the chronology.

## Guiding principles

Three constraints kept the chain honest:

1. **Byte-exact or discard.** Each Jack had to either (a) produce
   output byte-identical to an oracle (Python, Unicorn, Frida capture)
   or (b) honestly document the reason it couldn't. No "almost works"
   acceptance.
2. **Evidence-backed discard over forced success.** If a Jack ran into
   a dead-end that couldn't be resolved cleanly, it was closed with
   evidence rather than hacked into a passing state.
3. **Adversarial correction allowed.** Later Jacks were explicitly
   allowed to invalidate earlier claims. Several did.

See
[`feedback_evidence_based_closure.md`](../../memory/feedback_evidence_based_closure.md)
in the parent memory system for the operating principle.

## Chronology

| Jack       | Commit     | Target                                   | Result                                                                 |
|-----------|------------|------------------------------------------|------------------------------------------------------------------------|
| I ripper  | `89fcfa2`  | Enumerate reachable VM handlers          | 35 handlers → ~17-22 unique semantics; 3 shared helpers located        |
| II helpers | `ba6e823` | Reverse `0x140005b50` byte-by-byte x64   | 40/40 against Unicorn; **correction**: XOR 0x5A is a 0.5% fallback, not unconditional |
| III hidden state | `cb889be` | Reverse `0x140003a50` end-to-end     | 3/3; **correction**: `0x1400029a0` is panic handler, `[ctx+0x1b0]` is bytecode buffer not output |
| IV-B       | `f931f98` | `0x140003880` 5/5 byte-exact             | **discovery**: 45.4% of handler entries come from `call r9`, not resolver |
| IV-A       | `bb6529b` | `0x140003a50` C++ port                    | 3/3 byte-exact; XOR 0x5A **not** in `.text` as a literal               |
| V-B        | `784d706` | Operand reader semantics                  | **correction**: operand reader is opcode decoder, NOT LOAD_CONST; ISA → ~10 ops |
| V-A        | `1f01420` | `0x140003880` C++ port + coverage         | 5/5; 100% of helper-call-pair coverage                                 |
| VI         | `ab5fd73` | Canonical bytecode recovery               | **72/73 blocks offline**; block 28 = `0x5A × 24`                        |
| VII        | `e2fe6ec` | IR interpreter + threaded code hypothesis | 628/628 alice, 636/636 ramon confirmed; structural PASS, not byte-exact |
| VIII       | `1e2f7e5` | Output writer localization                | `0x140025020` identified as (ch=2, op=24..26)                           |
| IX         | `1340396` | Pathway byte-by-byte                      | 5 atomic (ch, op) → VA mapping for alice                                |
| X          | `a18ae58` | **Byte-exact `f_user` milestone**         | Native interpreter produces `464340464e` (alice) and `3b3f444b3b` (ramon) |
| XI         | `91ffc88` | Phase 5 — 9 inputs                        | 6/9 byte-exact; honest 60.3% self-measure logged                        |
| XII/XIII/XIV | `b32106d` | `0x14003bea0` port                      | Unicorn 6/6 oracle; **C++ port not completed** (1997 B, 1 unreversed helper) |
| XV         | `5182cec` | `0x140006770` byte-by-byte + 27 more usernames | +27 usernames byte-exact (33 total); 15/15 helper                   |
| XVI        | `c7d2d8e` | `0x140014a00` port                        | Unicorn 6/6; **blocker**: "exit without ret" at `0x140014b21`           |
| XVIII extent | `32e4f0c` | Resolve the Jack XVI blocker            | `0x140014a00` real extent 3586 B; `.pdata` fragmented in 3 entries      |
| XVIII serial | `0456c77` | serial-VM reconstruction                | 10/10 byte-exact                                                       |
| XIX        | `23268e7` | SHA-VM reconstruction                     | 12/12 byte-exact                                                       |
| XX         | `401a863` | hex-VM reconstruction                     | 12/12 byte-exact; **4/4 nested VMs complete**                           |
| XXI        | `eec2068` | Full recompile from scratch               | `src/pafet_recompile_xxi_ramon.exe` prints flag end-to-end              |
| XXII       | `e616267` | Confirm `0x140014a00` 3586 B extent       | Verified via `.pdata` fragmentation analysis                           |

## Adversarial corrections logged (hypothesis → correction)

- `0x140005b50` executes XOR 0x5A unconditionally
  → **false**. 0.5% fallback. Real mask is a fmix64 round over ctx slots.
- `0x1400029a0` is a helper
  → **false**. It is a panic handler with `POPS` magic (`0x53504f50`) + freeze loop.
- `[ctx+0x1b0]` is the output buffer
  → **false**. It is the bytecode buffer.
- `0x140025020` is the atomic byte-writer
  → **false**. It is the orchestrator (3186 B); the 19 writes in its main body are to shadow state.
- `0x1400074d0` is a LOAD_CONST
  → **false**. It is the opcode decoder (threaded code).
- The 35 handlers → 35 unique semantics
  → **false**. ~10 unique semantics; the channel is a mode selector.
- The 73-block bytecode is fully static
  → **partial**. 72/73 decoded offline. Block 72 requires a dynamic SSE XOR layer.
- The .pdata extent of `0x140014a00` is 293 B
  → **false**. Real extent is 3586 B across 3 `.pdata` entries.

## Why so many iterations

The pattern: each Jack would complete a byte-exact artifact at one
level (helper, pathway, bytecode block) and in the process discover
that an earlier hypothesis was wrong. Rather than rolling back, the
new Jack was spawned to encode the correction and the overall picture
sharpened. The total of 22 was not planned — it fell out of the
"correction + rebuild" cycle. Some Jacks died at API rate limits
(XVII, serial-VM port) and were redone successfully by later Jacks.

## Pre-overnight baseline

Pre-session (commit `55567c0`):

- 1 helper verified (`0x140005b50`)
- `f_user` formula known but not instrumented
- C++ prototype with 34 placeholder handlers delegating to `f_user`
- 12-slot ALU pool decoded
- 1752 B blob confirmed encrypted; no offline decrypt
- No reconstruction of serial-VM, SHA-VM, hex-VM
- No end-to-end recompile

Post-session delta: 4 nested VMs byte-exact + 4 helpers byte-exact x64
+ 72/73 canonical bytecode + full dispatch topology + working
recompiled Pafet.

## Honest `0/N` facts at close

Despite the chain:

- 0/5 atomic byte-writers reversed byte-by-byte x64 (behavioral port only)
- 3/9 inputs (`a*23`, `a*24`, `a*25`) not byte-exact verified (harness limitation; see [13-open-gaps.md](13-open-gaps.md))
- 0 SHA-256 preimages found (hashcat at `NIMA?a^6` with 0 matches)
- Block 54 of bytecode remains unknown (dead or gated)
- Block 72 of bytecode remains undecoded offline

These are the entry points for anyone continuing the chain.
