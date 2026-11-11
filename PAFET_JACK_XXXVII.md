# JACK XXXVII — ALL TWENTY

## 1. Result and scope

Started on `main` at `dbae09f9601796760e5aaa368cbbc9c3a36785e9` (JACK XXXVI and the
Serial C++ steps integrated). This round ran on Windows, which XXXVI did not have.

**The logical program of all twenty VM executors in `pafet.bin` is recorded:
1,503 logical blocks and 7,124 instructions.** It was recovered dynamically, by
hooking each VM's own decoder helpers under Frida and re-running every conditional
branch with its condition flipped. Nothing was decrypted statically.

Where the repository already holds an independent static decode, the dynamic lift
agrees with it instruction for instruction:

| VM | Static reference | Lifted blocks identical | Differing instructions | Missing |
|---|---|---:|---:|---|
| Main controller | controller slice, 482 instr. | 92 of 94 reachable | 0 | last instruction of 2 blocks; 11 dead blocks |
| User-VM | JACK XVII/XXIII, 339 instr. | 73 of 73 | 0 | nothing |
| Serial-VM (inner) | JACK XXXVI, 478 instr. | 87 of 88 | 0 | 61 instructions behind one branch (§5) |

The inner Serial-VM trace on Windows is **46,722 instructions long** for both inputs
used. That is the count XXXVI obtained from x64 emulated from a Windows entry, now
observed on Windows itself, at the logical-instruction level only.

**What this is not.** It is a logical program per VM: opcodes, operands, block
structure and branch outcomes. It does not reconstruct encoded state, domains,
rekeys, the scheduler, guards or exception delivery, which JACK XXIII–XXXVI
study. It is not a `pafet.cpp`. It does not recover credentials or the flag, and no
credential search is part of the round.

Evidence: [lifted programs](jack_xxxvii_evidence/lifted/),
[validation](jack_xxxvii_evidence/validation.json),
[branch summary](jack_xxxvii_evidence/branch_summary.txt),
Windows checks ([gate](jack_xxxvii_evidence/windows_gate.json),
[digest](jack_xxxvii_evidence/windows_digest.json),
[oracle](jack_xxxvii_evidence/windows_oracle.json)).

## 2. Method

Every VM executor is preceded by its own copy of the runtime helpers, in the same
order as the main VM's. Six of them are enough to read the logical program:

| Helper | Main VM (known) | Observed contract |
|---|---|---|
| opcode remap | `0x1403859f0` | `(ctx, domain, logical_opcode)`; one call per virtual instruction |
| U32 / U16 / U8 reader | `0x140385590` / `0x140385720` / `0x1403858a0` | return the decoded operand |
| push | `0x140381e60` | `(ctx, value)` |
| pop | `0x140382030` | returns the value |

[`pafet_vm_lift_xxxvii.py`](scripts/pafet_vm_lift_xxxvii.py) locates them for each
executor from `.pdata` by layout: the four functions of decreasing size before the
materializer are the readers and the remap; the two functions before the 405-byte
function are push and pop. Functions are grouped with `UNW_FLAG_CHAININFO`, because
adjacency alone merges unrelated neighbours. For the User-VM this yields
`0x140003880`, `0x140003a50` and `0x1400074d0`, the helpers documented in the
[night report](PAFET_NIGHT_REPORT.md);
for the inner Serial-VM, `0x1401ee820`, `0x1401ee940` and `0x1401f1e80`, as in
JACK XXXV–XXXVI.

A run records the first invocation of the VM as a sequence of instructions. Blocks
are keyed by logical id, the operand of `JMP`/`JZ`/`JNZ`; block 0 is the entry.
Each conditional branch whose other outcome has not been seen is then re-run with
the popped condition replaced, chaining flips where a branch only appears after an
earlier flip. Forced runs are used to read instructions only. Their values are
discarded and every instruction is tagged `natural` or not in the JSON.

VMs that run before the SHA gate are traced in the original `pafet.bin`. The others
need `pafet_pass8.exe`, the existing two-byte gate bypass.

## 3. The twenty programs

`Forced-only` counts instructions never executed without a flip. `Real` counts
branches where both outcomes occurred without a flip, with the inputs used.

