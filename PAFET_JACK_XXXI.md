# JACK XXXI — PICO Y PALA: Serial PC 8

30 October 2026. Initial local and fetched `origin/main`:
`39c61f3066ae7378147bf6a70b0f95bfce15e9df`.

## Result: PASS for three consecutive instructions

The independent semantic candidate executes:

```text
PC 0   PUSH_POOL_U32 selector=0 -> PC 5,  SP 1
PC 5   STORE_REG_U16 R[16]     -> PC 8,  SP 0
       decoder-triggered rekey; logical values preserved
PC 8   LOAD_REG_U16 R[16]      -> PC 11, SP 1
       exhausted threaded budget -> child RET -> parent RETs -> outer dispatcher
```

Three fresh independent Windows processes match **every compared byte at 13
boundaries**, including rekey entry/exit, third handler/core, all threaded return
frontiers and the instruction immediately after the original outer CALL.
The same candidate also passes one retained independent XXIX capture.

All three instructions consume one mutable state initialized solely from the
PC 0 before-capture and original PE tables. There is no intermediate restore,
native handler execution or observation-file access in the candidate. Native
observations enter only the comparison code after candidate execution.

This establishes the declared virtual-memory contract for these routes, not
whole-VM equivalence or native-CPU equivalence of the semantic candidate.

Primary evidence: [validation](jack_xxxi_evidence/validation.json),
[pinned corpus](jack_xxxi_evidence/corpus.json),
[metrics](jack_xxxi_evidence/metrics.json),
[synthetic helper differential](jack_xxxi_evidence/rekey_differential.json),
[tests](jack_xxxi_evidence/unit_tests.json), and
[counterexamples](jack_xxxi_evidence/counterexamples.json).

## 1. Starting contract and preserved baseline

The mandatory documents, implementations, tests, captured regions and XXX
validation agree: the previous candidate stops before the PC 8 decoder, or at
a native wrapper return. Its two-instruction results remain valid.

The PC 0 initial capture is after the first header has been decoded: byte PC 1,
last-instruction PC 0, fetch count 1. This operation does not claim a new
initialization/first-header proof. The PE identity, pointed-memory contract,
ASLR relocation handling and missing-input rejection remain unchanged.

[ExtendedSerialVMState](devirt/serial_extended.py) extends the baseline rather
than silently changing its coverage. Small integration hooks expose epoch
advancement, region bindings, opcode execution and budget exits. The original
class still refuses the third instruction and retains its regression tests.
The shared U16 operand reader was factored without changing its effects.

## 2. The necessary new mechanism: rekey

### Static reconstruction

The PC 8 decoder increments `ctx+0x200`. On the tested routes the result reaches
`ctx+0x1fc`, resets the counter and calls original `RVA 0x1ef7c0`.

The reduced implementation:

1. Saves the old register, stack and control encoding parameters, old bank
   epoch, format flags and pointer key. Reads/refreshes logical SP.
2. Derives a new seed from the old epoch, pointer key, salt, fetch counter,
   integrity chain, live decoder key and scheduler hash using the original
   wrapping arithmetic and mixing constants.
3. Advances the bank epoch and derives new XOR/add formats, keys, odd
   multipliers and the next epoch threshold.
4. Decodes and recodes all 256 logical registers into their new active bank,
   retaining the original physical writes, tags, PRNG order and digest updates.
5. Recodes only the active stack cells, then all 14 control slots. Inactive
   stack cells and old bank bytes remain exactly as the native helper leaves
   them; they are not zeroed or reconstructed from logical values.
6. Updates encoded queue entries when present, the pointer key, domain seed,
   rekey/hash counters and scheduler hash. The TLS callback-enabled branch is
   explicitly unsupported; required TLS flag bytes are checked before execution.

The candidate also computes a pure, side-effect-free projection before/after
rekey: all 256 logical registers, 14 controls, active stack cells and decoded queue
words. Equality
of that projection is checked separately from physical-memory equality.

### Differential evidence

Each fresh three-step Windows run compares helper entry at `0x1ef7c0` and its
return instruction at `0x1f015b`. The observed interval contains 14,255 x64
instructions before RET. The reduced candidate uses scalar loops and formulas;
it does not execute those instructions.

