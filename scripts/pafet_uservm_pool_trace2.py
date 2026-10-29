#!/usr/bin/env python3
"""Trace which opcode case actually runs in the pool-reader body."""
import os
import sys
import pefile
sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
from pafet_semantic_probe import BASE, MASK, IsolatedPE
from unicorn import UC_HOOK_CODE
from unicorn.x86_const import *

PE_PATH = os.path.join(os.path.dirname(os.path.abspath(__file__)), '..', 'pafet.bin')
POOL_READER_VA = 0x140048e10

CASE_VAS = {
    0x1400490b4: 'OP0 local[dst]=r14',
    0x1400490be: 'OP1 local[dst]=r15',
    0x1400490c8: 'OP2 copy',
    0x1400490d7: 'OP3 add',
    0x1400490ed: 'OP4 sub',
    0x140049100: 'OP5 xor',
    0x140049113: 'OP6 and',
    0x140049126: 'OP7 or',
    0x140049139: 'OP8 not',
    0x140049147: 'OP9 shl',
    0x14004914e: 'OP10 recurse',
}
LOOP_INC = 0x14004917b


def main():
    pe = pefile.PE(PE_PATH, fast_load=True)
    for slot in range(12):
        env = IsolatedPE(pe)
        env.mu.mem_write(env.alloc(64), b'\x00'*64)
        events = []

        def on_code(uc, address, size, _):
            if address in CASE_VAS:
                rbx = uc.reg_read(UC_X86_REG_RBX)
                r8 = uc.reg_read(UC_X86_REG_R8)
                r14 = uc.reg_read(UC_X86_REG_R14)
                r15 = uc.reg_read(UC_X86_REG_R15)
                events.append((CASE_VAS[address], f'rbx(dst)={rbx & 3}',
                               f'r8(src)={r8 & 3}', f'r14=0x{r14 & MASK:x}', f'r15=0x{r15 & MASK:x}'))
            elif address == LOOP_INC:
                rbp = uc.reg_read(UC_X86_REG_RBP)
                locals_ = [int.from_bytes(uc.mem_read(rbp - 0x38 + i*8, 8), 'little')
                           for i in range(4)]
                events.append(('AFTER', locals_))

        env.mu.hook_add(UC_HOOK_CODE, on_code)
        try:
            rax = env.call(POOL_READER_VA, 0, slot, 0, 0)
        except Exception as exc:
            print(f'slot {slot}: ERR {exc}')
            continue
        print(f'=== slot {slot}  rax=0x{rax:016x} ===')
        for e in events[:20]:
            print(f'   {e}')
        if len(events) > 20:
            print(f'   ... ({len(events)-20} more)')
        print()


if __name__ == '__main__':
    main()
