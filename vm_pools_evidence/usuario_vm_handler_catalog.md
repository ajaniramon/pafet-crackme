# User-VM Handler Catalog
Generated from static disasm + runtime capture. 35 unique native handlers.

| VA | Size | Chan | Pairs | Category | First insns |
|---|---:|:---:|---:|:---:|---|
| `0x140008b50` | 390 | 0 | 10 (0,7,0,19,0,29...) | small | `mov qword ptr [rsp + 0x18], r8 / push rbx / push rdi` |
| `0x1400099c0` | 503 | 0 | 9 (0,15,0,16,0,18...) | medium | `mov qword ptr [rsp + 0x18], r8 / mov dword ptr [rsp + 0x10],` |
| `0x14000a850` | 314 | 0 | 5 (0,0,0,1,0,2...) | small | `mov qword ptr [rsp + 0x18], r8 / push rbx / push rdi` |
| `0x14000b670` | 3705 | 0 | 4 (0,23,0,52,0,54...) | large | `mov qword ptr [rsp + 0x20], rbx / mov qword ptr [rsp + 0x18]` |
| `0x1400110f0` | 329 | 0 | 5 (0,3,0,5,0,20...) | small | `mov qword ptr [rsp + 0x18], r8 / push rbx / push rsi` |
| `0x140011f10` | 3753 | 0 | 1 (0,24) | large | `mov qword ptr [rsp + 0x20], rbx / mov qword ptr [rsp + 0x18]` |
| `0x140012dc0` | 321 | 0 | 1 (0,14) | small | `mov qword ptr [rsp + 0x18], r8 / push rbx / push rsi` |
| `0x140013be0` | 317 | 0 | 4 (0,11,0,25,0,31...) | small | `mov qword ptr [rsp + 0x18], r8 / push rbx / push rsi` |
| `0x140014a00` | 293 | 0 | 10 (0,4,0,6,0,9...) | small | `mov qword ptr [rsp + 0x18], r8 / push rbx / push rdi` |
| `0x140015820` | 503 | 1 | 7 (1,13,1,17,1,25...) | medium | `mov qword ptr [rsp + 0x18], r8 / mov dword ptr [rsp + 0x10],` |
| `0x1400166b0` | 314 | 1 | 6 (1,1,1,14,1,24...) | small | `mov qword ptr [rsp + 0x18], r8 / push rbx / push rdi` |
| `0x140018300` | 321 | 1 | 1 (1,48) | small | `mov qword ptr [rsp + 0x18], r8 / push rbx / push rsi` |
| `0x140019f40` | 4763 | 1 | 3 (1,18,1,22,1,40) | large | `mov qword ptr [rsp + 0x20], rbx / push rbp / push rsi` |
| `0x14001c090` | 390 | 1 | 14 (1,2,1,9,1,15...) | small | `mov qword ptr [rsp + 0x18], r8 / push rbx / push rdi` |
| `0x14001cf00` | 336 | 1 | 1 (1,29) | small | `mov qword ptr [rsp + 0x18], r8 / push rbx / push rsi` |
| `0x14001dd30` | 293 | 1 | 12 (1,0,1,6,1,7...) | small | `mov qword ptr [rsp + 0x18], r8 / push rbx / push rdi` |
| `0x1400208b0` | 319 | 1 | 2 (1,26,1,56) | small | `mov qword ptr [rsp + 0x18], r8 / push rbx / push rsi` |
| `0x1400216d0` | 3705 | 1 | 8 (1,3,1,5,1,8...) | large | `mov qword ptr [rsp + 0x20], rbx / mov qword ptr [rsp + 0x18]` |
| `0x140023380` | 337 | 2 | 2 (2,29,2,43) | small | `mov qword ptr [rsp + 0x18], r8 / push rbx / push rsi` |
| `0x1400241b0` | 390 | 2 | 14 (2,0,2,2,2,5...) | small | `mov qword ptr [rsp + 0x18], r8 / push rbx / push rdi` |
| `0x140025020` | 503 | 2 | 13 (2,1,2,16,2,18...) | medium | `mov qword ptr [rsp + 0x18], r8 / mov dword ptr [rsp + 0x10],` |
| `0x140027b80` | 3705 | 2 | 2 (2,53,2,54) | large | `mov qword ptr [rsp + 0x20], rbx / mov qword ptr [rsp + 0x18]` |
| `0x140028a00` | 4763 | 2 | 2 (2,4,2,39) | large | `mov qword ptr [rsp + 0x20], rbx / push rbp / push rsi` |
| `0x14002ab60` | 339 | 2 | 3 (2,3,2,14,2,19) | small | `mov qword ptr [rsp + 0x18], r8 / push rbx / push rsi` |
| `0x14002d5d0` | 314 | 2 | 7 (2,17,2,36,2,42...) | small | `mov qword ptr [rsp + 0x18], r8 / push rbx / push rdi` |
| `0x14002f2a0` | 307 | 2 | 2 (2,33,2,48) | small | `mov qword ptr [rsp + 0x18], r8 / push rbx / push rdi` |
| `0x1400300b0` | 293 | 2 | 10 (2,7,2,11,2,12...) | small | `mov qword ptr [rsp + 0x18], r8 / push rbx / push rdi` |
| `0x140030ec0` | 321 | 3 | 9 (3,4,3,5,3,12...) | small | `mov qword ptr [rsp + 0x18], r8 / push rbx / push rdi` |
| `0x140031ce0` | 328 | 3 | 1 (3,31) | small | `mov qword ptr [rsp + 0x18], r8 / push rbx / push rsi` |
| `0x140033930` | 397 | 3 | 9 (3,0,3,8,3,10...) | small | `mov qword ptr [rsp + 0x18], r8 / push rbx / push rdi` |
| `0x1400355c0` | 510 | 3 | 10 (3,2,3,7,3,11...) | medium | `mov qword ptr [rsp + 0x18], r8 / mov dword ptr [rsp + 0x10],` |
| `0x140038fe0` | 4474 | 3 | 1 (3,18) | large | `mov qword ptr [rsp + 0x20], rbx / push rbp / push rsi` |
| `0x14003a160` | 3712 | 3 | 4 (3,6,3,23,3,39...) | large | `mov qword ptr [rsp + 0x20], rbx / mov qword ptr [rsp + 0x18]` |
| `0x14003bea0` | 300 | 3 | 11 (3,9,3,20,3,21...) | small | `mov qword ptr [rsp + 0x18], r8 / push rbx / push rdi` |
| `0x14003dae0` | 332 | 3 | 3 (3,17,3,24,3,30) | small | `mov qword ptr [rsp + 0x18], r8 / push rbx / push rsi` |

## Notes
- All 35 handlers share MSVC calling convention (rcx=ctx).
- No handler is cross-channel.
- Large handlers (>1500 B) likely call sub-VMs or STL utilities.
- This catalog does NOT reverse the semantics of each handler individually. Full per-handler reversing is multi-session work. The prototype implements one critical byte-emit handler and treats the other 34 as transparent (observed to preserve functional state).
