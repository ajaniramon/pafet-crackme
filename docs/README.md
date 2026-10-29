# Pafet — Full writeup

A hyper-exhaustive technical writeup of what `pafet.bin` does, how it
was reverse-engineered, and how it was replicated from scratch. For
the top-level pitch, see [`../README.md`](../README.md).

## Table of contents

| # | Doc                                      | What's in it                                              |
|---|-------------------------------------------|-----------------------------------------------------------|
| 1 | [01-overview.md](01-overview.md)         | PE layout, image base, key VAs, high-level flow, ctx layout |
| 2 | [02-pipeline.md](02-pipeline.md)         | End-to-end data path with sequence diagram               |
| 3 | [03-user-vm.md](03-user-vm.md)           | The user-VM in full: materializer, dispatcher, bytecode, 35 handlers, 5 writers, 4 helpers |
| 4 | [04-serial-vm.md](04-serial-vm.md)       | serial-VM = RC4(key={0})                                  |
| 5 | [05-sha-vm.md](05-sha-vm.md)             | SHA-VM = SHA-256                                          |
| 6 | [06-hex-vm.md](06-hex-vm.md)             | hex-VM = bytes.fromhex                                   |
| 7 | [07-des3.md](07-des3.md)                 | 3-pass 3DES-EDE with permissive unpad                     |
| 8 | [08-recompilation.md](08-recompilation.md) | How we rebuilt a working Pafet from the 4 VMs + DES3    |
| 9 | [09-bytecode.md](09-bytecode.md)         | 73-block encrypted bytecode, Feistel seeds, block 28 = `0x5A × 24` |
| 10| [10-dispatch-topology.md](10-dispatch-topology.md) | Resolver + hidden `call r9` architecture, 45.4% hidden |
| 11| [11-reproduce.md](11-reproduce.md)       | Build + run every byte-exact test                         |
| 12| [12-methodology.md](12-methodology.md)   | Jack I-XXII chain with adversarial corrections            |
| 13| [13-open-gaps.md](13-open-gaps.md)       | Honestly incomplete items + next steps                   |
| 14| [14-tooling.md](14-tooling.md)           | Inventory of scripts, Frida agents, Unicorn harnesses    |

## Suggested reading order

Depending on what you want:

- **"Show me the money"** → [`../README.md`](../README.md), then
  [11-reproduce.md](11-reproduce.md).
- **"How does the program work?"** → [01-overview.md](01-overview.md)
  → [02-pipeline.md](02-pipeline.md) → [03-user-vm.md](03-user-vm.md).
- **"How did you reverse it?"** → [12-methodology.md](12-methodology.md)
  → [03-user-vm.md](03-user-vm.md) → [09-bytecode.md](09-bytecode.md).
- **"What's not done?"** → [13-open-gaps.md](13-open-gaps.md).
