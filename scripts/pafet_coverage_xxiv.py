#!/usr/bin/env python3
"""Known native branch edges, observed edges and explicit unreachable proofs."""
import argparse,collections,gzip,hashlib,json
import capstone,pefile
from capstone.x86_const import X86_OP_REG,X86_OP_MEM
from pafet_audit_xxiv import ROOT,OUT,BASE,cfg as native_cfg
NESTED=('continued_lockstep.json','continued_directed.json','native_lockstep.json','native_lockstep_14a00.json','directed_native.json','directed_native_14a00.json','fresh_transfer_differential.json')
# The parity polynomial, in the two register allocations found in the wrappers: product in ECX, XOR in EAX or EDX.
POLYNOMIAL=([('lea','eax, [rdx + 1]'),('mov','ecx, eax'),('xor','eax, edx'),('imul','ecx, edx'),('not','ecx'),('and','ecx, eax'),('test','cl, 1')],
    [('mov','ecx, edx'),('lea','eax, [rdx + 1]'),('imul','ecx, eax'),('xor','edx, eax'),('not','ecx'),('and','ecx, edx'),('test','cl, 1')])
def runtime_bases():
    bases={BASE}
    for name in ('h3bea0_vectors_xiii.json','h14a00_vectors_xvi.json'):
        bases|={int(v['pe_base'],16) for v in json.loads((ROOT/'vm_pools_evidence'/name).read_text()).values() if isinstance(v,dict) and 'pe_base' in v}
    for name in ('fresh_native_vectors.json.gz','fresh_transfer_vectors.json.gz'):
        bases|={int(v['pe_base'],16) for v in json.loads(gzip.decompress((OUT/name).read_bytes())).values()}
    return bases
# Each proof is anchored on the wrapper's own instruction addresses.
HANDLERS={'3bea0':{'entry':BASE+0x3bea0,'polynomial':BASE+0x3c55e,'lut_load':BASE+0x3c9d0,'lut_branch':BASE+0x3cb1b,'report':'branch_coverage.json',
        'sources':('native_lockstep.json','directed_native.json','fresh_transfer_differential.json','fresh_native_differential.json')},
    '14a00':{'entry':BASE+0x14a00,'polynomial':BASE+0x150b7,'lut_load':BASE+0x15529,'lut_branch':BASE+0x15674,'report':'branch_coverage_14a00.json',
        'sources':('native_lockstep_14a00.json','directed_native_14a00.json')},
    # Block-transfer twins: root entries reached by the original resolver, plus their nested calls.
    '15820':{'entry':BASE+0x15820,'polynomial':BASE+0x15f7f,'lut_load':BASE+0x163e0,'lut_branch':BASE+0x16519,'report':'branch_coverage_15820.json','sources':NESTED,'pending_queue':True},
    '25020':{'entry':BASE+0x25020,'polynomial':BASE+0x2577f,'lut_load':BASE+0x25be0,'lut_branch':BASE+0x25d19,'report':'branch_coverage_25020.json','sources':NESTED,'pending_queue':True}}
BP={'rbp','ebp','bp','bpl'}
def reach(edges,start,removed=()):
    successors=collections.defaultdict(list)
    for a,b in edges:
        if a not in removed and b not in removed:successors[a].append(b)
    seen=set();pending=[start]
    while pending:
        pc=pending.pop()
        if pc not in seen:seen.add(pc);pending.extend(successors[pc])
    return seen
def clobbers_counter(i):
    """True if I may change RDI or the dword at [rdi+0x5b8]; destinations other than RDI- or RSP-based memory may alias it."""
    if i.mnemonic in ('cmp','test','push') or not i.operands:return False
    d=i.operands[0]
    if d.type==X86_OP_REG:return i.reg_name(d.reg) in ('rdi','edi','di','dil')
    if d.type!=X86_OP_MEM:return False
    base=i.reg_name(d.mem.base) if d.mem.base else None
    if base=='rsp' and not d.mem.index:return False
    return not (base=='rdi' and not d.mem.index and (d.mem.disp+d.size<=0x5b8 or d.mem.disp>=0x5bc))
