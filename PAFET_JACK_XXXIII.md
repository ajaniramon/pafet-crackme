# JACK XXXIII — Beyond PC 16

## 1. Result and evidence scope

Started from clean `main` at `735a747a128e3688b1aedf3e699e414e5c6fa907`,
which matched `origin/main` after fetch. The pre-change scheduler suite passed
12 tests. Historical reports were checked against the implementation, raw
captures, manifests and validation results before editing.

The semantic interpreter now executes **six consecutive virtual instructions
to PC 20/SP 0 in three independent Windows processes**. Three additional
processes validate five instructions. The new instruction is opcode `0x29`,
`XOR_U64`, at PC 16. All four native dispatch domains have natural comparisons.
Two processes cross a **naturally triggered scheduler remap rebuild**, then
continue with equivalent declared virtual memory. One additional outer state,
`0x2e0073`, is reconstructed and compared.

This is partial Serial-VM devirtualization. The next instruction, opcode
`0x1a` at PC 20, is resolved and observed at its handler entry, but is not
executed by the semantic candidate. Ten-instruction continuity is not claimed.

| Metric | JACK XXXII | JACK XXXIII |
|---|---:|---:|
| Maximum validated consecutive instructions | 4 | 6 |
| Distinct validated virtual opcodes | 3 | 4 |
| Generated kernels observed, cumulative | 61/64 | 61/64 |
| Continuous natural rebuild validated | No | Yes, 2 processes |
| Unsupported outer states in the audited catalog | 8 | 7 |

Primary results: [validation](jack_xxxiii_evidence/validation.json),
[status matrix](jack_xxxiii_evidence/status.json),
[pinned corpus](jack_xxxiii_evidence/corpus.json),
[capture-source provenance](jack_xxxiii_evidence/source_provenance.json).
No original credentials or flag were sought or recovered.

## 2. New instruction: PC 16

**Static reconstruction:** original readonly remap/handler tables select these
four bodies for opcode `0x29`:

| Domain | Body RVA | Core mechanism |
|---|---|---|
| 0 | `0x1fb5c0` | Two POPs, direct XOR, PUSH |
| 1 | `0x20c650` | Two POPs, native-ALU subprogram, PUSH |
| 2 | `0x2162d0` | `(a OR b) - (a AND b)`, PUSH |
| 3 | `0x220b70` | `a + b - 2*(a AND b)`, PUSH |

Arithmetic wraps at 64 bits. The last two expressions equal XOR. The
materialized logical header at PC 16 is `cf`; the original opcode lookup
decodes it to `0x29`. Natural decoder, remapper, resolved body and effects
agree; the opcode was not identified from the static byte alone.

```text
PC 16: cf
    right = pop_u64()       # refresh SP, tags, PRNG; scrub vacated cell
    left  = pop_u64()
    push_u64(left XOR right)
    PC = 17                # header only; no immediate operand
    SP: 2 -> 1
```

There is no identified virtual-flag write in this core. This statement concerns
the inspected instruction, not a complete description of Serial's flags ISA.
The candidate also reproduces wrapper-specific noise, encoded controls,
tag/PRNG updates, erased cells, continuation, dispatch and return effects.
Every declared context byte is compared, rather than only the logical XOR.

The natural operands in this prefix are `0x422d362bcf1eb613` and
`0xbdd2c9d430e149ec`. Their XOR is all ones. They remain **calculated from
the initial capture, original pool tables and preceding semantic steps**;
the constant result is never supplied as input.

The sixth instruction reuses `STORE_REG_U16` at PC 17, writes register 16,
and reaches PC 20/SP 0. No new STORE semantics or intermediate restoration
is introduced.

### Native-ALU subprogram

RVA `0x1ed730` selects a small program interpreted at `0x1ed310`. This is
distinct from the outer Serial bytecode: four local 64-bit registers,
encrypted/checksummed records, arithmetic/bitwise operations and bounded
nested program calls. The native switch and table formats are reconstructed
in [the ALU model](devirt/serial_alu.py) and
[static listings](jack_xxxiii_evidence/alu_interpreter.asm).

