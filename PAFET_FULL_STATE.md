# Pafet Crackme — Full reversing state

> **Historical report — superseded in part (2026-10-28).** The cipher has
> since been reconstructed. For corrected semantic/control-flow coverage see
> [PAFET_SEMANTIC_COVERAGE.md](PAFET_SEMANTIC_COVERAGE.md); for crypto see
> [PAFET_CRYPTO_AUDIT.md](PAFET_CRYPTO_AUDIT.md)
> and [PAFET_DES3_RECOVERY.md](PAFET_DES3_RECOVERY.md) for the corrected RC4
> stream, 24-byte key construction, three DES3 passes, parity and padding,
> native-loader limitations, and current unresolved credential recovery.
> The original observations below are retained as historical evidence.


**Author**: NIMA Nikjoo (GitHub `NIKJOO`) · **Challenge**: VSEC — Pafet Challenge
**Document date**: 2026-10-28
**Status**: UNSOLVED. Attack path confirmed; blocked at username preimage.

---

## 1. Binaries in play

All located at `C:\Users\Ramón\Desktop\` originally; copied into this repo root (4,396,544 B each, PE x86-64 VC++2019, image base `0x140000000`).

| File | What it is |
|---|---|
| `pafet.bin` | **Original, NO patches** |
| `pafet_pass8.exe` | `pafet.bin` with 2 bytes patched (bypasses the user's SHA-256 check) |
| `pafet_oracle.exe` | `pafet.bin` with further patches (bypass user + bypass final check + emits plaintext) |
| `pafet_keydump3.exe` | Previous experimental variant (unused in this round) |

### Byte-for-byte patch diffs

**pafet_pass8 vs pafet.bin** (2 bytes):

| FO | VA | Original | Patched |
|---|---|---|---|
| 0x395efb | 0x140396afb | 0x75 | 0x90 |
| 0x395efc | 0x140396afc | 0x12 | 0x90 |

Turns `jne 0x140396b0f` (jump to the memcmp fail inside the opcode 8 handler) into `nop; nop` → the memcmp is always treated as "equal", the username is accepted regardless of its SHA-256.

**pafet_oracle vs pafet.bin** (adds to the previous 2):

| FO | VA | Original | Patched |
|---|---|---|---|
| 0x395eec | 0x140396aec | 0x75 | 0x90 |
| 0x395eed | 0x140396aed | 0x21 | 0x90 |
| 0x395efb | 0x140396afb | 0x75 | 0x90 |
| 0x395efc | 0x140396afc | 0x12 | 0x90 |
| 0x396639 | 0x140397239 | 0x4c | 0xe9 |
| 0x39663a | 0x14039723a | 0x8b | 0x7d |
| 0x39663b | 0x14039723b | 0x77 | 0x00 |
| 0x39663c | 0x14039723c | 0x38 | 0x00 |
| 0x39663d | 0x14039723d | 0x49 | 0x00 |

- The first 4 patches `nop` two `jne`s of handler op 8 (lencmp + memcmp). Forces `SHA256(user) == H` to be true.
- The other 5 bytes turn the first 5 bytes of the opcode 20 handler into `jmp +0x7D` → jumps to the final `mov ebx, 1; ret` of the handler, **skipping the comparison `plaintext.startswith("CMO{")` and `endswith("}")`**. Result: any plaintext is considered valid → "[+] Flag: ..." is printed with the garbage plaintext.

---

## 2. Observed behavior

### ORIGINAL `pafet.bin` (no patches)
With any arbitrary credential → `[!] Invalid username`. The first check (SHA-256 of the user) fails.

### `pafet_pass8.exe`
With arbitrary credentials:
- SHA-256 check passes artificially
- Full key derivation and cipher execute
- At the end, handler 20 verifies `plaintext.startswith("CMO{") && plaintext.endswith("}")` → almost always fails
- Output: `[!] Wrong credentials` (because the resulting plaintext does not start with `CMO{`)

### `pafet_oracle.exe`
With arbitrary credentials:
- Both checks skipped
- Output: `[+] Correct!\r\n[+] Flag: <72 BINARY bytes of plaintext>` followed by newline

Empty credentials (`\r\n\r\n`) in oracle → plaintext = `3510366fbff5cb69f9ae3d6d21437b3f19d8374fca2495c463fccc9db989391f4b73bf899972069bb371dacad9d5681d70652b37dbf0f187ed7e1fd28758d0e1a984aeee3d8d6062` (sha256[:16] = `956043bd298b7234`).

**IMPORTANT**: that plaintext is NOT the flag. It is the output of the algorithm for `(user='', serial='')`, binary junk.

---

## 3. Binary architecture

### 3.1 Main dispatcher (main-VM)

| Address | Name | What it is |
|---|---|---|
| `0x140396990` | **Main dispatcher** | Function receiving `(rcx=Ctx, rdx=opcode u32, r8=data_ptr_ptr)`. First instructions: `mov rax, rsp; mov [rax+0x10], rbx; ...; mov rdi, rcx; cmp edx, 0x17; ja default; mov eax, edx` |
| `0x14039d4a0` | **Thunk** | `mov r8, [r8]; add rcx, 8; mov edx, [rdx]; jmp 0x140396990` — this is the "callable" from outside and via vtables |
| `0x140397380` | **Jump table** | 24 int32 entries (RVA of each handler), indexed by opcode 0..23 |
| `0x14039732f` | Dispatcher epilogue | security cookie check + ret |

### 3.2 Handlers 0..23

| Opcode | Handler VA | Functional role |
|---|---|---|
| 0 | 0x1403969f0 | Initial setup |
| 1-5 | 0x140396a51..0x140396a79 | Setup, not directly observed |
| 6 | 0x140396aad | — (short jmp to 0x14039731b with ecx=5) |
| 7 | 0x140396ab7 | Reads `[rdi+0x10]`, jmps to shared body 0x140396a7d |
| **8** | **0x140396abd** | **SHA-256 username check — string comparison** |
| 9 | 0x140396b24 | — |
| 10 | 0x140396b2e | **Derives s18 from user** → calls nested executor `0x14003f540` with vtable `0x1403f1858` (which contains `0x14039df30` as q[2] + chars `"0123456789-+Ee"`) |
| 11 | 0x140396c36 | String operation (resize/concat), calls `0x140399990` |
| 12 | 0x140396d87 | — |
| 13 | 0x140396ee2 | String operation, calls `0x140399990` |
| 14 | 0x140396f62 | — |
| 15 | 0x140396f78 | **Concat/resize** → calls `0x140398420` |
| 16 | 0x140396f92 | String operation, calls `0x140399990` |
| 17 | 0x1403970ed | Prepares cipher-VM setup, calls cipher `0x1400c0510` |
| 18 | 0x1403970fb | Prepares cipher-VM setup, calls cipher `0x1400c0510` |
| **19** | **0x140397107** | **FIRST site where plaintext appears**. Calls cipher-VM `0x1400c0510` with vtable `0x1403f1a68` (whose q[2] = 0x14039de80 = main-VM thunk) |
| **20** | **0x140397239** | **Final check** `plaintext.startswith("CMO{") && plaintext[-1]==0x7d` |
| 21 | 0x1403972ca | Prints "wrong credentials" (ecx=9) |
| **22** | **0x1403972d1** | Prints `"[+] Flag: " + plaintext` via ostream (ecx=10, 11) |
| 23 | 0x140397316 | Prints "correct!" (ecx=12) |

### 3.3 Captured opcode sequence (with pass8, any user/serial)

30 ops observed at runtime:
```
[6, 7, 8, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 18, 17, 18, 18, 19, 18, 17, 18, 18, 19, 18, 17, 18, 18, 20, 21, 22]
```

Pattern:
- Setup (6..16): preparation, key derivation from user and serial
- Cycle 1: `17, 18, 19` → first cipher-VM invocation (plaintext appears)
- Cycle 2: `18, 17, 18, 18, 19` → second cipher-VM invocation
- Cycle 3: `18, 17, 18, 18, 19` → third cipher-VM invocation
- End: `18, 17, 18, 18, 20, 21, 22` → CMO{ check + emit output

Opcode 20 → if true → opcode 23 ("correct!"); if false → opcode 21 ("wrong credentials") + no 22.

### 3.4 Main-VM Ctx (observed fields)

The main dispatcher saves `rdi = rcx` (ptr to Ctx) on entry. Offsets within the Ctx:

| Offset | Observed content | Used by |
|---|---|---|
| +0x00 | pointer to std::string | handler 7, 8 |
| +0x08 | pointer to std::string → **plain username** (`"alice"`, `"bob"`, etc.) | handler 7, 8, 10, ... |
| +0x10 | ptr to dword (parsed serial?) | handler 7, 11 |
| +0x18 | pointer to std::string → **f(username)**, same length as username | handler 10..19 |
| +0x20 | pointer to std::string → **transformed serial (8 B XOR)** | handler 11..19 |
| +0x28 | int | handlers 10/14 |
| +0x30 | pointer to std::string → **key material** = concat(f(user), serial_xor, zero-padding) | handler 19 |
| +0x38 | pointer to std::string → **plaintext (output)** | handlers 19, 20, 22 |
| +0x40 | int (counter) | handler 17, 18 |
| +0x48 | int | handler 21 |
| +0x50 | int | handler 22 |

### 3.5 Sub-executors (nested VMs)

| Executor | Called by | Constant vtable | Note |
|---|---|---|---|
| `0x14003f540` | handler 10 | `0x1403f1858` (vtable `std::num_get`, chars `"0123456789-+Ee"`) | Derives s18 from user. Prolog allocates ~18 KB stack. Uses fmix64 with seeds `0xf0dd36899ec75067`, `0xdc5ea5a81cf8e18f`. Has 0x6d8=1752 B of bytecode |
| `0x140399990` | handlers 11, 13, 16 | — | `std::string::assign` or similar (memory copy with stack cookie) |
| `0x140398420` | handler 15 | — | `std::string::resize` similar |
| `0x1400c0510` | handler 19 (and refs in 17, 18) | `0x1403f1a68` (vtable whose q[2] = main-VM thunk) | **Main CIPHER-VM**. Generates the 72 B plaintext |

### 3.6 Cryptographic primitives in the PE

| Primitive | Present | Address |
|---|---|---|
| **SHA-256** H[0..7] | ✓ | FO 0x282f66 (VA ~0x140283b66) |
| **SHA-256** K[0..3] | ✓ | FO 0x297272 (VA ~0x140297e72) |
| **fmix64** function | ✓ | 0x140002040 (constants `0xff51afd7ed558ccd`, `0xc4ceb9fe1a85ec53`) |
| MurmurHash3 fmix64 constants | ✓ | 5322/6206 occurrences in .text (heavily used) |
| golden ratio prime `0x9e3779b97f4a7c15` | ✓ | 3715 occurrences |
| LCG constant `0x2545f4914f6cdd1d` | ✓ | 3815 occurrences |
| CP constant `0xc2b2ae3d27d4eb4f` | ✓ | 178 occurrences |
| **AES** S-box | ✗ | — |
| **HMAC** ipad/opad | ✗ | — |
| **MD5, RC4, ChaCha20, CRC32** | ✗ | — |

Conclusion: the only standard primitive is **SHA-256**. Everything else is **custom VM with fmix64 + LCG primitives** (identical to the VSEC-REVoid model).

---

## 4. Key derivation formula — PARTIAL

### 4.1 ✅ `s20` (serial transform) — CONFIRMED

```python
SERIAL_KEY = bytes.fromhex('de188941a3375d3a')   # 8 bytes

def serial_transform(serial_str):
    """Verified for 8-byte serials."""
    s = serial_str.encode()
    k = SERIAL_KEY[:len(s)] if len(s) <= 8 else SERIAL_KEY * ((len(s)+7)//8)
    return bytes(a^b for a,b in zip(s, k[:len(s)]))
```

Runtime validation:
- `serial_transform("serial01") = ad7dfb28c25b6d0b` ✓ matches s20_runtime
- `serial_transform("serial02") = ad7dfb28c25b6d08` ✓ matches

The constant `0xde188941a3375d3a` **does NOT exist as a literal in the PE** → it is computed at runtime (suspected: fmix64(seed_scriptvm) or similar). **Locating the exact source of this constant is PENDING WORK**.

### 4.2 ✅ `s18` (user transform) — SOLVED

Formula discovered after more experiments:

```python
def f_user(user_bytes: bytes) -> bytes:
    """Reverse-scan transform. 23/23 observations pass."""
    N = len(user_bytes)
    s18 = bytearray(N)
    for i in range(N):
        c = user_bytes[N - 1 - i]
        s18[i] = ((c ^ 0x5a) + 7 + 3*i) & 0xFF
    return bytes(s18)
```

Earlier hypothesis that `s18 = user XOR nested_vm_output(user)` where the nested VM must be devirtualized turned out to be wrong — the actual formula is a simple reverse-scan with XOR mask `0x5a` plus a per-index increment. Discovered by diffing lots of 1-byte and 2-byte usernames.

Validation table (23/23): see `pafet_offline.py`.

### 4.3 ✅ `s30` (full key material) — CONFIRMED

`s30 = concat(s18, s20)` — observed experimentally for 3 inputs:

| Input | s30 (hex) |
|---|---|
| alice/serial01 | `464340464e ad7dfb28c25b6d0b` |
| alice/serial02 | `464340464e ad7dfb28c25b6d08` |
| bob/serial01   | `3f3f45 ad7dfb28c25b6d0b` |

The s30 is the "key" that enters the cipher-VM. Zero-padding observed earlier is in-memory layout, not content.

### 4.4 ❌ `s38` (plaintext — 72 B) — UNKNOWN

Built in 3 cipher-VM iterations (opcode 19 × 3). Observations:

- After cipher-VM #1: s38 ≈ 24 partial B
- After cipher-VM #2: s38 ≈ another 24 B
- After cipher-VM #3: s38 = final 72 B

Captures of `s38` after each cipher-VM call with 3 inputs:

| Call # | alice/s01 | alice/s02 | bob/s01 |
|---|---|---|---|
| 1 | `88f312f8161b3676...` | `139089e3749b2de2...` | `37729bcc5a4c0d82...` |
| 2 | `6f181551dbeace85...` | `81844cd800c0e85b...` | `4005cd65fa1ad606...` |
| 3 (final) | `fd2077a101acdfae1a7349c88533c26c...` | `fb5009a95e91bbb44cb22dbd3a1f2eab...` | `e6e976ec62cf3fba80f7c987a374659a...` |

**Experimentally confirmed**: 32/32 bytes change for any 1-byte variation of user or serial → full avalanche → **NOT a simple XOR keystream**. It is a block-like / hashed-expand cipher.

### 4.5 Final plaintext — DIFFERENTIAL TESTS (pass8, before opcode 20)

| user | serial | plaintext (72 B, hex) | sha256[:16] |
|---|---|---|---|
| alice | serial01 | fd2077a101acdfae...489cdbea87a46618 | 66b0ab3df07fc783 |
| alice | serial02 | fb5009a95e91bbb4...4b7a7d5d908d553 | 68bdf732c113e1eb |
| alice | serial03 | fb5009a95e91bbb4...4b7a7d5d908d553 | 68bdf732c113e1eb |
| alicE | serial01 | 56b9ba5b78041c9a...c75d266677c4e0fe | 21c1eb1c33ce4369 |
| aliceX | serial01 | 4d87401c1a0f29ed...b655f64a9d4d85fa | 7b0e07fbd7b27647 |
| alice | serial011 | 3ad199d1459abc2c...e34c7a074ecc2e19 | bd2ffacec2e73684 |
| A | 0 | 60b052c0635d702b...f70a4a689c31bbc0 | 281001ff91cdd3cc |
| AA | 0 | 4c9af03456aa0d6b...454a40ec1d462e7e | 280fd5e9b3be6a7c |
| A | 00 | c17b615c4c5032db...9186ae27803e711f | e6b1175a9fc53968 |
| '' | '' | 3510366fbff5cb69...a984aeee3d8d6062 | 956043bd298b7234 |

**Anomaly**: `('alice','serial02')` and `('alice','serial03')` give IDENTICAL plaintext. But `('alice','serial01')` gives a different one. This is now explained: the cipher ignores bit 0 of the last byte of `s20`, so `serial02` (xor last byte masks to even) ≡ `serial03`. See `canonical_s30` in `pafet_offline.py`.

---

## 5. Ciphertext and algorithm identification

### Static ciphertext: NOT FOUND

Full PE scanned (4.4 MB):
- 0 windows of 72 B with entropy > 5.5 bits/byte (theoretical max 6.17 for 72 B)
- No "obvious" fixed ciphertext

**Interpretation**: it is not "ciphertext XOR key = plaintext". The VM **generates** the 72 B stream-cipher-style, with the keystream dependent on the key material `s30`. There is no ciphertext to invert — it is a **PRF expansion of the key**.

### Cipher algorithm: NESTED VM

- `0x1400c0510` (cipher-VM) executes an encrypted bytecode of 1704 B living at `0x1403eb2f0` in the PE
- Produces (a) `950e04ad23009b22` constant in `rcx+0x28` (self-test/attestation value) and (b) 72 B of key-dependent plaintext written to a heap buffer allocated inside the VM
- The cipher-VM is a **generic executor** that uses vtable `0x1403f1a68` whose virtual methods are thunks to the main-VM → **nested interpretation**

To reproduce offline you need:
1. Decrypt the 1704 B of bytecode with seed `0x75BE7955E0AB34D0` (via fmix64 + segmented live window, VSEC-REVoid style)
2. Implement the cipher-VM opcode interpreter
3. Or easier: emulate with **Unicorn** from `0x1400c0510` with an environment stub

---

## 6. Path A — Crack the SHA-256 of the username (hashcat)

- Goal: find `username` such that `sha256(username) hex ascii == "9419f86b97bd379906be72ea80517c075a499d0db0a37499132c2d203cc21420"`
- **Confirmed at runtime** (memcmp hook in handler 8): compares exactly that value
- Hashcat running on Mac mini via SSH alias `mac`, tmux session `pafet-h`
- Last phase: 52 (`nima?a^6`) — mask "nima" followed by 6 arbitrary characters (95^6 ≈ 735·10⁹ combinations)
- `/tmp/hc.pot` empty → no match so far

Masks tried (phases 1-52) include: standard dictionaries (rockyou plain, best64, dive, d3ad0ne), masks `?l^N`, `?a^N`, prefixes `vsec/VSEC/Pafet/pafet/PAFET/nikjoo/Nikjoo/NIKJOO/nima`, Persian name wordlists (400 names), GitHub authors (388 names).

**Next**: consider more prefixes (Niloofar, Sepehr, popular Iranian names), paths with trailing digits, interleaved uppercase.

---

## 7. Deliverables — scripts and data

All inside `scripts/`:

### Python scripts (static analysis)
- `pafet_audit_patch.py` — byte-by-byte diff original vs pass8/oracle, patch disasm
- `pafet_check_rip_const.py` — verifies `0x1403f1a68` is a vtable with main-VM thunk
- `pafet_disp_entry.py` — disasm main dispatcher + thunk + handlers 17/18/19
- `pafet_eps_callers.py` — callers of dispatchers and refs to E/P/Sbox
- `pafet_find_ciphertext.py` — hunt for static ciphertext (negative)
- `pafet_find_flagstr.py` — attempt to locate "[+] Flag:" in PE (not there — built at runtime)
- `pafet_find_pt_in_pe.py` — plaintext in PE (not there)
- `pafet_handler8_20.py` — disasm handlers 6/7/8/10/11/20
- `pafet_handler19_full.py` — full disasm of handler 19
- `pafet_handler22_funcs.py` — functions in handler 22 (output)
- `pafet_main_handlers.py` — map of the 24 handlers
- `pafet_scan_antidebug.py` — scan rdtsc/ud2/__fastfail
- `pafet_vtable_map.py` — map of executors + vtables per handler

### Python scripts (Frida instrumentation)
- `pafet_frida_probe.py` + `.js` — exception handler + minimal hooks
- `pafet_frida_mainvm.py` — main dispatcher hook, pre/post dump
- `pafet_frida_cipher_boundary.py` — pre/post scan on each cipher-VM call
- `pafet_frida_cipher_diff.py` — pre/post diff on rcx/r8/r9/stack
- `pafet_frida_cipher_vary.py` — cipher-VM variability (5 inputs → constant)
- `pafet_frida_handler19.py` — handler 19 specific hook
- `pafet_frida_memcmp.py` — captures handler 8 memcmp buffers
- `pafet_frida_perop.py` — per-op diff with 3 varied inputs
- `pafet_capture_plaintext_pass8.py` — captures plaintexts with 10 inputs
- `pafet_cipher_hunt_buffer.py` — locates the plaintext heap buffer
- `pafet_cipher_wide_rcx.py` — dumps 4 KB rcx cipher-VM
- `pafet_derive_formula.py` — batteries of controlled inputs

### Python scripts (offline verification)
- `pafet_offline.py` — **main pipeline** (23/23 + 3/3 + 2/2)
- `pafet_validation_reproducible.py` — the 3 claims (A: baseline sha, B: pre/post cipher, C: universal u64)
- `pafet_diff_analysis.py` — diff analysis of observed plaintexts
- `pafet_bc_decrypt_test.py` — XOR attempts on the script-VM bytecode (negative)

### Captured data
- `pafet_mainvm_ops.json` — 30 opcodes of the main dispatcher with 4 KB rcx + 1 KB rsp dumps
- `pafet_perop_diff.json` — comparison of 3 inputs across 28 ops
- `pafet_handler19_trace.json` — handler 19 traces

### Blobs
- `pafet_blobs/scriptvm_bc.bin` — extracted script-VM bytecode (2730 B, sha b88ac281...)
- `pafet_blobs/cipher_bc.bin` — extracted cipher-VM bytecode (1704 B, sha 7d9e92d9...)

---

## 8. Real blockers (what prevents a full solve)

### Blocker #1: unknown username
- **Symptom**: `sha256(username_X) != 0x9419f86b...` for any reasonable `username_X` tried
- **Instruction**: `0x140396afb: jne 0x140396b0f` in opcode 8 handler (already disabled by pass8 patch, but the correct username is still needed for key derivation)
- **Only route**: hashcat (ongoing). Possibly OSINT on the author.
- **Estimated effort**: hours-to-days (if within a reasonable mask) to impossible (if it's a random blob)

### Blocker #2: cipher-VM producing s38
- **Symptom**: full avalanche in plaintext from any byte-change
- **Root cause**: cipher-VM is a nested executor of the main-VM via vtable
- **Only route**: devirtualize `0x1400c0510` or emulate it with Unicorn
- **Estimated effort**: days (emulation) to weeks (rewrite)

---

## 9. Realistic attack routes (ordered by feasibility)

### Route 1 — Wait for hashcat (cheapest)
- Requires no further active work. If it finds `username` → then attack the serial some other way.
- Status: ongoing, phase 52, 0 matches.

### Route 2 — OSINT on NIMA Nikjoo
- Author: NIMA Nikjoo (GitHub `NIKJOO`). Check their profile, repos, Twitter/X, posts on ReverseEngineering/CTF-time, the VSEC-REVoid repo, names of people they acknowledge, etc.
- Candidates to try: Iranian given names (Nima, Niloofar, Sepehr, Dariush, Ali, Sara, ...), truncated personal emails, handles.
- Fast to run; depends on the author having picked something "guessable".

### Route 3 — Localized Unicorn emulation
- Emulate `0x1400c0510` to compute s38 with any s30
- Combined with `f_user` and `g_serial` (both already solved offline): offline `pafet_plaintext(user, serial) → 72 B`
- Enables: given a candidate `username`, brute-force `serial` offline looking for `plaintext.startswith("CMO{")`
- **Depends on**: still need the correct `username` (without it, the search space is huge: 10⁶ users × 10⁶ serials)

### Route 4 — Known-plaintext attack
- If the cipher-VM generates a stream cipher `plaintext = ciphertext XOR keystream(key)` and we know `plaintext[0..3] = "CMO{"` and `plaintext[-1] = "}"`:
- We could invert 5 keystream bytes for a hypothetical (user, serial)
- **But** cipher-VM does not look like a simple stream cipher (full avalanche observed). This route may not work.

### Route 5 — Collider attack on SHA-256
- Not viable. SHA-256 is preimage-resistant. No shortcut.

---

## 10. Reproducible verified facts

- **CLAIM (A)** oracle plaintext baseline sha256[:16] = `956043bd298b7234` ✓ PASS
- **CLAIM (B)** plaintext ABSENT in memory pre-1st cipher-VM, PRESENT post ✓ PASS (0 → 2 copies)
- **CLAIM (C)** cipher-VM writes universal u64 `95 0e 04 ad 23 00 9b 22` in rcx+0x28 ✓ PASS (4 pairs, always equal)
- **CLAIM (D)** original `pafet.bin` + any cred → `[!] Invalid username` ✓ PASS
- **CLAIM (E)** handler 8 compares `hex(sha256(user)) == "9419f86b97bd379906be72ea80517c075a499d0db0a37499132c2d203cc21420"` ✓ PASS (memcmp hook confirmed)
- **CLAIM (F)** `s20 = serial XOR 0xde188941a3375d3a` ✓ PASS (verified for serial01, serial02)
- **CLAIM (G)** plaintext varies with `(user, serial)` ✓ PASS (10 different pairs give 10 different plaintexts, except for the serial02/03 coincidence)
- **CLAIM (H)** 32/32 bytes of the plaintext change with any input byte-change ✓ PASS (full avalanche)
- **CLAIM (I)** pass8 and oracle patches documented byte-for-byte ✓ PASS

---

## 11. What is strictly needed to solve the crackme

1. **username** whose `sha256(hex) == H`
2. **serial** that combined with the correct username produces plaintext starting with `CMO{` and ending with `}`
3. Run the original `pafet.bin` with those credentials
4. Capture the output `[+] Correct!\r\n[+] Flag: CMO{...}`

---

## 12. Final deliverables (summary)

- ✅ Derivation formula `s18` (reverse-scan, 23/23)
- ✅ Derivation formula `s20` (XOR, 10/10)
- ✅ `build_s30` (3/3) and `canonical_s30` (2/2)
- ❌ Decryption algorithm (cipher-VM NOT ported)
- ⚠️ Real status: username/serial/flag NOT recovered

**Hashcat continues as an active route. Wait for its result before investing more weeks in Unicorn emulation.**
