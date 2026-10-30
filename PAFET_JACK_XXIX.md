# JACK XXIX — OPERACIÓN PRIMER OPCODE

30 October 2026. Started from `main` at
`f3755e5c465a521da1f791537241e8cbefafcb01`.

## Result

The first real Serial-VM instruction is **opcode 1: `PUSH_POOL_U32`**. In the
observed program it reads the four bytes at virtual PC 1, decodes selector 0,
resolves constant-pool slot 11, and pushes `0x422d362bcf1eb613`. The next virtual
PC is 5 and virtual SP changes from 0 to 1. This value is computed from the
original PE tables, never supplied as an expected input.

[The semantic implementation](devirt/serial.py) reconstructs the first decoder
route and this instruction's core, including encoded control fields, PRNG/tag
updates, wrapper noise and encoded stack storage. It is a reduced Python model,
not an RC4 replacement or another literal x64 emulator.

Primary evidence: [validation](jack_xxix_evidence/validation.json),
[pinned captures](jack_xxix_evidence/corpus.json),
[tests](jack_xxix_evidence/unit_tests.json),
[unmasked byte buffer](jack_xxix_evidence/serial.unmasked.bin) and
[research state](jack_xxix_evidence/status.json).

| Comparison | Result | Exact scope |
|---|---|---|
| Windows / autonomous original-x64 replay | **35,699 instructions**, eight complete captured regions | Instruction addresses/bytes, CPU observations and memory under the XXVIII contract; includes two later-opcode exploratory captures |
| First decoder: semantic model / Windows | **5,658 instructions represented by one reduced transition** | Entire declared virtual context and all pointed roots match at the boundary before the queue tail jump |
| First instruction: semantic model / Windows | **Two independent processes**, two domains; **369 native instructions to each core boundary** | Entire 0x11f0-byte context, register banks, all 1,024 stack cells, bytecode, shadow, bitmaps and generated pool match |
| Original helper x64 / scalar materializer | **309 materializer calls**, 103 blocks in each of three cases | All 2,678 buffer bytes, counter and bitmap checked after every call; isolated Unicorn, synthetic states |
| Original permutation x64 / scalar permutation | **256 inputs** | Isolated Unicorn, not additional Windows coverage |
| Regressions | **18 IR/Serial tests plus 25 state-contract tests**; XXVIII C++/native regression retained | [Unit results](jack_xxix_evidence/unit_tests.json), [XXVIII rerun](jack_xxix_evidence/xxviii_regression.json) |

The 369-step regions stop immediately after the PUSH helper, **before native
continuation/scheduler logic**. The larger enclosing captures also pass x64
replay, but their later instructions are not claimed as independently recovered
semantic instructions. The first 17,816-step handler capture includes nested
dispatch; its length is not the cost or semantic coverage of one opcode.

## 1. From executor entry to materialized bytes

All static addresses below use preferred image base `0x140000000`; tables use
RVAs. The full [executor CFG](jack_xxix_evidence/initializer_cfg.json) and
[disassembly](jack_xxix_evidence/initializer.asm) were recovered from the original
PE. The function starting at `RVA 0x22a120` contains substantial flattened
control flow; the observed bytecode decoder is `RVA 0x229c70`.

The initializer allocates a 0x47c0-byte native stack frame and establishes its
internal context at **post-prologue RSP + 0x190**. Entry RCX is the caller's
argument array, not that internal VM context. It allocates two 2,678-byte byte
vectors and two 104-byte bitmaps; creates 0x1000-byte register banks and a
0x2000-byte stack on the native stack; initializes encoded controls; installs
the context in TLS slot-zero storage at offset 0x28; and creates the dispatch
tables and optional executable thunk pool.

The blob at **RVA `0x3e9c10`, length `0xa76` (2,678)** is first folded into the
seed already studied by JACK XVII. That fold is not decryption. The later
materializer `RVA 0x1f1fe0`, reached through `0x1f25b0`, copies blob bytes and
decrypts a requested **26-byte unit**. There are **103 materialization units**,
with a four-round nibble Feistel permutation and bounded cycle walking for
their physical positions. The Serial permutation constants differ from User's.

