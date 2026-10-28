#!/usr/bin/env python3
"""Trace pool-reader for a single slot: hash check, opcode dispatch, final rax.

Prints at: entry, each iteration bottom (0x14004917b), hash-fail bail
(0x1400491d7), and epilogue return.
"""
import os
import sys
import pefile
sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
from pafet_semantic_probe import BASE, MASK, IsolatedPE  # noqa: E402
from unicorn import UC_HOOK_CODE  # noqa: E402
from unicorn.x86_const import *  # noqa: E402

PE_PATH = os.path.join(os.path.dirname(os.path.abspath(__file__)), '..', 'pafet.bin')
POOL_READER_VA = 0x140048e10
HASH_CHECK_VA = 0x140049019          # jne 0x1400491d7
HASH_FAIL_VA = 0x1400491d7
LOOP_INC_VA = 0x14004917b             # inc r12d (iteration bottom)
LOOP_DONE_VA = 0x1400491a5            # final mov rsi, [rbp - 0x20]
DISPATCH_VA = 0x14004909b             # shr eax, 0xc (opcode in eax now)
EPILOGUE_RET_VA = 0x1400491d6


def trace_slot(pe, slot):
    env = IsolatedPE(pe)
    outbuf = env.alloc(64)
    env.mu.mem_write(outbuf, b'\x00' * 64)
    events = []

    def on_code(uc, address, size, _):
        if address == HASH_CHECK_VA:
            r8d = uc.reg_read(UC_X86_REG_R8D)
            eax = uc.reg_read(UC_X86_REG_EAX)
            r12d = uc.reg_read(UC_X86_REG_R12D)
            events.append(('HASH', r12d, r8d, eax, 'MATCH' if r8d == eax else 'FAIL'))
        elif address == DISPATCH_VA:
            r10d = uc.reg_read(UC_X86_REG_R10D)
            r11d = uc.reg_read(UC_X86_REG_R11D)
            r8d = uc.reg_read(UC_X86_REG_R8D)
            ebx = uc.reg_read(UC_X86_REG_EBX)
            r14 = uc.reg_read(UC_X86_REG_R14)
            r15 = uc.reg_read(UC_X86_REG_R15)
            opcode = (((r11d & 0xc000) | (r10d & 0x3000)) >> 12) & 0xf
            # ebx = dst (word0 & 3), r8d = src ((word0>>2) & 3)
            events.append(('DISPATCH', opcode, 'dst=', ebx & 3, 'src=', r8d & 3,
                           f'r14=0x{r14:x} r15=0x{r15:x}'))
        elif address == LOOP_INC_VA:
            rbp = uc.reg_read(UC_X86_REG_RBP)
            # Dump 4 local slots after each iteration
            try:
                locals_ = [int.from_bytes(uc.mem_read(rbp - 0x38 + i * 8, 8), 'little') for i in range(4)]
                events.append(('LOCALS_POST', locals_))
            except Exception:
                pass
        elif address == HASH_FAIL_VA:
            events.append(('HASH_FAIL_BRANCH_TAKEN',))
        elif address == LOOP_DONE_VA:
            rbp = uc.reg_read(UC_X86_REG_RBP)
            try:
                locals_ = [int.from_bytes(uc.mem_read(rbp - 0x38 + i * 8, 8), 'little') for i in range(4)]
                events.append(('LOOP_DONE_LOCALS', locals_))
            except Exception:
                pass

    env.mu.hook_add(UC_HOOK_CODE, on_code)
    try:
        rax = env.call(POOL_READER_VA, 0, slot, outbuf, 0)
    except Exception as exc:
        return events, f'ERROR: {exc}'
    return events, rax


def main():
    pe = pefile.PE(PE_PATH, fast_load=True)
    for slot in range(12):
        events, rax = trace_slot(pe, slot)
        if isinstance(rax, int):
            print(f'=== slot {slot}  rax=0x{rax:016x} ===')
        else:
            print(f'=== slot {slot}  {rax} ===')
        for ev in events[:40]:
            print(f'    {ev}')
        if len(events) > 40:
            print(f'    ... ({len(events) - 40} more events)')
        print()


if __name__ == '__main__':
    main()
