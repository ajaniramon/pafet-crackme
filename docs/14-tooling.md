# 14 — Tooling inventory

Every script, agent and harness used in the project.
Organized by purpose rather than filename.

## End-to-end oracle (pure Python)

| Script                            | What it does                                          |
|-----------------------------------|-------------------------------------------------------|
| `scripts/pafet_des3_offline.py`   | Full offline pipeline oracle. `--self-test`, `--parity-test`, `--prefix-only`. |
| `scripts/pafet_sha_oracle.py`     | SHA-256 oracle for the SHA-VM gate.                   |
| `scripts/pafet_offline.py`        | Historical partial model (superseded).                |
| `scripts/pafet_crypto_audit.py`   | Mathematical self-tests. No real-credential search.  |
| `scripts/pafet_native_audit.py`   | Independent DES schedule + native observations.      |
| `scripts/pafet_mitm.py`           | Conditional one-anchor MITM; assumptions explicit.   |
| `scripts/pafet_prefix_scan.c`     | OpenSSL C scanner for first-block hypothesis.         |

## User-VM analysis

### Enumeration & static

| Script                                       | Purpose                                              |
|----------------------------------------------|------------------------------------------------------|
| `scripts/pafet_uservm.py`                    | Entry-point exploration of the user-VM.             |
| `scripts/pafet_uservm_architecture.py`       | Architecture mapping, VM state.                     |
| `scripts/pafet_uservm_bc.py`                 | Bytecode extraction.                                 |
| `scripts/pafet_uservm_blob_xref.py`          | Cross-references of the blob location.               |
| `scripts/pafet_uservm_decode.py`             | Blob decode attempts (pre-canonical).                |
| `scripts/pafet_uservm_dispatcher.py`         | Dispatcher structure.                                |
| `scripts/pafet_uservm_explore.py`            | Interactive exploration.                             |
| `scripts/pafet_uservm_handler_analyze.py`    | Handler-by-handler semantic analysis.                |
| `scripts/pafet_uservm_handler_disasm.py`     | Static x64 disasm of each handler.                   |
| `scripts/pafet_uservm_helpers_validate.py`   | Helpers under validation.                            |
| `scripts/pafet_uservm_pool_characterize.py`  | 12-slot pool characterization.                       |
| `scripts/pafet_uservm_pool_dump.py`          | Pool raw dump.                                       |
| `scripts/pafet_uservm_pool_extract.py`       | Pool slot extraction.                                |
| `scripts/pafet_uservm_pool_trace.py`         | Pool trace at runtime.                               |
| `scripts/pafet_uservm_pool_trace2.py`        | Pool trace v2.                                       |

### Bytecode decoding

| Script                               | Purpose                                           |
|--------------------------------------|---------------------------------------------------|
| `scripts/decode_user_blob_vi.py`     | Offline Feistel decrypt of the 1752-B blob.      |
| `scripts/dump_user_blocks_vi.py`     | Dump each 24-B block to JSON.                   |
| `scripts/dump_user_bytecode_vi.py`   | Dump the canonical bytecode as a flat stream.   |

### Dynamic capture (Frida)

| Script                               | Purpose                                               |
|--------------------------------------|-------------------------------------------------------|
| `scripts/pafet_capture_ir_xi.py`     | Capture IR (resolver sequence + atomic writers) for 9 inputs. |
| `scripts/pafet_capture_ir_xv.py`     | +27 inputs capture.                                   |
| `scripts/pafet_uservm_frida_capture.py` | Early capture before IR convention.               |
| `scripts/pafet_uservm_h3a50_emulate.py` | Emulation harness for 0x140003a50.                |
| `scripts/pafet_h3880_capture_args_ivB.py` | Argument capture for 0x140003880.             |
| `scripts/pafet_h3880_full_ivB.py`    | End-to-end helper 0x140003880 trace.                 |
| `scripts/pafet_h3bea0_capture_xiii.py` | Vector capture for 0x14003bea0.                   |
| `scripts/pafet_h14a00_capture_xvi.py`  | Vector capture for 0x140014a00.                   |
| `scripts/pafet_h6770_capture_xv.py`  | Vector capture for 0x140006770.                     |
| `scripts/pafet_output_pathway_ix.py` | Pathway byte-by-byte for alice.                      |

