# Pafet Crackme — Cipher Recovery and Semantic Audit

**Status (2026-10-28): UNSOLVED — semantic coverage incomplete (D).** The cipher is
reconstructed for complete blocks and reproduces the recorded captures.
No valid username, serial or flag has been recovered or accepted by an
unmodified execution of the original challenge.

The cryptographic phase closed with no practical key-recovery shortcut.
The main logical controller is now fully decoded: 105 blocks, 482 instructions,
and a dataflow slice validated against original-instruction control projections.
It adds no credential condition under explicit native-host contracts. Global
coverage remains **incomplete**: nested wrappers and normal Windows/runtime
behavior are not fully characterized. The next priority is the user-VM return
divergence, not more DES reversing or credential guessing.

Start with [the semantic coverage report](PAFET_SEMANTIC_COVERAGE.md) and
[the REVoid assessment](PAFET_REVOID_ASSESSMENT.md) (Spanish). The new evidence
includes native/virtual control projections, opcode 58 conversion tests and a
memory-slack experiment that changes the isolated final predicate. None is
original credential acceptance. The subsequent [controller slice](PAFET_CONTROLLER_SLICE.md)
and [reproducible evidence](controller_evidence/README.md) close the logical-main
coverage gap while keeping outcome D for the whole executable.

For the previous phase, see [the cryptographic audit](PAFET_CRYPTO_AUDIT.md) (Spanish), then
[the cipher recovery report](PAFET_DES3_RECOVERY.md) (English). The audit
records both successful tests and limitations of the experimental loader.

## Recovered pipeline

The original checks the **complete SHA-256 of the original username bytes**:

```text
9419f86b97bd379906be72ea80517c075a499d0db0a37499132c2d203cc21420
```

For username bytes `u` and serial bytes `s`, the reconstructed key is:

```python
f = bytes(((c ^ 0x5a) + 7 + 3*i) & 255
          for i, c in enumerate(reversed(u)))
r = ARC4.new(b'\0').encrypt(s)
key = (f + r)[:24].ljust(24, b'\0')
```

The observed empty RC4-key behavior is equivalent to the one-byte zero key
above. The stream **does not repeat after eight bytes**. Splitting `key`
into `K1 || K2 || K3`, one cipher pass is:

```text
F(X) = D_K1(E_K2(D_K3(X)))    # Triple DES EDE decryption, ECB
```

The fixed ciphertext is 72 bytes, decoded from 144 ASCII hex characters at
`0x1403dbbc0`. The program applies `F` three times with the same key and a
permissive unpad after each pass. DES ignores the low bit of **every** key
byte. Key zero-padding is actual content, not unused string capacity.

The cipher stage checks the `CMO{...}` shape, including the closing `}`.
Only credentials accepted by the original username gate and producing a
valid flag count as a solution.

## Evidence and limits

- The offline solver reproduces ten recorded final output digests, nine
  intermediate prefixes and the full empty-input capture.
- A trace of original DES instructions matches nine independent DES calls
  and all 144 round subkeys. Actual SHA VM padding and original compression
  match seven standard SHA-256 cases, including embedded NUL and two blocks.
- A partial last DES block reads past the string's logical length. Its tail
  depends on memory slack; the solver stops instead of inventing padding.
  The first eight plaintext bytes remain independently computable.
- The Linux PE loader adapts APIs, allocation, exception handling and cookie
  checks. It has intermittent incorrect wrapper returns during complete key
  derivation, even when internal transformation output is correct. It is
  **not** a complete unmodified Windows execution or an acceptance oracle.
- A two-anchor MITM works on synthetic examples under conventional nested
  padding and specific username/serial lengths. A synthetic counterexample
  proves that ciphertext size and flag shape do not imply that padding.
  Without bounded candidate sets, even the favorable 8+8-byte layout needs
  roughly 2^56 table entries (about 1.5 EiB for 24-byte records).
- No useful username length/alphabet constraint or username–serial relation
  was verified. The latest audit ran no new real-credential search.

See [audit_evidence/README.md](audit_evidence/README.md) for saved results,
failed observations, integrity hashes and baseline provenance. Previous
searches and their negative results are documented in the recovery report;
they are not evidence that the credential space has been exhausted.

## Reproduce the bounded tests

Python 3 and PyCryptodome are required:

```sh
python -m pip install pycryptodome
python scripts/pafet_des3_offline.py --self-test --parity-test
python scripts/pafet_mitm.py --self-test
python scripts/pafet_crypto_audit.py
python scripts/pafet_native_audit.py --trace audit_evidence/des_trace.txt
```

To compute a candidate's exact first block:

```sh
python scripts/pafet_des3_offline.py alice serial01 --prefix-only
```

These are example credentials, not a solution. The complete-output mode
raises an explicit error if an intermediate trim leaves a partial block.
The Python functions accept bytes; the CLI encodes text as UTF-8, which is
not a guarantee about Windows console input encoding.

The optional OpenSSL C prefix scanner has two regression vectors:

```sh
gcc -O3 -Wno-deprecated-declarations scripts/pafet_prefix_scan.c -lcrypto -o /tmp/pafet_prefix_scan
/tmp/pafet_prefix_scan --self-test
```

