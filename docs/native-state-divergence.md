# Native User-VM state divergence — cause and correction

Follow-up to `aa933bd`, 30 October 2026. **The replay did not start from the
same memory as Windows.** The collector excluded pointed buffers on the native
stack and the old loader silently supplied zero bytes for their uncaptured
parts. No interpreter instruction or C++ arithmetic needed to be changed.

The missing-input cause is now demonstrated with fresh native single-step
traces, independent counterfactual replays and corrected Frida captures.
The old XXVII process is gone: its missing entry bytes cannot be recovered
independently from the original artifact. Those snapshots are rejected as
incomplete; they are not repaired using their expected results.

## 1. The input contract that was wrong

`scripts/pafet_capture_native_xxiv.py` saved an 8-KiB window from `ctx`, plus
2 KiB above/below entry RSP and selected external allocations. Its generic
pointer scanner explicitly skipped every pointer into the native stack.

But the internal state includes two separately pointed arrays:

| Pointer field | Required extent | Observed location in these frames |
| --- | ---: | --- |
| `qword(ctx+0x1158)` | `0x1000`: 512 uint64 encoded register cells | `ctx+0x15f0 .. ctx+0x25f0` |
| `qword(ctx+0x1160)` | `0x2000`: 1,024 uint64 encoded stack cells | `ctx+0x25f0 .. ctx+0x45f0` |

Thus the context snapshot stopped **0x5f0 bytes before the end of the register
array** and did not include the virtual stack array. These positions are
observations, not a new ABI requirement: the fix follows the pointers and
sizes rather than hard-coding the arrays' relationship to `ctx`.

The old Unicorn harness mapped a generous native-stack range and initialized
only the captured slices. Unprovided bytes stayed zero. Being mapped did not
mean being captured. Agreement at return could hide earlier differences when
DROP discarded a value obtained from an uncaptured stack cell.

## 2. Native observations without Frida instruction hooks

[pafet_native_step_capture.py](../scripts/pafet_native_step_capture.py) launches
the existing two-byte SHA-gate variant under the Windows debug API. A hardware
execution breakpoint selects the original entry; trap-flag single-stepping
then records each instruction. No software breakpoint or instruction patch is
used. The runtime `.text` is checked against the relocated verified variant;
the VM code is unchanged from `pafet.bin`.

The entry capture stores GPRs, arithmetic flags, all 16 XMMs, MXCSR, GS/TEB,
the committed native stack, pointed allocations and writable image state.
It is saved in a separate `*.entry.json.gz`. Native instruction bytes,
operand reads, written bytes and after-registers go only in `*.trace.json.gz`.

Two DROP invocations and the first two **naturally occurring** register-rekey
calls are preserved. No counter, threshold or logical VM state was modified
to trigger the rekey. The second call is the important nonzero-register-tail
case; the initial rekey alone would miss this defect.

