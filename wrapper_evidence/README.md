# Wrapper and runtime-guard audit evidence — 2026-10-28

Scope: [wrapper report](../PAFET_WRAPPER_AUDIT.md) and
[Windows reconciliation protocol](../PAFET_WINDOWS_RECONCILIATION.md).
Global semantic coverage remains **D**. No Windows length matrix, credential
search, DES or original SHA compression was run in this phase.

| Artifact | Meaning |
|---|---|
| `wrapper_tests.json` | Four original-byte buffer fixtures, seven formatting-request cases, nine clock-helper cases, thirty guard fragments, ten adapted native wrapper runs and three ATTS faults |
| `sha_*.txt` | Original wrapper VM with compression recorder and explicit stream adapters; output is the initial state serialized, not a digest of the input |
| `serial_*.txt` | Both adapted original serial VMs, exact source/result bytes and bounds observations; no original username gate |
| `fault_*.txt` | One encrypted-blob byte changed; original guard condition reaches the failure recorder, exit 79, without normal wrapper output |
| `static/*.asm` | Focused wrapper/native-boundary, timing-helper and fail-stop disassembly; no crypto-core reversing |
| `original_pass8_static_diff.json` | Two local executable identities and their exact two-byte code difference; not Windows execution evidence |
| `fable_x64dbg_reported.json` | User-communicated result, explicitly unverified; no invented raw bytes or dump hashes |
| `fable_reconciliation_pending.json` | All raw stages missing; comparison INCOMPLETE |
| `capture_template.json` | Empty transport template, not an observation |
| `reconciliation_selftest.json` | Ten synthetic parser/comparison tests; zero Windows captures and zero cipher-model executions |
| `baseline_before_changes.json` | Component-suite status and output hash recorded before editing the native probe at base a0599b9 |
| `native_mode_regression.json` | Default string decoder and SHA-fail control route after adding optional wrapper modes |
| `manifest.json` | Current report/source/evidence hashes and explicit test scope; excludes itself |

Reproduce using the commands in the reports, targeting a new evidence directory.
The probe requires `scripts/native/wrapper_audit.h`. Its SHA mode bypasses stream
lifetime code and replaces compression/format extraction. Guard fragments use
artificial metadata and a failure recorder. ATTS faults execute the original
condition, but replace the nonreturning failure body with a recorder/exit.
These are components/oracles, never an unmodified original acceptance run.

The serial empty-key trace has **zero key-byte reads**, 256 alternate state
updates and exactly N data writes. Logical NUL and high bytes are preserved in
both storage layouts exercised. The monitored source-copy component checks
legal indices; this is not a proof that every native runtime path is bounded.

Past manifests remain snapshots of their own commits. In particular, current
wrapper header inclusion changes the native source relative to controller
commit `a0599b984d9d94fb346a153f6d6fe76de5225d23`; use that commit for historical
controller source hashes. Do not rewrite historical evidence to conceal edits.