For Linux x86-64 native instruction experiments, see
[scripts/native/README.md](scripts/native/README.md). That workflow also
requires GCC, `pefile` and `capstone`. The synthetic tests do not recover a
real flag and do not exercise the original acceptance gate.

## Repository map

| File or directory | Purpose |
|---|---|
| [PAFET_SEMANTIC_COVERAGE.md](PAFET_SEMANTIC_COVERAGE.md) | Current semantic coverage, unresolved regions and next experiments |
| [PAFET_REVOID_ASSESSMENT.md](PAFET_REVOID_ASSESSMENT.md) | Source assessment and limited interpreter-instrumentation proof of concept |
| [scripts/pafet_semantic_probe.py](scripts/pafet_semantic_probe.py) | Bounded original-byte and control-flow semantic tests |
| [scripts/pafet_semantic_map.py](scripts/pafet_semantic_map.py) | Native callback tables and focused disassembly from the original PE |
| [semantic_evidence/](semantic_evidence/) | Recorded semantic tests, instruction traces, provenance and hashes |
| [PAFET_CRYPTO_AUDIT.md](PAFET_CRYPTO_AUDIT.md) | Current conclusion, mathematical hypotheses, costs, counterexample and validation limits |
| [PAFET_DES3_RECOVERY.md](PAFET_DES3_RECOVERY.md) | Cipher reconstruction, captures and earlier bounded search results |
| [scripts/pafet_des3_offline.py](scripts/pafet_des3_offline.py) | Current byte-oriented key derivation and cipher model |
| [scripts/pafet_crypto_audit.py](scripts/pafet_crypto_audit.py) | Small synthetic mathematical tests; no real-credential search |
| [scripts/pafet_native_audit.py](scripts/pafet_native_audit.py) | Independent DES schedule comparison and native observation collector |
| [scripts/pafet_mitm.py](scripts/pafet_mitm.py) | Earlier conditional one-anchor MITM; assumptions are explicit |
| [scripts/pafet_prefix_scan.c](scripts/pafet_prefix_scan.c) | First-block scanner against a fixed list of serial hypotheses |
| [scripts/native/](scripts/native/) | Experimental PE loader sources and build instructions |
| [audit_evidence/](audit_evidence/) | Captured results, disassembly, hashes and frozen pre-audit bundle |
| [pafet.bin](pafet.bin) | Unmodified original challenge, PE x86-64 VC++2019, 4,396,544 bytes |
| `pafet_pass8.exe`, `pafet_oracle.exe` | Existing patched research oracles; never proof of a solution |
| [pafet_offline.py](pafet_offline.py) | Historical partial model; superseded, including its repeated serial-mask assumption |

Original binary SHA-256:

```text
fe85e59225387fba4923f3bc6103914fe7b85ba3dc0514c9e37382818fb44d1a
```

## Reproduce the semantic audit

Install `pefile`, `capstone`, `unicorn` and follow the native build instructions
when running the optional Linux x86-64 collector:

```sh
python scripts/pafet_semantic_map.py --out semantic_evidence_new/static
python scripts/pafet_semantic_probe.py
python scripts/pafet_semantic_probe.py --native scripts/native/native_probe --opcode-projection --tail-validation
```

The first probe command executes no DES. The last reuses the existing cipher
for two directed tail tests; it does not repeat DES recovery or search real
credentials. See [semantic_evidence/README.md](semantic_evidence/README.md) for
exactly which dependencies are modeled and what the results do not prove.

## Complete logical-controller audit

```sh
python scripts/pafet_controller_slice.py --native scripts/native/native_probe --out controller_evidence_new
```

This uses original materializer/reader/handler instructions with modeled native
callbacks. It performs no DES, SHA or credential search. Recorded results and
precise contracts are in `controller_evidence/README.md`. It is not original
credential acceptance.

## Historical reversing notes

The original reports and instrumentation are retained for provenance:
[PAFET_FULL_STATE.md](PAFET_FULL_STATE.md), [PAFET_FINAL.md](PAFET_FINAL.md),
[PAFET_PHASE6_REPORT.md](PAFET_PHASE6_REPORT.md),
[PAFET_CIPHER_STATUS.md](PAFET_CIPHER_STATUS.md),
[PAFET_DEVIRT_STATUS.md](PAFET_DEVIRT_STATUS.md) and
[pafet_vm_program.md](pafet_vm_program.md).
Their unresolved-cipher claims and some early key/parity hypotheses are
superseded by the current reports. The scripts directory retains the prior
Frida instrumentation and analysis scripts.

## Running the challenge

Windows x64:

```powershell
.\pafet.bin         # Original: full username and flag checks
.\pafet_pass8.exe   # Research patch: bypasses username SHA comparison
.\pafet_oracle.exe  # Research patch: also bypasses final flag check
```

Patch byte differences are preserved in the historical full-state report.
Arbitrary bytes printed as a flag by a patched executable are not a solution.

## Credits and license

Challenge binary © NIMA Nikjoo (`NIKJOO` on GitHub). Reversing notes and scripts in this repo are mine (`ajaniramon`); use them however you like. No warranty.

## Who I am

Ramón, Barcelona. I'm not a professional reverser — this was a hobby grind done with Claude Code as a tool. If you want to pair on this, open an issue or ping me on X. If you solve it, let me know what you did; I'd love to read the writeup.
