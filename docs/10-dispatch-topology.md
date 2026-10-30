# 10 — Dispatch topology and semantic control flow

The logical program CFG and native protection CFG are different graphs.
[JACK XVII](jack-xvii.md) compiles the former while preserving its demonstrated
state/control contract. It does not claim to reproduce every native route.

## User-VM routing

The PE's opcode-table lookup precedes ordinary alias remapping at
`0x1400074d0`. The resolver at `0x14003ebb0` and nested `call r9` paths both
participate in execution. The remapper returns an alias, not simply a next opcode.
Logical opcodes 60/61 have special extra-operand routing and do not occur in
the recovered 339-instruction program.

The four native root CALL return sites select channels explicitly:

| Return site | Channel |
| --- | ---: |
| `0x140041187` | 3 |
| `0x140042be5` | 1 |
| `0x140042cb2` | 2 |
| `0x1400479f3` | 0 |

Inline continuations instead derive their channel from the current context
and logical opcode. Extending that inline formula to root calls was falsified
in XXIII. See [the exact formulas and ABI](14-real-bytecode-xxiii.md).

The ordinary alias is read from `ctx+0xf64+2*(channel*62+logical_opcode)`.
An encoded i32 target table, its key and handler base resolve the generated
trampoline. Remapping can change its target. Missing table memory must remain
unresolved, rather than be guessed from one historical pair-to-address map.

XXIII observed 60 native entries and all 248 non-escape channel/alias slots
across thirteen inputs. Each slot has multiple targets over that corpus. The
older 35-handler catalog and 45.4% hidden-dispatch ratio are historical sample
results, not exhaustive invariants. Helpers must not inflate handler denominators.

## Logical control

JUMP/JZ/JNZ consume a block operand and enqueue a mapped transfer. Core-post PC
remains at operand end; the dispatcher applies the target before the next fetch.
RETURN consumes the logical result; there is no demonstrated opcode-0 HALT in
this recovered program. CALL32 invokes the native host, not a proved virtual
subroutine mechanism.

The new effect IR models both PC boundaries, stack conditions, register effects
and native host effects. Its structured backend proves a single-loop shape after
an explicitly contracted dead-arm proof. It does not erase native guard state
and then describe the resulting projection as a complete native interpreter.

## Other machines

Hex has a pending LIFO, a secondary eight-handler mixer and separate remapped
native domains, documented in [06-hex-vm.md](06-hex-vm.md). Its dispatch cannot
be equated to User's graph from similar helper arithmetic. Serial/SHA native
executor boundaries are known, but their virtual dispatcher/handler maps are
still unrecovered. Shared initialization or pool functions are insufficient
proof of a shared ISA.
