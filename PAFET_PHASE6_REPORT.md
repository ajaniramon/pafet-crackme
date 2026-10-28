# PAFET Phase 6 — Deliverable

## Question

Does `0x14016fa50` participate in generating `s38`?

## Verdict: NO. It is also ASLR noise.

## Evidence

### Cross-process stability experiment (15 runs)

| Credential | pre_518 call#1 (5 runs) | pre_68 call#1 (5 runs) | pre_20 call#1 (5 runs) | s38 sha16 |
|---|---|---|---|---|
| `alice`/`serial01` | 5 distinct values | {11, 6, 23, 39, 6} | 5 distinct values | `66b0ab3df07fc783` × 5 |
| `alice`/`serial02` | 5 distinct values | {36, 11, 6, 18, 18} | 5 distinct values | `68bdf732c113e1eb` × 5 |
| `bob`/`serial01` | 3+ distinct values | {6, 11, 11, ...} | 3+ distinct values | `8f597e89088ea801` × 3+ |

**Same pattern as Loop 3 in Phase 5**: internal values are ASLR-variable, `s38` is process-stable. `0x14016fa50` does not contribute causally to `s38`.

### Static analysis of `0x14016fa50` — the 3 "key-dependent ops" are dead code

```asm
0x14016fa5f: movsxd rax, [rcx+0x68]     ; rax = key-i32
0x14016fa70: imul rax, const1
0x14016fa7e: xor rax, [rsi+0x20]
0x14016fa82: [rsp+0x40] = rax           ; DEAD store
0x14016fa87: rax = [rsp+0x40]           ; reload
0x14016fa8c: movsxd rax, [rsi+0x68]     ; OVERWRITE rax (prev dead)
...   (same pattern 2 more times)
0x14016fac2: rax = [rsi+0x518]          ; OVERWRITE AGAIN — final rax = state
0x14016fac9..0x14016fb1e: fmix64 state transition on [rsi+0x518]
```

The 3 "key mixes" into `[rsp+0x40]` are **fully dead** — none are read before being overwritten. The only effective update is to the state qword `[rsi+0x518]`, which depends only on the prior state.

### Candidate functions probed — none contain plaintext at exit

Hooked 6 candidates during cipher #3 and scanned the heap for the plaintext prefix (`fd 20 77 a1 01 ac df ae`):

