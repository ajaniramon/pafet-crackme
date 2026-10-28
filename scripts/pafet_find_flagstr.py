#!/usr/bin/env python3
"""Find the '[+] Flag: ' string in pafet_oracle.exe and its callsite — the output
site is next to the plaintext buffer in memory."""
import struct
from capstone import Cs, CS_ARCH_X86, CS_MODE_64

PE = r'C:\Users\Ramón\Desktop\pafet_oracle.exe'
d = open(PE, 'rb').read()
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
def fo_to_va(fo):
    for n,sva,svs,rp,rs in sections:
        if rp <= fo < rp+rs: return image_base + sva + (fo - rp)

md = Cs(CS_ARCH_X86, CS_MODE_64); md.detail=True

needles = [b'[+] Flag: ', b'Flag: ', b'Flag', b'CMO{', b'[!] Wrong', b'Username:', b'Serial  :']
print(f'[*] searching PE strings:')
for n in needles:
    hits = []
    i = 0
    while True:
        j = d.find(n, i)
        if j < 0: break
        hits.append(j)
        i = j + 1
    for fo in hits[:5]:
        va = fo_to_va(fo)
        print(f'   {n!r:<16}  FO 0x{fo:x}  VA 0x{va:x if va else "N/A"}')

# Pick the key one and find its code refs
TARGET = b'[+] Flag: '
tgt_fo = d.find(TARGET)
if tgt_fo < 0:
    print(f'\n[!] "{TARGET.decode()}" NOT present in PE as a plain string.')
    print('    Likely built dynamically or embedded in the main-VM bytecode.')
    # Try other candidate markers
    for s in [b'] Flag', b'] Fl', b'Flag', b'] F', b'] ', b'[+] ']:
        hits = []
        i = 0
        while True:
            j = d.find(s, i)
            if j < 0: break
            hits.append(j); i = j+1
        print(f'    {s!r}: {len(hits)} hits (first 3: {[hex(h) for h in hits[:3]]})')
    import sys; sys.exit(0)
tgt_va = fo_to_va(tgt_fo)
print(f'\n[*] Code refs to the string at VA 0x{tgt_va:x}')
# Scan .text for `lea reg, [rip + disp]` where target == tgt_va
tsec = next(s for s in sections if s[0]=='.text')
tname, tva, tvs, trp, trs = tsec
tb = d[trp:trp+tvs]
hits = []
for ins in md.disasm(tb, image_base + tva):
    if 'lea' not in ins.mnemonic: continue
    for op in ins.operands:
        if op.type == 3:  # CS_OP_MEM
            m = op.mem
            try: base = ins.reg_name(m.base) if m.base else None
            except: base = None
            if base == 'rip':
                target = ins.address + ins.size + m.disp
                if target == tgt_va:
                    hits.append(ins.address)
                    break
print(f'   {len(hits)} direct lea-rip refs:')
for h in hits[:20]:
    print(f'     0x{h:x}')
    # Show ~20 insns around it
    fo = va_to_fo(h - 40)
    for ins in md.disasm(d[fo:fo+120], h - 40):
        if h - 40 <= ins.address <= h + 60:
            marker = '  <-- STR_REF' if ins.address == h else ''
            print(f'       0x{ins.address:x}: {ins.mnemonic:8s} {ins.op_str}{marker}')
    print()
