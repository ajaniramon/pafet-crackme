# JACK XXXV — BREAK THE ELEVENTH

## 1. Result and starting point

Started on prepared `main` at
`5d9b29767feb32520548c63e53ba5c2741026974`. No checkout, reset, pull or branch
change was performed. The nine XXXIV branch/window regressions passed before
modification. The report, implementations, raw captures and manifests were
contrasted before extending the model.

**Three independent Windows processes now validate seventeen consecutive
virtual instructions, including their continuations through the next handler
entry.** Three other processes independently close instruction eleven.
The new semantic opcodes are sign extension (`0x3a`), host CALL (`0x20`) and
DROP (`0x1f`). Host CALL reconstructs encoded TLS frames and the original
callback's scalar setter/getter; it does not substitute conventional RC4.

The partial virtual CFG is derived independently from native context writes.
It contains **18 observed PCs, 17 semantically executed PCs and two recovered
deferred destinations**. Unknown successors are left open.

| Metric | JACK XXXIV | JACK XXXV |
|---|---:|---:|
| Maximum verified continuous prefix | 10 | 17 |
| Independent processes at maximum depth | 3 | 3 |
| Distinct implemented semantic opcodes | 5 | 8 |
| Materialization units explored naturally | 2 | 3 |
| Generated kernels observed, cumulative | 61/64 | 62/64 |
| Unsupported cataloged outer states | 7 | 7 |
| First unsupported opcode | `0x3a`, PC2041 | `0x16`, PC1753 |

[Validation](jack_xxxv_evidence/validation.json),
[status](jack_xxxv_evidence/status.json),
[coverage](jack_xxxv_evidence/coverage.json),
[pinned corpus](jack_xxxv_evidence/corpus.json) and
[capture-source provenance](jack_xxxv_evidence/source_provenance.json).
No original credentials or flag were sought or recovered. Serial-VM is not
declared completely devirtualized.

## 2. Instruction eleven: opcode `0x3a`

Original remap/handler tables bind four bodies:

| Domain | Body RVA | Natural differential evidence |
|---|---|---|
| 0 | `0x1f35e0` | Yes |
| 1 | `0x20b9d0` | Yes |
| 2 | `0x2120e0` | Yes |
| 3 | `0x2217f0` | Yes |

The body reads a U8 immediate with helper `0x1f1e80`, masks it to six bits,
POPs a 64-bit value, performs `SHL` followed by arithmetic `SAR` using the
same count, then PUSHes the result. It has no identified virtual-flags write;
PC/SP, encoded controls, tags, erased cells, PRNG and continuation effects
remain part of the comparison.

The U8 reader refreshes PC, ensures the operand window, advances/reseals PC,
then reads the byte and toggles bit 7. At PC2041 the logical bytes are
`96 a0`: opcode `0x3a`, immediate `0x20`, consumption frontier PC2043.

```text
operand = read_u8_xor_80()
width = operand & 63
value = pop_u64()
if width == 0:
    result = value              # x64 count 64 is masked to zero
else:
    result = sign_extend_low_bits(value, width)
push_u64(result)
```

SP stays at one. The zero-width behavior is identity, not a zero-bit signed
integer. [Model](devirt/serial_signextend.py) and
[original helper listing](jack_xxxv_evidence/helper_1f1e80.asm).

The natural prefix's operand value is zero, so natural results alone cannot
distinguish many incorrect arithmetic implementations. An isolated
original-x64 slice comparison checks **4096 cases**: all 256 immediate bytes
against sixteen edge/random 64-bit values. It tests nonzero sign bits and
masked counts without supplying native results to the candidate.
[Arithmetic evidence](jack_xxxv_evidence/arithmetic.json).
This is synthetic local arithmetic evidence, separate from Windows VM-path
coverage and from a universal proof of the VM.

The eleven-step captures close at the following opcode's handler entry.
`prepare_next_instruction()` performs continuation/dispatch/decode without
incrementing the executed-opcode count. Reaching opcode `0x20` is therefore
recorded as eleven executed instructions, not twelve.

## 3. Host CALL, TLS frames and DROP

### Recovered opcode `0x20`

Static inspection identifies a U16 function selector, U8 argument count
clamped to 32, argument POPs in reverse order, a native callback receiver,
encoded call-depth changes, TLS frame protection and result PUSH. Callback
resolution follows `ctx+0xb0`, its actual vtable and method slot `+0x10`.
For the observed receiver, the vtable is RVA `0x3f1820`; its method
`0x39d940` forwards to switch `0x232e20`.

The candidate validates that binding and models two functions from the
original switch:

