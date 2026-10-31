# JACK XXXVI — THE LOOP HUNTER

## 1. Result and depth

Started on prepared `main` at `34b0a39f3b15051e8fdb534efde55f37305a3d6e`
(JACK XXXV integrated). No checkout, reset, pull or branch change. Before any
edit the XXXV validator reproduced all seven cases (`PREFIX_EQUIVALENT` ×6,
`REJECTED_INCOMPLETE` ×1) and the 77 IR/Serial + 25 state-contract tests passed.

**Opcode `0x16` is `CMP_LT_S64`, and the instruction after it closes a real
virtual loop.** The Serial program at PC1742 is a counted loop
`while (sext32(index) < 256) { … }` whose back edge `1882 → 1742` is
re-entered every 81 (or 79) instructions. It is executed semantically through
all 256 iterations and its exit in two independent processes and compared byte-for-byte at every boundary.

**The whole Serial program runs to termination.** From a single Windows
entry per process, the candidate executes 46,722 consecutive instructions —
three loops (256, 256 and 8 iterations), 196/219 C++ exception deliveries,
1460 decoder epochs, ~590 rekeys and ~1800 remap rebuilds — up to `HALT` and
the dispatcher's cleanup entry, matching original x64 at all ~2 million
declared-memory boundaries in each of two processes (`bob`, `charlie`).

The reachable Serial program is now **statically closed**: recursive decoding
from PC0 with the recovered decoder/operand formulas reaches **478
instructions in 111 basic blocks, 3 natural loops, 8 conditional branches and
one HALT**, with no unknown opcode left. All seven pinned captures (users
`alice`, `bob`, `charlie`) decode to the byte-identical program.

| Metric | JACK XXXV | JACK XXXVI |
|---|---:|---:|
| Max consecutive instructions, Windows-trace verified | 17 | 17 (no new Windows lab reachable) |
| Max consecutive instructions, verified vs original x64 emulated from the Windows entry | — | **46,722 — the whole program, through HALT** (2 processes) |
| Processes ≥ 25 verified instructions | 0 | 6 (all complete captures) |
| Implemented semantic opcode families | 8 | 17 |
| Host callback functions modeled (switch `232e20`) | 2 | 23 (all cases) |
| Static bindings audited (PE remap/handler tables) | 32 | 68 |
| Reachable static instructions known | 18 observed | 478 (closed) |
| Natural loops / with verified back edge | 0 / 0 | 3 / 3 (all back edges and exits) |
| Route to HALT | static decoder hint only | static CFG path to `0x1e` @PC2652, **executed and verified** in 2 processes |
| First unsupported point | opcode `0x16`, PC1753 | native halt cleanup: `VirtualFree` called from `229750` after cleanup entry `22b0af` |

**Important limitation.** No Windows laboratory was reachable from this
session (Linux container; `list_computer_folders` empty). New depth beyond the
existing Windows traces is therefore verified against *original x64 executed
by the existing input-only Unicorn replay* (`pafet_state_replay.Replay`)
continued from the same Windows-captured entry, plus a modeled OS service
for C++ exception dispatch (§5.3). This is reported as its own evidence level
and never added to Windows counts. A prospective capture script for the lab
is provided (`jack_xxxvi_evidence/capture_deep.ps1`).

No credentials or flag were sought. Serial-VM is **not** declared completely
devirtualized: native halt cleanup, other outer states and Windows
confirmation of the long runs remain open.

## 2. Opcode `0x16` — `CMP_LT_S64`

Original remap/handler tables (`0x3e95a0`/`0x3e2340`) bind four bodies:

| Domain | Body | Core |
|---|---|---|
| 0 | `0x1f9c10` | `pop b; pop a; (a^2⁶³) <ᵤ (b^2⁶³)` → `SETB` |
| 1 | `0x204670` | same, flipped-sign `SETB` |
| 2 | `0x21a230` | same, flipped-sign `SETB` |
| 3 | `0x21bb70` | `cmp a,b` → `SETL` |