Natural rekey occurs with SP 0 in these runs. That does **not** validate the
nonempty-stack loop as a Windows route. Four separately labelled synthetic
helper differentials execute the original x64 helper versus the semantic model
with 0, 1, 3 and 1,023 live cells and 0, 1, 3 and 32 encoded queue entries,
comparing all declared virtual roots. Their
constructed call frames are not counted as independent Windows executions or
continuous program coverage. The fresh natural cases exercise register-format
transitions XOR→XOR, XOR→ADD and ADD→XOR, plus control-format transitions
ADD→XOR and XOR→ADD; no formats were forced.

## 3. The third opcode

Direct native decoding, remap/target observations and the reconstructed effects
identify opcode **4**, named `LOAD_REG_U16`:

```text
instruction PC: 8
pristine bytes: 8b 14 dd
operand PC:     9
operand width:  2 bytes, same scrambled U16 reader as STORE_REG_U16
register:       decoded operand & 0xff = 16
logical effect: push(R[16])
next PC:        11
SP:             0 -> 1
```

The model reuses the U16 reader, derives register-bank selection from the new
epoch, decodes the tagged XOR/add cell, advances the PRNG and reseals that same
register cell. It then calls the existing tagged PUSH implementation.
The value is `0x422d362bcf1eb613`, computed initially from the PE pool, stored by
instruction 2 and read back by instruction 3. It is never an injected constant.

The static opcode-4 listing already existed as an exploratory artifact in
XXIX. This is therefore not an independent REVoid prediction. No REVoid source
was used, and no prediction is retroactively claimed. The new claim is its
validated semantic execution and continuation.

## 4. Closing the continuation and native unwind

The initial threaded budget is `0x80000003`. Two child transitions reduce it to
`0x80000001` for instruction 3. After the normal guard/halt/queue/domain checks,
the native wrapper takes its **budget-exhausted exit**. It reseals a domain-bound
control label and returns before the normal mutation/feedback continuation.
Applying that normal continuation here would be incorrect.

Static analysis of the original PE verifies the tails following the nested
`call r9` in all 12 bound wrappers: direct jump, native stack/register restores
and RET only. They have no writes to the declared virtual memory. The model
keeps an explicit parent-wrapper stack and reduces their returns to this proven
identity on virtual memory. Native observations independently check every
child/parent return boundary and the final outer CALL continuation.

The outer CALL is `call rax`, **two bytes**. Its return RVA is decoded from PE
instruction bytes, not learned from a trace. The initial three-byte assumption
failed a boundary comparison and was corrected at its static cause.

The same unwind reduction closes early feedback-selected returns in the short
fresh runs. They reach the outer dispatcher at PC 5 or PC 8 and remain explicit
partial routes because its loop is not yet modeled.

### Independent process results

| Fresh process | Domains, instructions 1–3 | Native instruction observations | Decoder key probe | Result |
|---|---|---:|---|---|
| `process_b` | 2 → 1 → 3 | 17,812 | No | PASS, PC 11/SP 1, returned to `0x22bc87` |
| `process_d` | 1 → 1 → 0 | 17,812 | No | PASS, PC 11/SP 1, returned to `0x231c09` |
| `process_h` | 1 → 1 → 3 | 17,874 | Yes | PASS, PC 11/SP 1, returned to `0x231c09` |

These are **53,498 native instruction instances observing nine virtual
instruction executions**. They are not 53,498 reconstructed virtual operations.
The probe route in `process_h` extends XXX's local probe proof to continuous
execution without changing the probe implementation.

Five other complete fresh captures take earlier returns: four after one opcode,
one after two. They pass native replay and their supported semantic boundaries,
but do not count as three-step successes. All eight complete fresh captures
total 60,422 native instruction comparisons. The retained XXIX chain adds
17,816 comparisons and one independent three-step case; it is referenced, not
copied or counted as a fresh process. LOAD domains 0 and 3 are differentially
validated; domains 1 and 2 have static bindings only.

## 5. Equivalence contracts and protector abstraction

