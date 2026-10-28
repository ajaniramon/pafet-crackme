# Pafet — cipher-VM phase — Status

> **Historical report — superseded in part (2026-10-28).** The cipher has
> since been reconstructed. Start with [PAFET_CRYPTO_AUDIT.md](PAFET_CRYPTO_AUDIT.md)
> and [PAFET_DES3_RECOVERY.md](PAFET_DES3_RECOVERY.md) for the corrected RC4
> stream, 24-byte key construction, three DES3 passes, parity and padding,
> native-loader limitations, and current unresolved credential recovery.
> The original observations below are retained as historical evidence.


## Verified offline byte-by-byte (THIS PHASE)

| Component | Status | Evidence |
|---|---|---|
| `f_user(user) → s18` | ✅ 100% | 23/23 tests (incl. 4 unseen predictions correct) |
| `g_serial(serial) → s20` | ✅ 100% | 10/10 observations (len 0..8) |
| `build_s30(user, serial)` | ✅ 100% | 3/3 observations |
| `canonical_s30` (mask bit 0 of s20[-1]) | ✅ CONFIRMED | 2/2 cipher-equivalence predictions |
| `cipher_transform(s30) → s38` | ❌ NOT PORTED | see block below |

## cipher-VM chain mapped (3 identified levels)

```
Level 0  main-VM dispatcher 0x140396990 (24 opcodes)
  └── handler 19 (0x140397107) — calls cipher-VM
       └── Level 1 executor 0x1400c0510 (cipher-VM)
            │ encrypted bytecode 0x1403EB2F0 (1704 B), seed 0x75BE7955E0AB34D0
            │ attestation: fmix64 chain over bytecode
            └── `call rax` @ 0x1400c4468 → thunk 0x14039de80
                 └── Level 1 dispatcher 0x1400c9170 (7 opcodes)
                      │ handler 4 (0x1400c9278) creates struct 0x88 B + vtable 0x1403f1998
                      └── Level 2 executor 0x1400d3fe0
                           │ encrypted bytecode (1000 B), seeds 0x98794eac35c7e628, 0x53d7f1447ff8bfeb
                           │ vtable 0x1403f1998 = "0123456789ABCDEF" (HEX parser visual)
                           └── Level 2 dispatcher 0x14039dd20 (6 opcodes)
                                │ handlers 3, 4, 5 → 0x14017f610
                                └── Level 3 wrapper 0x14017f610
                                     │ allocates struct 0x88 B
                                     └── Level 3 crypto 0x140176950
                                          │ encrypted bytecode (3744 B), seeds 0x19cca2a0ed9ddb7e, 0x5e7f305d723e864
                                          │ **4 loops** (= REAL LOGIC)
                                          │ loop 1: fmix64 attestation (0x140176b60)
                                          │ loop 3: 4-iter fmix64 outputs (0x1401776a0)
                                          │ loop 4: 8-iter switch-case (0x140177774)
                                          └── (further nested calls...)
```

## Instructions that WRITE to the 72 B buffer (observed via HW watchpoint)

HW breakpoint on byte 0 of the alloc80 buffer captured 2 writes per execution:

| RIP | Context | Interpretation |
|---|---|---|
| 0x1403967d3 | memset(buf, 0, 192) context | **zero-init** of the buffer |
| 0x14016fa6a | crypto function 0x14016fa50 | part of the cryptographic flow |
| 0x140396351 | fmix64 loop | part of the flow (2x iteration) |

**Each plaintext byte can be written by a different instruction**. The 1-byte HW BP only captures writes to byte 0. Writes to bytes 1..71 do not trigger.

A later HW BP on bytes 68-71 captured writes at `0x1401afa6a` (inside `0x1401af6b0`). See `PAFET_PHASE6_REPORT.md`.

## Empirical facts about the cipher-VM

- cipher-VM invoked **3 times** per execution (from handler 19)
- **Only cipher #3** allocates and writes the plaintext (72 B in an 80 B buffer)
- cipher #1 and #2 produce 24 B intermediates in `s38`
- cipher #3 replaces `s38` with 72 B
- **~2980 operator new allocs per cipher-VM call** (indicator of massive nesting levels)
- 2 copies of the plaintext in memory (via memcpy at 0x140396351 context)

## Serial anomaly — MATHEMATICALLY CONFIRMED

`canonical_s30` applies `s20[-1] &= ~1` → correctly predicts the runtime equivalences:
- `(alice, serial02)` ≡ `(alice, serial03)` ✓
- `(alice, '2')` ≡ `(alice, '3')` ✓
- `(alice, '0')` ≡ `(alice, '1')` ✓ (in the data: `0`→`f6a2cc...`, `1`→`f6a2cc...`)

## Real blocker

**The cipher-VM has at least 3 levels of VM nesting with real logic at level 3**. Between level 1 and level 3 there are multiple intermediate functions (0x14017f610, 0x14017f600, 0x140048940, 0x14016d950, 0x140169d10, 0x140168f10, 0x14016cd80, 0x14016ca90, 0x140175ee0, ...), each with its own prolog, security cookie, possibly more nesting.

- 86 direct calls inside `0x140176950` (level 3)
- 4 loops at that same level 3
- Standard SHA-256 **does NOT** reproduce the output (tested offline: 10 schemes, none match)
- HMAC-SHA-256 **does NOT** reproduce either

**The plaintext is NOT a hash or simple derivation of s30**. It is the result of a multi-level VM execution with custom logic.

## Deliverables

- **`pafet_offline.py`** — progressive pipeline with validations (f_user, g_serial, build_s30, canonical_s30)
- **`scripts/pafet_f_user.py`** — f_user standalone + 23/23 tests
- **`scripts/pafet_build_s30.py`** — s30 validation
- **`scripts/pafet_s18_table.py`** — single-char s18 capture
- **`scripts/pafet_serial_anomaly.py`** — serial variants experiment
- **`scripts/pafet_hw_bp_write.py`** — HW watchpoint on alloc80
- **`scripts/pafet_track_memcpy.py`** — memcpy tracking during cipher
- **Reports**: `PAFET_FULL_STATE.md`, `PAFET_DEVIRT_STATUS.md`, `PAFET_CIPHER_STATUS.md`, `PAFET_PHASE6_REPORT.md`, `PAFET_FINAL.md`

## Honest: I DO NOT declare it solved

- I have not ported `cipher_transform(s30) → s38` offline
- I do not have valid credentials
- I do not have the flag `CMO{...}`
- Mac hashcat still has no match

## Realistic options from here

1. **Hook full 0x140176950 (level 3)**: capture args + return + state to validate whether THAT function generates the 72 B. If so, port it by inspecting loops.
2. **Exhaustive trace instrumentation of each sub-function**: 0x14016d950, 0x140169d10, 0x140168f10, 0x14016cd80, 0x14016ca90, etc.
3. **Differential fuzzing**: observe `s38` for many `(user, serial)` pairs and train a model mapping s30 → s38. If a compressed function exists, it may be found. If it is truly crypto, it won't.
4. **Go back to hashcat with broader wordlists** (Iranian names, author NIMA variants, etc.)
