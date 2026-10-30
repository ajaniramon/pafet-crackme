# JACK XXVIII — ESTADO CERO

30 October 2026. Baseline: `b222ca13230cd3b8947719b8c2b830e8e086a38d` on `main`.

## Result and scope

This operation consolidates the native-state correction into an input contract,
an autonomous x64 replay and a pinned regression corpus. It adds **5,837
Windows/Unicorn instruction comparisons across six complete captured regions**:
5,813 in four User-VM regions, six in the CRT security-cookie check, and 18 in
one Serial-VM initialization iteration. A seventh capture preserves the queue
exception boundary as **blocked**, outside those totals.

The four historical hardware-stepped frames still match at **31,990
instructions**. The independent six-frame Frida regression still passes
**12,648 C++/original-x64 steps** and its native final-state checks. These are
different measurement contracts, not interchangeable counts of Windows
single-step equivalence. No universal VM equivalence or flag recovery is claimed.

Primary results: [pinned inventory](jack_xxviii_evidence/corpus.json),
[Windows/Unicorn regression](jack_xxviii_evidence/regression.json),
[C++ comparison](jack_xxviii_evidence/regression_cpp.json),
[legacy regression](jack_xxviii_evidence/legacy_regression.json) and
[unit tests](jack_xxviii_evidence/unit_tests.json).

## Initial audit

The audit read the README, JACK XXIII, XXIV, XXVI, XXVII, the
[native-state investigation](docs/native-state-divergence.md), and
[JACK XVII](docs/jack-xvii.md), then checked the capture/replay/translation code
and raw evidence. The prior missing-array diagnosis is supported by the entry
bytes and independent native traces; it was not repeated or replaced.

The initial laboratory had additional reproducible acceptance defects:

- An empty capture directory produced `all_complete_inputs_match: true`.
- Contradictory overlapping memory regions used last-writer-wins loading.
- An empty XMM string left missing lanes initialized to zero.

[Baseline experiments](jack_xxviii_evidence/baseline_defects.json) record those
observations and source hashes before changes. The new checks reject them.
The old Frida `require_complete` helper proves coverage of two User arrays,
not completeness of a general native context. It remains explicitly scoped to
its historical format; new native captures use the stricter contract.

## Capture and replay contract

[Contract implementation](scripts/pafet_state_contract.py) validates inputs
before creating Unicorn. [Replay](scripts/pafet_state_replay.py) never opens a
trace or expected after-state. There are two discovered profiles:

| Profile | Required VM-specific roots | Scope |
|---|---|---|
| `user-v1` | RCX context window, pointers read at `+0x1158` and `+0x1160`; 0x1000 and 0x2000 bytes | Observed encoded register banks and virtual stack; not an ABI for other VMs |
| `native-x64-v1` | No presumed User layout; optional explicit `--region REGISTER:SIZE` roots | Generic native regions whose dependencies must be discovered independently |

Both require 16 GPRs, RIP, RFLAGS, all 16 XMM registers, MXCSR, runtime image
base, GS/TEB base, native return slot, captured writable PE sections and the
runtime security cookie. New captures additionally declare their committed
native stack interval, segment selectors, initialized IAT and required roots.
The stack interval is the committed `VirtualQueryEx` region containing RSP;
other discovered pointer pages are captured separately. It is not a proof that
all possible future stack allocations are present.

Equal aliases merge byte-for-byte; contradictory aliases fail. Captured
readonly PE bytes must match the original relocated image; initialized IAT
bytes are an explicit loader-populated exception. The original PE hash is
mandatory. Replay applies its relocations to the captured runtime base rather
than assuming the preferred base. The initialized cookie is captured from the
process; no cookie value comes from a native result or is patched into the PE.

GS-based addressing uses the captured TEB. TLS discovery currently includes
the pointer array and slot-zero root, with coverage checks for those roots.
Other TLS slots or transitive pointers have no assumed closure. FS accesses,
explicit segment-selector semantics, extended floating/vector state outside
the recorded SSE state, and nondeterministic/OS instructions fail explicitly.
New segment values are provenance for the flat Windows x64 scope, not a
descriptor-table emulator. Native page protections are recorded; replay does
not reproduce all Windows protection/guard-page semantics or exception delivery.

Memory initialization is tracked independently of Unicorn's mapped pages.
Every executed read and instruction fetch must have captured/file-defined
bytes or bytes initialized by an earlier write. Mapping a page no longer makes
its absent bytes valid zero inputs. Preflight proves **declared input coverage**;
successful execution proves read closure only for that observed path. New
dependencies terminate the replay and remain evidence of an incomplete route.

### Flags and observations

TF/RF are normalized as debugger control bits. Non-arithmetic flags are
compared; arithmetic flags are compared only while architecturally defined.
MUL/IMUL define CF/OF, DIV/IDIV leave arithmetic flags undefined; the existing
Capstone IMUL metadata correction remains. Zero-count shifts preserve the prior
definition mask. Raw undefined-flag differences are still reported. No observed
flag or branch decision is assigned back to the candidate.