| Effect | Classification | Treatment and evidence |
|---|---|---|
| PC/SP, logical registers/stack, operand decode and virtual control flow | A: program semantics | Explicit state effects, observed decoder/handler/core boundaries |
| PRNG/tags, key and format changes, physical banks, scheduler labels, counters and mutations | B: protector state with future dependencies | Retained and compared byte-for-byte; rekey derives them from prior state |
| Repetitive mixer arithmetic and per-wrapper context noise | C: compact transformations | Scalar formulas preserve the exact physical outputs; no state is discarded |
| Opaque predicate low bit | C: algebraic invariant | `x*(x+1)` is even and `x^(x+1)` odd, so `~(x*(x+1)) & (x^(x+1))` has low bit 1; the remaining scheduler-key condition is retained |
| Child-return epilogues | C: identity on virtual memory | Original-PE static tail check plus differential child/parent/outer boundaries |
| Rekey | B/C: encoded-state bijection represented compactly | Logical projection equality plus independent physical-memory comparisons; inactive storage retained |

For the full-memory contract, the comparison includes all 0x11f0 context bytes,
both register banks, all 1,024 stack cells, code/shadow, bitmaps/windows,
keys/tags/counters, pointed dispatch table, generated thunk pool, writable PE
sections and the read-only TLS callback flag. Native CPU temporaries and native
call-stack scratch are checked by Level A replay, not represented by the reduced
semantic candidate. This is not equality of the entire process state.

A deliberate noise ablation preserves the final logical projection but fails
the first opcode-core physical comparison. See
[metrics](jack_xxxi_evidence/metrics.json). Logical-state equivalence therefore
cannot replace full-memory equivalence, and neither establishes equivalence of
the final RC4 output. This operation does not evaluate that output contract.

Paired code/shadow mutations preserve their XOR header by algebra, but the
physical mutations remain modeled. Other readers use code bytes directly;
the invariant does not justify removing those buffers or mutations globally.

## 6. Amortization

| Metric | JACK XXX | JACK XXXI |
|---|---|---|
| Consecutive virtual instructions | 2 | 3 |
| Semantically implemented opcodes | 2 | 3 |
| New necessary mechanism families | Wrapper continuation; inline decode/domain/remap/thunk; tagged POP/register STORE | Rekey; tagged register LOAD; budget exit and context-free unwind |
| Supported continuation routes | Next inline decoder; wrapper-return frontier | Those routes plus budget return and parent unwind to outer CALL continuation |
| Native instances in fresh continuous intervals | 10,327 across 4 bounded cases, 3 ending at next decoder | 53,498 across 3 cases ending at outer dispatcher |
| Independent continuous cases | 4 fresh bounded + 1 retained | 3 fresh + 1 retained, all with 3 instructions |

The intervals and domains differ; these totals are not a controlled throughput
comparison. [Metrics](jack_xxxi_evidence/metrics.json) additionally records
unique native PCs and the exact finite-corpus set difference. Its “outside
baseline” count refers only to XXX's semantic intervals, not to all historical
native traces or previously unseen code.

Reused without semantic changes: pool decoding, tagged PUSH/POP, control
read/reseal, PRNG advance, cached-window checks, byte mutation, integrity
feedback, opcode lookup, decoder-key probe, domain selection and thunk codecs.
STORE's U16 operand calculation is now shared with LOAD. Static bindings add
four wrapper variants; the baseline eight are retained. The metrics runner
checks unchanged AST fingerprints for 12 reused functions against the starting
commit, rather than inferring reuse from similar output.

The benchmark times semantic steps with snapshots/projection checks enabled and
PE-contract preflight separately. Thousands of x64 observations are validation
cost, not instructions executed by the semantic candidate. Timing is a local
measurement, not a claimed native speedup or estimate for the remaining ISA.
Across 15 runs, median semantic step times were 0.96 ms, 1.54 ms and 16.72 ms;
PE parsing/contract preflight was about 1,001 ms separately. The rekey dominates
the third step. Samples, environment and source hashes are retained.