| Function | Recovered operation | Contract |
|---|---|---|
| 0 | Write low 32 bits of argument 0 through the captured index pointer; return zero | At least one argument |
| 1 | Read that index as signed int32; return its sign-extended uint64 representation | No argument needed |

Nonzero and signed synthetic cases test these as general scalar operations;
the implementation does not assign a learned zero. Other function IDs reject
explicitly, including ID2. The broader callback switch is not claimed fully
recovered or replaced by a functional cipher implementation.

### Encoded TLS frame protocol

Helpers `0x1ef230`, `0x1eeb00`, `0x1eebf0` and `0x1ef380` implement a
separate TLS frame stack:

- Base: first TLS module block + `0x610`.
- Capacity: 32 frames, stride 40 bytes.
- Each frame: four encoded uint64 cells, four byte tags, preserved padding.
- Keys at `+0x500/+0x508/+0x510`, separate PRNG at `+0x518`, add/XOR mode
  byte at `+0x520`, depth at `+0x524`.
- Frame payload: VM return PC, function selector, SP after argument removal,
  and an integrity hash incorporating depth, context salts and those values.

TLS reads refresh tags/encodings. Pop verifies the hash, checks return-PC
bounds, scrubs all four cells with new tags, decrements depth and restores
the virtual return PC. The VM's encoded control 13 is a separate call-depth
counter; its refreshes and key feedback are reproduced as well.

[Host-call/frame model](devirt/serial_hostcall.py).
The earlier TLS flag at module offset `0xb34` aliases this frame-depth field
(`0x610+0x524`). It remains compared alongside the fuller frame root.

Three new roots are validated before semantic execution: the complete
1320-byte TLS structure, 104-byte callback receiver and four-byte pointed
index. Full comparisons include inactive frames, tags, padding, keys and
scrubbed residues. These are input bytes captured before execution, never
reconstructed from final frames.

### Wrapper continuation contract

Host CALL's post-child tail is not uniformly context-free. It can clamp TLS
depth back to the depth saved at wrapper entry, then checks its native
security cookie. The static audit records this condition explicitly.
Supported callbacks are non-reentrant and balance their frames, so depth
equals its entry value and the clamp is inactive. The candidate enforces
that invariant; it does not silently repair an unbalanced depth.

Original x64 replay independently checks the actual native tail/cookie path.
The semantic contract excludes native stack scratch and assumes the owned
native frame remains valid. Reentrant callbacks, active clamp paths and
cookie/exception failure delivery remain open.

### Recovered opcode `0x1f`

DROP POPs and discards one encoded stack value, including SP resealing, PRNG
updates, tag changes and cell scrubbing. It is not modeled as a no-op merely
because the discarded callback result happens to be zero. Only domain 2 has
new dynamic proof; the other three bindings remain static.

## 4. Seventeen-step execution

The ten-step baseline is extended as follows:

| Step | PC | Recovered instruction | Effect / normal successor |
|---|---:|---|---|
| 11 | 2041 | SIGN_EXTEND_LOW_U8, width 32 | PC2043, SP1 |
| 12 | 2043 | HOST_CALL, function 0, argc1 | Set scalar index from argument; push return; PC2047 |
| 13 | 2047 | DROP_U64 | Discard setter return; PC2048, SP0 |
| 14 | 2048 | REQUEST_BRANCH_UNIT_U32, unit2 | Consume through PC2053; authenticated commit to PC1742 |
| 15 | 1742 | HOST_CALL, function 1, argc0 | Read scalar index; PC1746 |
| 16 | 1746 | SIGN_EXTEND_LOW_U8, width32 | PC1748 |
| 17 | 1748 | PUSH_POOL_U32 | PC1753, SP2 |

Unit 2 occupies physical range `[1742,1768)`. Its materialization and window
transition consume only the state produced by the preceding instructions.
No captured intermediate context is restored. Both CALL instances preserve
their TLS protocol effects even when their logical scalar values are zero.

The next header decodes opcode `0x16`, through PC1754. Its handler is
observed but its core is not executed by the candidate. The seventeen-step
proof includes the last instruction's continuations and next-entry state;
the eighteenth header is not counted as an executed instruction.

## 5. Native and semantic validation

| Capture | Verified executed prefix | Closing PC/SP | Compared memory boundaries | Native replay instructions | Natural remaps |
|---|---:|---|---:|---:|---:|
| `eleven_a` | 11 | 2044/1, next handler entry | 485 | 309,306 | 1 |
| `eleven_b` | 11 | 2044/1, next handler entry | 603 | 348,044 | 1 |
| `eleven_c` | 11 | 2044/1, next handler entry | 716 | 275,668 | 0 |
| `seventeen_b` | 17 | 1754/2, unsupported next entry | 374 | 187,909 | 0 |
| `seventeen_c` | 17 | 1754/2, unsupported next entry | 476 | 329,463 | 1 |
| `seventeen_d` | 17 | 1754/2, unsupported next entry | 835 | 338,178 | 0 |

