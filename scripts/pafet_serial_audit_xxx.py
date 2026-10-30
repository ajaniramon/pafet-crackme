#!/usr/bin/env python3
"""Bind two recovered opcode families to constants/boundaries in original PE.

This performs static analysis only. The semantic VM reads constants at these
RVAs; it never loads trace-derived effects or executes handler instructions.
"""
import json
import hashlib
import pathlib
import pprint
import pefile
from capstone.x86_const import X86_OP_IMM,X86_OP_MEM
from pafet_audit_xxiv import cfg,BASE,ROOT
from pafet_state_contract import require,ORIGINAL_SHA256

OUT=ROOT/'jack_xxx_evidence'
FAMILIES={1:[0x1f8210,0x209290,0x20e060,0x21d530],5:[0x1fcef0,0x202800,0x20fa70,0x21e270]}

def main():
    raw=(ROOT/'pafet.bin').read_bytes();require(hashlib.sha256(raw).hexdigest()==ORIGINAL_SHA256,'Wrong original PE','integrity')
    pe=pefile.PE(data=raw);out={}
    for opcode,entries in FAMILIES.items():
        for domain,entry in enumerate(entries):
            instructions,info=cfg(pe,BASE+entry);seq=sorted(instructions.values(),key=lambda x:x.address)
            reader=next(i for i in seq if i.mnemonic=='call' and i.operands[0].type==X86_OP_IMM and i.operands[0].imm in (BASE+0x1f1c70,BASE+0x1f1d80))
            prefix=[i for i in seq if i.address<reader.address]
            if domain==0:constant=next(i for i in reversed(prefix) if i.mnemonic=='movabs' and i.operands[1].imm&((1<<64)-1) not in (0xff51afd7ed558ccd,0xc4ceb9fe1a85ec53))
            else:constant=next(i for i in reversed(prefix) if i.mnemonic=='movabs' and i.reg_name(i.operands[0].reg)=='rcx')
            noise=next(o.mem.disp for i in prefix for o in i.operands if o.type==X86_OP_MEM and i.reg_name(o.mem.base)=='r14' and 0x2e0<=o.mem.disp<=0x2f8)
            feedback=next(i for i in seq if i.mnemonic=='call' and i.operands[0].type==X86_OP_IMM and i.operands[0].imm==BASE+0x1f1520)
            marker=next(i for i in reversed(seq[:seq.index(feedback)]) if len(i.operands)>1 and i.operands[0].type!=X86_OP_MEM and i.reg_name(i.operands[0].reg)=='r8d' and i.operands[1].type==X86_OP_IMM)
            materializer=min(c['site'] for c in info['calls'] if c['target']==BASE+0x1f25b0)
            decode=max(c['site'] for c in info['calls'] if c['target']==BASE+0x1ee070 and c['site']<materializer)
            if opcode==1:core=next(c['site']+5 for c in info['calls'] if c['target']==BASE+0x1ee820)
            else:
                write=next(i for i in seq if i.mnemonic=='mov' and i.operands[0].type==X86_OP_MEM and i.operands[0].mem.disp==0x11c0);core=write.address+write.size
            exit_label=next(i for i in reversed(seq) if core<i.address<decode and i.mnemonic=='add' and i.op_str.startswith('rax, 0x'))
            out[entry]={'opcode':opcode,'domain':domain,'noise_offset':noise,'noise_constant_rva':constant.address-BASE+constant.imm_offset,'marker_rva':marker.address-BASE+marker.imm_offset,'core_end':core-BASE,'decode_entry':decode-BASE,'exit_label_rva':exit_label.address-BASE+exit_label.imm_offset,'return_rva':next(i.address-BASE for i in seq if i.mnemonic=='ret')}
            label='push' if opcode==1 else 'store'
            (OUT/f'{label}_{entry:x}.asm').write_bytes(('\n'.join(f'{i.address-BASE:06x} {i.mnemonic:8} {i.op_str}' for i in seq)+'\n').encode())
    (ROOT/'devirt/serial_regions.py').write_bytes(('"""Static RVA bindings; embedded parameter values are read from PE bytes."""\nREGIONS = '+pprint.pformat(out,width=100,sort_dicts=False)+'\n').encode())
    (OUT/'native_regions.json').write_bytes(json.dumps({hex(k):v for k,v in out.items()},indent=2).encode()+b'\n')
    print('PASS: eight static wrapper bindings; no dynamic trace used')
if __name__=='__main__':main()