| VM | Executor | Blocks | Instr. | Forced-only | Cond. branches | Real | Host indices |
|---|---|---:|---:|---:|---:|---:|---:|
| `main` | `0x14038d9d0` | 94 | 429 | 106 | 8 | 2 | 24 |
| `user` | `0x14003f540` | 73 | 339 | 5 | 2 | 1 | 7 |
| `serial_outer` | `0x140264a60` | 42 | 189 | 0 | 0 | 0 | 3 |
| `serial_inner` | `0x14022a120` | 88 | 416 | 18 | 7 | 3 | 22 |
| `sha_msg` | `0x14027aba0` | 135 | 638 | 41 | 14 | 7 | 40 |
| `sha_compress` | `0x140290300` | 106 | 582 | 14 | 6 | 3 | 49 |
| `sha_ch` | `0x1402a4a20` | 38 | 177 | 0 | 0 | 0 | 4 |
| `sha_maj` | `0x1402df0e0` | 40 | 194 | 0 | 0 | 0 | 0 |
| `sha_ep0` | `0x1402b8140` | 43 | 197 | 0 | 0 | 0 | 1 |
| `sha_ep1` | `0x1402ccb00` | 43 | 194 | 0 | 0 | 0 | 1 |
| `sha_sig0` | `0x140335b10` | 41 | 187 | 0 | 0 | 0 | 1 |
| `sha_sig1` | `0x140377720` | 41 | 194 | 0 | 0 | 0 | 1 |
| `hex` | `0x1400804c0` | 79 | 357 | 8 | 2 | 1 | 6 |
| `cipher_buffer` | `0x1400c0510` | 70 | 316 | 5 | 2 | 1 | 7 |
| `tdes_block` | `0x1400d3fe0` | 40 | 190 | 0 | 0 | 0 | 6 |
| `cipher_unpad` | `0x14015faf0` | 79 | 337 | 67 | 6 | 2 | 7 |
| `des_block` | `0x140176950` | 144 | 696 | 35 | 14 | 7 | 29 |
| `des_round` | `0x14018df50` | 132 | 647 | 27 | 10 | 5 | 21 |
| `des_keyschedule` | `0x1401e42b0` | 133 | 650 | 28 | 12 | 6 | 28 |
| `sha_rotr` | `0x1403216e0` | 42 | 195 | 0 | 0 | 0 | 0 |
| **Total** | | **1,503** | **7,124** | 354 | 83 | 38 | |

Each VM has a listing (`NAME.txt`), a machine-readable program with run records
(`NAME.json`) and a per-block symbolic view of what feeds every branch and host
call (`NAME.analysis.txt`, from
[`pafet_vm_analyze_xxxvii.py`](scripts/pafet_vm_analyze_xxxvii.py)).

All twenty are identified from their native callbacks
([`pafet_vm_identify_xxxvii.py`](scripts/pafet_vm_identify_xxxvii.py),
[identification](jack_xxxvii_evidence/identification.json)):

| VM | Role | Evidence |
|---|---|---|
| `sha_msg`, `sha_compress` | SHA-256 update/final and transform | callbacks `0x1402834d0` (40 cases) and `0x140298d10` (49 cases), read natively |
| `sha_ch`, `sha_maj`, `sha_ep0`, `sha_ep1`, `sha_sig0`, `sha_sig1`, `sha_rotr` | Ch, Maj, Σ0, Σ1, σ0, σ1, 32-bit rotate right | branch-free; the lifted program equals the textbook function on 2,000 random inputs each |
| `des_block` | DES block | callbacks index tables equal to the standard IP and FP |
| `des_round` | DES round function | tables equal to the standard E, P and the eight S-boxes (512 bytes) |
| `des_keyschedule` | DES key schedule | tables equal to the standard PC-1, rotation counts and PC-2 |
| `tdes_block` | one 3DES block | six callbacks: three key schedules, then the block with direction 0, 1, 0 and keys 3, 2, 1 |
| `cipher_buffer` | one cipher pass | copies up to 24 key bytes, loops `i < size` over blocks, calls the unpad |
| `cipher_unpad` | permissive unpad | callbacks: size is zero, last byte, store/load it, `data[0 : size - p]` |

