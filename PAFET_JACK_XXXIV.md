# JACK XXXIV — THE SEVENTH GATE

## 1. Result

Started on the prepared `main` at
`878960fde889db860a7ed9bdb3b585f21e0dee13`, matching the remote reference.
No checkout, reset, pull or branch change was performed. The 21 existing
depth/scheduler tests passed before modification.

**Three independent Windows processes now validate ten consecutive virtual
instructions, from one initial capture each, through PC 2041/SP 1.** Three
other processes validate the seventh instruction through its deferred
scheduler transfer to PC 2028. Two of those paths traverse natural remaps.

The new opcode is `0x1a`, a deferred branch to a permuted materialization-unit
label. Its operand is not an ordinary byte offset. The reconstruction includes
request authentication, queue insertion, threaded return/unwind, later tag
verification and PC commit. A new materialization/window model then allows
three existing instructions to execute at the branch destination.

| Metric | JACK XXXIII | JACK XXXIV |
|---|---:|---:|
| Maximum validated consecutive instructions | 6 | 10 |
| Distinct validated opcodes | 4 | 5 |
| Independent processes at maximum depth | 3 | 3 |
| Natural integrated rebuilds | Demonstrated | Preserved; 2 new accepted processes |
| Generated kernels observed, cumulative | 61/64 | 61/64 |
| Unsupported cataloged outer states | 7 | 7 |
| First unsupported instruction | `0x1a`, PC 20 | `0x3a`, PC 2041 |

[Validation](jack_xxxiv_evidence/validation.json),
[status matrix](jack_xxxiv_evidence/status.json),
[pinned corpus](jack_xxxiv_evidence/corpus.json) and
[source provenance](jack_xxxiv_evidence/source_provenance.json) distinguish
native replay from semantic continuity. Neither Serial-VM nor its complete
virtualized RC4 program is declared recovered. No credentials or flag search
was performed.

## 2. Opcode `0x1a`: request, return, commit

### Operand and label — static reconstruction plus natural comparison

At PC 20, the materialized logical bytes are:

```text
34 ad 77 2e 43
```

The original opcode table decodes header `34` to `0x1a`. The shared U32
reader at `0x1f1c70` consumes PC 21–24 and decodes operand **1** using the
existing position-dependent byte packing and 32-bit scrambling arithmetic.
Its consumption frontier is PC **25**, with SP still zero.

Helper `0x1ed270` maps that logical unit through the recovered bounded
permutation to physical bytecode PC **2028**. The model computes the mapping;
it contains no special-case assignment of 2028. The helper's range and
permutation consistency checks were inspected in the original PE. Unit 1
is the naturally exercised operand here; all other labels are not thereby
claimed dynamically covered.

| Domain | Opcode body RVA | New natural evidence |
|---|---|---|
| 0 | `0x1f5bf0` | Yes |
| 1 | `0x20d330` | Yes |
| 2 | `0x20ed90` | Static binding only |
| 3 | `0x225710` | Yes |

[Static bindings/listings](jack_xxxiv_evidence/native_regions.json) derive
the bodies, noise parameters, boundaries and context-free unwind tails from
the original PE. Domain-specific noise matters: domains 1 and 3 use the
subtractive mix for this opcode, unlike STORE/LOAD. The inlined origin-PC
read in domain 1 has the same encoded-control refresh effect as the helper.

### Deferred request — recovered helper `0x1f10a0`

The inspected wrappers call this helper with condition zero, mode one,
invert zero, destination PC and origin PC. Those fixed arguments make the
instruction's request taken and permitted. Other helper argument combinations
are outside the recovered opcode contract.

Let `F = ctx[0x384]` (32-bit frame word), `S = ctx[0x350]`,
`L = ctx[0x260]`, origin `O`, destination `D`, and taken bit `T=1`.
Arithmetic products wrap to 64 bits; `mix` is the existing fmix64 reduction.

```text
mask = low32(mix(T*C2 XOR O*MUL XOR F XOR S XOR L XOR 0x42524d4b))
tag  = mix(D*C2 XOR O*PHI XOR T*MUL XOR F XOR S XOR L XOR 0x42525441)

control[4]  = D XOR mask
control[5]  = T
control[11] = F XOR O
control[12] = tag
control[6]  = 1                 # armed request
ctx[0x388] += 1
key = mix(T XOR O XOR key)
control[0] = 0xffd5b
enqueue(0xffd5b)
```

