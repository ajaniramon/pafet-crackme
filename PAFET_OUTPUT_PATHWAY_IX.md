# Jack IX — output pathway of the user-VM localized at `[*ctx+0x5e8]`

**Status: ÉXITO PARCIAL.** Pathway identified byte-by-byte. Fully reversing
`0x140025020` + its 4 callees was intractable in one shot (3689 B total). The
important structural finding is where the output lives and the exact
`(ch, op)` dispatch calls that produce each byte transformation.

## Previous claim corrected

Jack VII and Jack VIII both referred to `[ctx+0x1b0]` and `[ctx+0x10]` as the
output buffer. Both are wrong for the user-VM runtime:

- `[ctx+0x1b0]` is the **materialized bytecode** buffer (read by the operand
  reader `0x140007040` as the source of threaded-code opcodes).
- `[ctx+0x10]` is `0x0` throughout the entire user-VM resolver execution
  (verified across 630 resolver calls). It gets populated **after** user-VM
  returns, by downstream main-VM code.

The real output buffer during user-VM execution is pointed to by
`[ctx+0x5e8]` (also by `[ctx+0x5f8]` offset `+0x10` and by `[ctx+0x600]`
offset `0` — three handles to the same heap region).

## Output transitions traced

Polling `[*ctx+0x5e8]` at every resolver call for `user=alice`,
`serial=serial01` yields 8 transitions:

| call | ch | op  | bytes (first 10) | comment |
|---:|---:|---:|---|---|
| 1   | 0 | 58 | `0000000000` | buffer zeroed |
| 4   | 0 | 13 | `616c696365` | ASCII `"alice"` copied in |
| 10  | 3 |  7 | `6563696c61` | **reversed** = `"ecila"` |
| 78  | 3 | 51 | `4663696c61` | byte 0: `0x65 → 0x46` (f_user[0]) |
| 191 | 1 | 25 | `4643696c61` | byte 1: `0x63 → 0x43` |
| 306 | 2 | 18 | `4643406c61` | byte 2: `0x69 → 0x40` |
| 418 | 0 | 57 | `4643404661` | byte 3: `0x6c → 0x46` |
| 529 | 1 | 43 | `464340464e` | byte 4: `0x61 → 0x4e` = **f_user(alice)** |

Verification of `f_user(c, i) = ((c ⊕ 0x5a) + 7 + 3·i) & 0xFF`:
- `(0x65 ⊕ 0x5a) + 7 + 0 = 0x46` ✓
- `(0x63 ⊕ 0x5a) + 7 + 3 = 0x43` ✓
- `(0x69 ⊕ 0x5a) + 7 + 6 = 0x40` ✓
- `(0x6c ⊕ 0x5a) + 7 + 9 = 0x46` ✓
- `(0x61 ⊕ 0x5a) + 7 + 12 = 0x4e` ✓

Each byte transformation takes ~113 resolver calls. The output buffer stays
otherwise unchanged across those calls — a single atomic transition per
byte, embedded in the hidden `call r9` chain triggered by a specific
(ch, op) pair.

## Which handlers actually touch the buffer

Per-handler watch (hook entry/exit on each of the 35 known native handler
VAs, compare buffer before and after) attributes transitions to:

```
0x140028a00  x3  (channels 2; opcodes include 24/25/26 ... visible as the
                   handler responsible for f_user[0] and f_user[1] and f_user[2])
0x1400216d0  x2  (channel 1)
0x140038fe0  x1  (channel 3)
0x140027b80  x1  (channel 2)
0x140019f40  x1  (channel 0)
```

Multiple handlers "claim" transitions because of the handler→handler
`call r9` nesting documented in Jack IV-B: the outer handler receives
credit when the actual byte write happens inside a nested helper it
called. The real atomic writer is deeper in the call chain and still
needs to be isolated.

## Reversing status for 0x140025020

Full disasm layout:
```
0x140025020..0x140025217   (503 B)   prologue: state_tick + 4 helper calls
0x140025217..0x140025e89   (3186 B)  main body
0x140025e89..0x140025ea5   (28 B)    panic branches (POPS-style error codes
                                      0x54485254 'TRHT' and 0x43414e59 'YNAC')
```

Called helpers from the prologue:
```
0x140007040  (406 B)  operand reader with embedded state_tick + PC decoder.
                      Returns the next opcode. Reads from [rbx+0x1b0]
                      (the bytecode buffer, NOT the output).
0x140002330  (13 B)   trivial bounds check `cmp ecx, 0x49`.
0x140006300  (1133 B) writes ONLY to ctx shadow (offsets 0x27c, 0x27d,
                      0x27e, 0x278, 0x283, 0x284). No external buffer writes.
0x140006010  (172 B)  push-to-log operation: appends xor(arg2, ctx+0x5b0)
                      to [ctx + ctx[0x5b8]*8 + 0x3b0]. Not the output.
```

**No byte write to the output buffer appears in the prologue or in any of
these 4 helpers.** The 19 byte writes identified in the 3186 B main body
all target ctx shadow fields (`[rdi+0x278]`, `[rdi+0x279]`, `[rdi+0x27b]`,
`[rdi+0x280]`, `[rdi+0x281]`, `[rdi+0x282]`, `[rdi+0xf09]`), not the
heap-allocated output buffer at `[*ctx+0x5e8]`.

Conclusion: the output byte writes happen inside **the nested handlers
called via `call r9` from the main body**, not in `0x140025020` itself.
Those nested handlers were classified under the 35-handler catalog but
not individually reversed yet.

## Phases status

| Phase | Status |
|---|---|
| 1. Full disasm of `0x140025020` | DONE (503 B prologue) |
| 2. Full disasm of `0x140007040` | DONE (406 B, is the operand reader) |
| 3. Runtime captures of ctx and buffer | DONE (output pathway found) |
| 4. Unicorn differential replay | NOT done (handler too large) |
| 5. Native C++ port | NOT done |
| 6. Byte-exact integration into Jack VII interpreter | NOT done |

## What is new vs 1e2f7e5

- The output buffer address is `[*ctx+0x5e8]`, not `[ctx+0x10]`.
- The output buffer evolves through 8 recorded transitions tied to
  specific `(ch, op)` dispatch calls.
- Handler `0x140025020` is not the atomic byte writer; it is the
  dispatch-tier outer handler that calls the real writer via `call r9`.
- `0x140007040` is the operand reader, 406 B, matches the earlier
  identification of a decoder returning the next opcode.
- `0x140025020`'s other 3 helpers (`0x140002330`, `0x140006300`,
  `0x140006010`) are not output writers; their roles are bounds check,
  shadow state updates, and a log-append operation.

## Honest limits

- Fully reversing `0x140025020` + the deeper handlers in the `call r9`
  chain is a per-byte reconstruction job comparable in scale to Jack IV-A
  reversing `0x140003a50` (495 B took one iteration), but across the ~5
  handlers that produced the 5 byte transformations. One shot was not
  enough.
- The IR interpreter in `src/pafet_canonical_interp_vii.cpp` still
  produces structural PASS but not byte-exact f_user output. The piece
  that would close that gap is the deepest `call r9` leaf that performs
  `mov byte ptr [*ctx+0x5e8 + i], al`.

## Reproduction

```sh
python scripts/pafet_output_pathway_ix.py           # alice (default)
python scripts/pafet_output_pathway_ix.py ramon serial01
```

Evidence file: `vm_pools_evidence/output_pathway_ix.json`.