For each requested unit, the reconstructed algorithm performs three XOR passes
using fmix-derived byte masks, then a byte-feedback transformation, XORs the
live shadow bytes, and applies the 32-byte window mask outside the active pair.
It updates the materialization/cache metadata. This is implemented explicitly
in `materialize`; no captured plaintext is read by the extractor.

The helper differential covers zero shadow, deterministic nonzero shadow and
32-byte protection windows. The pristine zero-shadow unmasked buffer has SHA-256
`3da8e439937fb6d275e309f2763248f1144c883853ed6c74f64f9298643bf7bf`.
All 103 materialization units are byte-verified against original x64. Their
instruction boundaries and full virtual CFG have **not** been recovered.

## 2. First opcode and dispatcher

At the first natural decoder entry, encoded virtual PC decodes to 0 and the
opcode-fetch counter is 0. The decoder materializes the first unit, advances
its live dispatch key, maintains its register-rekey counter, and obtains a
byte by XORing the live code buffer with the shadow buffer. The header rule is:

```text
raw_header = code[PC] XOR shadow[PC]
opcode = PE[RVA 0x3ecf00 + (raw_header XOR 0xdd)] XOR 0x63
```

The pristine first byte `0x21` maps to **opcode 1**. The decoder seals the last
instruction PC, advances encoded PC to 1, updates its instruction token/key,
stores the opcode at `ctx+0x4ad`, and increments `ctx+0x11e0` to 1. Its final
queue request names native control state `0x825f`; the semantic decoder ends
before that queue tail jump. `0x825f` and other flattened control-state labels
are not virtual opcodes.

There are four observed main call sites/domains:

| Domain | Indirect CALL RVA |
|---|---|
| 0 | `0x22fcce` |
| 1 | `0x231c07` |
| 2 | `0x22bc85` |
| 3 | `0x2304ba` |

The remapper `0x1f1f50` indexes a context-resident 4×62 array of 16-bit entries.
For the observed simple form it refreshes encoded PC before returning the
remapped slot. Special forms 60/61 invoke an additional reader; their complete
virtual meanings are not claimed here.

Resolver `0x2297b0` reads a signed 32-bit table entry, XORs its signed mask, and
adds the runtime target base:

```text
target = base + (sext32(table[domain*62 + slot]) XOR sext32(mask))
```

On the captured paths this points into an executable pool allocated with size
`0x1f20`. The two first-instruction examples use an XOR-key thunk and a
`movabs; not; not; jmp` thunk respectively. The independent resolver computes
their native bodies from **before-memory**, not the observed next RIP.

Selecting one fixed call site did not reliably select the first instruction:
exploratory captures reached opcode 4 at fetch count 3, and opcode 5 at count 6.
Those captures are retained and fully replayed, but are labelled later
instructions. The collector now arms all four hardware breakpoint registers
and selects the first call whose **observed** fetch counter equals 1. The
counter and other VM state are read, never changed to force a path.

## 3. Recovered state layout

These offsets belong to the observed Serial context, not a shared VM ABI.

