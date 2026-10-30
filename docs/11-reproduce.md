# 11 — Reproduction and evidence contracts

Run commands from the repository root. Recorded evidence is not automatically
a newly executed test. Scripts that regenerate reports can change tracked files;
keep historical runs separate when collecting new evidence.

## Native-state laboratory

[JACK XXVIII](../PAFET_JACK_XXVIII.md#reproduction) documents the consolidated
capture contract, pinned hashes, new native routes and explicit blockers:

```bash
python -m unittest discover -s scripts -p 'test_pafet_state*.py' -v
python scripts/pafet_lab_xxviii.py
# Linux/WSL with GCC; builds an ignored local library:
python scripts/pafet_lab_xxviii.py --cpp --output jack_xxviii_evidence/regression_cpp.json
python scripts/pafet_state_regression.py --output jack_xxviii_evidence/legacy_regression.json
```

The runner checks committed artifact hashes before execution. It reports
Windows instruction comparisons, C++ comparisons and expected incomplete
routes separately. Required checks passing does not close the two named C++
translation gaps or the queue/OS boundary. Fresh captures must use fresh
directories; the report gives generic and User profile commands.

## Semantic devirtualizer

The current Serial continuous interval is [JACK XXX](../PAFET_JACK_XXX.md):

```bash
python scripts/pafet_serial_audit_xxx.py
python -m devirt.serial_continuous_validate
python -m unittest devirt.test_ir devirt.test_serial devirt.test_serial_continuous -v
```

The report separates native replay (A), isolated semantic equivalence (B) and
two dependent virtual steps without restoration (C). Unknown native return
continuations and incomplete captures remain explicit. Fresh Windows capture uses
`jack_xxx_evidence/capture_command.ps1` in the existing research lab.

The Serial first-opcode operation is [JACK XXIX](../PAFET_JACK_XXIX.md):

```bash
python -m devirt.serial_validate
python -m unittest devirt.test_ir devirt.test_serial -v
```

This verifies pinned Windows frames and reduced semantic boundaries, and
regenerates the 2,678-byte unmasked buffer from the original PE. Its isolated
helper tests use synthetic states and do not count as native Windows coverage.
The historical model leaves one decoder key-probe route unknown; XXX validates
that probe in its separate reduced decoder.

The reproducible source-to-IR-to-C++ operation is [JACK XVII](jack-xvii.md).
Linux/WSL requires Python 3.10+, GCC C++17 and the pinned Python dependencies:

```bash
python3 -m venv jack_xvii_evidence/build/venv
. jack_xvii_evidence/build/venv/bin/activate
python -m pip install -r jack_xxiii_evidence/requirements.txt
python -m unittest devirt.test_ir -v
python -m devirt
python -m devirt.validate
python -m devirt.audit
python -m devirt.materializer
jack_xvii_evidence/build/user_structured 616c696365
```

The generated executable consumes username bytes; it needs no PE loader,
bytecode decoder, Python or native trace at runtime. It implements the contracted
logical User program, not the full original four-VM executable.

New Windows logical-state captures go to this operation's own directory:

```powershell
python -m pip install -r jack_xxiii_evidence/requirements.txt
python -m pip install frida==17.24.3
python -m devirt.capture
python -m devirt.windows
```

Capture uses the existing two-byte gate variant. The Windows validation module
requires Visual Studio 2022 C++ tools and compiles all three generated backends
with MSVC. Rerun semantic validation afterwards.
Source/capture/artifact hashes and explicit missing snapshots are recorded.

## Other reproduction paths

The [root README](../README.md#reproduction) retains current Windows Hex-VM
package/build commands and the older component tests. Consult the dedicated
[XXVI closure report](../PAFET_JACK_XXVI_CLOSURE.md) for the literal executor,
[XXIII report](../PAFET_JACK_XXIII.md) for original-bytecode model reproduction,
and [XXVII report](../PAFET_JACK_XXVII.md) for its intentionally failing native
context reproducer. That last failure is not resolved by JACK XVII's decoded
state comparisons. Its missing-input cause is now isolated and corrected in
the separate [native-state follow-up](native-state-divergence.md), whose
complete-input replay and strict regression commands supersede incomplete
snapshots for new full-state claims.

The JACK XXI rekeyed demonstrator and Serial/SHA primitive tests remain useful
behavioral checks. They are not proof of complete native VM reconstruction or
recovery of the original flag. Cryptographic tail/slack behavior is described
in [PAFET_CRYPTO_AUDIT.md](../PAFET_CRYPTO_AUDIT.md).
