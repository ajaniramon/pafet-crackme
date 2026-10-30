# JACK XVII — DE VIRTUAL MACHINA

Operation of 30 October 2026, starting from `main` at
`a59292e1286b6cc205fe398354ebda0bbcf03b3e`. The requested name **JACK XVII** is
retained; this operation follows XXVII chronologically and does not replace the
earlier Serial-VM work with XVII in its filenames.

**Result:** a PE-to-effect-IR-to-C++ devirtualizer for the recovered **logical
User-VM program**, plus four independently validated native initialization
regions. No complete four-VM reconstruction is claimed. Native User-VM encoding,
guard/scheduler machinery remained open at this operation's conclusion.
The later [native-state follow-up](native-state-divergence.md) demonstrated the
missing-input cause of XXVII's discrepancy. [JACK XXVIII](../PAFET_JACK_XXVIII.md)
now supplies the pinned laboratory and new native route evidence; neither
follow-up changes this report's logical-program validation scope.

## 1. Audit: initial and final state

The [machine-readable matrix](../jack_xvii_evidence/status_matrix.json) attaches
scope and primary evidence to individual claims. Its labels mean:

- **DEMOSTRADO**: demonstrated within the stated contract and test coverage.
- **PARCIAL**: some mechanisms or a finite corpus are reconstructed; gaps remain.
- **HIPÓTESIS**: not established; not used as an implementation premise.
- **DESCONOCIDO**: no demonstrated reconstruction in the audited sources.

| VM | Initial state | Final state of this operation | Whole VM |
| --- | --- | --- | --- |
| User | 1,752-byte extractor, decoder/interpreter, native state projections and five translated wrappers; no explicit effect IR backend | 339 instructions lifted into 75 blocks; explicit state/memory effects; direct, optimized and structured C++; new native and compiler differentials | PARCIAL: logical program translated; full native protection mechanisms remain open |
| Serial | RC4 replacement, pool observations and native output-pattern searches | Verified 2,678-byte initializer blob reference and seed recurrence; raw blob and initialization IR/C++ extracted | PARCIAL; ISA, materialization, state and virtual CFG remain DESCONOCIDO |
| SHA | SHA-256 replacement, digest observations and separate crypto audit | Verified 3,510-byte initializer blob reference and seed recurrence; raw blob and initialization IR/C++ extracted | PARCIAL; ISA, materialization, state and virtual CFG remain DESCONOCIDO |
| Hex | Autonomous literal executor for the XXVI corpus; compact semantic core still partial | Verified 1,975-byte initializer blob reference and seed recurrence, expressed in the same IR; prior literal execution preserved | PARCIAL; full reduced program semantics remain open |

The largest practical blocker was the gap between a decoded instruction catalog
and an executable representation of **effects** suitable for compilation. User-VM
already had the strongest independent logical-state evidence, so it was chosen
first. Serial/SHA's unproved decoders and Hex's large literal translation were
not allowed to prevent an end-to-end semantic pipeline for that program.

Audited sources include the current README, XXIII–XXVII reports, the topical VM,
bytecode, dispatch, reproduction and gap documents, the XXIII materializer and
decoder, XXIV native wrappers/runtime, XXVI core/executor/host services, Serial
and SHA replacements and collectors, their manifests and recorded evidence.
The historical report summaries were checked against actual source and JSON;
they were not treated as independent proof.

## 2. Interpreter architecture and evidence boundaries

### User-VM

The original blob is at RVA `0x3e5020`. Its **73 × 24-byte materialization units**
are not instruction blocks. The XXIII scalar materializer implements the bounded
permutation, three mixing/XOR passes, feedback mask and shadow/protected-window
terms. All 1,752 default bytes have been recovered. The four Feistel seeds drive
the address permutation; calling the whole decryptor a single Feistel pass is
incorrect.

The opcode is `table[code[pc] XOR 0x33] XOR 0xeb`, with the table at RVA
`0x3dfcb0`. Position-dependent operand readers consume u8/u16/u32 values. Their
native entries are `0x140007370`, `0x1400071e0` and `0x140007040`, respectively.
See [the extraction and operand formulas](14-real-bytecode-xxiii.md).

