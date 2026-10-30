# JACK XXX — PC 5: continuous virtual execution

30 October 2026. Initial local and fetched `origin/main` HEAD:
`8207c85ee15566cc18762ba3209ff0938a115872`. No newer upstream work was replaced.

## Result: Level C reached

A semantic state machine now executes **two dependent Serial instructions from
one initial capture**:

```text
PC 0  PUSH_POOL_U32 selector=0  -> PC 5, SP 1
PC 5  STORE_REG_U16 register=16 -> PC 8, SP 0
```

The second instruction writes `0x422d362bcf1eb613`, computed from the original
PE's pool, into virtual register 16. It also scrubs and recodes the popped
stack cell. Neither the value nor any intermediate state is injected from an
observation.

**Three fresh independent Windows processes** match every compared byte at
both next-inline-decoder boundaries. A fourth fresh process matches two steps
ending at an explicit wrapper-return handoff. One older independent capture
also gains continuous equivalence. In the fourth fresh process, the child
returns to its pending parent wrapper. Native caller **resumption** remains
unsupported, including eventual return to the outer dispatcher.

Primary evidence: [validation](jack_xxx_evidence/validation.json),
[pinned corpus](jack_xxx_evidence/corpus.json),
[state matrix](jack_xxx_evidence/status.json),
[unit tests](jack_xxx_evidence/unit_tests.json) and
[counterexamples](jack_xxx_evidence/lab_counterexamples.json).

## Evidence levels

| Level | What is established | What it does not establish |
|---|---|---|
| A — native replay | Autonomous original x64 matches Windows instruction observations under the capture contract | Recovered virtual semantics |
| B — local semantics | A reduced operation matches all declared virtual memory at its named native boundary | Continuous execution through an intermediate reset |
| C — continuous semantics | The same mutable candidate state executes both instructions, decoder and supported continuations without any intermediate restoration | Whole Serial-VM equivalence or arbitrary continuation routes |

Level C is implemented by [SerialVMState](devirt/serial_continuous.py), exported
from [devirt.serial](devirt/serial.py). The implementation uses scalar state
operations, table reads and explicit effects. Its only native decoding is the
fixed generated-thunk address codec; it does not interpret handler instructions
or invoke Unicorn. Tests disable observation-file access and `Uc.emu_start`
while both steps execute.

## 1. Audit and starting boundary

The README, XXVIII/XXIX reports, gap/divergence documents, capture/replay tools,
Serial models and raw XXIX records agree on the earlier limit: semantic
comparison stopped immediately after the PUSH helper. This was not the end of
the native instruction wrapper.

The new initial state is captured at one of the four natural indirect CALL
sites after the first opcode has been decoded. The opcode-fetch count is 1,
encoded byte PC is 1, and the last instruction PC is 0. Initialization and the
first opcode-header decode are therefore outside the new continuous interval;
their previous evidence is retained.

The virtual frontier is now **before the next inlined decoder reads PC**, after
the opcode's continuation commits. There need not be a call to `0x229c70`:
the decoder is cloned inside the wrapper. Treating that function as the only
decoder entry would miss the actual transition.

## 2. Complete first-instruction continuation

After PUSH, the recovered supported continuation:

1. Checks threaded-call mode, the runtime guard token, halt state, empty pending
   queue, current domain control label and available thread budget.
2. Reads and refreshes encoded control fields. These reads advance the PRNG and
   reseal tags even when the logical value is unchanged.
3. Updates the integrity chain at `ctx+0x11e8` and the decoder key at `+0x20`.
4. Mutates code and shadow bytes at the previous position, last instruction
   position and current PC. The same XOR mask is applied to both buffers, so
   their combined decoded header remains stable. Mutation state/count changes.
5. Refreshes the position controls, applies the table-bound feedback operation
   corresponding to native helper `0x1f1520`, and updates key/hash state.
6. Either reaches the next inline decoder or reseals an outer-dispatch label
   and completes the wrapper return path.

The feedback helper contains substantial arithmetic that cannot be discarded
just because it leaves the logical stack unchanged. Its per-wrapper marker is
read from original PE instruction immediates. The opaque predicate following it
has a provable bit identity: `~(x*(x+1)) & (x^(x+1))` always has bit zero set.
The remaining low-key-bit condition selects a **real** scheduler-exit route;
it is not an always-dead branch.

The model separates program effects, dispatch, wrapper noise and runtime
handoffs, while preserving all their observed virtual-memory effects. Wrapper
noise is retained because context equality includes its storage. Unknown queue,
halt/guard failure, exhausted budget or zero-feedback paths fail explicitly.

## 3. The actual instruction at PC 5

Direct native decoder/handler observations and independent calculation agree:

