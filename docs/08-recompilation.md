# 08 — Recompilation, semantic code and remaining integration

There are three different deliverables in the repository:

| Artifact | What it establishes | What it does not establish |
| --- | --- | --- |
| [XXI demonstrator](../src/pafet_recompile_xxi.cpp) | Functional crypto/controller composition, configurable gate/ciphertext and a controlled rekeying example | Original flag, original acceptance or full VM mechanisms |
| [User semantic compiler](../devirt/) | Original-bytecode extraction, explicit effect IR and readable C++ for the logical User program | Complete native encoded/guard/scheduler/exception state |
| [XXVI Hex literal executor](../src/pafet_hexvm_executor_lifted_xxvi.cpp) | Autonomous start-to-return literal execution for its validated corpus | Complete compact semantic ISA/program or universal equivalence |

## Current readable code

[JACK XVII](jack-xvii.md) generates
[user.structured.cpp](../jack_xvii_evidence/generated/user.structured.cpp) from
the PE's materialized bytecode. It recovers a prefix, a natural loop and a return
suffix under an enforced initial-register contract. Stack/register effects and
native host memory operations remain explicit. There is no runtime opcode switch,
PE decoder or captured instruction stream in the generated executable.

The direct backend supports arbitrary supplied initial logical registers;
the structured backend requires the first 16 to be zero, as in the native
corpus and abstract-state proof. Their validation contracts are separate.

## Earlier functional demonstrator

The XXI build script remains `src/build_recompile_xxi.bat`. It builds original
configuration and rekeyed variants. The rekeyed variant deliberately combines
chosen credentials with chosen gate/ciphertext data. It validates that controlled
pipeline instance and prints a chosen flag, not the original challenge flag.

That demonstrator still uses the older User formula/strict Hex helper. It does
not automatically integrate the XXIII interpreter, current semantic compiler or
XXVI literal executor. Serial/SHA replacements are standard primitives, not
recovered virtual instruction programs. Native partial-block cipher reads and
input-trimming differences impose additional whole-program limits.

The final `pafet.cpp` must combine readable reconstructions faithful to all
four original VM mechanisms. Neither output-only replacements nor retaining
58,662 translated native instructions meets that final goal by itself.