**Is marginal cost decreasing?** The ordinary LOAD reused its operand reader,
PUSH, dispatch and encoding infrastructure. However, reaching it still required
one fundamental global mechanism—rekey—and a new runtime exit/unwind route.
There is concrete reuse, but this sample does not establish a decreasing
engineering-cost trend or make the next hundred instructions routine execution.
The next test is whether the outer loop and later ordinary opcodes can reuse
these mechanisms without adding further state architecture.

## 7. Counterexamples and exact remaining frontiers

- `process_c` enters the full remap-rebuild call at native `RVA 0x209a34`,
  observed step 1,163, during the PC 5 decode. Its capture reaches the
  100,001-step collection limit. The error manifest incorrectly retains the
  collector's default `entry_rva=0x3bea0`; the raw frame RIP and recorded capture
  command identify the actual Serial entry. That metadata defect is retained
  and does not turn this rejected frame into a valid route. It is retained, pinned and rejected before
  formal candidate/replay execution; its observed prefix is not a Level A/C
  result. The full rebuild remains unsupported.
- The short complete runs return to the outer loop at PC 5/8. Their supported
  states compare exactly; continuation through that loop remains unsupported.
- A fourth `step()` was attempted after each successful third instruction. It
  stops before the outer dispatcher loop at the exact return RVAs in the table.
  No fourth-opcode identity or equivalence is claimed.
- Rekey's TLS callback-enabled branch, full remap rebuild, other materialization
  windows, exhausted/invalid guard paths, remaining ISA/CFG and the virtualized
  RC4 program remain open.
- A synthetic helper harness initially treated a pre-CALL stack top as a return
  slot, causing RET to `0x80000003`. The fix constructs an explicit synthetic
  call frame from initial input addresses. Native captures remain unchanged.

One-byte PRNG/integrity/register corruption controls fail at the reported first
boundary. Missing TLS input is rejected. Unknown routes latch a fault so retry
cannot continue from a partly changed state. No snapshots are repaired from
expected results. See [failure ledger](jack_xxxi_evidence/counterexamples.json)
and [blocked observation](jack_xxxi_evidence/blocked_frontiers.json).

## 8. Reproduction

From repository root with the dependencies in
[requirements](jack_xxiii_evidence/requirements.txt):

```bash
python scripts/pafet_serial_audit_xxxi.py
python -m devirt.serial_extended_validate
python -m devirt.serial_rekey_validate
python -m devirt.serial_extended_metrics
python -m unittest devirt.test_ir devirt.test_serial devirt.test_serial_continuous devirt.test_serial_extended -v
python -m unittest discover -s scripts -p 'test_pafet_state*.py' -v
python -O -m unittest discover -s scripts -p 'test_pafet_state*.py' -v
python -m devirt.serial_continuous_validate --output jack_xxxi_evidence/xxx_regression.json
python -m devirt.serial_validate --output jack_xxxi_evidence/xxix_regression.json
```

The suite passes 62 distinct tests (37 IR/Serial and 25 state-contract tests,
with the latter repeated under optimized Python). The original XXX/XXIX
evidence is not rewritten. User, Hex and SHA algorithms
are unchanged. State-contract and original Serial/IR tests remain in the suite.

```python
from devirt.serial_extended import ExtendedSerialVMState
state = ExtendedSerialVMState.from_initial_capture(before, original_pe)
steps = [state.step() for _ in range(3)]
# PC 11/SP 1 on the pinned complete chains; other routes fail explicitly.
```

Fresh native collection uses only the existing controlled Windows research lab:

```powershell
./jack_xxxi_evidence/capture_command.ps1 -Username alice -Out jack_xxxi_evidence/build/new_process
```

The collector is unchanged and its exact source/contract archives are referenced
by hash from XXX. It launches the pinned `pafet_pass8.exe`, whose only original-PE
differences remain the two documented SHA-gate bytes. Replay uses original PE
instructions. These paths do not prove original gated whole-program behavior.
The collector's legacy `rekey: false` field detects a User-VM address, not Serial's
helper; Serial rekey is established by the measured `0x1ef7c0` entry and effects.
Use a fresh output directory and preserve unsupported or incomplete cases.

Original credentials and flag remain unknown. No credential search, original-PE
modification, historical-evidence rewrite or push is part of this operation.
