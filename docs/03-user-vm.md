# 03 â€” User-VM: recovered program and native mechanisms

The current semantic pipeline is documented in [JACK XVII](jack-xvii.md).
[XXIII's detailed extraction](14-real-bytecode-xxiii.md) remains the reference
for materialization, operand formulas, constants and runtime alias selection.

## Program and representation

The original PE contains a 1,752-byte encrypted blob at RVA `0x3e5020`.
All 73 physical 24-byte materialization units are recovered. They contain
339 variable-length logical instructions, rather than 73 fixed-width instructions.
The program uses 15 recovered logical opcodes, a uint64 operand stack, 256
logical registers and seven native host operations.

The materializer at `0x140007610` applies multiple mixing/masking stages.
Feistel rounds participate in the address permutation; they are not the entire
byte decryptor. The opcode table is at RVA `0x3dfcb0`. Readers at
`0x140007040`, `0x1400071e0`, `0x140007370` consume u32/u16/u8 operands.
`0x1400074d0` remaps aliases; it is not an ordinary next-opcode reader.

## Effects and control

The recovered program copies the username, reverses its bytes, iterates over
positions through native callbacks, rewrites one byte at a time, then publishes
the working buffer. Its output contract is consistent with:

```text
out[i] = ((input[length-1-i] XOR 0x5a) + 7 + 3*i) mod 256
```

The devirtualizer does not replace the bytecode with that formula. It lowers
the actual instructions to explicit effects and emits executable C++ with a
structured loop. The XOR instruction exists in native `.text` at
`0x140048a2c`; the byte store is `0x140048a3a`. A separate constant-table value
90 does not relocate that native instruction into bytecode.

CALL is a native host operation, not a proved virtual subroutine call. RETURN
consumes a result. JUMP/JZ/JNZ queue a mapped target: the core-post PC stays at
operand end; the next opcode PC reflects the deferred transfer.

## Native state and dispatch

The original machine encodes register cells, stack/control values and tags,
updates mixing state, remaps aliases and creates thunks. Dispatcher
`0x14003f540`, resolver `0x14003ebb0` and nested `call r9` paths must be studied
together. XXIII observed 60 native entries and 248 non-escape channel/alias
slots, each with multiple possible targets. Those are corpus observations,
not fixed ISA sizes. See [dispatch topology](10-dispatch-topology.md).

XXIV translated five selected native wrapper bodies:

| Entry | Core |
| --- | --- |
| `0x14003bea0`, `0x140014a00` | DROP |
| `0x140015820`, `0x140025020` | Block transfer |
| `0x1400216d0` | STORE_REG |

They are not five output-byte writers. Helpers such as `0x140003a50` manipulate
encoded stack state. Their writes must be attributed to actual state/buffer
identities, not inferred to be string output from an address alone.

## Validation and limits

[JACK XVII's evidence](../jack_xvii_evidence/validation.json) compares 17 Windows
executions and 54,108 logical operations against IR, generated C++ and the
existing bytecode interpreter. It covers empty input, SSO/heap boundaries and
binary bytes. There are 54,105 immediate post-core snapshots; three missing ones
are explicit in the evidence. Optimized/structured C++ is checked at block exits, including
working/output memory and control. Native coverage is 334/339 logical PCs.

The other five PCs belong to block 54, proven dead under the documented
abstract-state contract. A model-only constant mutation exercises them; it is
not a native altered-PE experiment. Complete native encoded state, guards,
scheduling and exception behavior remain open. In particular, the
[XXVII context mismatch](../PAFET_JACK_XXVII.md) came from omitted pointed-array
inputs, as demonstrated by the later [native-state analysis](native-state-divergence.md).
Fresh complete-input frames now match Windows instruction by instruction;
the old incomplete snapshots are not repaired using expected results. Full
User-VM devirtualization remains partial beyond those validated paths.