Sources for the debugging interface are Microsoft's
[debug-event documentation](https://learn.microsoft.com/en-us/windows/win32/debug/debugging-events)
and [thread-context API](https://learn.microsoft.com/en-us/windows/win32/debug/thread-functions-for-debugging).
The comparison keeps debugger-added TF/RF out of the architectural projection.
Debugger-sensitive instructions such as PUSHFQ are rejected rather than treated
as ordinary uninstrumented observations.

## 3. First propagated divergence in DROP

In [drop_control/frame_00](../state_divergence_evidence/drop_control/comparison.json),
replaying with legacy stack coverage matches the first **128 instructions'
defined observations**. Instruction 129 is:

```text
preferred VA: 0x140003baa
xor rdx, qword ptr [rbx + rax]
effective address: 0xe4ec588c20
native entry bytes at that address: a4 39 a5 d5 83 9c 6b f1
legacy replay bytes:                00 00 00 00 00 00 00 00

RDX after Windows:       0
RDX after legacy replay: 0xf16b9c83d5a539a4
```

The memory operand belongs to the pointed encoded virtual stack. The native
entry snapshot already contains its nonzero bytes; the replay has not needed
any later observation to obtain them. This is the first propagation of the
missing input into GPR state in this DROP trace, not the first time the two
initial memory images differ. They already differ at entry.

DROP subsequently discards the decoded value, so endpoint GPR/context checks
can reconverge. That explains why the earlier passing return comparisons did
not establish instruction-level native equivalence.

## 4. First propagated divergence causing persistent rekey differences

The first native rekey starts with a zero-filled register tail. Removing that
tail is therefore a weak control: it cannot expose the bug. The second native
rekey starts with 754 nonzero bytes in the uncaptured tail.

For [second_rekey/frame_01](../state_divergence_evidence/second_rekey/comparison.json),
both legacy coverage and the narrower **register-tail-only** ablation match
3,746 instructions. At instruction **3,747**:

```text
preferred VA: 0x140004e4e
mov rdx, qword ptr [rax + rcx*8]

ctx:               0xa094d56300
register-table:    0xa094d578f0   (ctx + 0x15f0)
effective address: 0xa094d58300   (ctx + 0x2000)
cell:              322          (bank 1, logical register 66)

Windows RDX: 0x023d10f32b7a9fa3
replay RDX:  0
```

The little-endian bytes `a39f7a2bf3103d02` are present in the **entry** memory
capture at that address. The failing replay had zeroed exactly the uncaptured
tail. No preceding defined GPR, RIP, XMM, MXCSR, memory-write or arithmetic-flag
observation diverges. Subsequent arithmetic propagates the wrong cell through
reencoding and the checksum; the later store at `0x140004ef1` is a consequence,
not the first disagreement.

With only the register tail omitted, this fresh run ends with **762 different
context bytes** and **1,508 different register-array bytes**. The old XXVII run
reported 764 context bytes; byte counts vary with the process seed and actual
encoded values. The causal experiment does not require manufacturing that
exact old count. With complete entry inputs, **all 14,244 instructions**, the
final context and both entire pointed arrays match Windows.

## 5. Raw flags versus defined observations

Raw PF/SF bits can differ earlier after IMUL, including step 10 of the DROP
control. They are recorded in `first_raw_arithmetic_flag_difference`; they are
not hidden or copied into Unicorn. The
[Intel instruction reference](https://cdrdv2-public.intel.com/671110/325383-sdm-vol-2abcd.pdf)
defines CF/OF for IMUL and leaves PF/AF/ZF/SF undefined. Capstone 5.0.9 incorrectly
advertises MODIFY_SF for the two-operand form. The comparator applies the
architectural CF/OF mask instead of trusting that metadata.

Execution retains Unicorn's own flags after every instruction. Actual branch
decisions are still checked through RIP; an undefined-bit-dependent branch
disagreement would fail. These raw undefined flags explain an earlier bit-level
difference, but not the missing-array data or persistent context mismatch.

## 6. Correction and information flow

The native collector now explicitly captures the full register and virtual-stack
arrays even when they are on the native stack. Capture uses each exact pointer
and extent, checks availability and records both before/after images. It does
not blindly retain arbitrary stack-pointer candidates from the generic scan.

[pafet_uservm_inputs.py](../scripts/pafet_uservm_inputs.py) validates coverage
from **before** bytes only. Frames declaring the new input contract are checked
by the existing Unicorn harness before execution. All six original XXVII
snapshots fail this complete-input contract, rather than acquiring guessed data.

The independent [Replay](../scripts/pafet_state_replay.py) accepts an entry
snapshot and the original PE identity. It never opens a trace or expected result.
Its default requires supplied pages for both complete pointed arrays. It steps
from its own RIP; native trace PCs are not fed back as execution addresses.
The comparator reads observations separately and never writes them to the model.
The counterfactual modes are labelled test ablations, not production repairs.

This is the data flow:

```text
PE + captured BEFORE state/memory -> autonomous Unicorn -> actual results
captured native reads/AFTER state ----------------------> comparator only
```

No C++ instruction semantics were changed. The existing C++ model, initialized
from the same complete input memory, also matches the original x64 instruction
by instruction and agrees with the native final GPRs/context/arrays.

## 7. Verification

| Test | Result |
| --- | --- |
| Native Windows hardware/TF traces | 4 frames, **31,990 instructions**; DROP plus two natural rekeys |
| Complete-input Unicorn versus Windows | Every defined instruction observation matches; final context and both arrays match |
| Existing C++ versus original x64 on the same four inputs | 31,990 instruction steps match; native final GPRs/context/arrays match |
| Corrected Frida collector | 6 fresh frames, **12,648 C++/x64 lockstep steps**; native 16 return GPRs, context and all captured memory match |
| Legacy/single-tail negative controls | First bad reads localized independently; persistent rekey differences reproduced |
| Historical input validation | All 6 old snapshots rejected as incomplete |
| Regression unit tests | 5 pass, including missing-page rejection and autonomous execution while oracle-file access is blocked |

See [regression.json](../state_divergence_evidence/regression.json),
[DROP comparison](../state_divergence_evidence/drop_control/comparison.json) and
[rekey comparison](../state_divergence_evidence/second_rekey/comparison.json).
Hashes bind each entry/trace file and the capture/replay/comparison sources.

## 8. Reproduction

From the repository root, install the dependencies in
`jack_xxiii_evidence/requirements.txt`. Replay and comparison run with Python
on Windows or Linux; the C++ regression build requires Linux/WSL GCC:

```bash
python scripts/pafet_state_compare.py --captures state_divergence_evidence/drop_control
python scripts/pafet_state_compare.py --captures state_divergence_evidence/second_rekey
python -m unittest discover -s scripts -p test_pafet_state_inputs.py -v
python scripts/pafet_state_regression.py
```

The regression builds its own library under the ignored
`state_divergence_evidence/build/`; subsequent runs can use `--no-build`.
An autonomous replay can run with the native trace file unavailable:

```bash
python scripts/pafet_state_replay.py \
  --entry state_divergence_evidence/second_rekey/frame_01.entry.json.gz \
  --output state_divergence_evidence/build/autonomous.json
```

To recapture native instruction observations on Windows x64 (owned process;
no Frida needed for these traces), use fresh output directories so files from
different process runs cannot be mixed:

```powershell
$run = Join-Path 'state_divergence_evidence/build' ([Guid]::NewGuid().ToString('N'))
python scripts/pafet_native_step_capture.py --user alice --frames 2 --out "$run/drop"
python scripts/pafet_native_step_capture.py --entry 0x4930 --user ramon --frames 2 --out "$run/rekey"
python scripts/pafet_state_compare.py --captures "$run/drop"
python scripts/pafet_state_compare.py --captures "$run/rekey"
```

For a fresh six-frame corrected Frida capture, direct output away from
historical evidence (requires Frida):

```powershell
python scripts/pafet_cookie_capture_xxvii.py --out "$run/frida"
```

New processes change seeds, addresses and instruction counts. Comparisons are
regenerated from each entry/observation pair; old numeric examples refer to the
committed run. Keep the committed datasets if retaining this exact reproducer.

The result closes this capture-induced divergence for the stated frames. It
does not establish universal interpreter equivalence, complete User-VM guard or
exception coverage, or complete devirtualization of any additional VM.

The current reusable laboratory is [JACK XXVIII](../PAFET_JACK_XXVIII.md).
It adds pinned artifact verification, generic/native and User profiles,
read-before-write initialization checks, strict empty/incomplete/alias failures,
new observed routes and explicit queue/C++ blockers. Its runner supersedes
directory-glob comparisons for permanent regression. The figures above remain
the original follow-up's historical measurements.
