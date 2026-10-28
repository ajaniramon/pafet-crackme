#!/usr/bin/env python3
"""Inspect the main dispatcher at 0x140396990 and its jump table at 0x140397380.
Also disasm the script-VM main loop to see HOW it reads the bytecode and
dispatches."""
import struct
from capstone import Cs, CS_ARCH_X86, CS_MODE_64, CS_OP_IMM, CS_OP_MEM

PE_PATH = r'C:\Users\Ramón\Desktop\pafet.bin'
d = open(PE_PATH, 'rb').read()
pe = struct.unpack_from('<I', d, 0x3c)[0]
sz_opt = struct.unpack_from('<H', d, pe+20)[0]
image_base = struct.unpack_from('<Q', d, pe+24+24)[0]
sec_tbl = pe+24+sz_opt
sections=[]
nsec=struct.unpack_from('<H',d,pe+6)[0]
for i in range(nsec):
    off=sec_tbl+40*i; name=d[off:off+8].rstrip(b'\0').decode(errors='replace')
    vs,va,rs,rp=struct.unpack_from('<IIII',d,off+8); sections.append((name,va,vs,rp,rs))
def va_to_fo(va):
    for n,sva,svs,rp,rs in sections:
        v0=image_base+sva; v1=v0+max(svs,rs)
        if v0<=va<v1: return rp+(va-v0)

md = Cs(CS_ARCH_X86, CS_MODE_64); md.detail=True

# 1. Dispatcher at 0x140396990, first 150 bytes
print('=== main dispatcher @ 0x140396990 ===')
fo = va_to_fo(0x140396990)
for ins in md.disasm(d[fo:fo+200], 0x140396990):
    print(f'   0x{ins.address:x}: {ins.mnemonic:<8} {ins.op_str}')

# 2. Jump table at 0x140397380 (24 entries expected)
print('\n=== jump table @ 0x140397380 (first 30 entries) ===')
fo = va_to_fo(0x140397380)
for i in range(30):
    p = struct.unpack_from('<Q', d, fo + i*8)[0]
    print(f'   [{i:2d}] 0x{p:x}')

# 3. Script-VM runner at 0x14038d9d0 — scan it for the MAIN LOOP (fetch + dispatch)
# After the attestation we saw init of multiple buffers. The actual loop is further.
# Let's disasm from 0x14038e000 to 0x14038f800 and look for:
#  - indirect jumps (ff 24 ..., ff 25, jmp [reg+reg*8+disp])
#  - a byte-read from bytecode
print('\n=== scanning script-VM body (0x14038e000..+0x2000) for indirect jumps and tight loops ===')
start_va = 0x14038de00
end_va   = start_va + 0x3000
fo0 = va_to_fo(start_va); fo1 = va_to_fo(end_va)
blob = d[fo0:fo1]
disas = list(md.disasm(blob, start_va))
jumps = [i for i in disas if i.mnemonic == 'jmp' and (i.op_str.startswith('qword') or 'ptr' in i.op_str or '[' in i.op_str)]
calls_indirect = [i for i in disas if i.mnemonic == 'call' and '[' in i.op_str]
print(f'   indirect JMPs: {len(jumps)}')
for ins in jumps[:20]:
    print(f'   0x{ins.address:x}: jmp {ins.op_str}')
print(f'\n   indirect CALLs: {len(calls_indirect)}')
for ins in calls_indirect[:12]:
    print(f'   0x{ins.address:x}: call {ins.op_str}')

# 4. Backward loops (jmp/jne to earlier address) — probably the VM main loop
print('\n=== backward conditional jumps (likely VM main loop) ===')
back = []
for ins in disas:
    if ins.mnemonic.startswith('j') and ins.op_str.startswith('0x'):
        try:
            tgt = int(ins.op_str, 16)
            if tgt < ins.address and ins.address - tgt < 0x400 and ins.address - tgt > 0x20:
                back.append((ins.address, tgt, ins))
        except Exception:
            pass
for ins_addr, tgt, ins in back[:30]:
    print(f'   0x{ins_addr:x}: {ins.mnemonic} 0x{tgt:x}  (backward {ins_addr-tgt} bytes)')