The comparator executes to the **input-declared return or stop boundary**
before using native observations. It compares instruction addresses/bytes,
GPRs, RIP, XMM, MXCSR, defined flags and byte-level operand reads/writes at every
step, then the captured final context/arrays/explicit roots. It rejects empty
or broken observation chains and traces truncated before a complete boundary.
The collector's operand observer covers the x64 instructions in this corpus;
unrecognized implicit/string/vector memory effects require new observer tests
before any expanded-route claim.

## New native coverage

All entries were reached naturally in independent processes running the existing
controlled `pafet_pass8.exe`. Only debugger hardware breakpoints and single-step
control flags are used; no instruction patches or internal-state mutations
force coverage.

| Capture | Entry RVA / boundary | Username bytes | Windows/Unicorn instructions | C++ result |
|---|---|---:|---:|---|
| [remap_empty](jack_xxviii_evidence/captures/remap_empty/manifest.json) | `0x74d0` / return | 0 | 55 | 55 pass |
| [resolver_len1](jack_xxviii_evidence/captures/resolver_len1/manifest.json) | `0x3ebb0` / return | 1 | 10 | Missing entry translation |
| [store_len16](jack_xxviii_evidence/captures/store_len16/manifest.json) | `0x216d0` / return | 16 | 2,490 | 1,978 match, then missing `0x2d5d0` |
| [transfer_len25](jack_xxviii_evidence/captures/transfer_len25/manifest.json) | `0x25020` / return | 25 | 3,258 | 3,258 pass |
| [cookie](jack_xxviii_evidence/captures/cookie/manifest.json) | `0x3a3dc0` / return | 5 | 6 | 6 pass |
| [serial_seed](jack_xxviii_evidence/captures/serial_seed/manifest.json) | `0x22a2e0` → `0x22a2ee` | 5 | 18 | Serial prefix not translated by User C++ library |

The Serial region performs one native seed-fold iteration, including the
original helper at `RVA 0x2040`. It validates the transport outside User-VM;
it does not recover a Serial virtual instruction or its materializer.
The cookie capture is a CRT region, not an additional virtual opcode.
The complete additions contribute **1,287 native PCs** and **82 observed control
edges** absent from the four-frame historical hardware corpus. These counts
include Serial and CRT, and are set differences of RVAs/observed transitions,
not semantic instruction coverage or global devirtualization percentages.

### Queue counterexample

[Queue manifest](jack_xxviii_evidence/captures/queue/manifest.json) preserves
32 Windows instructions from `RVA 0x6010`. The path reaches a call at
`RVA 0x3a5fe4`, through IAT `RVA 0x3cd158`, imported as
`KERNEL32!RtlPcToFileHeader`. Native stepping stops before executing that
external body. Unicorn matches the first **31** instructions and then raises
`UC_ERR_FETCH_UNMAPPED` on the external target. Its single-step API attempts
that target fetch before returning the CALL's completed observation.

The last CALL is not silently skipped or synthesized. The runner reports the
unavailable step and the exact blocked dependency. Queue context/arrays at
the boundary match, but that final observation does not validate the exception
or unwind route. Reproducing Windows unwind/image-lookup state is a concrete
blocker. It must be captured/modelled independently before extending this path.

### C++ counterexamples

The resolver entry and the STORE_REG call at `RVA 0x2d5d0` are absent from the
translated CFG, not state-input mismatches. Both are recorded as explicit
missing-translation blockers with their first PCs. They are not delegated to
Unicorn by C++. The pinned registry names these known gaps; any other C++ failure
fails regression. A report with required checks passing still contains these
open gaps and does not mean every new region has C++ equivalence.
The current C++ CPU ABI also lacks MXCSR, so its lockstep contract covers
GPR/RIP/defined flags/XMM/writes, unlike the broader Windows/Unicorn comparison.

## Permanent regression and integrity

[Runner](scripts/pafet_lab_xxviii.py) verifies the committed SHA-256 inventory
before replay, enforces exact manifest/frame inventories and never automatically
blesses changed input hashes. Legacy corpus bytes were checked against the
baseline Git objects before pinning. Entry snapshots and observation files are
hashed separately. New collector manifests also hash each artifact, identify
the executable pair, profile, selection, runtime and complete/blocked terminal.
The historical captures reference the exact collector source retained as
[capture_source.py](jack_xxviii_evidence/capture_source.py); it is an audit copy,
not a second entry point. Current capture code additionally preserves failure
diagnostics and hashes its contract dependency.

