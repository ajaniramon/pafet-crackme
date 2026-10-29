# 09 — The user-VM bytecode blob

The user-VM is the only one of the four nested VMs that carries an
**encrypted bytecode blob** on disk. The other three VMs reuse the
same opcode mesh over standard constants (SHA K-table, RC4 S-box,
hex alphabet). The user-VM's blob encodes the three things that make
`f_user` not a standard primitive:

1. The XOR constant `0x5A`.
2. The additive constants `7` and `3`.
3. The order of operations binding reversed-input to position-indexed
   output.

## On-disk layout

```text
VA           : 0x1403E5020
Section      : .rdata
Size         : 1752 bytes = 73 blocks × 24 bytes
Encryption   : 4-round Feistel per block, with per-block mixing
```

Static dump available in
[`vm_pools_evidence/usuario_blob_enc.bin`](../vm_pools_evidence/usuario_blob_enc.bin).

## Decryption — the materializer

```text
Materializer VA : 0x140007610
Feistel seeds   :  0x5cd8585a9977c0d4
                   0xfe81d29118a944eb
                   0x18494ccf9be2c8fe
                   0xba32c7061b144c95
Multiplier      :  0xd6e8feb86659fd93
```

Extracted statically from the materializer's disassembly (see
`scripts/decode_user_blob_vi.py`). The 4 seeds are the 4 Feistel round
keys; the multiplier is used in the round function.

A Frida hook on the materializer's leave point captured the plaintext
blocks live. Offline, the same seeds were used to decrypt the blob
without running the binary. Both reach the same 73-block output.

## 73-block canonical content

Captured plaintext: `vm_pools_evidence/user_bytecode_canonical_vi.bin`
(1752 B).

Per-block analysis (`scripts/decode_user_blob_vi.py` output in
`vm_pools_evidence/decode_user_blob_vi.json`):

| Block  | Content shape         | Role                                      |
|--------|------------------------|-------------------------------------------|
| 0..27  | Mixed opcode operands  | f_user prologue, cursor setup, ALU pool fetches |
| **28** | `5A 5A 5A 5A ... 5A` (24 × `0x5A`) | The XOR constant for f_user. |
| 29..53 | Mixed opcode operands  | f_user main body, byte-writer dispatch    |
| **54** | `00 00 ... 00` (24 × `0x00`) | Dead code or correct-path only; see below. |
| 55..71 | Mixed opcode operands  | f_user epilogue, counter advance          |
| **72** | **Not decoded offline**. Dynamic SSE XOR layer applied past Feistel. Not required by `f_user(alice)`, `f_user(ramon)`. |
| **73** | n/a (72/73 is the count; indexing is 0-based) |

### Block 28 — the `0x5A` constant

Confirmed by cross-referencing: a Frida hook on every `mov eax, 0x5A`
site in `.text` (21 sites) fires 0 times during `f_user(alice)`. The
constant comes from the operand reader fetching this block. See
`PAFET_H3A50_NATIVE_IVA.md` and `PAFET_USER_BYTECODE_VI.md`.

Pre-overnight hypotheses that this ruling disproves:
- "XOR 0x5A is a `.text` literal in a byte-writer": **false**.
- "XOR 0x5A lives in the 12-slot ALU pool": **false** (pool is all
  primitives, no 24-byte constants).
- "The operand reader is a LOAD_CONST that returns an immediate
  from a table": **false** — the operand reader is an opcode decoder;
  constants come from bytecode blocks via a different path.

### Block 54 — dead or gated

Across 4 tested inputs (`alice`, `ramon`, `alice123`,
`ramonbarcelona`), block 54 is `0x00 × 24`. Three hypotheses, in
descending plausibility:

1. **Gated by `sha256(user) == H`**: the correct-username path reads
   block 54; the gate rejects before block 54 is ever consulted.
2. **Dead code**: the compiler emitted an unused block for alignment
   or anti-static-reversal padding.
3. **Platform-conditional**: a flag we haven't tripped (e.g.
   `IsDebuggerPresent`, locale) activates block 54 — unlikely because
   the pipeline runs under Frida with no issues.

If (1) is correct, block 54's content is only known once a preimage
for `H` is known.

### Block 72 (last block, not decoded offline)

The decryption pass has a final SSE-level XOR layer that runs on the
whole 1752-byte buffer in parallel. Offline this requires replicating
the SSE pass exactly; it was never implemented because block 72's
plaintext is not needed by `f_user` for any tested input.

## Encoding of a 24-byte block

A block is interpreted as a sequence of (opcode, operand) pairs. The
operand reader (`0x1400074d0`) consumes bytes from the current block
and returns:

```text
return_value = next_opcode (0..61 observed values)
side_effect  = cursor advanced
```

This is the **threaded code** property: the operand reader IS the
opcode decoder; its return value drives the next dispatch. The
resolver (`0x14003ebb0`) consumes this `op` plus the channel from
`rdx` and locates the handler.

The exact byte layout within a block (how many bytes per opcode, how
operands are packed, how LOAD_CONST produces 24-byte constants from a
block) was **not** formalized statically; it is captured in the
operand reader's x64 body but not reduced to a documented grammar.
See [13-open-gaps.md](13-open-gaps.md).

## Replica status

A C++ replica of the materializer + canonical interpreter is in
[`src/pafet_canonical_interp_vii.{h,cpp}`](../src/pafet_canonical_interp_vii.cpp)
with the test harness
[`src/main_canonical_test_vii.cpp`](../src/main_canonical_test_vii.cpp).
Current status: **structural PASS** (loads the canonical bytecode and
walks it in the right order), but **not byte-exact** against `f_user`
output. The 3 verified helpers write to shadow state, not output; the
atomic byte-writers remain behavioral.

The recompiled Pafet (`src/pafet_recompile_xxi.cpp`) bypasses the
canonical interpreter and invokes `pafet_x::byte_writer` directly
because the behavioral port is already byte-exact.

If `NIMA` wants a full byte-exact VM-replica (not just behavior):

1. Finish the atomic byte-writer x64 ports (5 handlers).
2. Formalize the block byte-layout grammar.
3. Document the operand-reader's exact state machine.

The pieces are already in evidence; the stitching is the open work.

## Pre-overnight sources

| Report                        | Content                                   |
|-------------------------------|-------------------------------------------|
| `PAFET_USER_BYTECODE_VI.md`   | 72/73 blocks recovered offline            |
| `PAFET_VIRTUAL_ISA_VB.md`     | ISA reduction (35 handlers → ~10 ops)     |
| `PAFET_OPERANDS_VB.md`        | Operand reader = opcode decoder (not LOAD_CONST) |
| `vm_pools_evidence/user_bytecode_canonical_vi.bin` | 1752 B plaintext |
| `vm_pools_evidence/user_blocks_vi.json` | Per-block structural analysis   |