### Unicorn oracles

| Script                                | Purpose                                             |
|---------------------------------------|-----------------------------------------------------|
| `scripts/pafet_h3bea0_unicorn_xii.py`  | Early Unicorn harness for 0x14003bea0 (deprecated). |
| `scripts/pafet_h3bea0_unicorn_xiii.py` | Final Unicorn harness, 6/6 passes.                 |
| `scripts/pafet_h14a00_unicorn_xvi.py`  | Unicorn harness for 0x140014a00, 6/6 passes.       |
| `scripts/pafet_unicorn_h10.py`         | Historical.                                         |

## Nested VM analysis

### serial-VM

| Script                                   | Purpose                                        |
|------------------------------------------|------------------------------------------------|
| `scripts/pafet_serialvm_locate_output_xvii.py` | Locate output slot of the serial-VM.    |
| `scripts/pafet_serialvm_recon_xvii.py`   | Early recon (died at rate limit).            |
| `scripts/pafet_serialvm_scan_final_xvii.py` | Final scan.                              |
| `scripts/pafet_serialvm_locate_xviii.py` | Locate executor + output.                     |
| `scripts/pafet_serialvm_capture_xviii.py`| Vector capture for byte-exact validation.     |
| `scripts/pafet_serialvm_pool_extract.py` | Pool classification.                          |

### SHA-VM

| Script                                | Purpose                                            |
|---------------------------------------|----------------------------------------------------|
| `scripts/pafet_shavm_locate_xix.py`   | Locate executor + output.                         |
| `scripts/pafet_shavm_capture_xix.py`  | Vector capture.                                    |

### hex-VM

| Script                                | Purpose                                            |
|---------------------------------------|----------------------------------------------------|
| `scripts/pafet_hexvm_locate_xx.py`    | Locate executor + output.                         |
| `scripts/pafet_hexvm_capture_xx.py`   | Vector capture.                                    |

## Dispatch topology

| Script                                        | Purpose                                           |
|-----------------------------------------------|---------------------------------------------------|
| `scripts/pafet_dispatch_coverage_ivB.py`      | Count resolver vs `call r9` entries.             |
| `scripts/pafet_dispatcher.py`                 | Dispatcher structure (v1).                       |
| `scripts/pafet_dispatcher2.py`                | v2.                                               |
| `scripts/pafet_find_uservm_disp.py`           | Locate the user-VM dispatcher.                   |
| `scripts/pafet_all_subdispatchers.py`         | Enumerate sub-dispatchers across VMs.            |

## Semantic coverage

| Script                                | Purpose                                            |
|---------------------------------------|----------------------------------------------------|
| `scripts/pafet_semantic_map.py`       | Native callback tables + focused disassembly.    |
| `scripts/pafet_semantic_probe.py`     | Bounded original-byte + control-flow tests.      |
| `scripts/pafet_controller_slice.py`   | Main controller dataflow slice.                   |

## Historical / superseded

| Script                            | Note                                                 |
|-----------------------------------|------------------------------------------------------|
| `scripts/pafet_derive_formula.py` | Early formula derivation attempt.                   |
| `scripts/pafet_f_hyp.py`          | f_user hypothesis.                                   |
| `scripts/pafet_f_test.py`         | f_user test.                                         |
| `scripts/pafet_f_user.py`         | f_user driver.                                       |
| `scripts/pafet_matrix.py`         | Matrix oracle (pre-byte-exact).                      |
| `scripts/pafet_compare.py`        | Comparison helper.                                   |

## Build system (`src/*.bat`)

See [11-reproduce.md](11-reproduce.md) for the full list; each
`build_*.bat` wraps `cl.exe` with the right include dirs for a single
test harness.

## Evidence directories

| Directory                         | Content                                              |
|-----------------------------------|------------------------------------------------------|
| `vm_pools_evidence/`              | Raw JSON evidence (vectors, traces, static dumps).   |
| `audit_evidence/`                 | Pre-overnight frozen bundle + integrity hashes.      |
| `controller_evidence/`            | Logical controller slice.                             |
| `semantic_evidence/`              | Semantic probes.                                      |
| `scripts/data/`                   | Reserved (empty).                                     |
| `scripts/native/`                 | Experimental Linux PE loader source + README.         |
