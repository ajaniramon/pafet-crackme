# Audit evidence — 2026-10-28

These files support [the cryptographic audit](../PAFET_CRYPTO_AUDIT.md).
They do not contain recovered real credentials or a verified flag.

| File | Meaning |
|---|---|
| `baseline/pafet_cipher_recovery.zip` | Unchanged ten-file bundle opened before the audit; sources and earlier report as originally supplied |
| `baseline_selftests.txt` | Repeat of existing baseline regressions; the same tests were first run before source edits |
| `des_trace.txt` | Nine calls to original DES instructions, with directions, block inputs/outputs and 16 round subkeys each; `FAST_DES` unset |
| `crypto_audit.json` | Small artificial-credential tests, conditional two-anchor MITM and counterexample to inferring padding from ciphertext size/flag shape |
| `native_audit.json` | Seven actual VM SHA-padding/original-compression tests, nine unpad tests and nine KDF observations |
| `partial_tail.json` | Original DES instructions with zero versus poisoned slack: one-byte input yields `29` versus `d9` |
| `static_disassembly.txt` | Selected original code ranges, addresses and bytes supporting input, key, SHA comparison and formatting analysis |
| `manifest.json` | Original executable hash, baseline bundle inventory and integrity hashes |

## Read failures as evidence too

The recorded native KDF run has **seven matching keys out of nine**. In all
nine, the internal username-transformation handler output matched the
formula. Two wrapper returns (username lengths 15 and 17) lost that output.
These are unresolved loader discrepancies, not proof that the original
program rejects these lengths or uses an empty username-derived key.

The JSON's `assertions_passed` field concerns the checks that are assertions
in the runner. It does **not** assert that every `key_matches_model` is true.
The mismatches are deliberately preserved. Process-dependent loader results
may vary on repetition; never retry silently until they all match.

All native observations use an adapted Linux PE loader. SHA stream
construction is skipped in the padding/compression tests, which exit before
digest formatting and gate acceptance. No recorded native observation is a
successful unmodified Windows execution of the original challenge.

The 72-byte flag-shaped plaintext used by the counterexample is artificial.
It only falsifies the inference that ciphertext length and flag shape force
nested PKCS#7 padding. It says nothing conclusive about the real author's
padding choice. Recorded performance numbers describe the small local tests,
not a projected benchmark for the unrestricted attack.

## Reproduce

From the repository root, with PyCryptodome installed:

```sh
python scripts/pafet_des3_offline.py --self-test --parity-test
python scripts/pafet_mitm.py --self-test
python scripts/pafet_crypto_audit.py
python scripts/pafet_native_audit.py --trace audit_evidence/des_trace.txt
```

For new native observations, build the probe using
[its instructions](../scripts/native/README.md) and run:

```sh
python scripts/pafet_native_audit.py --trace audit_evidence/des_trace.txt --native scripts/native/native_probe
```

The baseline ZIP is evidence, not a package to overwrite the current source
with. `initial_bundle_entries` records its original contents.
`delivered_files_sha256` describes the earlier downloadable audit archive,
before repository documentation was refreshed; `repository_files_sha256`
describes the cryptographic repository snapshot published as `5e76df0`, before the semantic audit. Later source changes are recorded separately in `semantic_evidence/manifest.json`. The manifest itself
is excluded from its own file-hash list.

To check that historical cryptographic snapshot inside the Git repository:

```sh
python - <<'PY'
from pathlib import Path
import hashlib, json, subprocess
root = Path('.')
m = json.loads((root / 'audit_evidence/manifest.json').read_text())
for name, expected in m['repository_files_sha256'].items():
    data = subprocess.check_output(['git', 'show', '5e76df0:' + name])
    assert hashlib.sha256(data).hexdigest() == expected, name
print('PASS: repository audit file hashes')
PY
```