The logical machine used by this program has 256 uint64 registers, a uint64
operand stack, explicit stack-valued conditions and seven host operations.
There is no separate logical flags register in the recovered program. Native
x64 flags and opaque predicates belong to another layer.

The native representation is substantially larger: register banks are reached
through `ctx+0x1158`, with cell selection depending on `ctx+0x1188` and the low
register index; tag bytes start at `ctx+0x69f`. Masks depend on `ctx+0x178`,
`ctx+0x180` and `ctx+0x18`. Encoded control slots at `ctx+0x208+8*i` have separate
tags/masks; the decoded SP and stack cells use their own encoding. These are
projection formulas from the native collector, not a claim that the new IR
reconstructs every encoded byte or rekey operation.

Dispatcher `0x14003f540`, resolver `0x14003ebb0`, alias remapper `0x1400074d0`,
four root channels and nested `call r9` continuations determine native routing.
Aliases and generated thunks change dynamically. The 60 native code entries
observed in XXIII are not a fixed ISA size, and aliases are not logical opcodes.
Native helpers for encoded stack manipulation, state mixing and guard handling
must not be renamed as output-byte instructions.

The recovered **CALL** invokes the native host at `0x140048960`; it is not a
proved virtual subroutine CALL. **RETURN** consumes a result and ends the logical
program. Transfers specify a logical materialization-block number, converted to
a physical PC; the core queues that target. Thus `post_core_pc` remains the end
of the operands while `next_opcode_pc` is the dispatcher-applied target.

### Hex-VM

The internal context is on the executor's stack (`rsp+0x180`), rather than the
executor-entry RCX object. K/A/B, a 64-entry pending LIFO, an eight-handler mixer,
banked encoded slots, encoded VPC and four remapped domains participate in
execution. Decoder/remap/thunks, exceptions, callbacks and cleanup are covered
by the literal XXVI executor for its validated corpus.

The 72 virtual PCs in the historical graph are observed program labels, not
72 ISA opcodes or proof of universal reachability. The program controls native
callbacks that take up to two source characters, parse through a C++ stream and
append the low byte to a string. This produces the 72-byte ciphertext from the
embedded source. Sixteen virtual-slot reads independently populate 128 bytes of
register output. Neither path is adequately described by `bytes.fromhex`.

The reduced semantic core contains the eight mixer handlers and selected
decoder/slot/block behavior. The 58,662-instruction literal translation does
not itself provide a compact recovered instruction grammar or complete program IR.
See [Hex-VM](06-hex-vm.md) and [XXVI closure](../PAFET_JACK_XXVI_CLOSURE.md).

### Serial-VM and SHA-VM

Executors are at `0x14022a120` and `0x14027aba0`. Static inspection now verifies
their initializer references to blobs at RVAs `0x3e9c10` and `0x3e3f10`, and exact
read counts in the initialization fold. These counts alone do **not** establish
the lengths of decoded instruction streams.

Their current C++ replacements implement RC4 with key `{0}` and SHA-256.
The native collectors historically searched for expected byte patterns rather
than tracing the two virtual ISAs. Their internal opcode encodings, dispatch
resolution, virtual register/stack/flag layouts, control transfers and round-level
state effects are not reconstructed here. Executor-entry ABI arguments and
searched memory windows must not be relabelled as proven internal VM contexts.

Some candidate pool readers match User-VM ALU helpers for finite test tuples.
That establishes neither identical VMs nor complete instruction semantics. The
older statements that the other VMs are trivial by inheritance, or have no
encrypted program blobs, are unsupported.

## 3. Recovered logical instruction effects

These 15 opcodes occur in the extracted User program. They are supported under
the decoded-state contract; this is not a semantics table for every possible
opcode of the protected interpreter.

Let `y=pop()`, then `x=pop()` for binary operations. `R` is the logical register
array, `C` the PE-derived constant table and `T` the materialization-offset map.