Two `1ee940` POPs (first is the top, `b`), one `1ee820` PUSH of the 0/1
result. All four are signed `a < b`. No operand bytes: the instruction is one
byte; PC/SP effects come from the POP/PUSH helpers (tags, PRNG, erased cells,
SP reseal). The per-domain noise prefix uses the same four formulas as the
earlier families with the subtract flag read from each wrapper by the audit.
At PC1753 it compares the sign-extended host index with pooled constant 256.
The natural successor is PC1754, opcode `0x1b`.

[Bodies](jack_xxxvi_evidence/), [model](devirt/serial_loop.py).

## 3. New instructions, callbacks and mechanisms

### 3.1 Opcode families

| Opcode | Mnemonic | Recovered core (all four domains audited) |
|---|---|---|
| `0x08` | `ADD_U64` | d1 `(a^b)+2(a&b)`, d2 `(a|b)+(a&b)`, d3 `a+b`; d0 calls native ALU `1ed730` selector 0 |
| `0x15` | `CMP_NE_U64` | `SETNE` |
| `0x18` | `CMP_GT_S64` | swapped flipped-sign `SETB`, `SETG`, `SETA` after flip |
| `0x1b` | `BRANCH_IF_ZERO_UNIT_U32` | U32 unit label, POP, scramble `1f0e60`, request `1f10a0(x, x==0, invert=0)` |
| `0x1c` | `BRANCH_IF_NONZERO_UNIT_U32` | same with `invert=1` |
| `0x1e` | `HALT` | control3 ← 0, control0 ← `0xfe1ab`, control10 ← 1 (three tagged writes) |
| `0x2c` | `NOT_U64` | `-1-x` / `not` |
| `0x3b` | `ZERO_EXTEND_LOW_U8` | U8 width `&63`; **width 0 yields 0** (unlike `0x3a`, where it is identity) |

Domain-0 `ADD` runs `1ed730`: `m=mix(token)`, `a'=m+a`, `b'=b-m`, program
byte `0x3edc08+4·(((a'>>3)^(b'>>2))&1)`, then the encrypted native-ALU
program is decoded and evaluated by XXXIII's decoder (checksummed). The test
suite checks that the decoded programs compute `a+b` on 200 random triples;
the candidate always evaluates the program, never `a+b` directly.

**Conditional branch.** `1f0e60` scrambles the popped value with
`h = mix((origin+1)·φ ^ frame ^ salt ^ live ^ key ^ opcode)`, then a rotation,
two odd multiplications and two xorshifts — all bijective, so the scramble
is zero exactly when the value is. `1f10a0` was generalized from XXXIV's
`take=1` special case:

```text
zero    = (value == 0)
guard   = (~condition & 1) ^ zero          # 0 -> fail 'BRAG'
take    = (zero ^ invert) & guard
noise  ^= ((condition ^ zero) * φ)         # zero on the valid path
controls 4/5/11/12/6, key, label 0xffd5b    # as in XXXIV, with 'take'
```

The armed attestation gate is branchless (`pc ^= (pc^target) & -(valid&armed&take)`),
so not-taken branches commit the fall-through PC without a separate path.

**Decoder epoch.** Every 32nd fetch (inlined decoders, e.g. `1fa5f6`, and
the outer decoder `22a087`) folds `noise = mix(sext(counter) ^ old_key ^ noise)`
before the key update. XXXV stopped at this transition; it is now executed
1460 times in the longest run.

### 3.2 Host callbacks: the whole switch `232e20`

The receiver at `ctx+0xb0` (vtable `0x3f1820`, method `+0x10` → `39d940` →
switch `232e20`) holds twelve pointers `R[k] = *(receiver+8+8k)`. All 23
switch cases are modeled literally (IDs above 22 return 0 through `JA`):

