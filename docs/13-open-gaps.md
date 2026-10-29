# 13 — What is honestly not done

This is the "gaps" ledger. Each entry describes what is missing, why
it isn't closed, and the next natural step for anyone continuing.

## 1. The actual flag

**Status**: not recovered.
**Why**: the SHA-VM gate at
`H = 9419f86b97bd379906be72ea80517c075a499d0db0a37499132c2d203cc21420`
is a SHA-256 preimage. Hashcat was run with wordlists and a mask
`NIMA?a^6` returning 0 matches. SHA-256 preimage is not computationally
tractable without context about the author's choice.
**Next step**: broader masks and wordlists (names, Spanish words,
`CMO{...}` fragments the author might have used, phrases related to
the author's handle or affiliation). Needs GPU and luck.

## 2. Atomic byte-writers at x64 instruction level

**Status**: 0/5 reversed byte-by-byte x64.

| byte | handler       | size (real) | Unicorn 6/6 | C++ x64 port |
|------|---------------|-------------|-------------|--------------|
| 0    | `0x14003bea0` | 1997 B      | yes         | no           |
| 1    | `0x140015820` | 503 B       | no          | no           |
| 2    | `0x140025020` | 503 B       | no          | no           |
| 3    | `0x140014a00` | 3586 B (.pdata-fragmented) | yes | no |
| 4    | `0x1400216d0` | 3705 B      | no          | no           |

The behavioral port in `src/pafet_byte_writer_x.h` reproduces the
observed input→output transform. It is not an x64 instruction-by-
instruction clone.

**Why not closed**: each handler is a few hundred to a few thousand
bytes of x64 that calls out to the shared helpers (`0x140003a50`,
`0x140003880`, `0x140005b50`, `0x140006770` — all 4 reversed x64).
Writing the ports is mechanical but slow; the overnight session ran
out of effective time with Unicorn oracles up for 2/5.

**Next step**: port `0x14003bea0` (1997 B, Unicorn ready) using the
same recipe as `0x140003a50` and `0x140003880`. Then `0x140014a00`
(3586 B, Unicorn ready). Then the remaining 3 writers (need Unicorn
oracle + port each).

## 3. Byte-exact validation for lengths 23, 24, 25

**Status**: 6/9 pass, 3/9 blocked.

The failing inputs are `"a" * 23`, `"a" * 24`, `"a" * 25`. The
interpreter is believed correct; the oracle is unobservable.

**Why not closed**: for strings exceeding the C++ SSO threshold, the
on-disk VM output doesn't land in `[*ctx+0x5e8]`. A full RW-memory
scan for the expected byte pattern
(`4245484b4e5154575a5d6063...`) returned 0 occurrences:

```text
Found 0 occurrences of f_user(a*23) in RW memory.
```

Dense polling (resolver, operand reader, 5 writer entries/leaves)
observes only 2 buffer transitions, consistent with the output living
elsewhere or being freed before the host-20 call.

**Next step**: watchpoint on allocation (not polling) to locate the
output buffer for large strings; or hook the writers' store sites
directly in Unicorn.

## 4. Block 54 of the canonical bytecode

**Status**: all-zeros across 4 tested inputs. Role unknown.

Three hypotheses:

1. Gated by `sha256(user) == H`. Reached only on the correct-user
   path (which can't be tested without the preimage).
2. Dead code / alignment padding.
3. Platform-conditional (debugger, locale, build flag).

**Next step**: inspect for input conditions that activate it. A
corpus of more inputs (random, long, structured) might trip it. Or
flip the SHA gate (via `pafet_pass8.exe`) and feed in whatever usernames
and see if the dynamic trace through block 54 differs.

## 5. Block 72 of the canonical bytecode

**Status**: not decoded offline.

The last block has a dynamic SSE XOR layer applied past the Feistel
pass. It isn't needed by `f_user` for any tested input but is part of
the on-disk bytecode blob.

**Next step**: implement the SSE XOR layer offline using the
materializer's SSE pass as a reference, or capture the plaintext of
block 72 via the Frida hook that already captures blocks 0..71.

## 6. Byte-layout grammar for a 24-B block

**Status**: not formalized statically.

The operand reader `0x1400074d0` is understood as an opcode decoder
(threaded code). But the exact relationship between a 24-byte block
and the sequence of (opcode, operand) pairs it encodes — including
how LOAD_CONST produces a 24-byte constant from a block — hasn't been
reduced to a documented grammar.

**Why not closed**: the operand reader was examined for behavior, not
reduced to a formal state machine.

**Next step**: trace the operand reader's cursor + context slots
across all 73 blocks and extract the block → opcode-stream mapping.

## 7. `ctx[0xd8] / 0xb8 / 0xb0` initialization

**Status**: captured, mapped, not derived.

The fmix mask used by `0x140005b50` depends on `ctx[0xd8] ^ ctx[0xb8]
^ ctx[0xb0]`. These slots were captured at the point the helper reads
them, but how they are first initialized and how they evolve across
calls was not derived end-to-end.

**Next step**: back-slice from the helper read site to the ctx
initialization points.

## 8. LOAD_CONST operand audit

**Status**: not audited completely.

A formal gap: how many LOAD_CONST uses there are, where each lands,
and whether each ever reads anything other than the expected
constants (0x5A, 7, 3, counter, etc.).

**Next step**: static audit over the bytecode stream for all LOAD_CONST
sites.

## 9. VM-replica of the user-VM

**Status**: structural PASS, not byte-exact.

The C++ canonical interpreter (`src/pafet_canonical_interp_vii.cpp`)
loads the 73-block bytecode, walks it in the right order, and runs
3 helpers byte-exact — but it does not reproduce `f_user` output
byte-for-byte because the 5 atomic byte-writers are not plugged in at
the x64 level (gap #2 above).

The recompiled Pafet (`src/pafet_recompile_xxi.cpp`) sidesteps this by
invoking `pafet_x::byte_writer` directly. For a full byte-exact
VM-replica, closing #2 is the dependency.

**Next step**: finish the byte-writers at x64 level (gap #2) and plug
them into the canonical interpreter.

## 10. Materializer x64 port

**Status**: Feistel seeds and multiplier known; blob decoded; no
x64 port.

The materializer at `0x140007610` is understood well enough to
decrypt the blob offline (`scripts/decode_user_blob_vi.py`). What's
missing is a C++ port that reads a `.rdata` section layout, iterates
the Feistel rounds, and writes to `[ctx+0x1b0]` the same way the
original does.

**Next step**: port the materializer; this adds the "VM startup
authenticity" to a VM-replica.

## 11. Dispatcher body x64 port

**Status**: understood as a 37,861-B function wrapping the resolver
with PC advancement and op=0 halt. No x64 port.

**Next step**: port the dispatcher as a C++ main loop.

## 12. SHA / serial / hex VMs at x64 level

**Status**: byte-exact replicas exist in standard C++. No instruction-
by-instruction ports.

For `NIMA`'s purpose (seeing that the pipeline is understood), this is
sufficient. For a maximum-fidelity clone, these would also need x64
ports.

## Summary

The devirtualization is complete at the **behavioral** level: given any
input, the recompiled Pafet produces the same output as the on-disk
VM for every tested case. It is **incomplete** at the x64 instruction
level: 5 handlers remain behavioral, and the materializer /
dispatcher / sub-VMs are not instruction-ported.

For "pop the flag" purposes: the SHA-256 preimage is the actual block
and is not computationally reachable with the current tools.