The original table at RVA `0x3edc08` selects programs 6 or 11 for selector 2.
Both reduce to XOR; a shared token-derived mask cancels between the inputs.
For example, decoded program 6 is:

```text
r3 = r0
r3 |= r1
r2 = call program 7(r0, r1)   # program 7 calls program 8: r0 & r1
r3 -= r2
return r3
```

All 12 microprograms can be decoded with their record checksums. That static
recovery is not dynamic coverage of all programs. The two selected XOR
variants have an offline Z3 proof over arbitrary 64-bit operands, plus a proof
that the common mask cancels: [proof](jack_xxxiii_evidence/alu_static_proof.json).
These proofs are conditional on the reconstructed micro-ISA; the Windows
comparisons independently exercise the natural domain-1 path. Program 6 is
selected in the new natural domain-1 cases; program 11's general identity
remains static evidence, not separate natural dynamic coverage.

Runtime evaluates this small semantic ISA from original PE tables. It neither
executes x64 nor invokes Z3. Tests include 512 unrelated operand/token triples,
edge cases and checksum corruption. A development error in the selector RVA
would have escaped the complementary natural operands; its synthetic
counterexample is preserved in [the failure ledger](jack_xxxiii_evidence/counterexamples.json).

## 3. Natural continuous remap

Both new rebuilds originate at native call RVA `0x1f0de9`, inside enqueue.
The existing condition is `(enqueue_counter XOR live_key) & 0x1ff == 0`.
The input counter and keys come from the evolving candidate state. No seed,
counter, flag or internal memory was forced in Windows or repaired afterward.

| Process | PC at rebuild | Native instructions inside helper | Subsequent virtual cores |
|---|---:|---:|---:|
| `five_a` | 16 | 109,560 | 1 |
| `six_b` | 11 | 106,698 | 3 |

The helper is entered at `0x2297e0` and compared again before its return at
`0x229c6d`. Comparisons include all 248 dispatch entries, both permutations,
the complete 7,968-byte dynamic thunk pool, pool key, masks/seeds/counters,
context, arrays, buffers and writable PE state. All four thunk codecs occur.
The ensuing queue/decoder/domain selection and virtual cores also match.

[Integrated rebuild evidence](jack_xxxiii_evidence/remap_integration.json)
records the actual trigger inputs, zero trigger predicates, root hashes and
native positions. This extends XXXII's isolated helper evidence; it does not
repair its historical truncated capture. The static-pool variant and other
unobserved rebuild triggers retain their earlier limits.

## 4. Independent processes and boundaries

All seven captures are complete, separate natural processes. Inputs use
usernames `alice`, `bob`, `charlie` for the three five-step and three six-step
cases, and `alice` for the seventh-entry case. Collector stdin also uses the
existing fixed laboratory serial `serial01`; this is not credential recovery.
Full unique run IDs and input bytes are retained in their manifests.

| Capture | Complete virtual steps | Final PC/SP | Compared memory boundaries | Scheduler jobs | Native replay instructions | Rebuilds |
|---|---:|---|---:|---:|---:|---:|
| `five_a` | 5 | 17/1 | 155 | 62 | 173,490 | 1 |
| `five_b` | 5 | 17/1 | 32 | 3 | 23,434 | 0 |
| `five_c` | 5 | 17/1 | 145 | 60 | 60,596 | 0 |
| `six_a` | 6 | 20/0 | 385 | 175 | 138,702 | 0 |
| `six_b` | 6 | 20/0 | 152 | 60 | 168,386 | 1 |
| `six_c` | 6 | 20/0 | 36 | 3 | 25,884 | 0 |
| `seventh_boundary` | 6 plus next header/handler entry | 21/0 | 276 | 119 | 103,676 | 0 |

**Level A:** original x64 replay independently matches Windows across
**694,168 native instruction instances**. Defined flags, CPU state, reads and
writes use the existing strict laboratory comparison. This is not the count
of semantic VM instructions.

**Level C:** the six accepted depth cases execute **33 virtual instruction
instances**, with **905 byte-exact virtual-memory boundaries**, from one
before-state per process. Their independent native replay total is 590,492.
The seventh-entry case has its own unsupported outcome; it is not a
seven-instruction success or silently included among those six accepted cases.

