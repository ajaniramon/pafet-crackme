#!/usr/bin/env python3
"""Reconnaissance of the 4 nested VMs declared in the encargo:
Usuario, SHA, Serial, Hex. For each VM entry point, disassemble and list
all .rdata references (lea/mov/cmp) to classify candidates for pool/blob/opcode-map.

Prints are classified by target: .rdata (constants), .text (code), self.
"""
import struct
import pefile
from capstone import Cs, CS_ARCH_X86, CS_MODE_64

PE_PATH = r'C:\Users\Ramón\Desktop\pafet_crackme\pafet.bin'
BASE = 0x140000000

TARGETS = [
    ('Usuario-disp', 0x14003f540, 0x200),
    ('Usuario-exec', 0x140048960, 0x400),
    ('SHA-exec',     0x14027aba0, 0x400),
    ('Serial-top',   0x140264a60, 0x200),
    ('Serial-mid',   0x14039d740, 0x200),
    ('Serial-exec',  0x14022a120, 0x400),
    ('Hex-exec',     0x1400804c0, 0x400),
]

def section_of(pe, va):
    rva = va - BASE
    for s in pe.sections:
        if s.VirtualAddress <= rva < s.VirtualAddress + max(s.Misc_VirtualSize, s.SizeOfRawData):
            return s.Name.rstrip(b'\0').decode(errors='replace')
    return '?'

def main():
    pe = pefile.PE(PE_PATH, fast_load=True)
    md = Cs(CS_ARCH_X86, CS_MODE_64)
    md.detail = True

    for label, va, size in TARGETS:
        rva = va - BASE
        try:
            code = pe.get_data(rva, size)
        except Exception as e:
            print(f'=== {label} @ 0x{va:x} === ERROR: {e}')
            continue
        print(f'\n=== {label} @ 0x{va:x} ({size} bytes) section={section_of(pe, va)} ===')
        rdata_refs = []
        text_refs = []
        for ins in md.disasm(code, va):
            # Look for rip-relative with disp32
            m = ins.op_str
            if '[rip' in m or '[rip +' in m:
                # Compute target
                try:
                    for op in ins.operands:
                        if op.type == 3 and op.mem.base == 41:  # X86_OP_MEM, X86_REG_RIP=41
                            tgt = ins.address + ins.size + op.mem.disp
                            sect = section_of(pe, tgt)
                            if sect == '.rdata' or sect == '.data':
                                rdata_refs.append((ins.address, ins.mnemonic, tgt, sect))
                            elif sect == '.text':
                                text_refs.append((ins.address, ins.mnemonic, tgt))
                except Exception:
                    pass
            if ins.mnemonic == 'ret' or ins.mnemonic == 'jmp':
                # Stop at the first ret/jmp outside this snippet
                if ins.address > va + 0x30:
                    break
        print(f'  .rdata/.data refs ({len(rdata_refs)}):')
        for addr, mn, tgt, sect in rdata_refs[:40]:
            print(f'    0x{addr:x}  {mn:5s}  -> 0x{tgt:x}  [{sect}]')
        if len(rdata_refs) > 40:
            print(f'    ... (+{len(rdata_refs)-40} more)')
        print(f'  .text refs ({len(text_refs)}):')
        for addr, mn, tgt in text_refs[:20]:
            print(f'    0x{addr:x}  {mn:5s}  -> 0x{tgt:x}')
        if len(text_refs) > 20:
            print(f'    ... (+{len(text_refs)-20} more)')

if __name__ == '__main__':
    main()
