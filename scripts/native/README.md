# Experimental native Pafet probe (Linux x86-64)

This runs Pafet's original machine instructions in a minimal PE loader.
It supplies MS x64 ABI API stubs and a small exception runtime using the
binary's unwind and FH4 metadata. It is specific to this binary, not a
general Windows emulator. CRT stream formatting and arbitrary Windows API
calls are not implemented.

The loader replaces allocation, timing, memory-copy and cookie-check
functions. It does not patch the DES computation or final output by
default. `FAST_DES=1` explicitly replaces the independently validated DES
key schedule and block primitive; the outer VMs and unpad still execute.

From this directory:

```sh
python -m pip install pefile capstone
python prepare_native.py
gcc -O2 -o native_probe native_probe.c native_context.S
./native_probe alice serial03 3
./native_probe --sha-block testuser
./native_probe --unpad 4142434445464702
```

`--sha-block` pads a message of at most 55 bytes and executes the original
SHA compression wrapper. `LOG_SHA_BLOCK=1 ./native_probe --sha testuser`
captures the block prepared by the actual username SHA VM; this mode skips
only the stream constructor and stops at the first compression call.
The bare `--sha` mode requires unsupported CRT setup and is not a supported
verification command.

`--cipher KEYHEX DATAHEX [PASSES]` invokes main handler 19 with explicit
24-byte key material and arbitrary data. `POISON_TAIL=1` fills string slack
after the terminating NUL with `0xa5` to demonstrate partial-block reads.

```sh
FAST_DES=1 ./native_probe --cipher 464340464ead7dfb28c25b6d0b0000000000000000000000 00
POISON_TAIL=1 FAST_DES=1 ./native_probe --cipher 464340464ead7dfb28c25b6d0b0000000000000000000000 00
```

These yield `29` and `d9`, respectively. The same two outcomes were verified
with the original DES instructions, without `FAST_DES`.

The `username serial` CLI uses the first 24 bytes of the recovered RC4
stream. Later bytes cannot enter the truncated 24-byte key.

Each execution uses a zero-initialized, non-reusing heap. That differs from
Windows allocation history and is why the offline solver does not silently
assume a value for partial-block slack.


## Audit additions and observed limitations (2026-10-28)

See `../../PAFET_CRYPTO_AUDIT.md` for the authoritative scope and findings.

* `--derive USERHEX SERIALHEX` executes main handlers 10–15 and prints their
  intermediate strings. **This path has intermittent incorrect wrapper returns**:
  lengths 15 and 17 were observed returning an empty transformed username even
  when `TRACE_USER=1` recorded the correct native handler output. Do not use it
  to infer a program restriction or claim end-to-end correctness for all inputs.
* `TRACE_USER=1` logs user handler outputs and transformation indices.
* `TRACE_DES=1` records directions, inputs/outputs and all 16 subkeys, while
  calling the original DES primitive through a trampoline. Do not combine it
  with `FAST_DES=1`.
* `--strings` calls the original decoder for slots 0 and 7. Slot 0 matches the
  username hash; slot 7 is empty. An exploratory slot 8 call gave inconsistent
  bytes (empty or a0), another loader limitation. This is not evidence of a
  different challenge prefix.
* `LOG_SHA_ALL=1 ./native_probe --sha-hex HEX` logs **all** blocks prepared by
  the username VM, executes original compression, and exits after the padded
  block count implied by the supplied byte length. It skips stream construction
  and never reaches unsupported digest formatting or the acceptance gate.

After building, from the repository root:

```sh
python scripts/pafet_native_audit.py --trace audit_evidence/des_trace.txt \
  --native scripts/native/native_probe > native_audit_new.json
```

The JSON reports successful assertions separately from KDF observations; it
preserves failed KDF comparisons. A successful runner exit does not assert
that every KDF observation matched. No command here validates real credentials
in an unmodified Windows execution.
