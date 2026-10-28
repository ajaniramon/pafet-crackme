# Pafet — Final report (stopped at block)

## What is proven (verifiable offline, no binary needed)

- `f_user(username) → s18`: reverse-scan formula `s18[i] = ((user[N-1-i] XOR 0x5a) + 7 + 3*i) & 0xFF`. **23/23 observations**, including unseen predictions (Alice, 123, 12x).
- `g_serial(serial) → s20`: XOR with constant `0xde188941a3375d3a`. **10/10** for serials 1–8 bytes long.
- `build_s30(user, serial) = s18 ++ s20`: **3/3 observations**.
- `canonical_s30`: the cipher ignores bit 0 of the last byte of `s20`. **2/2 equivalence predictions** (serial02 ≡ serial03, `'2'` ≡ `'3'`).
- `fmix64` at `0x140002040`: standard MurmurHash3 implementation (constants `0xff51afd7ed558ccd`, `0xc4ceb9fe1a85ec53`).

## Mapped architecture

- Main-VM dispatcher: `0x140396990`, 24 handlers.
- User-VM dispatcher: `0x140048960`, 7 handlers. Handler 4 (`0x140048a05`) performs the `f_user` transformation.
- Nested cipher-VM: `0x1400c0510` (executor) → `0x1400c9170` (dispatcher N1) → `0x1400d3fe0` (executor N2) → `0x14039dd20` (dispatcher N2) → `0x140176950` (crypto handlers).
- 3 calls to the cipher-VM: #1 and #2 produce 24-byte intermediates in `Ctx.s38`; #3 produces the final 72-byte plaintext.
- Opcode 20 (`0x140397239`) checks `s38.startswith("CMO{") && s38.endswith("}")`.

## What is hypothesis / unproven

- `cipher_transform(s30) → s38`: **NOT reconstructed**. The inner function that writes plaintext is inside `0x1401af6b0` (verified via `.pdata`: `[0x1401af6b0..0x1401b0420)`, 3440 B). But:
  - **11,352 calls** to `0x1401af6b0` in cipher#3; **0 modify bytes 64-71** of the first 80-byte buffer monitored (3 inputs, 3 runs).
  - Earlier HW BP did capture 4 writes to bytes 68-71 at RIP `0x1401afa6a` with bytes matching the plaintext.
  - **Unresolved contradiction**: the "first 80B alloc" buffer most likely differs between runs due to ASLR allocation ordering, or the writes fall on a very minority branch of the code.

## What is verified noise (and removed from the pipeline)

| Candidate | Phase | Discard evidence |
|---|---|---|
| Loop 3 of `0x140176950` | 5 | r13/r15 vary across processes with same output; output buffer never re-read |
| `0x14016fa50` | 6 | 15 runs: pre_518, pre_68, pre_20 ASLR-variable; 3 ops write to `[rsp+0x40]` dead; `11a8` matches between different users (alice run2 ≡ bob run1 = `1870797208265104562`) |
| `0x1401af6b0` (as direct producer) | 6 | 11,352 calls, 0 modify bytes 64-71 |

## What is still unsolved

- **Valid credentials**: not obtained. SHA-256 target `9419f86b97bd379906be72ea80517c075a499d0db0a37499132c2d203cc21420` — hashcat on Mac, no match after ~52 phases.
- **Flag `CMO{...}`**: not obtained from the unpatched `pafet.bin`.
- **Mathematically verifiable transformation `s30 → s38`**: not identified.

## Recommendation: **STOP for now**

Reasons:
1. The cipher is VM-nested 3 levels deep with ASLR noise injection that invalidates state-based measurements.
2. 52+ phases of dynamic analysis; every new instrumentation path adds another noisy candidate.
3. Commercial tools (IDA Pro + decompiler) or Unicorn emulation of the full cipher-VM would be the productive route, not more Frida hooks.
4. Hashcat continues; if it finds the credentials, the oracle (`pafet_oracle.exe`) gives the plaintext directly.

## Relevant files

- `pafet_offline.py`: validated pipeline (23/23 + 3/3 + 2/2).
- `scripts/pafet_exp_fa50_stab.py`: EXP A that discards `0x14016fa50`.
- `scripts/pafet_exp_real_crypto.py`: EXP that showed ASLR-variance in state fields of `0x1401af6b0`.
- `scripts/pafet_exp_diff_prepost.py`: pre/post diff, 0 modifications in 11,352 calls.
- `scripts/pafet_find_enclosing_fn.py`: `.pdata` confirmation of enclosing function.
- `scripts/pafet_hw_bp_tail.py`: HW BP that located the write RIP `0x1401afa6a`.
- `PAFET_PHASE6_REPORT.md`: detailed Phase 6 trace.

Binaries stay in the repo root:
- `pafet.bin` (original, intact)
- `pafet_pass8.exe` (2-byte patch to bypass sha256 check)
- `pafet_oracle.exe` (additional patch to force success on opcode 20)
