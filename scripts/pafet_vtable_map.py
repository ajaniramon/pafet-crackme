#!/usr/bin/env python3
"""For each handler 10..19, list which VM-executor it calls and which vtable
it passes. Each vtable represents a different operation of the main-VM nested
inside."""
import struct
from capstone import Cs, CS_ARCH_X86, CS_MODE_64

PE = r'C:\Users\Ramón\Desktop\pafet.bin'
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
md = Cs(CS_ARCH_X86, CS_MODE_64); md.detail=True

TABLE_VA = 0x140397380
fo = va_to_fo(TABLE_VA)
handlers = []
for i in range(24):
    off = struct.unpack_from('<i', d, fo + i*4)[0]
    handlers.append(image_base + off)

print(f'[*] Handlers 10..19: VM-executor call + vtable arg')
print(f'    {"op":<4}{"handler":<16}{"executor":<20}{"vtable (passed in [rip+disp])":<20}')
for i in range(10, 20):
    hva = handlers[i]
    hfo = va_to_fo(hva)
    executor = None
    vtable = None
    # Decode up to 256 bytes
    for ins in md.disasm(d[hfo:hfo+512], hva):
        if ins.mnemonic == 'lea' and 'rip' in ins.op_str and 'rax' in ins.op_str:
            # lea rax, [rip + disp]
            try:
                disp = int(ins.op_str.split('+')[-1].strip().replace(']',''), 16)
                target = ins.address + ins.size + disp
                vtable = target
            except: pass
        if ins.mnemonic == 'call':
            try:
                tgt = int(ins.op_str, 16)
                # If it's a BIG function (not CRT helpers)
                if 0x140000000 <= tgt < 0x1403a0000 and tgt not in (0x1402831c0, 0x14039adb0, 0x14039bfa0, 0x1403997c0, 0x140380840, 0x140283dc0):
                    executor = tgt
                    break
            except: pass
        if ins.mnemonic == 'ret' or (ins.mnemonic == 'jmp' and '0x140397' in ins.op_str): break
    exe_s = f'0x{executor:x}' if executor else '(none)'
    vt_s  = f'0x{vtable:x}' if vtable else '(none)'
    print(f'    {i:<4}0x{hva:<12x}  {exe_s:<16}  {vt_s}')
    # Verify vtable content: q[2] should be the main-VM thunk 0x14039de80
    if vtable:
        vfo = va_to_fo(vtable)
        q2 = struct.unpack_from('<Q', d, vfo + 16)[0] if vfo else 0
        q2_is_thunk = (q2 == 0x14039de80)
        print(f'       vtable[2] = 0x{q2:x}  {"= main-VM thunk" if q2_is_thunk else "(not thunk)"}')
        # dump first 32 bytes of the strings/data after the fn ptrs
        if vfo:
            print(f'       raw: {d[vfo:vfo+96].hex()}')
            # ASCII preview
            print(f'       ascii: {d[vfo+48:vfo+96].decode("latin-1", errors="replace")!r}')
