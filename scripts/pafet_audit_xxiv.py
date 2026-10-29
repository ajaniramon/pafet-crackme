#!/usr/bin/env python3
"""Independent recursive native CFG audit, before relying on XXIII labels."""
import collections,hashlib,json,pathlib
import capstone,pefile
from capstone.x86_const import X86_OP_IMM
ROOT=pathlib.Path(__file__).resolve().parents[1];OUT=ROOT/'jack_xxiv_evidence';BASE=0x140000000
def cfg(pe,entry):
    md=capstone.Cs(capstone.CS_ARCH_X86,capstone.CS_MODE_64);md.detail=True
    pending=[entry];seen={};edges=[];calls=[];exits=[]
    while pending:
        pc=pending.pop()
        if pc in seen:continue
        if not BASE+0x1000<=pc<BASE+0x3a0000:raise ValueError(('outside native text',hex(pc)))
        i=next(md.disasm(pe.get_data(pc-BASE,15),pc),None)
        if i is None:raise ValueError(('undecodable',hex(pc)))
        seen[pc]=i;assert len(seen)<20000
        end=pc+i.size
        if i.mnemonic=='call':calls.append({'site':pc,'target':i.operands[0].imm if i.operands[0].type==X86_OP_IMM else None,'operand':i.op_str})
        if i.mnemonic.startswith('ret') or i.mnemonic in ('int3','ud2'):
            exits.append({'site':pc,'kind':i.mnemonic});continue
        if i.mnemonic.startswith('j'):
            if i.operands[0].type!=X86_OP_IMM:
                exits.append({'site':pc,'kind':'indirect_jump','operand':i.op_str});continue
            to=i.operands[0].imm;edges.append({'from':pc,'to':to,'kind':'taken'});pending.append(to)
            if i.mnemonic=='jmp':continue
        edges.append({'from':pc,'to':end,'kind':'fallthrough'});pending.append(end)
    return seen,{'entry':entry,'instructions':len(seen),'first':min(seen),'end':max(i.address+i.size for i in seen.values()),
        'edges':edges,'calls':calls,'exits':exits,'mnemonics':dict(collections.Counter(i.mnemonic for i in seen.values()))}
def main():
    OUT.mkdir(exist_ok=True);pe=pefile.PE(str(ROOT/'pafet.bin'))
    pending=[BASE+0x3bea0];functions={};all_ins={}
    while pending:
        entry=pending.pop()
        if entry in functions:continue
        ins,info=cfg(pe,entry);functions[entry]=info;all_ins.update(ins)
        pending.extend(c['target'] for c in info['calls'] if c['target'] is not None and c['target'] not in functions)
        assert len(functions)<200
    for entry,info in functions.items():
        (OUT/f"native_{entry-BASE:x}.asm").write_text('\n'.join(f'{i.address:x} {i.mnemonic} {i.op_str}' for i in sorted((all_ins[p] for p in {e['from'] for e in info['edges']}|{e['site'] for e in info['exits']}),key=lambda x:x.address))+'\n')
    report={'original_sha256':hashlib.sha256((ROOT/'pafet.bin').read_bytes()).hexdigest(),
        'functions':list(functions.values()),'unique_instructions':len(all_ins),'mnemonics':dict(collections.Counter(i.mnemonic for i in all_ins.values()))}
    (OUT/'native_cfg.json').write_text(json.dumps(report,indent=2)+'\n')
    print(json.dumps({'functions':len(functions),'unique_instructions':len(all_ins),'mnemonics':report['mnemonics'],
        'callees':[{ 'entry':hex(k),'instructions':v['instructions'],'calls':v['calls']} for k,v in functions.items()]},indent=2))
if __name__=='__main__':main()
