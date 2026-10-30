# JACK XVII evidence — 30 October 2026

Read [the operation report](../docs/jack-xvii.md) before interpreting totals.

| Artifact | Contract |
| --- | --- |
| [status_matrix.json](status_matrix.json) | Four-VM claims labelled DEMOSTRADO/PARCIAL/HIPÓTESIS/DESCONOCIDO with evidence |
| [generated/](generated/) | PE-derived User bytecode, effect IR, direct/optimized/structured C++, semantic view and hashes |
| [validation.json](validation.json) | GCC/IR/native logical-state comparisons, writer-region tests, model controls and limits |
| [windows_cpp_validation.json](windows_cpp_validation.json) | Three MSVC backends compared against all 17 native logical-state captures |
| [materializer_validation.json](materializer_validation.json) | Original x64 materializer versus the reused extractor; no historical reports overwritten |
| [regions/](regions/) | Four blob-seed initialization folds, disassembly, raw bytes, IR/C++ and per-iteration differentials |
| [windows/](windows/) | Four fresh Windows captures and provenance, including SSO/heap and binary bytes |

The thirteen earlier native captures remain in
[jack_xxiii_evidence/windows](../jack_xxiii_evidence/windows/). New captures use
the existing two-byte SHA-gate variant, not unmodified acceptance. Their 54,108
logical steps have 54,105 immediate post-core snapshots; missing snapshots are
listed in the validation report and checked through subsequent pre-states.

Decoded-state agreement does not resolve the native encoded-context discrepancy
recorded by XXVII. Seed-fold recovery is not Serial/SHA opcode recovery. No
complete four-VM or universal equivalence claim follows from these artifacts.

Temporary builds and traces are ignored under `build/`. Regenerate with
`python -m devirt`, `python -m devirt.validate`, `python -m devirt.audit` and
`python -m devirt.materializer`. Use native Windows Python for capture/MSVC
validation, as described in the report.