`C2=0xc2b2ae3d27d4eb4f`; PHI/MUL are the existing interpreter constants.
These are logical control writes: each performs the original PRNG advance,
tag update and add/XOR resealing. No captured tag, key or output supplies the
candidate's values. [Implementation](devirt/serial_branch.py).

### Thread continuation and scheduler commit

After enqueue, the native wrapper checks threaded mode, guard and halt state.
The pending queue makes it return before the ordinary opcode-finish path.
The model reproduces that read order, then unwinds its checked parent tails
and returns to the outer dispatcher. It does not assume an immediate jump
or run the normal paired-byte mutation tail on this path.

The existing queue/callback/job model carries the request to the attestation
gate, work label `0x28aab7`, native RVA `0x2300de`. The gate reads/reseals
controls 11, 5, 6, 4 and 12, recovers origin and destination using helper
`0x1f0f80`, and recomputes the tag using `0x1f1000`. If valid, armed and taken,
it commits the destination to PC; it then clears controls 6 and 12, mixes the
new PC into the key/noise and enqueues the outer decoder.

```text
PC20 -> decode U32 -> PC25 + armed request + pending queue
     -> wrapper return / parent unwind
     -> outer queue, callbacks and jobs
     -> verify request -> commit PC2028 -> decoder entry
```

The three seven-step captures end at this **later decoder entry**, with PC
2028/SP 0 and no intermediate restoration. A helper return or PC25 alone is
not treated as a completed transfer. [Gate listing](jack_xxxiv_evidence/armed_gate.asm).
Native guard-failure/exception delivery remains unverified; the candidate
rejects a corrupted tag explicitly.

## 3. From seven to ten: materialization and windows

The next decoder needs materialization unit 1, which was absent at entry.
The model reuses the original scalar materializer and reconstructs:

- `0x1f25b0`: physical-PC-to-unit mapping, materialization bitmap and current unit.
- `0x1f1fe0`: fresh unit bytes, captured shadow and current 32-byte masking,
  physical window bitmap and materialization counter.
- `0x1f0660`: retain or transition the two active windows.
- `0x1f0290`: position-dependent XOR mask for a 32-byte window.
- `0x1f0410`/`0x1f05c0`: 26-byte masks and adjacent-window bookkeeping.

Materialization and window bitmaps use different indices: logical unit 1
occupies physical 26-byte window **78**. The next active 32-byte window is
**63**. Reusing the old first-window assumptions would decode the wrong bytes
and leave incorrect memory outside the current instruction.

[WindowSerialVMState](devirt/serial_windows.py) updates the complete affected
bytecode ranges and bitmaps, including re-masking old windows. It uses the
captured bitmap state and shadow, not a synthetic decrypted buffer. The
original layout contract is 2678 bytes, period 32 and width 26; unsupported
layouts or wide requests fail explicitly. This is not proof of every possible
window transition.

The model reaches:

| Step | Virtual PC | Opcode / effect | Consumption frontier |
|---|---:|---|---:|
| 7 | 20 | `0x1a`: request unit-1 transfer; scheduler commits PC2028 | 25 before commit |
| 8 | 2028 | PUSH pool selector 2 | 2033 |
| 9 | 2033 | STORE register 16 | 2036 |
| 10 | 2036 | PUSH pool selector 3 | 2041 |

The pool values are computed from original PE constants; the observed final
zero PUSH is not inserted as a known answer. The last three instructions
reuse existing semantics. The new work is the deferred control protocol and
materialization/window transition enabling their continuous execution.

[Window evidence](jack_xxxiv_evidence/windows.json) compares all declared
roots after materialization and at the next handler entry in three processes.
Each reaches unit 1/window32 63/window26 78/materialization count 2. The
interpreter's full boundary sequence also matches. LOAD domain 2 is newly
observed in this corpus, completing natural evidence for the four LOAD
bindings; all prior XOR domains remain covered by retained regressions.

## 4. Independent validation

