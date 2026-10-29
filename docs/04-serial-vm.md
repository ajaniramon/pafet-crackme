# 04 — serial-VM (RC4)

## What it computes

```python
g_serial(s) = RC4(key=b'\0').encrypt(s)
```

Standard RC4 PRGA with the standard KSA; the key is a **single zero
byte**. The S-box after KSA is **not** the identity — KSA with a
1-byte zero key still produces a specific permutation; the first 16
bytes of the keystream are:

```text
de 18 89 41 a3 37 5d 3a ac 59 03 7b 94 05 e6 b9  ...
```

Any Python oracle:

```python
from Crypto.Cipher import ARC4
ARC4.new(b'\0').encrypt(b'\0' * 16).hex()
# 'de188941a3375d3aac59037b9405e6b9'
```

## Where in the PE

```text
Executor VA  : 0x14022a120
Context      : zero-initialized ~8 KiB
Output slot  : located by Phase 1 of Jack XVIII (scripts/pafet_serialvm_locate_xviii.py)
```

Interesting detail: Phase 1 of the serial-VM locator **scanned
every RW page in the process after `exec_leave` for the exact
keystream head `de188941a3375d3a`** and found **0 occurrences**. This
confirmed the RC4 stream is never materialized as a contiguous buffer:
the VM implements RC4 PRGA byte-by-byte, consuming the input byte
immediately after generating each keystream byte.

## Replica

[`src/pafet_serialvm_native_xviii.h`](../src/pafet_serialvm_native_xviii.h)
is a straight RC4 implementation (28 LOC). It makes no attempt to
mimic the on-disk VM's byte-by-byte PRGA shape because the output
contract is identical.

```cpp
inline void serial_vm(const uint8_t* input, uint8_t* output, size_t len) {
    uint8_t S[256];
    for (int i = 0; i < 256; ++i) S[i] = (uint8_t)i;
    uint8_t j = 0;
    for (int i = 0; i < 256; ++i) {           // KSA, key = {0}
        j = (uint8_t)(j + S[i] + 0);
        uint8_t t = S[i]; S[i] = S[j]; S[j] = t;
    }
    uint8_t ii = 0, jj = 0;
    for (size_t n = 0; n < len; ++n) {         // PRGA
        ii = (uint8_t)(ii + 1);
        jj = (uint8_t)(jj + S[ii]);
        uint8_t t = S[ii]; S[ii] = S[jj]; S[jj] = t;
        uint8_t k = S[(uint8_t)(S[ii] + S[jj])];
        output[n] = (uint8_t)(input[n] ^ k);
    }
}
```

## Validation

Test harness: [`src/main_serialvm_test_xviii.cpp`](../src/main_serialvm_test_xviii.cpp)
→ `pafet_serialvm_test_xviii.exe`.

```text
10/10 inputs byte-exact against the Python oracle in
scripts/pafet_des3_offline.py:
  "serial01", "serial02", "", "a", "AAAAA",
  "\x00\x00\x00\x00", "very_long_serial_here", ...
```

Raw vectors: `vm_pools_evidence/serialvm_vectors_xviii.json`.
Output location evidence: `vm_pools_evidence/serial_output_location_xviii.json`.

## Why RC4 is wrapped in the same VM

The author uses the shared ALU pool (`0x140048e10`, 12 slots: ADD,
SUB, AND, XOR, carry, borrow). RC4 needs ADD, XOR and byte-indexed
load/store, all expressible as pool primitives. The user-VM and
serial-VM share the same resolver/dispatcher — only the bytecode blob
and output semantics differ.

A corollary: all four VMs implement the same virtualization surface,
differing only in opcode constants and buffer wiring. If the user-VM
is understood, the other three are trivial by inheritance.

## Pre-overnight sources

| Report                            | Content                                          |
|-----------------------------------|--------------------------------------------------|
| `PAFET_SERIALVM_POOL.md`          | 12-slot pool shared with user-VM                 |
| `PAFET_NIGHT_REPORT.md`           | Commits XVII (died at rate limit) and XVIII (shipped) |

The attempt to port the serial-VM instruction-by-instruction (fork
XVII) died at a 5-hour API rate limit without artifacts. Fork XVIII
reconstructed it successfully as a semantic port.