Entry is the existing first outer handler CALL boundary: the first header
has already been decoded by Windows. Each candidate thereafter derives its
own instructions, operands, scheduler work and state. This operation does not
yet replace Serial initialization end to end.

Boundaries include opcode cores, wrapper continuations/returns, parent unwind,
outer dispatch, jobs, decoder/header completion, handler entry and rebuild
entry/exit as applicable. The last candidate boundary must equal the actual
capture terminal, not merely a matching earlier prefix. Context, all 512
encoded register cells, all 1,024 stack cells, bytecode/shadow, bitmaps,
dispatch entries, thunk pool, writable PE and the declared TLS flag are
compared. Native stack scratch and CPU temporaries are not semantic roots;
Level C is not equality of the entire Windows process.

## 5. Counterexamples and remaining frontier

`seventh_boundary` initially failed after five instructions at outer job
`0x2e0073`, native RVA `0x230ef1`. Its prefix and the state at the first
unsupported job matched Windows through native position 100,534. This was a
missing semantic job, not an incomplete snapshot or Unicorn discrepancy.

Static reduction recovers:

```text
noise ^= chain
key = mix(noise ^ key)
enqueue decoder_label
```

The apparent alternative enqueue is masked by the already proved helper
`0x23e0`, which returns 1; CMOVNE selects constructor-validated R15,
`0x27f17`. [Listing](jack_xxxiii_evidence/job_2e0073.asm).
The new model resumes naturally, executes the sixth instruction and matches
the seventh handler entry. A regression disables only this new job to retain
the original failure and matching prefix.

The next verified header is opcode `0x1a` at PC 20; the observed handler is
RVA `0x1f5bf0`. Candidate resolution of that unsupported opcode stops
explicitly at decoded PC 21. Static inspection finds the U32 reader,
PC/control read, label helper `0x1ed270`, deferred request helper `0x1f10a0`
and enqueue `0x1f0db0`. Their combined semantic effect and pending-queue
wrapper return are **not yet reconstructed**. Naming a jump target or assuming
a normal sequential continuation would exceed this evidence.

No capture/replay defect was found on these new paths. Unsupported routes
latch failure; retry cannot continue from partially mutated state. Tests also
reject a missing thunk-root byte and altered ALU records. Five independent
one-byte comparison controls alter key, queue key/count, encoded PC and a
dispatch entry; all are detected. Historical incomplete captures remain
rejected by the previous validators.

## 6. Kernel coverage and other gaps

The cumulative generated-kernel coverage remains **61/64**. The bounded search
used seven natural processes, with no forced internal state.

| Unobserved kernel | Entry condition recovered | Remaining gap |
|---|---|---|
| `0xaf41e` | Post-opcode job `0xf6105`, with noise low bits != 1; this is a domain-2 budget-exit target | Such a budget exit was not observed here |
| `0x2c1549` | Control 0 selects this work label | No incoming literal edge in the 64 kernels/four tails; external/computed source unknown |
| `0x32a5e8` | Control 0 selects this work label | Same restricted graph gap; no whole-program unreachability claim |

[Coverage and incoming edges](jack_xxxiii_evidence/kernel_coverage.json).
The new manual job is separate from the unchanged 64 generated kernels.
The seven unsupported catalog states are `0x38a89`, `0x57f52`, `0xfe1ab`,
`0x1e7639`, `0x2367b2`, `0x2e0108`, `0x3b6230`.

Armed attestation, scheduler exception delivery, halt/cleanup, fallback routes,
rekey TLS callback, later materialization windows and the rest of the ISA/CFG
remain open. LOAD domain 1 now has native evidence; domain 2 is still static
only. User, SHA and Hex mechanisms are unchanged. Functional RC4/SHA models
and literal Hex execution retain their separate contracts. No VM is declared
fully devirtualized by this operation.

## 7. Implementation, independence and reproduction

