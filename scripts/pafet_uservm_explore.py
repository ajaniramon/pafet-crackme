#!/usr/bin/env python3
"""Explore the user-VM programs: for pc in 0..11, print the decrypted program.
Also hunt for pc values that implement interesting transforms."""
import sys
sys.path.insert(0, r'C:\Users\Ramón\Desktop')
from pafet_uservm import BC1, BC2, BC3, _decrypt_instr, _u64, run_user_vm

print(f'BC2 (loop counts) first 20: {BC2[:20]}')
print(f'BC1 (base indices) first 20: {[hex(x) for x in BC1[:20]]}')

# Each pc has a program. Decrypt and print.
def disasm_program(pc):
    """Decrypt and show the program at pc."""
    if pc >= 0xC: return []
    loop_count = BC2[pc]
    if loop_count == 0: return []
    GOLD = 0x9E3779B97F4A7C15
    ecx_saved = BC1[pc]
    rdi = _u64(((pc + 1) * GOLD) ^ 0x800E8662E4A9258)
    program = []
    for i in range(loop_count):
        r10d, r11d, edi_dec, _, new_rdi, rbx_val = _decrypt_instr(pc, i, rdi, ecx_saved)
        rbx_operand = r10d & 3
        r8_operand = (r10d >> 2) & 3
        opcode = ((r11d & 0xC000) | (r10d & 0x3000)) >> 12
        sub_pc = (r11d >> 16) & 0xF if opcode == 10 else None
        program.append((opcode, rbx_operand, r8_operand, sub_pc))
        rdi = new_rdi
    return program

OPNAMES = ['SET_r14', 'SET_r15', 'MOV', 'ADD', 'SUB', 'XOR', 'AND', 'OR', 'NOT', 'SHL1', 'CALL']

for pc in range(12):
    if BC2[pc] == 0:
        print(f'\npc={pc}: EMPTY (loop_count=0)')
        continue
    print(f'\npc={pc}: {BC2[pc]} instructions')
    try:
        prog = disasm_program(pc)
        for i, (op, dst, src, sub) in enumerate(prog):
            opn = OPNAMES[op] if op < len(OPNAMES) else f'OP{op}'
            if op == 10:
                print(f'  [{i}] CALL pc={sub} -> r{dst}')
            elif op in (0, 1):
                print(f'  [{i}] {opn} -> r{dst}  (r14=arg0, r15=arg1)')
            elif op in (2,):
                print(f'  [{i}] r{dst} = r{src}')
            elif op in (3,4,5,6,7):
                print(f'  [{i}] r{dst} {opn} r{src}')
            elif op == 8:
                print(f'  [{i}] r{dst} = NOT r{dst}')
            elif op == 9:
                print(f'  [{i}] r{dst} <<= 1')
    except AssertionError as e:
        print(f'  ASSERTION FAIL: {e}')

# Test full VM with several inputs
print('\n[*] Run VM at pc=0..11 with (arg0=0, arg1=0):')
for pc in range(12):
    if BC2[pc] == 0: continue
    try:
        r = run_user_vm(0, pc, 0, 0)
        print(f'  pc={pc}: {hex(r)}')
    except AssertionError as e:
        print(f'  pc={pc}: ASSERT {e}')

print('\n[*] Run VM at pc=0..11 with (arg0=0x41, arg1=0x42):')
for pc in range(12):
    if BC2[pc] == 0: continue
    try:
        r = run_user_vm(0, pc, 0x41, 0x42)
        print(f'  pc={pc}: {hex(r)}')
    except AssertionError as e:
        print(f'  pc={pc}: ASSERT {e}')