| Capture | Executed opcodes | Final PC/SP | Memory boundaries | Scheduler jobs | Native replay instructions | Natural remaps |
|---|---:|---|---:|---:|---:|---:|
| `seven_a` | 7 | 2028/0 | 581 | 266 | 308,641 | 1 |
| `seven_b` | 7 | 2028/0 | 113 | 36 | 48,816 | 0 |
| `seven_c` | 7 | 2028/0 | 346 | 150 | 231,905 | 1 |
| `ten_a` | 10 | 2041/1 | 237 | 91 | 121,837 | 0 |
| `ten_b` | 10 | 2041/1 | 359 | 150 | 159,185 | 0 |
| `ten_c` | 10 | 2041/1 | 241 | 93 | 123,085 | 0 |
| `eleventh_boundary` | 10 plus next header/handler entry | 2042/1 | 375 | 154 | 274,760 | 1 |

All captures are complete, with distinct process run IDs. Each trio uses
`alice`, `bob`, `charlie`; the eleventh-entry case uses `alice`. The existing
collector supplies laboratory serial `serial01`. These finite paths do not
establish behavior for all strings, seeds or variants.

**Level A:** replay of original x64 matches Windows CPU, defined flags,
memory reads and writes across **1,268,229 instruction instances**. This is
not a count of unique native instructions or semantic VM instructions.

**Level C:** the six accepted depth cases execute **51 virtual instruction
instances**, with **1,877 byte-exact declared-memory boundaries**, from six
single before-states. Their native replay total is 993,469. The three ten-step
cases account for 404,107 native observations. Scheduler-job counts exclude
decoder/terminal-handler handoffs and must not be counted as virtual opcodes.

The seventh case is explicitly unsupported at the next handler; it is not an
eleven-instruction success. Its ten-step prefix and handler-entry state match.
The initial capture is still the first outer CALL with the first header
already decoded, not a replacement of all Serial initialization.

Compared roots include the entire Serial context, 512 encoded register-bank
cells, all 1024 stack cells, PC/SP and encoded controls, bytecode/shadow,
both bitmaps, 248 dispatch entries, complete thunk pool, writable PE and the
declared TLS flag. PRNG, tags, request fields, queues and remap state are
included. The last semantic boundary must equal the captured terminal.
This memory-boundary contract is distinct from whole-process CPU/stack-scratch
equivalence and from the separate instruction-by-instruction native replay.

Two accepted seven-step paths rebuild naturally at PC17, before the sixth
and seventh cores. The input enqueue predicates are zero, with no forced
internal state. They execute 107,701 and 107,815 instructions inside the
helper and compare all dispatch entries, permutations, keys and the complete
thunk pool. [Rebuild evidence](jack_xxxiv_evidence/remap_integration.json).
The XXXIII rebuild captures are additionally replayed through the new semantic
class in tests. No remap implementation change was needed.

## 5. Counterexamples and observation discipline

The first unsupported instruction is now `0x3a` at PC2041. In the complete
`eleventh_boundary` capture, its header/resolve stage reaches decoded PC2042
and handler RVA `0x2217f0`. The semantic resolver computes that target from
its own state and stops before executing the handler. No mnemonic or effects
are invented. [Counterexamples](jack_xxxiv_evidence/counterexamples.json).

A new **metrics prototype** attempted to compare only two extracted window
events. Because the same native RVA had occurred earlier, this associated
the new materializer return with the wrong visit and reported a difference.
The complete candidate/oracle comparison already passed. The fix compares
the complete ordered event sequence first and then projects matched rows
into the compact summary. It changes no model state and relaxes no checks.
[Original failure and corrected positions](jack_xxxiv_evidence/boundary_anchor_counterexample.json)
and a dedicated regression preserve this observation error. It was not a
snapshot-completeness or x64 replay defect.

Negative tests reject a one-bit request-tag change, invalid unit 103 and an
unsupported window period. Five one-byte comparison controls alter key,
queue key/count, encoded PC and a dispatch entry. Missing-root and alias
checks remain enforced by the existing contract. Unsupported execution
through `step`/`dispatch_next` latches failure; retry cannot resume partial
mutations. Synthetic guard tests are not claimed as naturally observed
exception paths. No new capture was truncated; historical truncated captures
remain rejected by historical validators.