The first trio uses `alice`, `bob`, `charlie`. The maximum-depth trio all use
`bob`, in distinct fresh processes with different captured encoded states.
The existing collector supplies laboratory serial `serial01`. Input-string
diversity at maximum depth is therefore not claimed. Run IDs and source/input
hashes remain in the manifests and provenance file.

**Level A:** original x64 replay matches Windows across **1,788,568 native
instruction instances** in the six complete captures. This is not a count of
unique native instructions or semantic opcodes.

**Level C:** those six before-states produce **84 executed virtual instruction
instances** and **3489 byte-exact memory boundaries**, including the next-entry
closures. All previously declared context/register/stack/bytecode/shadow/
bitmap/remap/thunk/writable-PE/TLS roots remain checked, plus the new TLS-frame
and callback roots. Reaching the declared terminal is mandatory.

Three accepted processes traverse natural rebuilds. Prior deferred-jump and
rebuild captures also pass the historical regressions. No remapper or capture
engine rewrite was needed. This contract is finite declared-memory
equivalence, distinct from whole-process CPU/native-stack equivalence and
from universal behavior of Serial-VM. Initial capture is still the first
outer CALL after the first header was decoded, not an end-to-end replacement
of Serial initialization.

### Preserved exception counterexample

`seventeen_a` stops after a 136,246-instruction native prefix at an external
code boundary, following the queue's C++ exception path. Its candidate stops
after fourteen instructions, at PC2053, on the same enqueue condition:

```text
enqueue_counter = 112
((-1003 * enqueue_counter) XOR queue_key_low32) & 0xfff == 31
```

Recorded prefix memory boundaries match, but the capture is **rejected as a
complete proof**. Its observations are retained; it contributes no verified
maximum-depth, domain or kernel coverage. No seed, queue state, frame or
expected output was modified to pass it. Three subsequent independent
processes take supported natural routes. The unsupported OS/exception route
is not declared fixed. [Counterexamples](jack_xxxv_evidence/counterexamples.json).

Other negative controls reject a missing TLS input byte, altered frame hash,
unsupported host ID, unbalanced TLS-depth tail and one-byte context/queue/
TLS/index differences. Guard controls are synthetic, not natural Windows
failure-path coverage. Execution failures latch; retry cannot resume partial
state mutations.

## 6. Program inventory and partial CFG

[JSON CFG and inventory](jack_xxxv_evidence/virtual_cfg.json),
[DOT graph](jack_xxxv_evidence/virtual_cfg.dot),
[native logical entries](jack_xxxv_evidence/native_logical_entries.json),
[progress metrics](jack_xxxv_evidence/progress.json).

The observer replays only recorded writes into an independent copy of the
native context and decodes its controls at actual PE-selected handler entries.
It does not obtain PC/SP from candidate results. Accepted logical sequences
are cross-checked against the candidate. The rejected trace's entries are
marked as incomplete-prefix observations, not complete equivalence.

Every observed edge names its capture and native trace positions. Static
edges are separate, conditional on recovered normal semantics. The graph
contains deferred edges `20 -> 2028` and `2048 -> 1742`, including their
consumption frontiers and unit labels. Opcode `0x16` has no invented successor
or instruction length. Host callback returns are not virtual RETURN opcodes.

The physical inventory has 2678 bytes in 103 permuted 26-byte units. Only
units 0, 1 and 2 are explored here. Observed headers and proved instruction
extents are identified; other bytes remain **unclassified**, including tails
after observed branches. They are not labeled data or padding without proof.
Neither unit count nor physical byte count is an instruction count.

No virtual cycle or natural termination is observed. The decreasing physical
address `2048 -> 1742` does not itself close a CFG cycle. Static decoder
inspection does reveal an out-of-range-PC path selecting runtime work
`0xfe1ab`; that work calls `0x1ee510` to set logical halt control 10. Complete
cleanup/return and the path to that condition remain unverified. This evidence
is metadata, not an invented reachable edge from the frontier.

The total reachable instruction count, loop iterations and distance to
termination are unknown. **A global devirtualization percentage cannot yet be
calculated honestly.** The machine-readable metrics use null values rather
than deriving a percentage from seventeen steps or three materialized units.

## 7. Domain and kernel coverage

The original PE provides 32 static bindings for the eight implemented opcode
families. Twenty-eight have cumulative dynamic semantic proof:

| Opcode | Cumulatively verified domains |
|---|---|
| PUSH, LOAD, STORE, XOR | 0/1/2/3 |
| `0x1a`, deferred branch | 0/1/2/3; domain 2 is newly closed |
| `0x3a`, sign extension | 0/1/2/3 |
| `0x20`, host CALL | 1/2/3; domain 0 remains static |
| `0x1f`, DROP | 2; domains 0/1/3 remain static |

These are body bindings for recovered families, not a full ISA denominator.
The new corpus proves 25 bindings; earlier evidence supplies the remaining
cumulative bindings. [Coverage inventory](jack_xxxv_evidence/coverage.json).

Kernel `0xaf41e` appears naturally in complete `seventeen_c` and
`seventeen_d` and its effects pass the boundary comparisons. Its appearance
in the rejected attempt alone would not have counted. Cumulative generated
kernel coverage is now **62/64**; `0x2c1549` and `0x32a5e8` remain unobserved.
No internal state was forced to select a kernel or domain.

## 8. Reproduction and regression results

```bash
python -m pip install -r jack_xxiii_evidence/requirements.txt
python scripts/pafet_serial_audit_xxxv.py
python scripts/pafet_serial_arithmetic_xxxv.py
python -m devirt.serial_program_validate
python scripts/pafet_serial_graph_xxxv.py
python scripts/pafet_serial_metrics_xxxv.py
python -m unittest devirt.test_ir devirt.test_serial devirt.test_serial_continuous devirt.test_serial_extended devirt.test_serial_scheduler devirt.test_serial_depth devirt.test_serial_branch devirt.test_serial_program -v
python -m unittest discover -s scripts -p 'test_pafet_state*.py' -v
python -O -m unittest discover -s scripts -p 'test_pafet_state*.py' -v
```

```python
from devirt.serial_hostcall import HostCallSerialVMState
state = HostCallSerialVMState.from_initial_capture(before, original_pe)
steps = [state.step() for _ in range(17)]
# Preparing the next entry may reject opcode 0x16; it does not execute it.
state.prepare_next_instruction()
```

The cold-process test runs seventeen steps with Unicorn/Z3 imports disabled
and observation-file access denied. Original x64 execution is an independent
validation tool, not the candidate's execution engine. Candidate inputs are
the single initial capture and original PE constants/algorithms.

Fresh captures, only in the existing controlled Windows laboratory, to unused
directories:

```powershell
./jack_xxxv_evidence/capture_eleven.ps1 -Username alice -Out jack_xxxv_evidence/build/fresh_eleven
./jack_xxxv_evidence/capture_seventeen.ps1 -Username bob -Out jack_xxxv_evidence/build/fresh_seventeen
```

These terminate at the following handler entry, not its executed core. A
500,000 bound is used for eleven, a prospective 1,000,000 bound for seventeen;
neither determines semantic execution. Unsupported external-code outcomes
remain failures. Windows uses the documented `pafet_pass8.exe` variant;
replay/static extraction use original `pafet.bin`, SHA-256
`fe85e59225387fba4923f3bc6103914fe7b85ba3dc0514c9e37382818fb44d1a`.
Only the existing two SHA-gate offsets differ in pass8. No executable was
modified. Hash-pinned capture/contract archives are referenced from XXXIII.

[Test results](jack_xxxv_evidence/tests.json): **102 distinct tests pass**:
76 IR/Serial in the first full run, 25 state-contract tests, and the added CFG
invariant test. The 25 state tests also pass under optimized Python. The
reproduction command now runs all 77 IR/Serial tests. Ten tests are new.
The 4096 arithmetic comparisons are reported separately, not added to this
unit-test count.

[Historical validators](jack_xxxv_evidence/regressions.json) XXVIII through
XXXIV all exit zero, preserving their narrow-model unsupported outcomes.
The scheduler preparation extraction preserves old execution behavior while
allowing explicit non-executing next-entry closure. User/SHA/Hex source and
status are unchanged; their expensive C++/Hex literal corpora were not rerun.

## 9. Remaining work and JACK XXXVI

Recover opcode `0x16` at PC1753, validate its core and continuation from the
seventeen-step candidate, and observe its actual successor before naming its
semantics. The current captures stop before that core. Determine whether
subsequent control closes a virtual cycle, then measure a meaningful longer
program traversal rather than extrapolating from physical bytecode size.

Other callback functions need their own semantics, argument contracts and
pointed-memory roots. Domain-0 host CALL and other DROP domains remain static.
Seven outer states, scheduler C++/OS delivery, reentrant/clamped TLS frames,
guard failures, rekey TLS callbacks, halt/cleanup and other window routes
remain open. The new scalar callbacks do not recover all native host services
or the final virtualized algorithm. The strategic target remains a clean,
faithful four-VM `pafet.cpp`, not a prefix counter or a functional cipher
replacement.