| Function | Hits | Call count (cipher#1) |
|---|---|---|
| 0x14016d950 | 0 | 899 |
| 0x140169d10 | 0 | **47,202** |
| 0x140168f10 | 0 | 509 |
| 0x14016cd80 | 0 | 509 |
| 0x14016ca90 | 0 | **44,958** |
| 0x14016fa50 | 0 | 107 |
| 0x140176950 | 0 | 1 |

**fn_169d10 and fn_16ca90 are called ~45k times per cipher call** → massive utility noise (allocators, string ops). Not pure crypto.

### Backward slicing from the `s38` write

Memcpy source of the plaintext: 80-byte alloc done by the caller at `0x1403c976c` (MSVC CRT `std::string::_Reallocate`). This is the final consumer via memcpy. The **real producer** writes byte-by-byte directly to the 80-byte buffer, before the memcpy.

### HW watchpoint on bytes 68-71 of the plaintext buffer (new)

Captured **5 writes to the final dword (bytes 68-71)**:

| Hit | RIP (VA) | rcx | rdx | r8 |
|---|---|---|---|---|
| 1 | `0x1403d67e8` | buf+0 | 0x0 | 0x8 |
| 2 | `0x1401afa6a` | buf | 0x7 | 0x18 |
| 3 | `0x1401afa6a` | buf | 0x6 | 0x66 |
| 4 | `0x1401afa6a` | buf | 0x5 | 0xa4 |
| 5 | `0x1401afa6a` | buf | 0x4 | 0x87 |

**4 consecutive hits at the same RIP with rdx = 7, 6, 5, 4** → **8-iteration loop** in `0x1401af6b0` (the enclosing function). This function writes to the plaintext buffer.

### `0x1401af6b0` code at the BP (0x1401afa6a):

```asm
0x1401afa14: mov rcx, r14
0x1401afa17: call 0x140197960
0x1401afa1c: movzx ecx, [r14+0x77f]          ; read state byte
0x1401afa24: movabs r8, 0xc4ceb9fe1a85ec53   ; fmix const 2
0x1401afa2e: mov r11, [r14+0x668]
0x1401afa35: movabs r15, 0xff51afd7ed558ccd  ; fmix const 1
0x1401afa3f: mov r9, [r14+0x658]
0x1401afa46: movzx r10d, [r14+0x670]
0x1401afa4e: mov eax, eax
0x1401afa50: xor rcx, rax
0x1401afa53: xor rcx, [r14+0x11a8]
0x1401afa5a..0x1401afa70: fmix64 chain
0x1401afa72: mov rax, [r14+0x730]
0x1401afa79: xor rax, [r14+0x738]
```

**Reads 7 state fields `[r14+0x*]`, calls `0x140197960`, mixes with fmix64. Writes to the plaintext buffer.**

### Anti-ASLR verification of `0x1401af6b0` (EXP real_crypto, 9 runs)

Hook: first entry into `0x1401af6b0` within cipher#3.

| creds | run | 668 | 658 | 670 | 77f | 11a8 | 730 | 738 | s38sha |
|---|---|---|---|---|---|---|---|---|---|
| alice/s01 | 1 | 9619...669 | 10195...144 | **1** | **27** | 7006...318 | 17841...582 | 11098...333 | 66b0ab3d... |
| alice/s01 | 2 | 8676...963 | 14357...341 | **1** | **27** | 1870...562 | 17720...383 | 15663...788 | 66b0ab3d... |
| alice/s01 | 3 | 0 | 0 | 0 | 0 | 0 | 0 | 0 | 66b0ab3d... |
| alice/s02 | 1-3 | 0 | 0 | 0 | 0 | 0 | 0 | 0 | 68bdf732... |
| bob/s01 | 1 | 4557...517 | 14436...375 | **0** | **27** | 1870...562 | 3679...729 | 17255...071 | 8f597e89... |

**Findings**:
- `77f=27` constant across ALL non-zero runs (independent of user/serial)
- `11a8` matches `1870797208265104562` in alice/s01 run2 AND bob/s01 run1 — **definitive ASLR proof**
- `668`, `658`, `11a8`, `730`, `738` vary across processes with the same creds
- `s38` remains stable → the fields I measure are NOT the real source
- Zero runs: the first call to `0x1401af6b0` happens before `r14` is populated → the real crypto happens in a later call N

**The first entry into `0x1401af6b0` inside cipher#3 is not the call that produces plaintext**.

### Attempted hook at the write-site (EXP at_write, 9 runs)

Attach to `0x1401afa6a` directly: **0 writes captured** across 9 runs. Cause: Frida `Interceptor.attach` only works on function prologues; `0x1401afa6a` is mid-function. Technique failed.

**Remaining alternatives**:
1. HW execution BP (DR0..3) at `0x1401afa6a` with re-arm — already validated for data writes in Phase 5
2. Hook `0x1401af6b0` (entry+leave), diff pre/post of the plaintext buffer bytes 64-71 to locate the specific writing call
3. Stalker trace of all of cipher#3 (very expensive, ~millions of instructions)
4. Abandon the "which function" route and look for algebraic invariants: what mathematical transformation maps `s30` → `s38`? Test: XOR, permutation, S-boxes, MDS mixing, modular arithmetic over multiple known (s30, s38) pairs.

## Offline pipeline (no regression)

```
f_user:         23/23 PASS
build_s30:       3/3 PASS
canonical_s30:   2/2 predictions MATCH
```

Loop 3 retired (commented out). `0x14016fa50` also retired with the same documented reasoning.

## Dependency on `s30` — not demonstrated

In the experiment, the values read by `0x14016fa50` (`[rcx+0x68]`, `[rcx+0x20]`, `[rsi+0x518]`) vary with credentials, but also vary with process. **Without process-stability verification, we cannot prove true data dependency**.

The state fields read BY `0x1401af6b0` (at `0x1401afa6a`) **pending verification** of whether they are key-dependent or ASLR-dependent (experiment running).

## Next concrete blocker

1. **Verify `0x1401af6b0`**: apply the same EXP A — 3 runs × 3 inputs. If state fields `[r14+0x668]`, `[r14+0x658]`, `[r14+0x670]`, `[r14+0x77f]`, `[r14+0x11a8]`, `[r14+0x730]`, `[r14+0x738]` are process-stable and key-dependent → **REAL CRYPTO CONFIRMED**.

2. If also ASLR noise, discard and continue backward slicing from the plaintext buffer writes with a different technique (perhaps page-watchpoint or a kernel-mode debugger).

## Deliverables

- `pafet_offline.py`: pipeline with Loop 3 + 0x14016fa50 retired and documented as noise
- `pafet_exp_fa50_stab.py`: EXP A for 0x14016fa50 (15 runs, confirms noise)
- `pafet_exp_backslice2.py`: locates memcpy source of the plaintext (alloc 0x1403c976c)
- `pafet_exp_find_pt_source.py`: 6 candidate functions probed (none contain plaintext)
- `pafet_hw_bp_tail.py`: HW BP on bytes 68-71, reveals the `0x1401afa6a` loop
- `pafet_exp_who_runs_in_cipher3.py`: counts hits per function (exposes utility noise)
- `pafet_exp_real_crypto.py`: pending verification of 0x1401af6b0

## I do not declare Pafet solved

Loop 3 discarded. `0x14016fa50` discarded. `0x1401af6b0` identified as a function that **contains** the write instruction (`0x1401afa6a` writes bytes 64-71 of the plaintext — verified via HW BP + match with known bytes `48 9c db ea 87 a4 66 18`), but its first call in cipher#3 reads ASLR-dependent state → the real crypto happens in a later call whose state fields must be captured with HW execution BP, not Frida attach.

Mac hashcat still has no match after ~52 phases.

**Pafet NOT solved. No valid credentials or flag obtained from the unpatched `pafet.bin`.**
