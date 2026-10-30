# PAFET semantic devirtualizer

See [the operation report](../docs/jack-xvii.md) for evidence, scope and commands.
The CLI accepts the original `pafet.bin` hash, not arbitrary research variants.

```bash
python -m unittest devirt.test_ir -v
python -m devirt
python -m devirt.validate
python -m devirt.audit
python -m devirt.materializer
```

On Windows with Frida and Visual Studio 2022 C++ tools, `python -m devirt.capture`
collects four new native cases and `python -m devirt.windows` builds/tests the
three generated backends with MSVC.

`uservm.py` adapts the existing PE materializer/decoder and constructs a
conservative CFG with checked stack heights. `ir.py` defines ordered effects,
an evaluator and block-local safe simplification. `cpp.py` emits direct blocks
and a contract-checked structured loop. `runtime.hpp` contains state, bounds-
checked buffer containers and defined arithmetic helpers, with no VM decoder.

The JSON schema is `pafet-effect-ir-v1`. Blocks declare incoming stack height;
`s0..sN` are edge stack parameters. Each instruction has original bytes/PC,
ordered `effects`, `stack_after` SSA names and optional `control`. Pure nodes
declare `id`, `op`, argument names and width. `reg.write`, `index.write`,
`buffer.copy`, `buffer.reverse` and `store8` are ordered effects. `load8` and
buffer sizes are explicit reads. Calls reference a function with explicit
parameters, return value and writes. A function's body contains the same effects.

All unknown instructions/host calls stop through `unknown`; an unknown opcode
does not receive a guessed width or successor. An unproved host call declares
all-state reads/writes. Malformed instruction boundaries and inconsistent stack
joins are errors. The current original program contains no unknown logical
opcode; this is not a claim about the interpreter's remaining ISA.

Optimization preserves block-exit state, ordered host/memory effects and control.
It does not promise instruction snapshots for dead pure temporaries. The
structured backend uses the existing abstract proof, enforces its initial
register contract and rejects an incompatible CFG shape. The direct backend
retains both conditional arms and accepts arbitrary initial logical registers.

`audit.py` also expresses four native blob-seed initialization regions in the
same effect IR. Their compiler scratch registers are not asserted to be the
Serial/SHA virtual registers. ISA decoding for those VMs remains unrecovered.