```text
pristine PC 5 header: a3
decoded opcode:      5
operand bytes:       eb c3
operand length:      2 bytes
total length:        3 bytes
decoded operand:     16
effect:              R[16] = pop()
next PC:             8
```

The live header byte may be changed by code mutation. The decoder obtains the
header as `code[PC] XOR shadow[PC]`, then applies the PE lookup table and its
XOR constants. Identity is established by the observed fetch, remap, resolved
handler and effects, rather than a static opcode-table guess.

The two-byte operand reader at `0x1f1d80` uses wrapping uint32 arithmetic:

```text
h = operand_PC * 0x84e97925
reg_operand = ((load_le16(code + operand_PC)
                XOR h XOR ((h XOR 0x09f46000) >> 13)) * 0xffff8c3d) & 0xffff
```

For operand PC 6, this produces 16. The handler uses its low byte as the virtual
register index. POP decodes and refreshes SP, decodes the tagged/rotated stack
cell, advances SP to zero, then stores newly encoded PRNG-derived scrub data in
the removed cell. Register storage selects a bank from the register epoch and
index parity, creates a new tag, applies the original XOR/add encoding, and
updates `ctx+0x11c0`.

The candidate therefore compares the entire stack, including the now-inactive
cell, and both register banks. Merely assigning a register and decrementing SP
would fail. No separate virtual flag-register effect has been identified for
this pair; full context comparison includes opaque state without inventing a
flag architecture.

## 4. Decoder, remap and domain transitions

Between instructions, the model reads PC 5 from its own resealed state, checks
materialization/window metadata, updates the live dispatch key, handles the
supported table probe, advances the decoder epoch, obtains opcode 5, updates
the token/key/fetch counter, chooses the next domain, remaps the opcode and
resolves its target. The child thread budget is computed from its parent.

The previously unmodeled XXIX branch at `0x229df4` is now reconstructed and
checked against its retained natural Windows capture. It **probes a selected
dispatch-table entry and refreshes the live key/counter**. It does not rewrite
the remap table. Calling it a table rebuild would overstate its effects.

That probe is demonstrated at Level B on the existing first-decoder capture.
None of the fresh Level C chains takes the probe branch; this is not claimed
as continuous probe-path coverage. The separate full remap rebuild and register
rekey remain explicit unsupported operations.

## 5. Reproducible boundaries and results

All addresses in this table are native RVAs. Decoder boundaries are the next
PC-read CALL sites; context comparison occurs before that call executes.

| Fresh process | PUSH body | PC 5 frontier | STORE body | PC 8 frontier | Native instructions to final frontier |
|---|---|---|---|---|---:|
| `chain_a` | `0x209290` | `0x209934` | `0x202800` | `0x202ed6` decoder | 2,575 |
| `chain_e` | `0x21d530` | `0x21dbdb` | `0x20fa70` | `0x210143` decoder | 2,575 |
| `chain_f` | `0x21d530` | `0x21dbdb` | `0x21e270` | `0x21e94d` decoder | 2,577 |
| `chain_b` | `0x21d530` | `0x21dbdb` | `0x202800` | `0x20350f` return handoff | 2,600 |

The first three close both steps at inline decoder frontiers. The fourth is a
bounded continuous result ending after the second wrapper's context effects,
at its return instruction, before control returns to the pending parent
wrapper. Calling `step()` after that handoff raises an
unsupported-resume error. It is excluded from the two-inline-chain success
requirement.

The four fresh bounded C intervals contain **10,327 native instructions** as
observations of **eight virtual instruction executions**, not 10,327 recovered
virtual operations. `chain_b`'s older terminal set also recorded 64,038 x64
instructions before its final capture endpoint. Those later instructions pass
Level A but contribute no additional continuous semantic claim.

Five checkpoints per chain compare:

- Opcode-1 core, complete instruction-1 continuation, second handler entry,
  opcode-5 core, complete instruction-2 continuation/handoff.
- All 0x11f0 context bytes, both register banks, all 1,024 stack cells, code and
  shadow, both bitmaps, windows, keys, tags, counters and PRNG.
- The pointed dispatch table, generated thunk pool and writable PE sections.

Required roots are derived and checked independently of the generic capture
profile's optional descriptors. Missing roots and contradictory aliases fail
before candidate execution. Native observations are reconstructed from initial
memory and measured writes for comparison only. Native call-stack scratch,
GPR temporaries, XMM and CPU flags are outside the reduced semantic state;
Level A checks the original CPU observations separately.

Fresh C chains exercise XOR and add control encodings, XOR and add register
encodings, distinct seeds and domain paths `1→1`, `3→1`, `3→2`, `3→3`. A prior
independent XXIX capture also validates `0→3`. All use `serial01`; differing
usernames/processes are not broad Serial-input coverage. Both instructions
remain in the first materialized window; new windows were not forced.