For the branch-free VMs the whole program is evaluated symbolically from entry to
`RET`; the obfuscation folds away and leaves, for example,
`(x >> n) | (x << (32 - n))` for `sha_rotr` and
`(a & b) ^ (a & c) ^ (b & c)` for `sha_maj`. The σ and Σ programs call host 0 with
`(x, n)`; a Stalker call summary shows that callback entering the `sha_rotr`
executor. `sha_ch` reads `x`, `y`, `~x` and `z` from four callbacks (the native
adapter at `0x14039d580` performs the `not`). Which adapter each executor uses was
observed with Stalker and is recorded as a table in the script, not re-derived.

`tdes_block` matches the composition `D_K1(E_K2(D_K3(X)))` of the crypto audit.
The direction flag is read from the callback bodies; its meaning (0 = decrypt) is
taken from that audit, not re-proved here.

## 4. Opcodes

The opcode numbers behave the same in every executor traced. Sixteen were already decoded for
the main VM; XXXVI names `0x3a`/`0x3b` as sign and zero extension. Six more appear
in the SHA leaves and the cipher cluster. Their meaning here is inferred from the
virtual stack during this round (first POP is the right operand) and is not
verified against the handler bodies:

| Opcode | Name used | Stack traffic observed |
|---:|---|---|
| 9 | `SUB` | pops `0x3a`, `0x40`, pushes `0x6` |
| 25 | `SGE` | pops `0x0`, `0x7`, pushes `0x1`; only seen against zero |
| 39 | `AND` | pops `0x400000000000`, `0x6f56f79c3e348835`, pushes `0x400000000000` |
| 40 | `OR` | pops `0x56`, `0x6f00`, pushes `0x6f56` |
| 42 | `SHL` | pops `0x8`, `0x6f56`, pushes `0x6f5600` |
| 43 | `SHR` | pops `0x8`, `0x3510366fbff5cb69`, pushes `0x3510366fbff5cb` |

The stack samples are not stored in the evidence; tracing `des_block` reproduces
them.

## 5. Validation against static decodes

[`pafet_vm_lift_validate_xxxvii.py`](scripts/pafet_vm_lift_validate_xxxvii.py)
compares each lifted block with the static `(opcode, operands)` sequence and gives
two verdicts: *consistent* (no differing instruction) and *complete* (every block
the static decode reaches from the entry, in full).

| VM | Static blocks / instr. | Reachable from entry | Lifted | Consistent | Complete |
|---|---|---|---|---|---|
| `main` | 105 / 482 | 94 / 431 | 94 / 429 | yes | no |
| `user` | 73 / 339 | 73 / 339 | 73 / 339 | yes | yes |
| `serial_inner` | 103 / 478 | 103 / 478 | 88 / 416 | yes | no |

**Main.** The 11 static blocks absent from the lift (28, 34, 42, 43, 57, 66, 70,
85, 93, 94, 99) form two chains starting at blocks 28 and 57, which no jump
targets. They are dead code and a dynamic method cannot see them. Blocks 6 and 21
lack their final instruction: the forced traces that reach them end one
instruction early. The cause was not investigated.

**Serial.** Block 12 is `JZ 36`, taken in every natural execution with condition
value 0. With the fall-through forced, the process exited before another
instruction was recorded. The static decode shows 15 blocks and 61 instructions
behind that fall-through. So this branch is one-way in practice, and the lift is
blind to what a flip cannot survive. Two blocks of `cipher_unpad` are also
incomplete; no static reference exists for them and the cause was not
investigated.

This is the measured limit of the method: it recovers what executes or can be
forced to execute, and agrees exactly with the static decodes there. It does not
replace them.

## 6. What decides acceptance

These checks were the reason for the round: looking for a condition on the
credentials that the earlier reports could not exclude.

**The SHA gate has no hidden condition on the username.**

- In `sha_msg`, host 9 (copy one message byte into the block) appears once, at
  block 8, and its return is dropped. The program receives only the data pointer
  (host 2), the size (hosts 4 and 8) and counters. Its seven real branches are
  `i < size`, `pos == 64`, `pos < 56`, `pad < 56`, `pad < 64`, `i < 8` and
  `j < 32`. The other seven never changed outcome in six inputs.
