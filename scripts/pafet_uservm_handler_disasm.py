#!/usr/bin/env python3
"""Full disasm of individual handlers to understand semantics."""
import pefile, capstone, sys
pe = pefile.PE('pafet.bin', fast_load=True)
IMG = 0x140000000
text = next(s for s in pe.sections if s.Name.rstrip(b'\x00')==b'.text')
text_va = IMG + text.VirtualAddress
tdata = text.get_data()
md = capstone.Cs(capstone.CS_ARCH_X86, capstone.CS_MODE_64)

va = int(sys.argv[1], 16) if len(sys.argv) > 1 else 0x14000a850
size = int(sys.argv[2]) if len(sys.argv) > 2 else 400
off = va - text_va
chunk = tdata[off:off+size+32]
print(f'=== Disasm 0x{va:x} ({size} bytes) ===')
seen = set()
for ins in md.disasm(chunk, va):
    if ins.address in seen: break
    seen.add(ins.address)
    bytes_str = ins.bytes.hex()[:16]
    print(f'  0x{ins.address:x}  {bytes_str:<18} {ins.mnemonic:7} {ins.op_str}')
    if ins.mnemonic == 'ret' and ins.address - va > size - 16:
        break