| ID | Effect | ID | Effect |
|---|---|---|---|
| 0 | `*(i32*)R0 = a0` | 12/13 | `*(u8*)R6/R7 = a0` |
| 1 | return `sext(*(i32*)R0)` | 14 | `*(u64*)R8 = a0` |
| 2 | `R1[i]=(u8)i`, return it (`i = *R0`) | 15/16 | return `*R8` / `*R9` |
| 3 | `*(u8*)R2 = a0` | 17 | return `*(u8*)R6` |
| 4 | return MSVC `std::string` size at `R3+0x10` | 18 | `*R7 += R1[*R6]` |
| 5 | `*(u64*)R4 = a0` | 19 | swap `R1[*R7]`, `R1[*R6]` |
| 6 | `*(i32*)R5 = a0` | 20 | return `R1[(R1[*R7]+R1[*R6])&255]` |
| 7 | return `sext(*(i32*)R5)` | 21 | `*(u8*)R10 = a0` |
| 8 | return `*(u64*)R4` | 22 | `*(*R11 + *R8) ^= *R10`, return it |
| 9 | `*R2 += data[i % *R4] + R1[i]` (SSO `cap≥16` selects heap data; `#DE` if `*R4==0`) | 10 | `*R2 += R1[*R5]` |
| 11 | swap `R1[*R2]`, `R1[*R5]` | | |

All twelve pointees live in the captured native stack and are new declared
roots (byte table 256 B, `std::string` object 32 B, scalars), validated
before execution. The output byte written by ID 22 becomes a root when first
touched. A missing argument fails; division by zero fails explicitly. These
are scalar/byte primitives; the candidate does not contain an RC4 routine.

### 3.3 Scheduler C++ exception route (formerly the `seventeen_a` blocker)

`enqueue` (`1f0db0`) throws when `count==1` or
`((-1003·count) ^ queue_key_lo32) & 0xfff == 31`: it calls
`_CxxThrowException(&encoded_label, ThrowInfo 0x40bb30)`, type
`vm_rc4_crypt_Sig`. FH4 metadata of the outer dispatcher `22a120` gives one
try block (state 6, IP range `[0x22b1cb, 0x232daa)`), covering every job and
`call rax` site, and one by-reference catch:

```text
funclet 3cab48:  ctx+0xae0 += 1 ; 1f0c20(ctx, *caught)   # queue store, JOPF guard at 64
continuation 232db7: restore frame locals, r12=0 -> 22b078: r15=0x27f17 -> loop top 22b080
```

The unwind map entry for state 6 has no action. Every intervening frame is
EH-free except the HOST_CALL wrappers, whose only unwind action is the
`1eead0` TLS-depth guard (clamp to the entry depth); the candidate requires
the balanced-depth invariant, which makes that guard inactive, and fails
otherwise. The candidate models the throw as a non-`ValueError` signal:
remaining native work after the throw is abandoned, the encoded label is
queued, `ctx+0xae0` increments, and the dispatcher loop resumes.

This is a **deliberate control-flow mechanism**, occurring roughly every
1/4096 enqueue; 196 (`bob`) and 219 (`charlie`) deliveries occur in the longest run.

## 4. Independent processes

| Capture | User | Windows-verified steps (trace terminal) | Verified consecutive instructions | Native x64 instructions compared | Boundaries | C++ deliveries | Remaps | Rekeys | End |
|---|---|---:|---:|---:|---:|---:|---:|---:|---|
| `eleven_a` | alice | 11 | 1,000 | 17,933,918 | 39,972 | 2 | 34 | 14 | limit 1000 |
| `eleven_b` | bob | 11 | 1,000 | 18,579,508 | 40,996 | 2 | 37 | 14 | limit 1000 |
| `eleven_c` | charlie | 11 | 46,722 | 884,727,632 | 1,995,565 | 219 | 1904 | 589 | HALT → cleanup entry 22b0af |
| `seventeen_a` | alice | rejected capture | 1,000 | 18,845,158 | 39,834 | 5 | 43 | 13 | limit 1000 |
| `seventeen_b` | bob | 17 | 46,722 | 860,651,579 | 1,973,798 | 196 | 1746 | 585 | HALT → cleanup entry 22b0af |
| `seventeen_c` | bob | 17 | 1,000 | 18,601,192 | 42,395 | 2 | 33 | 13 | limit 1000 |
| `seventeen_d` | bob | 17 | 1,000 | 19,712,576 | 42,804 | 7 | 42 | 13 | limit 1000 |

The Windows traces end at the 12th (eleven-series) or 18th (seventeen-series)
handler entry. Beyond that, the comparison oracle is original x64 from the
same entry. The six complete captures use three usernames (`alice`, `bob`,
`charlie`); `seventeen_a` (`alice`) remains a rejected Windows capture and its
emulated continuation is reported separately.

