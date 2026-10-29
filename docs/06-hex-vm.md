# 06 — hex-VM

## What it computes (output semantics)

```python
hex_vm(ascii_hex) = bytes.fromhex(ascii_hex)
```

72 output bytes from 144 ASCII hex characters at `0x1403dbbc0`. That is the
semantic contract of the function — the on-disk VM, however, is far from a
one-liner.

## Where in the PE

```text
Executor VA        : 0x1400804c0
Executor size      : 34,065 B (6512 x86-64 instructions) per .pdata
Only caller        : the main controller at 0x140396f96 (fn 0x140396990)
ABI (per XXV)      : rcx = output state (0x80 bytes zeroed at rbp+0x20)
                     edx = 0x10 (fixed selector)
                     r8  = function object (vtable at 0x1403f1ba0, 6 callbacks)
Virtual context    : lives on the executor's own stack at rsp + 0x180
Source hex         : 0x1403dbbc0 (144 ASCII characters)
Dynamic buffer     : 0x1f20 B of PAGE_EXECUTE_READWRITE via 0x14007fa70 (used once)
```

A Phase 1 locator (`scripts/pafet_hexvm_locate_xx.py`) found the decoded 72
bytes at multiple RW addresses in the process after `exec_leave`. The output
is written through a `std::string` constructed inside the output state.

## Internal architecture (JACK XXV)

The hex-VM is NOT a simple ASCII-to-byte decoder wrapped in a VM. It is a
full virtual machine of its own, structurally parallel to the user-VM. For
the full reconstruction, see [PAFET_JACK_XXV.md](../PAFET_JACK_XXV.md).

### Components

```mermaid
flowchart TB
  subgraph Exec["Executor 0x1400804c0 (34 KB, 1 ret)"]
    PCbank["VPC bank ctx+0x10d0"]
    QueueBuf["Queue ctx+0x2b0 (LIFO, cap 0x40)"]
    State["K ctx+0x4b0  ·  A ctx+0x230  ·  B ctx+0x940"]
    LCG["LCG ctx+0x1180  (phi + 0x2545f4914f6cdd1d)"]
    RotT["Rotated handler table ctx+0x9b8"]
  end

  subgraph Dispatch["Secondary dispatch"]
    Push["queue_push 0x14004c880"]
    Drain["sec_disp 0x14004c720 (up to 8 items / call)"]
    Push -->|LIFO| QueueBuf
    QueueBuf --> Drain
    Drain -->|sel = (K*phi + item)>>61| RotT
    RotT -->|rotated[sel]| Handlers
  end

  subgraph Handlers["8 state handlers (0x14004c490..0x14004c6a0)"]
    H0["H0 A = fmix(K^A)"]
    H1["H1 B = fmix((K>>7)^B); K = phi+K"]
    H2["H2 K ^= fmix(A+1)"]
    H3["H3 A += (K&6)|1"]
    H4["H4 B ^= fmix(K^A)"]
    H5["H5 K = fmix(B^K)"]
    H6["H6 A ^= byte(K>>32)"]
    H7["H7 B = fmix(K+B)"]
  end

  Drain --> LCG
  LCG -->|byte_tag·mult ⊕/+ item| PCbank
  Drain --> State
  Handlers --> State
```

Validated: `src/pafet_hexvm_handlers_xxv.h` ports all 8 handlers; a Unicorn
differential (`scripts/pafet_hexvm_handlers_unicorn_xxv.py`) runs 50 random
triples against each handler's original x64 body — **400/400 PASS**.

### The virtual program (72 blocks)

The hex-VM carries a 72-block virtual control-flow graph in which the
virtual PC lives at `ctx+0x10d0`. Each block pushes an item (= next VPC) to
the queue, the drain cycle computes a pseudo-random handler selection and
state mix, and the LCG + context mixers compute the actual next VPC.

Entry sequence (visited once each):

```
0x1746e → 0x2d409a → 0x8453b → 0x171a87 → 0x295b7f
```

The main loop header is `0x295b7f` (8,148 iterations for `alice/serial01`).
From it, a 4-way branch at `0x36da17` splits into four DROP-style sub-paths:

