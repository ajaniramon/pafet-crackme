# 11 — Reproduction and evidence contracts

Run commands from the repository root. Recorded evidence is not automatically
a newly executed test. Scripts that regenerate reports can change tracked files;
keep historical runs separate when collecting new evidence.

## Semantic devirtualizer

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
state comparisons.

The JACK XXI rekeyed demonstrator and Serial/SHA primitive tests remain useful
behavioral checks. They are not proof of complete native VM reconstruction or
recovery of the original flag. Cryptographic tail/slack behavior is described
in [PAFET_CRYPTO_AUDIT.md](../PAFET_CRYPTO_AUDIT.md).
