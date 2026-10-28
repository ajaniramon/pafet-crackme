# Main logical-controller evidence — 2026-10-28

See [the controller report](../PAFET_CONTROLLER_SLICE.md) and
[global semantic coverage](../PAFET_SEMANTIC_COVERAGE.md). The logical main
program is complete **under explicit host contracts**; global outcome remains
**D**, not original credential acceptance or a key-space reduction.

| File | Scope |
|---|---|
| `main_bytecode_wire.bin` | All 2730 canonical bytes, forcibly materialized with original routines |
| `materializer_dump.txt` | One complete 105-block extraction; four configurations agreed |
| `decoded_main_program.json` | All 482 instructions, targets, constants and padding ranges |
| `main_program.txt` | Human-readable listing, including 73 instructions unreachable under contracts |
| `controller_slice_tests.json` | 361 map cases, 92 constant cases, 716 reader cases, 32 full control contrasts and branch dependencies |
| `operand_trace_success.txt` | Modeled favorable SHA/padding/shape; not an accepted original run |
| `operand_trace_username_reject.txt` | Modeled SHA failure |
| `semantic_regression.json` | Previous component and main/user projection suite repeated after native-hook changes; no tail/DES run |
| `manifest.json` | Current source/report/evidence hashes, dependency versions and scope |

Reproduce with the commands in the controller report, writing to a new output
directory. Raw heap addresses, opaque VM state and clone choices can differ;
semantic assertions do not require identical raw trace hashes. Do not confuse
a forced block dump with natural execution coverage.

The interpreter image is instrumented and native callbacks are modeled.
Operand component tests provide canonical bytes and stub the segment opener;
constant tests stub index reading and stack push. Materializer tests use a
Linux PE adapter, not the complete Windows runtime. No DES, SHA, credential
search or valid original acceptance is performed by the controller suite.

The previous manifests remain frozen: `audit_evidence/` belongs to commit
`5e76df02ed8adc75ac6cce151e172b7eede6b13b`; `semantic_evidence/` belongs to commit
`55567c0f09f32ac654a31764608cc363ef6d5bb5`. Verify their source hashes against
those commits, not against subsequently edited reports and instrumentation.
The current manifest excludes itself to avoid a recursive hash.