## 6. Counterexamples and fixes

[The failure ledger](jack_xxx_evidence/lab_counterexamples.json) preserves:

- **PE ownership:** relocating a `pefile.PE` during preflight invalidated its
  original section views (`mmap closed or invalid`). The semantic model now
  owns a pristine PE, separate from validation's relocated image. A minimal
  reproducer and regression test cover the cause.
- **Short thunk:** `chain_b` exposed a two-instruction `movabs; jmp` codec.
  Assuming four instructions decoded padding as code. Resolution now stops at
  the first JMP and validates the supported fixed templates. No expected
  target is substituted.
- **Missing terminal alternatives:** initial capture selection omitted outer
  wrapper returns. `chain_c` and `chain_d` reached the 100,001-step collection
  limit. Both raw captures are retained and rejected before A/C validation.
  New captures declare both inline-decoder and wrapper-return terminals.
- **One-byte negative control:** corrupting one recorded candidate PRNG byte
  makes comparison fail at `ctx+0x1b0`. Its exact first boundary/address is
  reported; the original PE and native state are unchanged.
- **Return resume:** the complete prior XXIX `opcode1_len16` capture now matches
  the full first-wrapper handoff, but a second step fails because the native
  return continuation is not modeled. It remains Level B, not C.

No partial frame is repaired or silently skipped. The registry lists accepted,
blocked and rejected cases explicitly. Unknown-state failures latch the model
so retrying cannot accidentally continue from a partly modified state.

## 7. Reuse and remaining work

The implementation separates operand readers, pool decoding, encoded control
access, stack/register effects, mutation, integrity feedback, opcode decoding,
domain selection, target resolution and continuation. Static parameter bindings
for eight native wrappers are reproducible from the original PE. Not every
binding has the same differential coverage; a binding is not an ISA proof.

Next work is PC 8 and the register-rekey boundary, native caller/outer dispatcher resumption,
full remap rebuild, other cache/materialization windows and additional opcodes.
Later Level A observations include opcode 4, but its semantics are not supplied
by this interpreter. A third step fails rather than borrow native execution.
No complete Serial ISA, virtual CFG or virtualized RC4 program is claimed.

## 8. Reproduction and regressions

Python 3.10+ with `jack_xxiii_evidence/requirements.txt`, from repository root:

```bash
python scripts/pafet_serial_audit_xxx.py
python -m devirt.serial_continuous_validate
python -m unittest devirt.test_ir devirt.test_serial devirt.test_serial_continuous -v
python -m unittest discover -s scripts -p 'test_pafet_state*.py' -v
python -O -m unittest discover -s scripts -p 'test_pafet_state*.py' -v
python -m devirt.serial_validate --output jack_xxx_evidence/xxix_regression.json
```

Example candidate API (the PE is the original file; `before` is the verified
entry JSON, not a native after-state):

```python
from devirt.serial import SerialVMState
state = SerialVMState.from_initial_capture(before, original_pe)
first = state.step()
second = state.step()  # receives only state produced by first
```

Linux/WSL C++ regression, using a matching existing build or omitting
`--no-build` to rebuild:

```bash
python scripts/pafet_lab_xxviii.py --cpp --no-build --output jack_xxx_evidence/xxviii_regression.json
python scripts/pafet_state_regression.py --no-build --output jack_xxx_evidence/uservm_regression.json
```

Hex's separate MSVC arithmetic check can be rerun without overwriting its
historical report:

```powershell
python -c "import pathlib,sys;sys.path.insert(0,'scripts');import pafet_hexvm_wide_diff_xxvi as t;t.OUT=pathlib.Path('jack_xxx_evidence');t.main()"
```

The operation retains the XXVIII/XXIX regressions, **54 distinct unit tests**
(29 IR/Serial and 25 state-contract tests, with the latter repeated under
optimized Python), and **1,024 Hex portable-arithmetic comparisons**. The Hex
check is a CPU-runtime regression, not new Hex-VM semantic coverage.

Fresh Windows captures use the existing controlled research lab only. See
[capture_command.ps1](jack_xxx_evidence/capture_command.ps1) for the exact
four-entry/twelve-terminal command. It reads the fetch counter to select the
first instruction and never changes it. Original and variant hashes, source
archives, frame hashes and distinct run IDs are preserved in the manifests.
The variant still differs only at the two documented SHA-gate bytes; its route
coverage is not original gated whole-program equivalence.

Pre-existing CRLF-only workspace differences in 77 files were checked against
the starting Git blobs and normalized back to those exact bytes, with a local
ignored backup. No historical document or evidence content was rewritten.
Original credentials/flag remain unknown; this operation performs no search.