- In `sha_compress` the three real branches are counters (`i < 16`, `i < 64`,
  `i < 64`). Data moves between callbacks through the stack but reaches no branch.
- The six leaf executors contain no conditional branch.
- The native comparator at `0x140396ae9` requires equal sizes and a full `memcmp`.
- On Windows, the digest read at that comparator equals `hashlib.sha256` of the
  bytes `getline` receives in **359 of 359** cases: lengths 0–513, every byte
  value, multi-block inputs. Five of them differ from the SHA-256 of the bytes
  piped in (`0d`, `1a`, `0d0d0d`, `61621a6364`, `1a1a1a`), because text-mode
  input drops CR before LF and stops at `0x1a`.
- The unmodified binary rejects all **108** odd usernames tried.

**The key derivation and cipher model hold at the length boundaries.**
`pafet_oracle.exe` matches `scripts/pafet_des3_offline.py` in 32 cases with
username lengths 0–48 and serial lengths 0–32: 29 complete outputs and 3 first
blocks where the model declines a heap-dependent tail. No mismatch. The length
15/17 and 23–25 anomalies recorded on the Linux loader do not occur on Windows.
The oracle is a research variant; this is not acceptance by the original.

**One-way branches are not all opaque.** `cipher_unpad` has six branches and none
took both outcomes with the first two inputs used; 147 of its instructions were
reached only by force. It is the unpad step, which branches on the last decrypted
byte, and neither input produced a trailing byte in 1..8. With the inputs of §9
two of its branches take both outcomes and 67 instructions remain forced-only. "One-way" in the tables
means one-way for these inputs.

Nothing here reduces the credential space. The gate is SHA-256, the pipeline is
the documented one, and the flag still depends on credentials that are not known.

## 7. Limits

- Dynamic recovery. A block that neither a natural nor a forced jump reaches is
  not recorded, and a flip that kills the process hides what follows (§5).
- Only the first invocation of each VM is traced, with two inputs per VM (six for
  `sha_msg`). Input-dependent paths outside those inputs appear only if a flip
  reaches them.
- Forced runs execute with inconsistent state. Their instructions are trusted
  because the decoder, not the data, produces them; their values are not used.
- Post-gate VMs are observed in `pafet_pass8.exe`, not the original.
- Helper discovery is a size pattern fitted to this binary. The three static
  comparisons and the known helper addresses support it; it is not a general
  REVoid tool.
- Names for opcodes 9, 25, 39, 40, 42 and 43 are inferred (§4). The branch-free
  SHA programs that use 9, 39, 40, 42 and 43 equal their textbook functions under
  those meanings, which supports them; 25 has no such check.
- The executor-to-adapter table is a recorded Stalker observation (§3).
- No native mechanism, timing, guard or exception behaviour is modelled.

## 8. The digest in C++

[`sha_cpp_evidence/sha.cpp`](sha_cpp_evidence/sha.cpp) writes the nine SHA VMs as
readable C++, in the manner of `serial_cpp_evidence/serial.cpp`. The 40 and 49
cases of the two native callback switches are members `fn0…`; `sha_msg_program`
and `sha_compress_program` call them in the order, with the argument expressions
and under the conditions of the lifted programs. Those come from
[`pafet_vm_skeleton_xxxvii.py`](scripts/pafet_vm_skeleton_xxxvii.py), which walks a
lifted program, folds constants and keeps only host calls and real branches
([`sha_msg.skeleton.txt`](jack_xxxvii_evidence/lifted/sha_msg.skeleton.txt),
[`sha_compress.skeleton.txt`](jack_xxxvii_evidence/lifted/sha_compress.skeleton.txt)).
The seven branch-free VMs are one-line functions (§3). Callbacks whose result the
program discards are kept, because they are real calls.

[`pafet_sha_cpp_validate_xxxvii.py`](scripts/pafet_sha_cpp_validate_xxxvii.py)
compiles the file with clang++ and, for each input, compares the sequence of
`(switch, case, argument, return)` it produces with the sequence recorded in
`pafet.bin` under Frida:

| | |
|---|---|
| Inputs | 15: lengths 0, 1, 3, 55–57, 63–65, 119, 120, 128, 200, and two with NUL and high bytes |
| Callback records compared | 88,433 |
| Differing records | 0 |
| Digests (native, C++, `hashlib`) | equal in all 15 |
| K and initial state | the 64 + 8 immediates in the native wrappers equal the constants in `sha.cpp` |

Three pointer-valued fields are compared as pointers, not by value
([validation](sha_cpp_evidence/validation.json)).

The structure is the public-domain SHA-256 of Brad Conte's `crypto-algorithms`:
`sha256_update`, `sha256_final` and `sha256_transform`, one statement per callback.

What the file does not claim: it is the host-visible behaviour of the programs.
The VMs' encoded state, opaque branches and junk register traffic are omitted
without the taint proof `serial.cpp` has for the Serial-VM
(`serial_cpp_evidence/observable.json`). The callback-sequence equality shows the
omitted part did not change any callback in these 15 runs; it does not prove it
cannot.

## 9. The cipher pass in C++

[`cipher_cpp_evidence/cipher.cpp`](cipher_cpp_evidence/cipher.cpp) does the same for
the six cipher VMs: `cipher_buffer`, `tdes_block`, `des_keyschedule`, `des_block`,
`des_round` and `cipher_unpad`. The members are the cases of six native switches
(7, 6, 28, 29, 21 and 7 cases); the six `*_program` functions follow the lifted
programs. It is DES written one bit at a time: every permutation is a loop that
tests one table-selected bit and sets one output bit.

Findings read from the native callbacks and the programs:

- `des_block` callback 17 uses subkey `r` when its flag is 1 and `15 - r` when it
  is 0. `tdes_block` calls the block with flags 0, 1, 0 and keys 3, 2, 1, so one
  block is `D_K1(E_K2(D_K3(X)))`, as the crypto audit states.
- The three key schedules are recomputed for every 8-byte block.
- `cipher_unpad` copies the buffer when the last byte `p` is 0 or greater than 8,
  and otherwise keeps `size - p` bytes without looking at the removed ones. The
  "p not larger than size" clamp is in the native callback, not in the VM.
- `cipher_buffer` steps `i += 8` while `i < size` and always hands eight bytes to
  the block, so a size that is not a multiple of eight reads past the string.

To exercise the unpad naturally, `cipher_unpad` and `cipher_buffer` were re-lifted
with two more credential pairs found with the offline model: `abc`/`s402` (first
pass ends in `08`, one block removed) and `abc`/`z126` (ends in `00`).

[`pafet_cipher_cpp_validate_xxxvii.py`](scripts/pafet_cipher_cpp_validate_xxxvii.py)
runs `pafet_pass8.exe` under Frida with hooks on the six switches, through the
three passes of the main program, and folds every `(switch, case, argument,
return)` record into a running hash kept every 50,000 records. The compiled
`cipher.cpp` does the same for the derived key and the embedded ciphertext.

| | |
|---|---|
| Credential pairs | 5: `alice`/`serial01`, `abc`/`s402`, `abc`/`z126`, empty/empty, a 25-byte username |
| Callback records | 7,993,947 in total; the same count on both sides in every case |
| Hash checkpoints | 162, all equal |
| Output after three passes | equal to `scripts/pafet_des3_offline.py` in all 5 |

The comparison is by count and checkpoint hash, not record by record; a difference
would be located by dumping the chunk ([validation](cipher_cpp_evidence/validation.json)).

Limits specific to this file: it agrees with the binary only when every pass
leaves a multiple of eight bytes, because the heap bytes the original reads past
a partial block are not modelled; the empty-input arm of the unpad was reached
only by a forced run and its tail is not recorded; and, as for `sha.cpp`, the
omitted obfuscation layer has no taint proof.

## 10. The whole program in C++

[`pafet_cpp_evidence/pafet.cpp`](pafet_cpp_evidence/pafet.cpp) adds the four VMs
that were left (`main`, `user`, `hex`, `serial_outer`) and includes `sha.cpp`,
`cipher.cpp` and the unchanged `serial_cpp_evidence/serial.cpp` of JACK XXXVI. With
it all twenty VMs are written at the callback level, and `pafet_main()` is the
program: read username and serial, compare the digest, build the 24-byte key,
decode the embedded text, run three cipher passes, test `CMO{…}` and print.