## 5. Byte-exact comparisons

### 5.1 Windows level (unchanged corpus)

Every candidate boundary inside each Windows trace is compared against the
recorded writes, through the trace terminal, as in XXXV.

### 5.2 Emulated continuation level

`devirt/serial_loop_validate.py` runs the candidate **to completion first**
(no Unicorn, no trace, cold-process test), then executes original x64 from
the same entry and stops at each later candidate boundary using exact
single-address hooks. All declared roots are compared: context (0x11f0),
registers (4096), stack (8192), bytecode/shadow, bitmaps, dispatch/thunk
pool, writable PE sections, TLS (incl. 1320-byte frame stack), receiver,
twelve callback pointees and the callback output byte. The first 1200
boundaries keep full bytes; later ones keep one SHA-256 over all roots in
order (memory bound). The replay's read hook refuses any read of uncaptured
memory.

Negative controls: corrupting one byte of the first emulation-only full
boundary (`ctx+0x20`; events 374/716 in the two full runs, 835 in a
`seventeen_d` trial) and one digest (event 1200) are each detected at exactly
that event.

Totals over the six complete captures: **97,444 verified instruction instances, 4,135,530 compared boundaries, 1,820,206,405 original x64 instructions, 428 C++ exception deliveries**, zero divergences. Per-process rows are in §4 and [validation.json](jack_xxxvi_evidence/validation.json) (per-step traces in `validation_traces.json.gz`).

### 5.3 Modeled OS service: exception delivery in the oracle

Unicorn cannot enter `RaiseException`. `scripts/pafet_eh_stub.py` intercepts
`_CxxThrowException` and replaces only the OS/CRT search: an x64 virtual
unwinder driven by the PE's `.pdata`/UNWIND_INFO, refusal of any EH frame
other than the dispatcher, FH4 state check (must be 6), catch-type check
(`vm_rc4_crypt_Sig`, by reference), then the **original catch funclet is
executed natively** and execution resumes at the FH4 continuation with the
unwound nonvolatile registers. Candidate and oracle implement the delivery
independently (semantic vs. original funclet + continuation code); the match
is evidence for both, but it is not a Windows observation.

## 6. Materialization

All 103 units contain statically decoded instructions (1586 of 2678 bytes
are instruction bytes; 1092 remain unclassified). Executed PCs touch
84 units dynamically, each materialized on demand by the recovered
`1f1fe0` path with window toggles; no unit is pre-materialized.

## 7. Updated CFG

[`virtual_cfg.json`](jack_xxxvi_evidence/virtual_cfg.json),
[DOT](jack_xxxvi_evidence/virtual_cfg.dot),
[loops](jack_xxxvi_evidence/loops.json),
[static sweep](jack_xxxvi_evidence/static_sweep.json),
[cross-check](jack_xxxvi_evidence/static_crosscheck.json).

Each node carries `static-decode` provenance and, when executed, a `dynamic`
record with levels `windows` / `x64-emulated`. Edges likewise. The static
decoder reuses the candidate's materializer and window functions on a scratch
state, opcode bytes `(bytecode ^ shadow ^ 0xdd) → 3ecf00 ^ 0x63` (invariant
under `mutate_byte`, which toggles both buffers) and the PC-keyed operand
formulas. Lengths exist only for recovered opcodes; an unknown opcode is a
frontier with no successor. It closed after adding `0x3b` and `0x1e`.
Every executed instance in the validation agrees with the static decode
(opcode, branch target, callback ID, pool value): 97,444 verified instances, 0 mismatches.

Opcode inventory of the 478 instructions: PUSH 106, unit jump 102, DROP 74,
LOAD 39, HOST_CALL 34, STORE 24, XOR 18, CMP_LT 16, ADD 14, NOT 13, ZEXT 11,
CMP_NE 9, SEXT 5, CMP_GT 4, BNZ 4, BZ 4, HALT 1. Many blocks are padding
that pushes constants and drops them, compares and drops, or chains unit
jumps; they are kept as instructions and executed with all side effects.

## 8. Loops and bifurcations

