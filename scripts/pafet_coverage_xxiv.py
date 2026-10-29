#!/usr/bin/env python3
"""Known native branch edges, observed edges and explicit unreachable proofs."""
import argparse,collections,hashlib,json
import capstone,pefile
from pafet_audit_xxiv import ROOT,OUT,BASE,cfg as native_cfg
# Both DROP bodies are 98% identical; each proof is anchored on its own instruction addresses.
HANDLERS={'3bea0':{'entry':BASE+0x3bea0,'polynomial':BASE+0x3c55e,'lut_load':BASE+0x3c9d0,'lut_branch':BASE+0x3cb1b,'report':'branch_coverage.json',
        'sources':('native_lockstep.json','directed_native.json','fresh_transfer_differential.json','fresh_native_differential.json')},
    '14a00':{'entry':BASE+0x14a00,'polynomial':BASE+0x150b7,'lut_load':BASE+0x15529,'lut_branch':BASE+0x15674,'report':'branch_coverage_14a00.json',
        'sources':('native_lockstep_14a00.json','directed_native_14a00.json')}}
BP={'rbp','ebp','bp','bpl'}
def main():
    ap=argparse.ArgumentParser();ap.add_argument('--handler',choices=sorted(HANDLERS),default='3bea0');h=HANDLERS[ap.parse_args().handler]
    pe=pefile.PE(str(ROOT/'pafet.bin'));md=capstone.Cs(capstone.CS_ARCH_X86,capstone.CS_MODE_64);md.detail=True
    body_ins,cfg=native_cfg(pe,h['entry']);report_entry=hex(h['entry']);first,end=cfg['first'],cfg['end']
    observed=set();pcs=set();cases=[]
    for name in h['sources']:
        p=OUT/name
        if not p.exists():continue
        doc=json.loads(p.read_text())
        for c in doc['cases']:
            if not c.get('all_instruction_states_match'):continue
            cases.append({'source':name,'case':c['case'],'vector':c['vector'],'steps':c['steps']})
            for e in c['branches']:
                # The selected body starts in the canonical PE mapping in all
                # harnesses; its nested relocated handlers are kept separate.
                if first<=e['from']<end:observed.add((e['from'],e['to']))
            pcs.update(int(x,16) for x in c['executed_pcs'] if first<=int(x,16)<end)
    # Exhaustive original LUT values, not a hypothesis about plaintext input.
    table=pe.get_data(0x3dfcb0,256);outputs=[x^0xeb for x in table];assert max(outputs)==61
    # The compared byte is that LUT entry XOR 0xeb, and BPL is not written again before CMP/JAE.
    lea,load,xor=(body_ins[a] for a in sorted(body_ins) if h['lut_load']<=a<h['lut_load']+0x13)
    assert (lea.mnemonic,lea.operands[0].reg,lea.address+lea.size+lea.disp)==('lea',capstone.x86_const.X86_REG_RCX,BASE)
    assert (load.mnemonic,load.op_str,xor.mnemonic,xor.op_str)==('movzx','ebp, byte ptr [rax + rcx + 0x3dfcb0]','xor','bpl, 0xeb')
    between=[body_ins[a] for a in sorted(body_ins) if xor.address<a<h['lut_branch']]
    assert (between[-1].mnemonic,between[-1].op_str)==('cmp','bpl, 0x3e') and body_ins[h['lut_branch']].mnemonic=='jae'
    assert not any(i.mnemonic not in ('cmp','test','push') and i.op_str.split(',')[0].strip() in BP for i in between)
    lut_target=body_ins[h['lut_branch']].operands[0].imm
    polynomial=[body_ins[a] for a in sorted(body_ins) if h['polynomial']<=a<h['polynomial']+0x13];poly_target=polynomial[-1].operands[0].imm
    assert [(i.mnemonic,i.op_str) for i in polynomial]==[
        ('lea','eax, [rdx + 1]'),('mov','ecx, eax'),('xor','eax, edx'),('imul','ecx, edx'),
        ('not','ecx'),('and','ecx, eax'),('test','cl, 1'),('je',hex(poly_target))]
    assert all(((~(x*((x+1)&1)))&(x^((x+1)&1))&1)==1 for x in (0,1))
    proofs=[{'branch':polynomial[-1].address,'unreachable_target':poly_target,
        'reason':'For arbitrary uint32 x, x*(x+1) is even and x XOR (x+1) has bit zero set. Therefore (~product)&xor has bit zero set; TEST cl,1 clears ZF and JE cannot be taken.',
        'instruction_bytes_sha256':hashlib.sha256(pe.get_data(h['polynomial']-BASE,0x13)).hexdigest()},
        {'branch':h['lut_branch'],'unreachable_target':lut_target,
        'reason':'BPL is the original immutable LUT byte XOR 0xeb, unchanged up to CMP. All 256 LUT bytes, after XOR 0xeb, are in 0..61. CMP bpl,62 cannot set the JAE condition. Requires the original LUT unchanged.',
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
    body=set(body_ins);unreachable=body-reachable
    assert len(body)==cfg['instructions'] and not (unreachable&pcs),sorted(map(hex,unreachable&pcs))
    unobserved=sorted(body-pcs-unreachable)
    instruction_report={'proved_unreachable_instructions':len(unreachable),'unobserved_reachable_instructions':list(map(hex,unobserved)),
        'noreturn_callees':[{'entry':hex(t),'reason':'Closed native CFG has no RET and no indirect-jump exit; control cannot come back to the call site successor.'} for t in noreturn]}
    report={'entry':report_entry,'body_instructions':cfg['instructions'],'body_bytes':cfg['end']-cfg['first'],
        'known_branch_edges':len(edges),'observed_branch_edges':sum(x['observed'] for x in edges),
        'proved_unreachable_edges':sum(x['proved_unreachable'] for x in edges),'uncovered_branch_edges':missing,
        'body_instruction_pcs_observed':len(pcs),**instruction_report,'branch_edges':edges,'proofs':proofs,'cases':cases,
        'scope':'Local handler branch edges only; not exhaustive coverage of nested handlers, helpers, inputs or OS exception machinery.'}
    (OUT/h['report']).write_text(json.dumps(report,indent=2)+'\n')
    print(json.dumps({k:v for k,v in report.items() if k not in ('branch_edges','proofs','cases')},indent=2))
if __name__=='__main__':main()