The shared trace and width helpers moved to
[`vm_common.h`](pafet_cpp_evidence/vm_common.h); `sha.cpp` and `cipher.cpp` now
include it and were validated again with the figures of §8 and §9.

Read from the native callbacks:

- `user` callback 4 is `xor 0x5a; add 7; add 3*index` on the reversed username and
  returns the byte sign-extended. The program is the 339-instruction one of JACK
  XVII/XXIII.
- `hex` callback 2 takes at most two characters and reads them through a
  hexadecimal input stream; callback 3 appends the low byte.
- `serial_outer` has three commands: copy the serial, run the inner Serial-VM with
  the key of decoder slot 7 (empty), copy the result out.
- `main` has no test other than the three already known: digest, key shorter than
  24, and output format.

Two tails of the main program were not recorded by the dynamic lift (§5) and are
taken from `controller_evidence/decoded_main_program.json`: `return 1` after the
invalid-username message and `return 0` after the flag is printed.

[`pafet_cpp_validate_xxxvii.py`](scripts/pafet_cpp_validate_xxxvii.py) compares
the compiled model with `pafet.bin`, and with `pafet_pass8.exe` when the model
applies the same bypass (the `jne` after the gate's `memcmp` removed). Input goes
through standard input on both sides.

| | Original | Gate bypass |
|---|---|---|
| Runs | 4 | 5 |
| Standard output, byte for byte | equal in 4 | equal in 5 |
| Exit code | equal in 4 | equal in 5 |
| Callback records, twelve switches | 18,240 | 8,011,721 |
| Record counts and hash checkpoints | equal | equal (166 checkpoints in total) |

Twelve native switches are hooked at once: main, user, hex, outer serial, the two
SHA switches and the six cipher switches
([validation](pafet_cpp_evidence/validation.json)).

What this does not cover:

- **The accepting path.** No run reaches "Correct!" and the flag line, because no
  valid credentials are known. Callbacks 21 and 22 and the `return 0` tail are
  written from the native code and the static decode and were never executed here.
- **The inner Serial-VM switch** (`0x140232e20`) is not hooked: `serial.cpp` emits no
  trace records. Its output still enters the comparison as key bytes read by the
  key schedule. Its own validation is that of JACK XXXVI.
- **Partial blocks**, as in §9; every run here keeps sizes at multiples of eight.
- **Console input.** Runs use a pipe; a console goes through a different CRT path.
- As in §8 and §9, the obfuscation layer is omitted without a taint proof, and the
  comparison is by count and running hash.

This is not the faithful four-VM `pafet.cpp` the project aims at: it reproduces
what the programs ask of the host, in the binary's order, not the mechanisms of
the virtual machines.

## 11. Reproduction

Windows, Python 3.10, `frida` and `pefile`, from the repository root. Each command
runs the binaries one process at a time unless `--workers` says otherwise.

```powershell
python scripts/pafet_vm_lift_xxxvii.py --list
python scripts/pafet_vm_lift_xxxvii.py all                 # about 25 minutes
python scripts/pafet_vm_analyze_xxxvii.py (Get-ChildItem jack_xxxvii_evidence/lifted/*.json)
python scripts/pafet_vm_lift_validate_xxxvii.py
python scripts/pafet_vm_identify_xxxvii.py                 # static; executes nothing
python scripts/pafet_vm_skeleton_xxxvii.py sha_msg sha_compress
python scripts/pafet_sha_cpp_validate_xxxvii.py            # needs clang++; about 2 minutes
python scripts/pafet_cipher_cpp_validate_xxxvii.py         # needs clang++; about 12 minutes
python scripts/pafet_cpp_validate_xxxvii.py                # needs clang++; about 20 minutes
python scripts/pafet_windows_checks_xxxvii.py gate
python scripts/pafet_windows_checks_xxxvii.py digest       # about 3 minutes
python scripts/pafet_windows_checks_xxxvii.py oracle --workers 3   # about 7 minutes
```

Re-running the lifter rewrites the tracked files under
`jack_xxxvii_evidence/lifted/`; inspect the diff. Block ids and instruction
sequences were identical across the repeated runs of this round; run timings are
not.