Two deliberate input ablations (`legacy` and `missing-register-tail`) remain
comparison-only negative controls: at least one historical frame must expose
each corruption. Unaffected frames are reported too. The older incomplete
six-frame corpus remains rejected, not repaired from output values. Unit tests
exercise empty corpora, malformed CPU state, missing stack/cookie/IAT/TEB,
overlap conflicts, modified code overlays, hash/inventory failures, truncated
observations, read-before-write holes, unsupported state, exact replay budgets,
zero-count flags and entry/oracle separation. Synthetic CPU fixtures are labelled
as tests and do not contribute native coverage.
All **25 unit tests** pass both normally and under `python -O`. C++ lockstep
still uses the legacy assertion-based checker, so both C++ runners explicitly
reject optimized Python instead of silently disabling those comparisons.

## Reuse for JACK XXIX

| Layer | Reusable now | Discovery still required |
|---|---|---|
| Windows capture | Hardware/TF stepping, full CPU transport, stack/TEB/IAT/cookie capture, explicit roots and stop boundaries | Correct entry, calling convention, pointer graph, generated executable pages and natural route selection |
| Unicorn | Relocated original PE, before-memory inventory, initialization checks, generic entry/stop | New host dependencies, extended CPU/OS state, VM-specific roots; no universal fallback |
| Comparison/runner | Hashes, inventory, instruction observations, negatives, machine-readable first failures | Observer support for newly encountered instruction effects and independent native evidence |
| User C++ | Existing literal bodies and scalar/vector runtime | Serial/SHA dispatchers and missing CFG bodies; MXCSR API extension if needed |

SHA has not received a new native capture here. Its JACK XVII seed-fold region
and shared helper are useful candidates, not proof of an identical state layout.
Hex's separate literal CPU/host model remains corpus-validated under XXVI; this
operation does not silently migrate it into the User replay ABI.

JACK XXIX can start Serial work using the verified generic capture path and
the 18-instruction native seed example. First follow materialization into its
first real instruction, discover roots, and fail on unknown dependencies. The
lab is ready for that bounded investigation, not for assuming a complete VM
state contract or automatically replaying all exception routes.

## Reproduction

From the repository root, Python 3.10+ and
[pinned dependencies](jack_xxiii_evidence/requirements.txt):

```bash
python -m pip install -r jack_xxiii_evidence/requirements.txt
python -m unittest discover -s scripts -p 'test_pafet_state*.py' -v
python -O -m unittest discover -s scripts -p 'test_pafet_state*.py' -v
python scripts/pafet_lab_xxviii.py
python scripts/pafet_state_replay.py --entry jack_xxviii_evidence/captures/serial_seed/frame_00.entry.json.gz --output jack_xxviii_evidence/build/serial_replay.json
```

Linux/WSL with GCC C++17 (the runtime needs `__int128`):

```bash
python scripts/pafet_lab_xxviii.py --cpp --output jack_xxviii_evidence/regression_cpp.json
python scripts/pafet_state_regression.py --output jack_xxviii_evidence/legacy_regression.json
```

The first command builds `jack_xxviii_evidence/build/libpafet_xxiv.so`.
`--no-build` reuses it; the report records binary/source hashes. The legacy
runner uses its own ignored `state_divergence_evidence/build/` library. A new
library is built by default; use `--no-build` only for a known matching build.

For fresh captures, use only the existing controlled Windows x64 research lab:

```powershell
$run = Join-Path 'jack_xxviii_evidence/build' ([Guid]::NewGuid().ToString('N'))
python scripts/pafet_native_step_capture.py --entry 0x216d0 --frames 1 --user abcdefghijklmnop --out "$run/store"
python scripts/pafet_state_compare.py --captures "$run/store"
python scripts/pafet_native_step_capture.py --profile native-x64-v1 --entry 0x22a2e0 --stop-rva 0x22a2ee --frames 1 --out "$run/serial"
python scripts/pafet_state_compare.py --captures "$run/serial"
python scripts/pafet_cookie_capture_xxvii.py --out "$run/frida"
```

Frida recapture additionally requires `frida==17.24.3`; it retains the narrower
legacy observation contract. New processes vary cookies, bases, seeds and step
counts. Review their manifests before extending the pinned registry. Do not
overwrite committed evidence or regenerate hashes just to make regression pass.

The original PE remains unchanged. The existing gate variant differs only at
file offsets `0x395efb` and `0x395efc` and has pinned SHA-256
`80a751350c8ed61ab25de6c8e81c2ec1c838af2126fe1eafbf1f89d0518407e7`.
Native claims apply to the observed variant routes executing original x64
regions. They do not prove the original executable's gated four-VM behavior.

## Open work

User-VM still needs broader scheduler/remap/rekey seed coverage, buffer-limit
paths, guards and independently modelled exception/unwind behavior; the new
16/25-byte cases do not exhaust storage boundaries. The logical bytecode/IR
result remains distinct from native mechanism reconstruction. Two C++ regions
are newly localized gaps. Serial/SHA bytecode grammar, materializers, virtual
state and dispatch still require investigation; Hex reduction remains partial.
The long-term readable four-VM `pafet.cpp` and original credentials remain open.
