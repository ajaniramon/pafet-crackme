#!/usr/bin/env python3
"""Regenerate JACK XXIX static evidence from the verified original PE."""
import hashlib
import json
import pathlib
import pefile
from pafet_audit_xxiv import cfg,BASE,ROOT
from pafet_state_contract import ORIGINAL_SHA256,require

OUT=ROOT/'jack_xxix_evidence'
HELPERS=[0x1f0290,0x1f0410,0x1f05c0,0x1ee450,0x1ee070,0x2297b0,0x1f0db0,
         0x1f0910,0x1eddd0,0x1edea0,0x229c70,0x2297e0,0x1f1f50,0x1edf30,
         0x1f0660,0x1f25b0,0x1ef7c0,0x1f1fe0,0x1ed120,0x1f1c70,0x1ee820,
         0x1ee650,0x1ee940,0x1ee1c0,0x1ecfc0]

def main():
    data=(ROOT/'pafet.bin').read_bytes();require(hashlib.sha256(data).hexdigest()==ORIGINAL_SHA256,'Original PE identity differs','integrity')
    pe=pefile.PE(data=data);OUT.mkdir(exist_ok=True)
    roots={0x22a120:'initializer.asm',0x1f8210:'opcode1_body.asm',0x209290:'opcode1_body_209290.asm',0x214950:'exploratory_opcode4_body_214950.asm'}
    roots.update({rva:f'native_{rva:x}.asm' for rva in HELPERS})
    for rva,name in roots.items():
        instructions,info=cfg(pe,BASE+rva)
        lines=[f'{i.address-BASE:06x} {i.mnemonic:8} {i.op_str}' for i in sorted(instructions.values(),key=lambda i:i.address)]
        (OUT/name).write_bytes(('\n'.join(lines)+'\n').encode())
        if rva==0x22a120:(OUT/'initializer_cfg.json').write_bytes(json.dumps(info,indent=2).encode()+b'\n')
    print('PASS original PE; regenerated',len(roots),'static native regions (not virtual-opcode coverage)')
if __name__=='__main__':main()