Natural loops (back edge to a dominating header):

| Header | Test | Exit | Iteration length (static paths) | Dynamic |
|---|---|---|---|---|
| 1742 | `sext32(fn1()) < 256`, BZ @1754 | 2418 | 79 / 81 | 257 header entries, 256 back edges, exit at step 20755 (both full runs); 12 back edges in each 1000-step run |
| 2522 | `sext32(fn7()) < 256`, BZ @2534 | 1898 | 98–132 | 257 entries, 256 back edges, exit at step 45895 |
| 2184 | `fn15() < fn16()`, BZ @2193 | 312 | 94 / 95 | 9 entries, 8 back edges (`fn16()` = 8), exit at step 46695 |

Effective bodies (padding omitted, opcodes and callbacks as recovered):

```text
init:  r16 = 0x422d…^0xbdd2… ; r16 = 0x7ffa9edee0c96c0d ; fn0(0)
L1742: fn2()                          ; fn0(fn1()+1)
mid:   fn3(0) ; fn5(fn4()) ; fn6(0)
L2522: if (fn8() != 0) fn9() else fn10() ; fn11() ; fn6(fn7()+1)
mid:   fn12(0) ; fn13(0) ; fn14(0)
L2184: fn12(zext8(sext32(zext8(fn17()))+1)) ; fn18() ; fn19() ; fn21(zext8(fn20())) ; fn22() ; fn14(fn15()+1)
exit:  … HALT @2652
```

Bifurcations: the three loop tests; **2392** (`CMP_NE fn8(),0` → BZ), which
chooses between callback 9 (divides by `*R4`) and callback 10, a data
dependency on the host `std::string` length (zero in all captures); and four
reconverging diamonds at 936, 997, 1664, 1950 conditioned on registers r21,
r15, r17, r1 that the program reads but never stores (their arms differ only
in padding). Observed outcomes are listed in `loops.json`.

The first loop is demonstrated three ways: dominance in the static graph,
dynamic re-entry of PC1742 after the back edge by verified steps, and the
changing loop state (host index 0,1,2,… read by callback 1 and compared with
256) at each header visit.

## 9. Termination

Static path: L2184 exit (BZ @2193 → 312) → padding → `HALT` @2652. HALT's
wrapper tail re-reads control 10 (`1ee450`) and returns through a pop-only
`RET`; the dispatcher's post-wrapper read (`22fd0c`) jumps to `232daa`, the
loop top re-reads halt (`22b088`) and control 6 (`22b0a2`), and with no armed
branch enters cleanup at `22b0af`: `229750`, up to 24 output qwords via
`232e00`, `memset(bytecode, 0, 0xa76)`, result `1ee310`, destructors and a
heap free. The halt-job label `0xfe1ab` is set but short-circuited by the
post-wrapper halt check on this route. The decoder's out-of-range route
from XXXV remains unreachable in the static graph (all successors in range).

**Dynamically demonstrated** in `seventeen_b` and `eleven_c`: L2184 exits at step 46695, HALT executes as instruction 46,722 (bodies `0x216f40`, domain 2, and `0x1fa890`, domain 0), and the candidate's `halt_wrapper_return`, `outer_dispatch`, `post_wrapper` and `halt_cleanup_entry` boundaries match the original code byte for byte. Beyond `22b0af` the original x64 enters `229750`, whose 17th instruction calls `KERNEL32!VirtualFree(ctx[0x1190], 0, MEM_RELEASE)` (releasing the generated thunk pool); the emulation stops there. The cleanup (thunk-pool release, 24-qword output writer `232e00`, `memset`, result `1ee310`, destructors, heap free) and the final return of Serial-VM are **not** modeled or verified.

## 10. First unsupported point

The candidate stops by design after HALT: `Serial-VM halted; native cleanup from 22b0af is not modeled`. This is the first unsupported point on the natural route, and it is an OS dependency (`VirtualFree`), not a missing opcode. Other open frontiers that are not on the observed route: the key-length ≠ 0 arm of bifurcation 2392 (callback 9 and diamond 1664 never executed: the `std::string` length is 0 in every capture), HALT domains 1 and 3, kernels `0x2c1549`/`0x32a5e8`, the seven cataloged outer states, reentrant/clamped TLS frames.

