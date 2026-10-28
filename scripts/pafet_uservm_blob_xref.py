#!/usr/bin/env python3
"""Enumerate every rip-relative reference to the user-VM encrypted blob at
VA 0x1403E5020 across the entire .text segment of pafet.bin.

If the blob is executable bytecode, we would see at least one additional
reader beyond the attestation loop at 0x14003f6f1. If the only reference is
the attestation, the blob is NOT read for execution and the native
dispatcher at 0x14003f540 implements f_user as straight-line code.
"""
import struct, sys
from capstone import Cs, CS_ARCH_X86, CS_MODE_64

PE = r'C:\Users\Ramón\Desktop\pafet_crackme\pafet.bin'
BLOB_VA = 0x1403E5020
BLOB_SZ = 0x6d8  # 1752

d = open(PE,'rb').read()
pe=struct.unpack_from('<I',d,0x3c)[0]
sz_opt=struct.unpack_from('<H',d,pe+20)[0]
image_base=struct.unpack_from('<Q',d,pe+24+24)[0]
sections=[]
nsec=struct.unpack_from('<H',d,pe+6)[0]
sec_tbl=pe+24+sz_opt
for i in range(nsec):
    off=sec_tbl+40*i
    name=d[off:off+8].rstrip(b'\0').decode(errors='replace')
    vs,va,rs,rp=struct.unpack_from('<IIII',d,off+8)
    sections.append((name,va,vs,rp,rs))
def va_to_fo(va):
    for n,sva,svs,rp,rs in sections:
        v0=image_base+sva; v1=v0+max(svs,rs)
        if v0<=va<v1: return rp+(va-v0)

tname,tva,tvs,trp,trs = next(s for s in sections if s[0]=='.text')
text_va_base = image_base+tva
text_bytes = d[trp:trp+tvs]
md=Cs(CS_ARCH_X86,CS_MODE_64); md.detail=True

hits=[]
# Linear-sweep disassemble the whole .text and check every rip-relative addr.
for ins in md.disasm(text_bytes, text_va_base):
    if 'rip' not in ins.op_str: continue
    parts=ins.op_str.split('rip')
    if len(parts)!=2: continue
    try:
        s=parts[1].strip().lstrip('+').strip('[]').strip()
        if ']' in s: s=s.split(']')[0]
        s=s.strip().lstrip('+')
        if s.startswith('-'):
            disp=-int(s[1:],16)
        elif s.startswith('0x'):
            disp=int(s,16)
        else:
            continue
        tgt=ins.address+ins.size+disp
        if BLOB_VA <= tgt < BLOB_VA + BLOB_SZ + 32:  # +32 slack to catch offsets just past end
            hits.append((ins.address, tgt, ins.mnemonic, ins.op_str))
    except Exception:
        pass

print(f'[*] Linear sweep of .text ({tvs} bytes) for rip-rel refs into [0x{BLOB_VA:x}..0x{BLOB_VA+BLOB_SZ:x})')
print(f'[*] Hits: {len(hits)}')
for addr,tgt,mn,op in hits:
    print(f'   0x{addr:x} {mn:6s} {op}   -> 0x{tgt:x}  (offset +0x{tgt-BLOB_VA:x})')

# A linear sweep is approximate (misses variable-length chaff).
# Do a byte-level scan for rip-rel 32-bit encodings that would resolve to
# any address inside the blob. This is a lower bound on misses.
print(f'\n[*] Byte-level scan: find any 4-byte little-endian 32-bit disp such')
print(f'    that there exists an instruction size k in {{5..7}} with (ip+k+disp) in blob')
# Scan: for every file offset, check if treating 4 bytes as sdisp yields a target in blob.
# Then verify instruction size by looking back for a plausible opcode.
confirmed=set((a,) for a,_,_,_ in hits)
missed=[]
for off in range(0, len(text_bytes)-4):
    disp = struct.unpack_from('<i', text_bytes, off)[0]
    # Instruction size: common for rip-rel memops is 5,6,7 bytes.
    # The displacement is at the END of the instruction (last 4 bytes).
    # So ip_of_next_insn = text_va_base + off + 4.
    rip = text_va_base + off + 4
    tgt = rip + disp
    if BLOB_VA <= tgt < BLOB_VA + BLOB_SZ:
        # Instruction starts at off - k, where k in {1..6}. Record candidate.
        ins_addr = text_va_base + off - 2  # most common for 7-byte lea
        if (ins_addr,) in confirmed: continue
        # Try disassembling at off-2 to see if a valid rip-rel insn results
        for backoff in (1,2,3,4,5,6):
            start = off - backoff
            if start < 0: continue
            try:
                dis_iter = md.disasm(text_bytes[start:start+15], text_va_base+start)
                ins = next(dis_iter)
                if ins.size == backoff+4 and 'rip' in ins.op_str:
                    missed.append((ins.address, tgt, ins.mnemonic, ins.op_str))
                    break
            except StopIteration:
                pass
print(f'[*] Additional candidates from byte scan not caught by linear sweep: {len(missed)}')
for addr,tgt,mn,op in missed[:20]:
    print(f'   0x{addr:x} {mn:6s} {op}   -> 0x{tgt:x}  (offset +0x{tgt-BLOB_VA:x})')