| Context offset | Demonstrated role |
|---|---|
| `+0x20`, `+0x28` | Decoder key and instruction token |
| `+0x48`, `+0x50`, `+0x58` | Shadow pointer, byte-mutation state and count |
| `+0xd0`, `+0xd8`, `+0xe0`, `+0xe8` | Control mask key, stride, tag multiplier and XOR/add encoding selector |
| `+0xf0`, `+0xf8`, `+0x100`, `+0x130` | Encoded native-control label, byte PC, SP and last instruction PC |
| `+0x160` onward | Per-control byte tags |
| `+0x180`, `+0x188` | Pointers to 512 uint64 register-bank cells and 1,024 uint64 stack cells |
| `+0x1b0`, `+0x1b8` | PRNG and encoding-operation count |
| `+0x1d0`, `+0x1d8` | Live bytecode pointer and length |
| `+0x1fc`, `+0x200` | Register-rekey threshold and decoder counter |
| `+0x240`, `+0x248`, `+0x1a8` | Stack mask key, stride and tag multiplier |
| `+0x4ad` | Current decoded opcode |
| `+0x4b8`, `+0x4c0`, `+0x4c8`, `+0x4ce` | Resolver table, target base, signed mask and domain remaps |
| `+0xaf0`, `+0xaf4` | Active 32-byte protection window and width |
| `+0xb10`, `+0xb18`, `+0xb20` | Logical materialization bitmap, current unit and materialization count |
| `+0xb50`, `+0xb58`, `+0xb5c` | Secondary bitmap, 26-byte width and active window |
| `+0xd65` onward | Stack-cell tags |
| `+0x1190`, `+0x1198`, `+0x119c` | Generated pool pointer, enabled flag and capacity |
| `+0x11e0`, `+0x11e8` | Opcode-fetch count and blob attestation value |

The new generic `--pointer-region REGISTER:OFFSET:SIZE` option captures these
roots explicitly. The contract verifies each pointer field against its stored
before-memory and validates all pointee bytes. It does not scan guessed User
offsets or declare a universal Serial context closure. Full virtual-register
semantics, virtual flags and all other control fields remain partially unknown.

## 4. Opcode 1: bytecode → semantic effects

The first unmasked instruction is:

```text
0000: 21 11 3e cd f1    PUSH_POOL_U32 selector=0
```

Its four-byte reader at `0x1f1c70` packs the operand in an unusual order. All
arithmetic below wraps to uint32:

```text
packed = (b[1]<<24) | (b[3]<<16) | (b[0]<<8) | b[2]
h = operand_PC * 0x84e97925
selector = (packed XOR h XOR (h>>13) XOR 0xba1c4fa3) * 0x77167b7b
```

Selectors outside 0..16 fall back to index zero in this body. Table
`RVA 0x3ead00` maps that index to a physical pool slot. Arrays at `0x3eae40`
and `0x3ead80` hold two uint64 values; slot modulo 3 selects XOR, addition or
subtraction. This recovers the value without borrowing an RC4 constant.

Readable logical effect:

```cpp
selector = read_scrambled_u32(bytecode, pc); // pc is 1
pc += 4;
value = decode_constant_pool(selector);
virtual_stack.push(value);                 // SP: 0 -> 1
```

The implemented effect model also preserves the encoding machinery. A control
read decodes XOR/subtraction, advances the PRNG, changes its tag and reseals the
same value. PUSH reads and refreshes SP, generates the cell's byte tag, computes
its mask, rotates the logical value by the top six mask bits, stores the masked
uint64 at the stack pointer, then reseals SP+1. It keeps wrapper-specific state
at `ctx+0x2f8` or `ctx+0x2e0` for the two demonstrated native bodies.

The semantic record in `validation.json` includes operand bytes, selector,
pool slot, logical value and before/after SP. The implementation fails on an
unknown opcode, wrapper flavor or uncached operand window. It is not a full
Serial effect-IR compiler or a recovered RC4 virtual program.

## 5. Shared structure and real differences

| Mechanism | Relationship established by code/tests |
|---|---|
| Scalar mixing | Shared fmix multipliers, wrapping arithmetic and PRNG family |
| Materialization structure | Both use four-round nibble permutations, cycle walking, three XOR passes, feedback and shadow/window masks; Serial has different seeds, constants, widths and unit count |
| Encoded state | Similar tagged refresh/reseal pattern; Serial offsets and helper entries are independently recovered |
| Dispatch | Serial has four remapped domains, encoded relative targets, generated thunks and nested/native continuation; individual native labels are not its ISA |
| Opcode decoding | Serial uses `0xdd` / `0x63`; User's decoder uses `0x33` / `0xeb` |
| Registers / stack | User's roots are `+0x1158/+0x1160`; Serial's are `+0x180/+0x188` |
| Protected program | Only Serial opcode 1 and its first operand are semantically reconstructed here; no identity of whole ISA, callbacks or RC4 logic is inferred |

