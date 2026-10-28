# Pafet — Targeted devirtualization — Real status

> **Historical report — superseded in part (2026-10-28).** The cipher has
> since been reconstructed. Start with [PAFET_CRYPTO_AUDIT.md](PAFET_CRYPTO_AUDIT.md)
> and [PAFET_DES3_RECOVERY.md](PAFET_DES3_RECOVERY.md) for the corrected RC4
> stream, 24-byte key construction, three DES3 passes, parity and padding,
> native-loader limitations, and current unresolved credential recovery.
> The original observations below are retained as historical evidence.


## What this round discovered

### Username VM (handler 10 → `0x14003f540` → `0x140048960`)

1. **Attestation chain ported OFFLINE and verified**:
   ```python
   # fmix64 loop over encrypted bytecode at VA 0x1403E5020 (1752 B)
   # Initial seed: 0xf7002e5d6b6ed339
   # Offline result: 0xc4344faf7ef3b8df — matches BYTE-FOR-BYTE the value
   # hardcoded in `cmp rsi, 0xc4344faf7ef3b8df` at 0x14003feda.
   ```

2. **Real dispatcher located**: `0x140048960` with 7 opcodes (0..6), jump table at `0x140048a94`. Accessed via `vtable[2] = 0x14039df30` of vtable `0x1403f1858` (contains chars `"0123456789-+Ee"` + 6 virtual-method vtables).

3. **This vtable corresponds to `std::num_get<char>`** — it's the standard C++ facet for numeric parsing. **The "VM" is NOT a crypto VM**; it's the MSVC CRT RTT (runtime type information) implementation of parsing with tags "iostream stream error" and other clues.

4. **The executor `0x14003f540` is a C++ wrapper** that:
   - Allocates 2 buffers of 1752 B + 2 buffers of 74 B (via `0x140398170` = `std::string::__init_with_byte_fill`)
   - Computes attestation sum over the encrypted bytecode (fmix64 loop, checks = `0xc4344faf7ef3b8df`)
   - Reads QueryPerformanceFrequency + QueryPerformanceCounter (via `0x140005320`) to derive a timing-dependent u32 seed
   - XOR with ASCII tags (`"CANY"`, `"MEMT"`, `"TRYE"`, `"ATTS"`, `"SCMS"`, `"LIVE"`, `"FORM"`) → fmix64 chain
   - Sets up `std::num_get` context + calls the dispatcher

5. **10 calls to dispatcher 0x140048960 per user**, state struct shared in `rcx`, opcodes seen `{0: 1, 1: 1, 2: 2, 3: 2, 4: 1, 5: 2, 6: 1}`.

### Later update

The algorithmic form of `f(user)` was discovered later by extensive differential testing (reverse-scan with XOR 0x5a + per-index increment). Formula at `pafet_offline.py`. **This section is kept for historical context** — the "MSVC num_get" conclusion was partly accurate (the dispatcher IS MSVC's facet) but misleading: the actual derivation is implemented by handler 4 of the dispatcher, which does the custom reverse-scan transform directly. Static analysis of handler 4 instructions `0x140048a05..0x140048a3a` reveals the formula.

### Experimental s18 table (len=1 and len=2) — early-round data

| user | s18 (hex) | K = user XOR s18 |
|---|---|---|
| '0' | 71 | 41 |
| '1' | 72 | 43 |
| 'A' | 22 | 63 |
| 'B' | 1f | 5d |
| 'a' | 42 | 23 |
| 'b' | 3f | 5d |
| 'c' | 40 | 23 |
| 'e' | 46 | 23 |
| 'i' | 3a | 53 |
| 'l' | 3d | 51 |
| 'o' | 3c | 53 |
| 'AA' | 22 25 | 63 64 |
| 'BB' | 1f 22 | 5d 60 |
| '00' | 71 74 | 41 44 |
| 'aA' | 22 45 | 63 04 |
| 'ab' | 3f 45 | 5c 27 |
| 'alice' | 46 43 40 46 4e | 27 2f 29 25 2b |
| 'bob' | 3f 3f 45 | 5d 50 27 |

### Patterns observed and hypotheses tested (historical)

- **f(user)[0]** depends on the full content of the user, not only on the char at pos 0:
  - 'a' alone → s18=0x42; 'ab'[0]='a' → s18=0x3f; 'alice'[0]='a' → s18=0x46 (three distinct values)
  - **Not byte-wise** independent

  (This is because the final formula is reverse-scan, so byte 0 of `s18` comes from the LAST byte of `user` and the index `3*i` depends on position.)

- **Rejected offline (early round)**:
  - `s18 = user XOR {sha256,md5,sha1}(user)[0]` — no standard hash matches
  - `s18[i] = user[i] XOR fmix64(seed XOR user[i] XOR i)[byte]` forward scan — no fit
  - `s18[i] = user[i] XOR fmix64_reversed_chain(user[i..N-1])` reverse scan — no fit
  - Tested 10 candidate seeds (including attestation seeds `0xf7002e5d6b6ed339`, `0xdc5ea5a81cf8e18f`, `0xf0dd36899ec75067`) with 8 byte-pick functions → no match

### Why f was perceived as complex (and really isn't)

The dispatcher 0x140048960 is **not a crypto VM**. It is the **virtual methods of `std::num_get<char>::do_get()`** from the MSVC CRT. The 7 opcodes are facet methods (get, put, parse, advance, etc). The encrypted bytecode (1752 B at 0x1403E5020) **IS NOT USED DIRECTLY** by this dispatcher — it is only used to compute attestation.

But handler 4 of this dispatcher does the custom reverse-scan transform. Reading the handler's assembly `0x140048a05..0x140048a3a` directly reveals the formula:
```
s18[i] = ((user[N-1-i] XOR 0x5a) + 7 + 3*i) & 0xFF
```

The surrounding anti-reverse theater (fake "VM", attestation, encrypted bytecode, QPC seeds) obscured a formula that can be written in 3 Python lines.

## What IS confirmed byte-by-byte offline

- `s20 = serial XOR 0xde188941a3375d3a` — passes validation with `serial01`, `serial02`, etc.
- `s18 = reverse-scan XOR 0x5a + 7 + 3*i` — passes 23/23 differential tests
- Attestation sum of user-VM bytecode = `0xc4344faf7ef3b8df`
- pass8 and oracle patches byte-for-byte
- `sha256(username_hex) == H` compared in handler 8 (H = `9419f86b97bd379906be72ea80517c075a499d0db0a37499132c2d203cc21420`)

## I do not declare victory

The crackme is NOT solved. No valid credentials. No `CMO{...}` flag. The cipher-VM still blocks. See `PAFET_CIPHER_STATUS.md` and `PAFET_PHASE6_REPORT.md`.