## 11. Regressions and counterexamples

- 77 IR/Serial tests and 25 state-contract tests pass after the base-class
  edits (generalized `1f10a0`, `throw_label`/`decoder_epoch` hooks that keep
  the old fail-closed behavior in XXXV classes).
- 13 new tests (`devirt/test_serial_loop.py`): opcode edges, decoded ADD
  program, scramble zero-property, every callback case (incl. `#DE`), branch
  guard, cached-window no-op, exception delivery + TLS-clamp refusal, crossing the old frontier,
  cold candidate without Unicorn/Z3/observations, closed static program and
  CFG invariants.
- Historical validators XXVIII–XXXV: [regressions.json](jack_xxxvi_evidence/regressions.json).
- [Counterexamples](jack_xxxvi_evidence/counterexamples.json): `seventeen_a`
  stays a rejected Windows capture; its 1000-step emulated continuation is
  reported but not counted. Synthetic controls listed.
- **Model defect found and fixed (`devirt/serial_windows.py`).** The first
  full runs verified 45,946 instructions and then diverged identically in
  both processes at boundary `outer_header_end` of step 45948 (PC1456, first
  entry of physical unit 56 in loop 2184): the candidate moved the 26-byte
  window index `ctx+0xb5c` 55→56 and toggled unit 57's mask. Original
  `1f0660` jumps to its epilogue when both windows are already cached
  (`1f0785`), never calling `1f05c0`; XXXIV's model assumed it did. Earlier
  runs only exercised the cached case with an unchanged index, where both
  agree. Diagnosis by
  [`pafet_serial_diagnose_xxxvi.py`](scripts/pafet_serial_diagnose_xxxvi.py);
  [pre-fix runs and divergence](jack_xxxvi_evidence/prefix_runs/). After the
  fix all XXVIII–XXXV validators and 115 tests pass and both full runs reach
  HALT without divergence.

## 12. Maintainability

New families are registered in an explicit handler registry
(`SemanticHandlers` in `devirt/serial_loop.py`) instead of a new subclass per
family. Scheduler, controls, TLS frames, windows and materialization are
reused unchanged. One regions module (`serial_regions_xxxvi.py`) is
generated by one audit script for all 68 bindings.

## 13. Reproduction

```bash
python -m pip install -r jack_xxiii_evidence/requirements.txt
python scripts/pafet_serial_audit_xxxvi.py
python scripts/pafet_serial_static_xxxvi.py
python -m devirt.serial_loop_validate --case seventeen_b --limit 80000 --negative --output /tmp/full_b.json
python -m devirt.serial_loop_validate --case seventeen_d --limit 1000 --output /tmp/mid_d.json   # etc.
python scripts/pafet_serial_metrics_xxxvi.py --rows /tmp/*.json
python scripts/pafet_serial_static_crosscheck_xxxvi.py
python -m unittest devirt.test_serial_loop -v
python scripts/pafet_regressions_xxxvi.py
```

## 14. Proposal for JACK XXXVII

1. **Windows confirmation of the long runs.** The trap-flag collector is limited to 1M native steps; the full program needs ~0.87G. Build a checkpoint collector: hardware breakpoints at selected boundaries (e.g. every header visit of 1742/2522/2184, HALT, `22b0af`) dumping the declared roots without single-stepping, and compare them with the candidate's digests. `capture_deep.ps1` covers up to ~45 instructions with the current collector.
2. **Native cleanup and return:** model `229750` (`VirtualFree` of the thunk pool), output writer `232e00`, `memset`, `1ee310` result and destructors, and validate the Serial-VM return value and output qwords.
3. **Input diversity on the 2392 arm:** find a natural input for which the callback `std::string` is non-empty to execute callback 9 (modulus/heap-data path) and diamond 1664; do not force memory.
4. Remaining bindings (HALT d1/d3), kernels `0x2c1549`/`0x32a5e8`, the seven outer states and reentrant TLS/C++ paths.
5. With the Serial program closed, emit a readable Serial section for the four-VM `pafet.cpp` from the static CFG and the recovered callbacks (no RC4 substitution).
