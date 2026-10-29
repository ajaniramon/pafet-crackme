#!/usr/bin/env python3
"""Known native branch edges, observed edges and explicit unreachable proofs."""
import collections,hashlib,json
import capstone,pefile
from pafet_audit_xxiv import ROOT,OUT,BASE,cfg as native_cfg
def main():
    pe=pefile.PE(str(ROOT/'pafet.bin'));md=capstone.Cs(capstone.CS_ARCH_X86,capstone.CS_MODE_64)
    cfg=json.loads((OUT/'native_cfg.json').read_text())['functions'][0];report_entry='0x14003bea0'
    observed=set();pcs=set();cases=[]
    for name in ('native_lockstep.json','directed_native.json','fresh_transfer_differential.json','fresh_native_differential.json'):
        p=OUT/name
        if not p.exists():continue
        doc=json.loads(p.read_text())
        for c in doc['cases']:
            if not c.get('all_instruction_states_match'):continue
            cases.append({'source':name,'case':c['case'],'vector':c['vector'],'steps':c['steps']})
            runtime=None
            for e in c['branches']:
                # The selected body starts in the canonical PE mapping in all
                # harnesses; its nested relocated handlers are kept separate.
                if BASE+0x3bea0<=e['from']<BASE+0x3cca9:observed.add((e['from'],e['to']))
            pcs.update(int(x,16) for x in c['executed_pcs'] if BASE+0x3bea0<=int(x,16)<BASE+0x3cca9)
    # Exhaustive original LUT values, not a hypothesis about plaintext input.
    table=pe.get_data(0x3dfcb0,256);outputs=[x^0xeb for x in table];assert max(outputs)==61
    polynomial=list(md.disasm(pe.get_data(0x3c55e,0x3c571-0x3c55e),BASE+0x3c55e))
    assert [(i.mnemonic,i.op_str) for i in polynomial]==[
        ('lea','eax, [rdx + 1]'),('mov','ecx, eax'),('xor','eax, edx'),('imul','ecx, edx'),
        ('not','ecx'),('and','ecx, eax'),('test','cl, 1'),('je','0x14003c5cd')]
    assert all(((~(x*((x+1)&1)))&(x^((x+1)&1))&1)==1 for x in (0,1))
    proofs=[{'branch':BASE+0x3c56f,'unreachable_target':BASE+0x3c5cd,
        'reason':'For arbitrary uint32 x, x*(x+1) is even and x XOR (x+1) has bit zero set. Therefore (~product)&xor has bit zero set; TEST cl,1 clears ZF and JE cannot be taken.',
        'instruction_bytes_sha256':hashlib.sha256(pe.get_data(0x3c55e,0x13)).hexdigest()},
        {'branch':BASE+0x3cb1b,'unreachable_target':BASE+0x3cbb1,
        'reason':'All 256 bytes of the original immutable LUT, after XOR 0xeb, are in 0..61. CMP bpl,62 cannot set the JAE condition. Requires the original LUT unchanged.',
        'lut_sha256':hashlib.sha256(table).hexdigest(),'outputs':sorted(set(outputs))}]
    impossible={(p['branch'],p['unreachable_target']) for p in proofs}
    sites={e['from'] for e in cfg['edges'] if e['kind']=='taken'}
    edges=[{**e,'observed':(e['from'],e['to']) in observed,'proved_unreachable':(e['from'],e['to']) in impossible} for e in cfg['edges'] if e['from'] in sites]
    missing=[e for e in edges if not e['observed'] and not e['proved_unreachable']]
    # Body instructions: reachable from the entry without the impossible edges and without
    # falling through a call to a callee whose closed CFG has neither RET nor indirect-jump exits.
    noreturn=sorted({c['target'] for c in cfg['calls'] if c['target'] is not None and not any(x['kind'].startswith('ret') or x['kind']=='indirect_jump' for x in native_cfg(pe,c['target'])[1]['exits'])})
    after_noreturn={c['site'] for c in cfg['calls'] if c['target'] in noreturn}
    successors=collections.defaultdict(list)
    for e in cfg['edges']:
        if (e['from'],e['to']) not in impossible and not (e['kind']=='fallthrough' and e['from'] in after_noreturn):successors[e['from']].append(e['to'])
    reachable=set();pending=[int(report_entry,16)]
    while pending:
        pc=pending.pop()
        if pc not in reachable:reachable.add(pc);pending.extend(successors[pc])
    body=set(native_cfg(pe,int(report_entry,16))[0]);unreachable=body-reachable
    assert len(body)==cfg['instructions'] and not (unreachable&pcs),sorted(map(hex,unreachable&pcs))
    unobserved=sorted(body-pcs-unreachable)
    instruction_report={'proved_unreachable_instructions':len(unreachable),'unobserved_reachable_instructions':list(map(hex,unobserved)),
        'noreturn_callees':[{'entry':hex(t),'reason':'Closed native CFG has no RET and no indirect-jump exit; control cannot come back to the call site successor.'} for t in noreturn]}
    report={'entry':report_entry,'body_instructions':cfg['instructions'],'body_bytes':cfg['end']-cfg['first'],
        'known_branch_edges':len(edges),'observed_branch_edges':sum(x['observed'] for x in edges),
        'proved_unreachable_edges':sum(x['proved_unreachable'] for x in edges),'uncovered_branch_edges':missing,
        'body_instruction_pcs_observed':len(pcs),**instruction_report,'branch_edges':edges,'proofs':proofs,'cases':cases,
        'scope':'Local handler branch edges only; not exhaustive coverage of nested handlers, helpers, inputs or OS exception machinery.'}
    (OUT/'branch_coverage.json').write_text(json.dumps(report,indent=2)+'\n')
    print(json.dumps({k:v for k,v in report.items() if k not in ('branch_edges','proofs','cases')},indent=2))
if __name__=='__main__':main()