[DeepSerialVMState](devirt/serial_depth.py) extends the verified scheduler;
[static bindings](devirt/serial_regions_xxxiii.py) add four XOR bodies and
checked context-free unwind tails. The base scheduler gains only an explicit
optional-job hook; its historical model still rejects the newly recovered job.
Capture, replay, remap, rekey and existing instruction implementations are
reused. No capture-framework extension was needed.

```python
from devirt.serial_depth import DeepSerialVMState
state = DeepSerialVMState.from_initial_capture(before, original_pe)
steps = [state.step() for _ in range(6)]
```

Only initial capture memory/CPU inputs and original PE tables enter the
candidate. Validation opens observations after candidate execution. A cold
process test disables Unicorn and Z3 imports and denies observation/proof-file
access while running six steps, including a rebuild. Capstone decodes only
the existing fixed thunk templates; it does not execute handlers. Native
instruction positions are comparison metadata, never runtime loop conditions.

From repository root:

```bash
python -m pip install -r jack_xxiii_evidence/requirements.txt
# Z3 is only required to regenerate the offline algebra proof:
python -m pip install --target jack_xxxii_evidence/build/deps -r jack_xxxii_evidence/requirements.txt
python scripts/pafet_serial_audit_xxxiii.py
python scripts/pafet_serial_alu_proof_xxxiii.py
python -m devirt.serial_depth_validate
python scripts/pafet_serial_metrics_xxxiii.py
python -m unittest devirt.test_ir devirt.test_serial devirt.test_serial_continuous devirt.test_serial_extended devirt.test_serial_scheduler devirt.test_serial_depth -v
python -m unittest discover -s scripts -p 'test_pafet_state*.py' -v
python -O -m unittest discover -s scripts -p 'test_pafet_state*.py' -v
```

Fresh capture, only in the existing controlled Windows laboratory, to unused
directories:

```powershell
./jack_xxxiii_evidence/capture_depth.ps1 -Username alice -Depth 5 -Out jack_xxxiii_evidence/build/fresh_five
./jack_xxxiii_evidence/capture_depth.ps1 -Username bob -Depth 6 -Out jack_xxxiii_evidence/build/fresh_six
./jack_xxxiii_evidence/capture_seventh.ps1 -Username alice -Out jack_xxxiii_evidence/build/fresh_seventh_entry
```

The last command deliberately stops **before** the seventh handler executes.
The existing readonly fetch-counter terminal predicate and 500,000-instruction
observation bound are reused. Bounds do not define candidate semantics.
Original PE SHA-256 remains
`fe85e59225387fba4923f3bc6103914fe7b85ba3dc0514c9e37382818fb44d1a`.
Windows uses the documented `pafet_pass8.exe`, differing only at original
file offsets `0x395efb` and `0x395efc` in the SHA gate; VM bytes are unchanged.
It is not interchangeable with the unmodified PE's credential acceptance.

## 8. Regression results and JACK XXXIV

[Tests](jack_xxxiii_evidence/tests.json): **83 distinct tests pass**
(58 IR/Serial plus 25 state-contract tests), with the 25 state tests also
passing under optimized Python. Nine tests are new. The initial pre-change
12-test scheduler result is recorded separately.

[Historical regression commands/results](jack_xxxiii_evidence/regressions.json)
all exit zero: XXVIII laboratory, XXIX first opcode, XXX two-step, XXXI
three-step and XXXII scheduler/remap/four-step validators. Outputs are retained
under this operation's evidence directory. XXVIII's known queue/OS boundary
remains blocked; C++ wrapper checks and the expensive Hex literal corpus were
not rerun. Their source is unchanged. Previous unsupported outcomes remain
explicit rather than converted to equivalence claims.

JACK XXXIV should use `seventh_boundary` as the first concrete frontier:
recover `0x1ed270` and `0x1f10a0`, model opcode `0x1a` and its pending-queue
return, then execute its scheduled work from the existing six-step state.
Capture an independently bounded seventh core/continuation, validate across
processes, and extend toward ten logical instructions only after that boundary
matches. The natural domain-2 budget exit is a separate targeted opportunity
for kernel `0xaf41e`; the other two missing kernels first need incoming-edge
provenance. Full virtualized RC4 and a clean faithful four-VM `pafet.cpp` remain
future work.