| Opcode | Decoded operand | Reads / writes | Semantic effect and next PC |
| ---: | --- | --- | --- |
| 1 | u32 slot | C, stack | `push(C[slot<13 ? slot : 0])`; fallthrough |
| 4 | u16 index | R, stack | `push(R[index & 255])`; fallthrough |
| 5 | u16 index | stack, R | `R[index & 255]=pop()`; fallthrough |
| 8 | none | stack | `push((x+y) mod 2^64)` |
| 21 | none | stack | `push(x != y)` |
| 22 | none | stack | `push(int64(x) < int64(y))` |
| 24 | none | stack | `push(int64(x) > int64(y))` |
| 26 | u32 block | control | Queue `T[block]`; core PC still operand end |
| 27 | u32 block | stack, control | Pop condition; queue target iff zero |
| 28 | u32 block | stack, control | Pop condition; queue target iff nonzero |
| 29 | none | stack, result | `result=pop()`; terminate logical program |
| 31 | none | stack | Discard one value; no output-byte store |
| 32 | u16 host, u8 count | stack and declared host state | Pop `min(count,32)` arguments in original order; perform host effects; push return |
| 41 | none | stack | `push(x XOR y)` |
| 44 | none | stack | `push(NOT pop() mod 2^64)` |

Every instruction retains original PC, encoded bytes and operand-reader events
in [user.ir.json](../jack_xvii_evidence/generated/user.ir.json). Routing depends
on native state rather than a constant handler address attached to this table.
The new work supplies an executable effect representation and backend; it does
not claim these 15 instruction meanings were first discovered in this operation.

## 4. Bytecode → effect IR → readable code

Implementation: [devirt/](../devirt/). Extraction reuses XXIII's decoder and
materializer. Neither native traces nor a hard-coded output formula are inputs
to lifting or code generation.

The lifter discovers both conditional edges, validates instruction boundaries,
rejects jumps into operands and propagates stack heights to a fixed point. A
stack-height disagreement at a join is an error. Each block receives explicit
stack parameters; internal temporaries are SSA. Registers and byte buffers are
ordered mutable effects. Unknown opcodes become an **unknown effect with
unresolved control**, rather than a guessed instruction width; unknown host
calls carry all-state effects and stop execution.

### Example: entry code

The actual materialized bytes and decoded sequence at PC 0 are retained in the
IR and generated source. The first region decodes as:

```text
bytes[0:24] = 5b4afa72c85b02b90ac6dd1eabbf365886ad9c9070c553bd

0  LOAD_CONST 0
5  LOAD_CONST 1
10 ADD
11 STORE_REG 8
14 CALL host0, argc0
18 DROP
19 JUMP block1               # physical target PC 72
```

Its effect IR is equivalent to:

```text
v0  = const.u64 C0
v5  = const.u64 C1
v10 = add.u64 v0, v5
store.reg R8, v10
v14 = call host_copy_input()  # writes working; result 0
br PC72                      # operand-end PC24 remains observable separately
```

The pure DROP disappears from the effect view, while copying the input remains
even though its return value is unused. Constant folding reduces the first
three values to zero (`C0+C1 = 2^64`) and preserves `R8=0`.

### Example: the actual byte-store region reached by CALL host4

Native instructions at `0x140048a28..0x140048a3e` perform partial-register
arithmetic and store at `0x140048a3a`. The IR preserves their byte-buffer effect
and sign-extended return:

```text
i     = load.index.u64
b     = load8 working[i]
x     = xor.u8 b, 0x5a
a     = add.u8 x, 7
delta = mul.u8 i, 3
byte  = add.u8 a, delta
store8 working[i], byte
ret   = sext.u8_to_u64 byte
```

The byte-level reduction is checked against original x64, not assumed from
`f_user`. MSVC object layout, allocation and capacity are outside this logical
buffer abstraction. Read/write bounds are checked; inaccessible reads stop.

### Simplification and structured control

The first backend emits direct basic blocks. It contains no runtime opcode
switch, operand decoder, PE loader or captured instruction stream. The optimizer
performs **49 constant folds and removes 130 dead pure values**. It keeps host
calls, register writes, memory reads/writes and unknown effects in order.

The existing abstract interpreter proves that JNZ at PC 480 has condition `{0}`
under its entry/host contracts. After removing that dead arm, the CFG consists
of a prefix, a single natural loop headed at PC 1704, and a return suffix. The
new structured backend verifies that graph shape and emits a real `while` loop
instead of threaded native dispatch. It enforces that the first 16 initial
logical registers are zero; arbitrary remaining initial registers are retained.

