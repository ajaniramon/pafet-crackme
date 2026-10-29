#!/usr/bin/env python3
"""Recover five native CFGs by following x64 branch edges, independent of pdata."""
import hashlib,json,pathlib,collections
import pefile,capstone
from capstone.x86_const import X86_OP_IMM

ROOT=pathlib.Path(__file__).resolve().parents[1];BASE=0x140000000
ENTRIES=[0x3bea0,0x15820,0x25020,0x14a00,0x216d0]
SEMANTIC={0x3bea0:'DROP',0x15820:'block transfer',0x25020:'block transfer',0x14a00:'DROP',0x216d0:'STORE_REG'}

def recover(pe,entry):
    md=capstone.Cs(capstone.CS_ARCH_X86,capstone.CS_MODE_64);md.detail=True
    todo=[BASE+entry];seen={};edges=[];calls=[]
    while todo:
        address=todo.pop()
        if address in seen:continue
        assert BASE<=address<BASE+0x3a0000,hex(address)
        ins=next(md.disasm(pe.get_data(address-BASE,15),address));seen[address]=ins
        assert len(seen)<10000
        next_pc=address+ins.size
        if ins.mnemonic=='call':
            calls.append({'site':hex(address),'target':ins.op_str})
        if ins.mnemonic.startswith('ret') or ins.mnemonic in ('int3','ud2'):continue
        if ins.mnemonic.startswith('j'):
            if ins.operands[0].type!=X86_OP_IMM:
                edges.append({'from':hex(address),'to':ins.op_str,'kind':'indirect'});continue
            target=ins.operands[0].imm
            edges.append({'from':hex(address),'to':hex(target),'kind':'branch'});todo.append(target)
            if ins.mnemonic=='jmp':continue
        todo.append(next_pc)
        edges.append({'from':hex(address),'to':hex(next_pc),'kind':'fallthrough'})
    ins=sorted(seen.values(),key=lambda x:x.address)
    pdata=[{'start':hex(BASE+x.struct.BeginAddress),'end':hex(BASE+x.struct.EndAddress)}
        for x in pe.DIRECTORY_ENTRY_EXCEPTION if x.struct.BeginAddress<=max(seen)-BASE and x.struct.EndAddress>min(seen)-BASE]
    blocks=sorted({BASE+entry}|{int(x['to'],16) for x in edges if x['kind']=='branch'}|
        {x.address+x.size for x in ins if x.mnemonic.startswith('j') and x.mnemonic!='jmp'})
    return {'entry':hex(BASE+entry),'semantic_core':SEMANTIC[entry],
        'first':hex(min(seen)),'last_instruction':hex(ins[-1].address),
        'extent_bytes':ins[-1].address+ins[-1].size-min(seen),
        'reachable_instruction_bytes':sum(x.size for x in ins),'instructions':len(ins),
        'basic_block_starts':list(map(hex,blocks)),'pdata_overlaps':pdata,
        'calls':calls,'edges':edges},ins

def main():
    pe=pefile.PE(str(ROOT/'pafet.bin'));out=ROOT/'jack_xxiii_evidence';out.mkdir(exist_ok=True);results=[]
    for entry in ENTRIES:
        r,ins=recover(pe,entry);results.append(r)
        (out/f'handler_{entry:x}.asm').write_text('\n'.join(f'{x.address:x} {x.mnemonic} {x.op_str}' for x in ins)+'\n')
        print(r['entry'],r['semantic_core'],'extent',r['extent_bytes'],'instructions',r['instructions'],'calls',len(r['calls']))
    (out/'handler_cfg.json').write_text(json.dumps(results,indent=2)+'\n')

if __name__=='__main__':main()
