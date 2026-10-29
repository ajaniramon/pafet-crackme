# PAFET — Jack VIII: localized the output-writer handler

**Status**: Handler **identified**, not yet reversed, not yet ported, byte-exact not achieved.

## The question

The IR-driven interpreter from Jack VII (`src/pafet_canonical_interp_vii`) passes the structural threaded-code property but does not reproduce `f_user` byte-exact. The three verified native helpers (`0x140005b50`, `0x140003a50`, `0x140003880`) were proven by Jack III to touch only the shadow state, not the output buffer. Which handler actually writes the 5 bytes of `f_user(alice) = 464340464e` into memory?

## Method

Hook the user-VM dispatcher entry at `0x14003f540` and the resolver at `0x14003ebb0`. On the resolver `onLeave`, scan all RW memory regions (via `Memory.scanSync`) for the exact pattern `46 43 40 46 4e` and record `pattern_count`. Starting from 0, the transition `pattern_count 0 -> 1` identifies the exact resolver call that produced the write.

Two passes: a coarse pass (every 50 resolver calls) to find the approximate range; a fine pass (every single call in the range 500–540) to pin down the exact call.

## Result

- Baseline at dispatcher entry: `pattern_count = 0`.
- Coarse scan: first `pattern_count = 1` observed at resolver call ~529.
- Fine scan (per-call): the transition `0 -> 1` occurs between calls 516 and 517.
  - call 516: `ch=1, op=9`, pattern_count = 0.
  - **call 517: `ch=2, op=26`, pattern_count = 1.**

The VM instruction `(ch=2, op=26)` is executed, and immediately after it the output exists in memory.

## Handler

- `(ch=2, op=26)` dispatches to native handler **`0x140025020`**.
- Same handler also serves `(ch=2, op=24)` and `(ch=2, op=25)` — three opcodes aliasing to one wrapper, consistent with the Jack II finding that 35 handlers reduce to ~17–22 real semantics.

## What the output looks like in memory

Two copies of `46 43 40 46 4e` appear in the same heap region, 0x90 bytes apart. Both are in a region of about 108 KB.

Those addresses are **not** reachable from the user-VM ctx by direct pointer dereference nor by 2-level pointer chains tested (checked offsets `0x8..0x220` + 1-level and 2-level). The output buffer is allocated and written to by code inside `0x140025020`; the ctx carries no pointer to it that a trivial scan finds.

## Handler prologue (first few insns of `0x140025020`)

Standard MSVC prologue, then:

```
0x140025036  movsxd rax, [rcx + 0x154]       ; read a counter from the ctx
0x140025117  call   0x140007040              ; external helper (not yet reverse-engineered)
0x14002511c  mov    rbx, [rdi + 0x210]       ; VM PC-like field
0x140025126  movzx  ecx, byte ptr [rdi+0x279]
0x140025130  mov    r9,  [rdi + 0x1f8]
0x140025141  mov    r8,  [rdi + 0x1e8]
```

The actual write path to the output buffer and the construction of each byte are not yet traced — this requires a second reversing pass as the previous one did for `0x140003a50`.

## What this changes

- The hypothesis "the output is written outside the user-VM" is **refuted**. It is a user-VM handler that writes it, specifically `0x140025020`.
- The IR interpreter from Jack VII will reach byte-exact once this handler is reverse-engineered and ported, replacing the current no-op for `(ch=2, op=24..26)`.
- The 3 helpers already verified (`0x140005b50`, `0x140003a50`, `0x140003880`) are not sufficient on their own, as Jack III already indicated.

## Not done in this iteration

- Full disassembly and reversing of `0x140025020` (approx. 400–700 B — comparable in size to `0x140003a50`).
- Reversing of the external helper `0x140007040` that it calls.
- Native C++ port and byte-exact validation against runtime captures.
- Integration into `src/pafet_canonical_interp_vii`.

Those are the direct next steps.

## Evidence files

- `vm_pools_evidence/output_writer_handlers_viii.json` — initial scan (hooks on all 35 handlers); showed four candidates writing to `[ctx+0x1b0]` but with values 0xe5/0xfc/0xc4/… (shadow state, not the real output). Preserved for traceability.
- `vm_pools_evidence/output_writer_localized_viii.json` — the final finding above.