## 6. Counterexamples and limits

One natural decoder capture activates the inline domain-map refresh branch at
`RVA 0x229df4`: live dispatch key `0x5e39cfe8518bbb75` has low five bits `0x15`.
Its **5,719 Windows instructions replay correctly**, but `FirstDecode` explicitly
refuses this semantic route. The capture remains in regression with an UNKNOWN
semantic result. No expected values fill its unimplemented map transformation.

The first pointer-root attempt incorrectly used `+0x120/+0x128`. Windows refused
the invalid memory read, and the failure manifest is retained. Original stores
at `0x22a874/0x22a884`, relative to context `RSP+0x190`, establish the actual
`+0x180/+0x188` roots. The failed attempt supplies no replay inputs.

Early multisite manifests retain an unused single-entry default `entry_rva`.
Their `entry_rvas` list and captured initial RIP are the authoritative entries;
the writer now emits null for that single-entry field when multiple sites are
armed. Raw historical capture metadata has not been rewritten.

The full initializer was followed statically and through its naturally reached
decoder/handler states; it was not replayed end-to-end across allocation and
other Windows services. Other opcode bodies, special prefixes, guard failures,
queue exceptions, register rekey and scheduler continuation remain open. The
two semantic PUSH cases exercise the add-encoded control mode and a cached
operand window; they are not coverage of all encodings, selectors or failures.
All Serial captures use the input `serial01`; the two PUSH captures use `alice`
and a 16-byte username in separate processes. Their differing native domains
and seeds do not establish broad Serial-input coverage.

## 7. Reproduce

From the repository root, Python 3.10+ with the pinned dependencies:

```bash
python -m pip install -r jack_xxiii_evidence/requirements.txt
python scripts/pafet_serial_audit_xxix.py
python -m devirt.serial_validate
python -m unittest devirt.test_ir devirt.test_serial -v
python -m unittest discover -s scripts -p 'test_pafet_state*.py' -v
```

Validation checks pinned entry/trace/manifest hashes, executes autonomous replay,
then runs reduced models from before-memory and compares only afterwards. It
never reads `serial.unmasked.bin` or a native after-state as candidate input.
The reused isolated helper harness requires ordinary Python, so the validator
explicitly rejects `python -O`.

Fresh first-instruction capture, **only in the existing Windows research lab**:

```powershell
$run = Join-Path 'jack_xxix_evidence/build' ([Guid]::NewGuid().ToString('N'))
python scripts/pafet_native_step_capture.py --profile native-x64-v1 --entry-any 0x22bc85 --entry-any 0x22fcce --entry-any 0x2304ba --entry-any 0x231c07 --select-counter 0x11e0:1 --stop-next --frames 1 --region rcx:0x11f0 --pointer-region rcx:0x1d0:2678 --pointer-region rcx:0x48:2678 --pointer-region rcx:0xb10:104 --pointer-region rcx:0xb50:104 --pointer-region rcx:0x180:4096 --pointer-region rcx:0x188:8192 --pointer-region rcx:0x1190:0x1f20 --out "$run/first"
python scripts/pafet_state_compare.py --captures "$run/first"
```

To capture first decoding instead, use `--entry 0x229c70 --stop-rva 0x22a115`,
remove `--entry-any`, `--select-counter` and `--stop-next`, and retain the
explicit context/pointer roots. New processes can choose other wrappers or
refresh branches; unsupported semantics must remain explicit.

Windows captures use the existing pinned `pafet_pass8.exe`, differing from
the original PE only at offsets `0x395efb/0x395efc`. Offline helpers and replay
execute the original x64 bytes. Neither executable was modified. These are
variant-route observations, not original gated four-VM equivalence.

Next: reconstruct the domain-map refresh, close other opcode-1 wrapper/window
routes, and follow virtual PC 5 while preserving the native continuation effects.
Original credentials and flag remain unknown; no brute-force search was used.