```
0x36da17 → 0x2a7d9c (2068) | 0x14b3da (2060) | 0x44746 (2044) | 0x322898 (1976)
```

Each DROP has a 9-way fanout that mostly funnels back into a 29-block
sequential chain (6944 visits each: `0xe0bf0 → 0x4fe3f → … → 0x20ff08 →
0x295b7f`) or a 22-block secondary chain (3031 visits each, entered at
`0x119872`).

Fanout distribution across the 72 blocks:

```
fanout=1:  59 blocks (sequential)
fanout=2:   8 blocks
fanout=4:   1 block  (0x36da17)
fanout=9:   4 blocks (the DROPs)
```

Full dump: `jack_xxv_evidence/hexvm_cfg.txt` and `hexvm_structure.json`.

### Observed invariants (JACK XXV)

- `pushes[i].item == next vpc_write.pc` for every push sampled — the
  pushed value **is** the next virtual PC value verbatim.
- `pushes[i].counter == i` — the counter progresses monotonically with the
  push stream.

### Throw-as-control-flow

`queue_push` throws a C++ exception on two conditions:

1. `counter == 1` (the very first push)
2. `((counter * -0x3eb) ^ K) & 0xfff == 0x1f` (hash probe)

Both throws run `_CxxThrowException` at `0x1403a5fa0`. The catch landing
lives inside the executor (resolved by MSVC EH scope tables; found
reliably by Frida Stalker on a per-throw basis).

Observed throws per hex-VM run: **59** (over 285K pushes = 1 throw per
~4700 pushes). The first-push throw accounts for the single counter==1
trigger; the remaining ~58 come from the hash probe.

The earlier `scripts/pafet_hexvm_host_xxv.py` Unicorn harness halted at
the first throw because its stub for `RtlPcToFileHeader` (needed by MSVC's
unwind) returned a plain `ret` instead of modelling the full C++ EH. For
reconstruction purposes we model the throw as a rare control-flow signal
without emulating full MSVC EH.

### Shared library with the user-VM

| hex-VM        | user-VM        | Function                       |
|---------------|----------------|--------------------------------|
| `0x14004c880` | `0x140006010`  | Queue of pending work          |
| `0x14007fb70` | `0x14003ebe0`  | Table remap                    |
| `0x140049330` | `0x1400029a0`  | Panic                          |
| `0x14004c3c0` | `0x140005b50`  | Live-slot encoder              |

The dispatcher and the 8 state handlers are specific to the hex-VM. The
VPC accessors `0x140049a30` (read) and `0x140049af0` (write) are also
specific; they encode the virtual PC inside the live-slot bank.

## Replicas and tests

| Artifact                                              | Status                      |
|-------------------------------------------------------|-----------------------------|
| `src/pafet_hexvm_native_xx.h` (JACK XX)              | Byte-exact output: `bytes.fromhex` (12/12 inputs) |
| `src/pafet_hexvm_handlers_xxv.h` (JACK XXV)          | 8 state handlers byte-exact (Unicorn 400/400) |
| `pafet_hexvm_handlers_test_xxv.exe` (JACK XXV)       | Self-consistency 8/8 PASS   |
| `scripts/pafet_hexvm_handlers_unicorn_xxv.py` (XXV)  | 50 random triples/handler → 400/400 PASS |
| `scripts/pafet_hexvm_cfg_xxv.py` (XXV)                | 72-block CFG + invariants   |

The behavioural replica from JACK XX stays the only one that produces 72
output bytes from any input. The XXV artefacts prove the VM machinery
underneath, not the full byte-exact end-to-end structural equivalence.

## Pre-overnight sources

| Report                      | Content                                              |
|-----------------------------|------------------------------------------------------|
| `PAFET_CRYPTO_AUDIT.md`     | Static view of the hex blob and its only call site   |
| `PAFET_JACK_XX.md` family   | Byte-exact output replica, Phase 1 output locator    |
| `PAFET_JACK_XXV.md` (this)  | Full architectural reconstruction of the hex-VM      |
