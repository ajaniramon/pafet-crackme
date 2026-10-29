# 05 — SHA-VM (SHA-256)

## What it computes

```python
sha_vm(bytes) = hashlib.sha256(bytes).digest()
```

Standard FIPS 180-4 SHA-256. The computed 32-byte digest is compared
verbatim against:

```text
H = 9419f86b97bd379906be72ea80517c075a499d0db0a37499132c2d203cc21420
```

Mismatch → `[!] Invalid username`.

## Where in the PE

```text
Executor VA  : 0x14027aba0
Output slot  : ctx + 0xc0 (digest, 32 bytes)
```

## Replica

[`src/pafet_shavm_native_xix.h`](../src/pafet_shavm_native_xix.h)
is a standard public-domain-style SHA-256 (based on Brad Conte's
reference). Full K-table, standard rotation schedule, big-endian
message schedule, Merkle-Damgård padding.

Public interface:

```cpp
namespace pafet_shavm {
    inline void compute(const uint8_t* data, size_t len, uint8_t digest[32]);
}
```

Internals: `transform(H[8], block[64])`, `rotr`, the 64-entry `K[]`
constant table, SHA-256 padding (append `0x80`, zero-pad, append
big-endian 64-bit bit-length), Merkle-Damgård iteration.

## Validation

Test harness: [`src/main_shavm_test_xix.cpp`](../src/main_shavm_test_xix.cpp)
→ `pafet_shavm_test_xix.exe`.

```text
12/12 inputs byte-exact against the on-disk SHA-VM's ctx+0xc0 window
and against hashlib.sha256:
  "", "a", "abc",
  "The quick brown fox jumps over the lazy dog",
  "alice", "ramon",
  <56 B input to exercise the >1-block path>,
  <input with embedded NUL>,
  <2-block input>, ...
```

Raw vectors: `vm_pools_evidence/shavm_vectors_xix.json`.
Output location evidence: `vm_pools_evidence/sha_output_location_xix.json`.

## Why SHA-256 is wrapped in the same VM

Same reasoning as the serial-VM. SHA-256's compression function uses
ADD mod 2^32, XOR, AND and rotations — all expressible against the
shared 12-slot ALU pool. The K-table (64 32-bit constants) lives in
`.rdata` as a plain constant array; the pool handles the per-round
ADD/XOR/rotation primitives.

Running SHA-256 under a VM makes it ~1000× slower than native, but
hides the K-table and compression round shape from a static-analysis
walker that only reads `.text`.

## Pre-overnight sources

| Report                      | Content                                              |
|-----------------------------|------------------------------------------------------|
| `PAFET_CRYPTO_AUDIT.md`     | SHA-VM behavior under RSA-PE loader (7 standard cases match) |
| `PAFET_NIGHT_REPORT.md`     | Commit XIX: byte-exact native port shipped          |
