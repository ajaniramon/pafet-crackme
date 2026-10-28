# Pafet Crackme — Open Call for Help

> **tl;dr**: Reversed about 60% of a nested VM crackme by **NIMA Nikjoo** (VSEC — Pafet Challenge). Hit a wall on the cipher-VM. Looking for reversers who want to help crack the last stretch.

## What's in this repo

A dump of ~50 hours of dynamic + static reversing on the `pafet.bin` challenge. The pipeline from credentials to the point where cipher-VM takes over is reproducible offline (`pafet_offline.py`, 23/23 + 3/3 + 2/2 validations). What's missing: the final `s30 → s38` transformation inside a 3-level nested VM with ASLR-noise-injected state.

- **`pafet.bin`** — original binary (PE x86-64 VC++2019, image base `0x140000000`, 4396544 B), unmodified.
- **`pafet_pass8.exe`** — 2-byte patch that bypasses the SHA-256 username gate. Lets you run with any user and observe the cipher-VM output.
- **`pafet_oracle.exe`** — additional patches that also bypass the final `CMO{...}` check, printing the raw 72-byte plaintext for any input.
- **`pafet_offline.py`** — validated offline pipeline for the parts that are solved.
- Reports in English (`PAFET_FINAL.md`, `PAFET_FULL_STATE.md`, `PAFET_PHASE6_REPORT.md`, `PAFET_CIPHER_STATUS.md`, `PAFET_DEVIRT_STATUS.md`, `pafet_vm_program.md`).
- `scripts/` — all Frida instrumentation and offline analysis scripts (100+ files, numbered by phase).

## The challenge in one paragraph

The program asks for `username` and `serial`. The username is first checked by SHA-256 against a hardcoded hash. If accepted, both inputs go through a transformation that derives a 72-byte plaintext `s38`. The program checks that `s38` starts with `CMO{` and ends with `}`. If so, it prints `[+] Flag: <s38>`. The hash target is:

```
sha256(username) == 9419f86b97bd379906be72ea80517c075a499d0db0a37499132c2d203cc21420
```

## What's solved

| Stage | Formula | Status |
|---|---|---|
| `f_user(user) → s18` | reverse-scan `s18[i] = ((user[N-1-i] ^ 0x5a) + 7 + 3*i) & 0xFF` | ✅ 23/23 observations incl. unseen predictions |
| `g_serial(serial) → s20` | `serial ^ 0xde188941a3375d3a` | ✅ 10/10, lens 1..8 |
| `build_s30 = s18 ++ s20` | concatenation | ✅ 3/3 |
| `canonical_s30` | cipher ignores bit 0 of `s20[-1]` (so `serial02 ≡ serial03`, `'2' ≡ '3'`) | ✅ 2/2 equivalence predictions |

Run `python pafet_offline.py` to see all of the above validate.

## What's blocking

**`cipher_transform(s30) → s38` is not reversed.** The cipher-VM is nested 3 levels deep (level 1 at `0x1400c0510`, level 2 at `0x1400d3fe0`, level 3 at `0x140176950`), each with its own encrypted bytecode and dispatcher. On top of that, the protector appears to inject ASLR-dependent state into many internal fields that **do not affect the final output** but confuse state-based static recovery.

Specifically identified as **noise** (same credentials, different processes → different internal state, same `s38`):

- Loop 3 of `0x140176950` — writes to a buffer never read again
- `0x14016fa50` — three "key-dependent" ops are dead stores; actual state update depends only on prior ASLR-seeded state
- `0x1401af6b0` as a direct producer — 11,352 calls per cipher#3 invocation; 0 modify bytes 64-71 of the first 80-byte heap buffer monitored. The RIP that writes those bytes (`0x1401afa6a`) *is* inside this function per `.pdata`, but the diff pre/post experiment cannot locate the specific call. Most likely the buffer monitored differs between runs by ASLR allocation order.

Full details and reproducers in `PAFET_FINAL.md` and `PAFET_PHASE6_REPORT.md`.

## Hashcat line

The SHA-256 target has been attacked for ~52 phases on a Mac mini (M-series). Masks tried include: standard wordlists (rockyou, best64, dive, d3ad0ne), `?l^N` / `?a^N` masks for N up to 7, prefixes `vsec/VSEC/Pafet/pafet/PAFET/nikjoo/Nikjoo/NIKJOO/nima`, Persian name wordlists (~400), GitHub author lists (~388 names). No match. Suggests either an uncommon word, a non-dictionary string, or OSINT clue I'm missing.

## Ways to help

1. **OSINT on the author** — Nima Nikjoo (GitHub `NIKJOO`). Any guess for the username that passes `sha256(x) == 9419f86b...` wins immediately.
2. **Known-plaintext attack from `CMO{` and `}`** — if the cipher is any kind of invertible stream-ish construction, those 5 bytes could be a lever. The avalanche test (every bit changes with any input bit) argues against a stream cipher, but maybe the structure helps anyway.
3. **Unicorn or qiling emulation** — emulate `0x1400c0510` with a stub environment and feed s30 directly. This bypasses the whole username question and gives a `cipher(s30) → s38` oracle. I started on this in `pafet_unicorn_h10.py` for a sibling VM and ran into CRT stub proliferation.
4. **Static devirtualization** — read the three dispatcher jump tables (`0x1400c94a8` level 1, `0x14039ddec` level 2) and port handlers manually. Painful but tractable.
5. **Spot a mistake** — if a diff finding or an inferred invariant is wrong, say so. Blocking contradictions are listed explicitly in `PAFET_FINAL.md`.

## Running the binary

Windows x64 only. The original is harmless (fails credential check). The patched versions are convenient to see cipher-VM output without needing a valid username:

```powershell
# Original — asks for user/serial, says "Invalid username" for anything
.\pafet.bin

# Patched: skips SHA-256 gate, still checks CMO{...} prefix at the end
.\pafet_pass8.exe

# Oracle: skips both checks, prints the raw plaintext for any input
.\pafet_oracle.exe
```

Both patched versions are included for convenience of other reversers. Byte-for-byte diffs are documented in `PAFET_FULL_STATE.md`.

## Credits and license

Challenge binary © NIMA Nikjoo (`NIKJOO` on GitHub). Reversing notes and scripts in this repo are mine (`ajaniramon`); use them however you like. No warranty.

## Who I am

Ramón, Barcelona. I'm not a professional reverser — this was a hobby grind done with Claude Code as a tool. If you want to pair on this, open an issue or ping me on X. If you solve it, let me know what you did; I'd love to read the writeup.