## 6. Reproduction and regression results

From repository root with the existing pinned Python dependencies:

```bash
python -m pip install -r jack_xxiii_evidence/requirements.txt
python scripts/pafet_serial_audit_xxxiv.py
python -m devirt.serial_branch_validate
python scripts/pafet_serial_metrics_xxxiv.py
python -m unittest devirt.test_ir devirt.test_serial devirt.test_serial_continuous devirt.test_serial_extended devirt.test_serial_scheduler devirt.test_serial_depth devirt.test_serial_branch -v
python -m unittest discover -s scripts -p 'test_pafet_state*.py' -v
python -O -m unittest discover -s scripts -p 'test_pafet_state*.py' -v
```

```python
from devirt.serial_windows import WindowSerialVMState
state = WindowSerialVMState.from_initial_capture(before, original_pe)
steps = [state.step() for _ in range(10)]
# For the seven-step transfer boundary: run seven steps, then dispatch_next().
```

A cold-process regression disables Unicorn and Z3 imports, denies oracle/proof
file access, and runs all ten semantic steps. Validation opens observations
after candidate execution. Capstone retains its existing fixed-thunk decoding
role; no native handler or CPU instruction stream drives the candidate.

Fresh captures use the existing controlled Windows laboratory and unused
output directories:

```powershell
./jack_xxxiv_evidence/capture_seven.ps1 -Username alice -Out jack_xxxiv_evidence/build/fresh_seven
./jack_xxxiv_evidence/capture_ten.ps1 -Username bob -Out jack_xxxiv_evidence/build/fresh_ten
./jack_xxxiv_evidence/capture_eleventh.ps1 -Username alice -Out jack_xxxiv_evidence/build/fresh_eleventh_entry
```

The last command stops before the unsupported handler executes. The unchanged
capture engine uses hardware breakpoints/single-step, readonly fetch-count
terminal predicates and a 500,000-instruction observation bound. Those counts
are never candidate execution conditions. Windows runs the documented
`pafet_pass8.exe` gate variant; original VM instruction bytes are unchanged.
Replay/static extraction use `pafet.bin`, SHA-256
`fe85e59225387fba4923f3bc6103914fe7b85ba3dc0514c9e37382818fb44d1a`.
The two original file offsets changed in pass8 remain `0x395efb/0x395efc`;
no executable was modified by this operation. Hash-pinned capture/contract
source archives are referenced from XXXIII instead of duplicated.

[Tests](jack_xxxiv_evidence/tests.json): **92 distinct tests pass**:
66 IR/Serial in the first full run, 25 state tests, and the subsequently added
boundary-anchor regression. The 25 state tests also pass under optimized
Python. The reproduction command above now includes all 67 IR/Serial tests.
Nine tests are new relative to XXXIII.

[Historical validators](jack_xxxiv_evidence/regressions.json) XXVIII, XXIX,
XXX, XXXI, XXXII and XXXIII all exit zero, with results retained under this
operation. XXVIII's known queue/OS boundary remains blocked; old narrow-model
unsupported cases stay explicit. C++ wrapper and the expensive Hex literal
corpus were not rerun; those sources are unchanged. User, SHA and Hex
devirtualization status is unchanged.

## 7. Remaining work and JACK XXXV

There are still seven unsupported outer catalog states and 61/64 observed
generated kernels. No time was spent forcing the three missing kernels.
The new opcode has natural evidence in domains 0/1/3; domain 2's binding is
static only. Other deferred-request conditions, control-refresh helper
`0x1f1730`, native guard/exception delivery, scheduler exceptions, rekey TLS
callbacks, halt/cleanup and further window routes remain open. The new armed
commit proof does not close every attestation variant.

JACK XXXV should inspect opcode `0x3a` and its four PE-selected wrappers,
starting with the observed `0x2217f0` entry. Recover its state reads/writes
and helper calls, then extend from the ten-step candidate without restoring
the eleventh-entry capture. Obtain new bounded Windows observations past its
core and continuation; the existing capture ends before them. Validate the
new depth across independent processes, keeping the unit-1 windows, request
protocol and natural rebuild regressions. The full virtualized program and a
clean faithful four-VM `pafet.cpp` remain future objectives.
