# 06 — hex-VM (ASCII-hex → bytes)

## What it computes

```python
hex_vm(ascii_hex) = bytes.fromhex(ascii_hex)
```

Standard ASCII hex-to-bytes decoding. The author pre-stored the
ciphertext as 144 hex characters so it is readable in a hex dump as
ASCII — the hex-VM materializes the 72 binary bytes at runtime.

## Where in the PE

```text
Executor VA : 0x1400804c0
Input       : 144 ASCII hex chars at 0x1403dbbc0
Output      : 72 bytes, located in ctx after exec_leave

Input bytes (as ASCII characters, 144 total):
  6f56f79c3e348835aa3c3fc5f551d501dea5dfcdcf3a013b0e3f8292ff4954b3
  455024b373acad827d1fc843f19f3a9ca9907f072ef55099ceadf0798f782d09
  abb0a67da54ba93b
```

Phase 1 locator (`scripts/pafet_hexvm_locate_xx.py`) scanned RW
memory after `exec_leave` for the exact byte sequence
`bytes.fromhex(ascii_hex)` and found multiple hits — the output is
present as a contiguous 72-byte buffer in the ctx (unlike the RC4
case, where no contiguous buffer is produced).

## Replica

[`src/pafet_hexvm_native_xx.h`](../src/pafet_hexvm_native_xx.h):

```cpp
inline int hex_vm(const char* hex, size_t len, uint8_t* out) {
    if ((len & 1) != 0) return -1;
    auto hv = [](char c) -> int {
        if (c >= '0' && c <= '9') return c - '0';
        if (c >= 'a' && c <= 'f') return 10 + (c - 'a');
        if (c >= 'A' && c <= 'F') return 10 + (c - 'A');
        return -1;
    };
    size_t bytes = len / 2;
    for (size_t i = 0; i < bytes; i++) {
        int hi = hv(hex[2*i]);
        int lo = hv(hex[2*i + 1]);
        if (hi < 0 || lo < 0) return -1;
        out[i] = static_cast<uint8_t>((hi << 4) | lo);
    }
    return static_cast<int>(bytes);
}
```

## Validation

Test harness: [`src/main_hexvm_test_xx.cpp`](../src/main_hexvm_test_xx.cpp)
→ `pafet_hexvm_test_xx.exe`.

```text
12/12 inputs byte-exact against bytes.fromhex and against the on-disk
VM's output buffer:
  "" (empty), "00", "deadbeef",
  "6f56f79c...a93b" (the real ciphertext),
  uppercase ("DEADBEEF"), mixed case, ...
```

Raw vectors: `vm_pools_evidence/hexvm_vectors_xx.json`.
Output location evidence: `vm_pools_evidence/hex_output_location_xx.json`.

## Why hex is wrapped in the same VM

Pure obfuscation. The hex alphabet (`'0'-'9', 'a'-'f'`) and the
`hi * 16 + lo` combining can both be expressed through the shared ALU
pool. The author gets a consistent "all primitives look like opcodes"
property.

A static walker that disassembles `.text` won't find anything that
looks like a hex table; everything hex-related is in the shared VM
bytecode.