Outputs include [effect IR](../jack_xvii_evidence/generated/user.ir.json),
[short semantic view](../jack_xvii_evidence/generated/user.pseudo.txt),
[structured C++](../jack_xvii_evidence/generated/user.structured.cpp) and its
[CFG/proof contract](../jack_xvii_evidence/generated/user.structured.json).
All register effects remain visible; junk-looking arithmetic is not deleted
merely because the final string does not depend on it.

## 5. Extension to four initialization regions

[devirt.audit](../devirt/audit.py) reads and verifies the actual LEA, count MOV
and seed MOVABS instructions from the original PE. The recovered recurrence is:

```text
acc = initial_seed
for i in 0 .. blob_read_count-1:
    acc = fmix64(acc XOR i XOR blob[i])
```

| VM | Blob RVA | Bytes hashed | Native loop |
| --- | --- | ---: | --- |
| User | `0x3e5020` | 1,752 | `0x14003f700..0x14003f719` |
| Serial | `0x3e9c10` | 2,678 | `0x14022a2e0..0x14022a2f9` |
| SHA | `0x3e3f10` | 3,510 | `0x14027ada0..0x14027adb9` |
| Hex | `0x3ec120` | 1,975 | `0x1400806b0..0x1400806eb` |

User/Serial/SHA call original helper `0x140002040`; Hex inlines the same finalizer.
Each region is lowered to three effect-IR blocks with explicit shifts, XORs,
wrapping multiplies, source-byte loads and loop control. Scratch IR registers
here represent the accumulator/index/length, **not newly discovered Serial/SHA
virtual registers**.

Artifacts and disassembly are in [regions/](../jack_xvii_evidence/regions/).
Twelve comparisons cover each original blob, a one-byte input and a 65-byte
synthetic input: **10,179 iteration boundaries** agree between original x64,
IR and generated C++. The native comparison includes accumulator, index,
remaining count and advanced source pointer; the IR/compiler pointer projection
is the source index. The input buffers remain unchanged. Flags, scratch stack
and unrelated native GPRs are outside this region's contract.

These are demonstrated native initialization semantics, not new Serial/SHA
opcodes, bytecode decryption, RC4 KSA recovery or SHA-round devirtualization.

## 6. Validation and falsification

[validation.json](../jack_xvii_evidence/validation.json) records the main chain:

```text
original PE bytes -> extractor -> decoded bytecode -> effect IR -> generated C++
                                          |              |             |
native Windows logical-state snapshots ----+--------------+-------------+
existing independent C++ bytecode model ---+--------------+-------------+
```

The Windows executable is the existing `pafet_pass8.exe`, with only the two
documented SHA-gate bytes changed. Its VM instructions are original. It is not
an unmodified challenge acceptance run. Original `pafet.bin` x64 is the separate
Unicorn oracle for the byte-store and initialization-region tests.

| Test | Result | Demonstrated scope |
| --- | --- | --- |
| Original materializer/extractor | 219 native requests, three contexts; 256 permutation inputs | All 1,752 bytes after every request, bitmap and counter; default result equals the compiler's bytecode input |
| 13 preserved Windows executions + 4 new ones | 17 executions, **54,108 logical steps** | Opcode/PC, stack and 256 registers; all available core-post snapshots; next-pre state and final output |
| Native immediate post-core snapshots | **54,105** | Missing: `a8/779`, `fresh_heap16/932`, `fresh_sso15/1625`; checked through next-pre states, not invented |
| New Windows cases | Empty, length 15, length 16, 23-byte binary input | SSO/heap boundary; NUL, `0x7f`, `0x80`, `0xff`; native working-object bytes and actual stores |
| IR ↔ generated direct C++ ↔ existing bytecode model | Every logical step agrees | The old model executes PE bytecode independently of the new IR |
| Native Windows MSVC backends | All 17 captures pass for all three backends | Direct per-instruction state; optimized/structured block states and actual byte stores |
| Optimized and structured C++ | Every corresponding block exit agrees | Stack, all registers, index, working/output buffers, result and control; not an instruction trace for removed pure temporaries |
| Writer-region native x64 ↔ IR ↔ generated C++ | **556 cases** | All 256 byte values, SSO/heap and index wrap through 1,024; buffer/canary, uint64 return and single original store |
| Binary/arbitrary-register model cases | **18 lengths**, 0–511 bytes | Raw/optimized IR and generated C++; these are not 18 additional native executions |
| Dead-arm control | Five previously dead PCs exercised; 339-PC union | Model-only `C3 = C2 XOR 6`; no altered PE was executed |
| Wrong-XOR and missing-store controls | Both detected at native store step 136 | Confirms that matching PCs alone cannot hide a byte-memory error |
| Compiled unknown-opcode control | Stops with a nonzero exit | A synthetic unproved opcode is not silently implemented or skipped |
| Regression unit tests | 10 pass | Width/sign rules, unknown opcode/host stopping, malformed input, stack joins, effects and structurer assumptions |