def pending_queue_proof(pe,body,cfg):
    """Block transfers end by queueing pending work: after 0x140006010 returns the counter is 1..64,
    so the wrapper's `cmp [rdi+0x5b8],0` / JNE always leaves and its inline continuation is dead."""
    push=[c for c in cfg['calls'] if c['target']==BASE+0x6010];assert len(push)==1,push
    site=push[0]['site'];after=site+body[site].size
    checks=[a for a in body if (body[a].mnemonic,body[a].op_str)==('cmp','dword ptr [rdi + 0x5b8], r8d')];assert len(checks)==1,checks
    check=checks[0];ordered=sorted(body);k=ordered.index(check);test,jne_zero,branch=body[ordered[k-2]],body[ordered[k-1]],body[ordered[k+1]]
    assert (test.mnemonic,test.op_str,jne_zero.mnemonic,branch.mnemonic)==('test','r8d, r8d','jne','jne') and jne_zero.address+jne_zero.size==check
    assert (body[ordered[ordered.index(site)-1]].mnemonic,body[ordered[ordered.index(site)-1]].op_str)==('mov','rcx, rdi')
    edges=[(e['from'],e['to']) for e in cfg['edges']]
    assert check not in reach(edges,cfg['entry'],removed={site}),'a path reaches the check without the queue push'
    segment=reach(edges,after)&{a for a in body if check in reach(edges,a)}
    assert not [hex(a) for a in segment if body[a].mnemonic=='call' or clobbers_counter(body[a])]
    ins,info=native_cfg(pe,BASE+0x6010);rets=[x['site'] for x in info['exits'] if x['kind'].startswith('ret')];assert len(rets)==1
    order=sorted(ins);inc=[a for a in ins if (ins[a].mnemonic,ins[a].op_str)==('inc','dword ptr [rbx + 0x5b8]')];assert len(inc)==1;inc=inc[0]
    j=order.index(inc);seq=[(ins[a].mnemonic,ins[a].op_str) for a in order[j-4:j]]
    assert seq==[('mov','eax, dword ptr [rbx + 0x5b8]'),('cmp','eax, 0x40'),('jae',hex(ins[order[j-2]].operands[0].imm)),('mov','qword ptr [rbx + rax*8 + 0x3b0], rdi')],seq
    assert (ins[order[0]+0].mnemonic,)==('mov',) and any((ins[a].mnemonic,ins[a].op_str)==('mov','rbx, rcx') for a in order[:6])
    # RBX is set from RCX and only saved to the stack before the increment; callees preserve it (nonvolatile, Win64 ABI).
    assert not [hex(a) for a in order if order.index(a)<j and ins[a].operands and ins[a].operands[0].type==X86_OP_REG
        and ins[a].reg_name(ins[a].operands[0].reg) in ('rbx','ebx','bx','bl') and ins[a].op_str!='rbx, rcx' and ins[a].mnemonic not in ('cmp','test','push')]
    ledges=[(e['from'],e['to']) for e in info['edges']]
    assert rets[0] not in reach(ledges,BASE+0x6010,removed={inc}),'a return path skips the counter increment'
    return {'branch':branch.address,'unreachable_target':branch.address+branch.size,'push_site':site,
        'reason':'Every path to CMP [rdi+0x5b8],r8d (r8d==0 after TEST/JNE) passes the call to 0x140006010 with RCX=RDI, and no call, write to RDI, or memory write that could reach the counter follows (only RDI-based stores to other offsets and RSP-based stores; the stack is assumed not to alias the context). 0x140006010 returns only through INC [rbx+0x5b8] after CMP eax,0x40/JAE, so the counter is 1..64 and the JNE is always taken. Assumes callees preserve the nonvolatile RBX/RDI (Win64 ABI). Normal control flow only; the C++ throw at 0x1403a5fa0 does not return there.'}
def main():
    ap=argparse.ArgumentParser();ap.add_argument('--handler',choices=sorted(HANDLERS),default='3bea0');h=HANDLERS[ap.parse_args().handler]
    pe=pefile.PE(str(ROOT/'pafet.bin'));md=capstone.Cs(capstone.CS_ARCH_X86,capstone.CS_MODE_64);md.detail=True
    body_ins,cfg=native_cfg(pe,h['entry']);report_entry=hex(h['entry']);first,end=cfg['first'],cfg['end']
    bases=runtime_bases();canon=lambda pc:next((pc-b+BASE for b in bases if b<=pc<b+0x460000),pc)
    observed=set();pcs=set();cases=[]
    for name in h['sources']:
        p=OUT/name
        if not p.exists():continue
        doc=json.loads(p.read_text())
        for c in doc['cases']:
            if not c.get('all_instruction_states_match'):continue
            # Nested and resolver-called wrappers run at the runtime image base.
            executed={canon(int(x,16)) for x in c['executed_pcs']}&set(body_ins)
            if not executed:continue
            cases.append({'source':name,'case':c['case'],'vector':c['vector'],'steps':c['steps']})
            for e in c['branches']:
                if first<=canon(e['from'])<end:observed.add((canon(e['from']),canon(e['to'])))
            pcs|=executed
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
    polynomial=[body_ins[a] for a in sorted(body_ins) if a>=h['polynomial']][:8];poly_target=polynomial[-1].operands[0].imm
    assert [(i.mnemonic,i.op_str) for i in polynomial[:7]] in POLYNOMIAL and (polynomial[-1].mnemonic,polynomial[-1].op_str)==('je',hex(poly_target))
    assert all(((~(x*((x+1)&1)))&(x^((x+1)&1))&1)==1 for x in (0,1))
    proofs=[{'branch':polynomial[-1].address,'unreachable_target':poly_target,
        'reason':'For arbitrary uint32 x, x*(x+1) is even and x XOR (x+1) has bit zero set. Therefore (~product)&xor has bit zero set; TEST cl,1 clears ZF and JE cannot be taken.',
        'instruction_bytes_sha256':hashlib.sha256(pe.get_data(h['polynomial']-BASE,polynomial[-1].address+polynomial[-1].size-h['polynomial'])).hexdigest()},
        {'branch':h['lut_branch'],'unreachable_target':lut_target,
        'reason':'BPL is the original immutable LUT byte XOR 0xeb, unchanged up to CMP. All 256 LUT bytes, after XOR 0xeb, are in 0..61. CMP bpl,62 cannot set the JAE condition. Requires the original LUT unchanged.',
        'lut_sha256':hashlib.sha256(table).hexdigest(),'outputs':sorted(set(outputs))}]
    if h.get('pending_queue'):proofs.append(pending_queue_proof(pe,body_ins,cfg))
    impossible={(p['branch'],p['unreachable_target']) for p in proofs}
    sites={e['from'] for e in cfg['edges'] if e['kind']=='taken'}
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
    # An edge is unreachable when it is a proved-impossible edge or leaves a proved-unreachable instruction.
    edges=[{**e,'observed':(e['from'],e['to']) in observed,'proved_unreachable':(e['from'],e['to']) in impossible or e['from'] in unreachable} for e in cfg['edges'] if e['from'] in sites]
    missing=[e for e in edges if not e['observed'] and not e['proved_unreachable']]
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