Native corpus coverage is **334/339 static logical PCs**. The remaining PCs are
`384, 387, 392, 393, 394`, the block-54 arm proven dead under the stated contract.
The model-only control is deliberately reported separately. All successful
numbers describe finite tests, not all seeds, corrupt contexts or OS paths.

## 7. Reproduction

From the repository root, with Linux/WSL, Python 3.10+ and GCC C++17:

```bash
python3 -m venv jack_xvii_evidence/build/venv
. jack_xvii_evidence/build/venv/bin/activate
python -m pip install -r jack_xxiii_evidence/requirements.txt
python -m unittest devirt.test_ir -v
python -m devirt
python -m devirt.validate
python -m devirt.audit
python -m devirt.materializer
```

The validation and audit commands build with `-O2 -Wall -Wextra -Werror` for new
generated code. The materializer command independently rechecks the reused
extractor against original x64. They regenerate this operation's evidence, not older
JACK reports. Generated sources, binaries and temporary traces are separated;
only the `build/` directories are ignored.

Run the standalone generated program without Python, PE bytes or a VM decoder:

```bash
jack_xvii_evidence/build/user_structured 616c696365
```

For **new** Windows captures, using Windows Python and Frida:

```powershell
python -m pip install -r jack_xxiii_evidence/requirements.txt
python -m pip install frida==17.24.3
python -m devirt.capture
python -m devirt.windows
```

Capture verifies the two-byte variant identity and writes to this operation's
`windows/` directory. Re-run validation afterwards. Capture addresses, compressed
hashes and native routing may change across processes; matching decoded effects
is the invariant. The checked-in manifests preserve byte hashes across platforms.

`devirt.windows` builds the direct, optimized and structured generated backends
with native MSVC `/O2 /std:c++17 /W4 /WX` and repeats all 17 native-corpus
comparisons, including actual stores. It requires Visual Studio 2022 Community
C++ tools, or `PAFET_VCVARS` pointing to the selected `vcvars64.bat`. Results are
recorded in [windows_cpp_validation.json](../jack_xvii_evidence/windows_cpp_validation.json).

## 8. Open mechanisms and next experiments

1. **User native rekey/guard state:** the subsequent
   [follow-up](native-state-divergence.md) isolated omitted pointed-stack inputs.
   [XXVIII](../PAFET_JACK_XXVIII.md) preserves the corrected regressions and adds
   remap, resolver, storage, transfer and cookie cases. Extend seed/guard
   coverage, translate its two missing C++ regions, and independently capture
   the queue's OS/unwind dependencies before claiming exception equivalence.
2. **Serial/SHA materialization:** trace reads of the verified blobs into their
   first materialized buffers, capture decoder boundaries and identify actual
   operand widths. Reuse only mechanisms that match original instruction tests;
   do not import User's ISA merely because initialization/helper code is cloned.
3. **Hex reduced ISA/program:** slice the literal decoder and program bodies by
   encoded-slot, control, queue and callback effects, then lift them into the
   effect IR. Keep catch/cleanup effects explicit until separately proved
   irrelevant to a specific semantic boundary.
4. **Compiler generalization:** add explicit memory regions/alias contracts and
   multi-function virtual calls when those mechanisms are demonstrated. The
   current structurer intentionally rejects a graph that violates its proved
   single-loop shape.

The original flag and accepted credentials remain unknown. No brute-force
search was performed, and rekeying is not used as proof of devirtualization.
The final clean four-VM `pafet.cpp` remains the project objective.
