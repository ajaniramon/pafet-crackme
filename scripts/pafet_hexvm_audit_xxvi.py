#!/usr/bin/env python3
"""Read-only audit of the committed XXV trace. Does not overwrite XXV evidence."""
import bisect
import collections
import hashlib
import json
import pathlib
import capstone
import pefile
from pafet_hexvm_lockstep_xxv import H, fmix64, MASK, phi

ROOT=pathlib.Path(__file__).resolve().parents[1]
OUT=ROOT/'jack_xxvi_evidence'

def main():
    path=ROOT/'vm_pools_evidence/hexvm_full_trace_xxv.json'
    d=json.loads(path.read_text()); ps=d['pushes']; ws=d['vpc_writes']
    assert all(len(p)==10 for p in ps)
    ticks=[w[0] for w in ws]
    invariant=collections.Counter(); absent=0
    for i,p in enumerate(ps):
        invariant['counter_matches']+=p[8]==i
        pos=bisect.bisect_right(ticks,p[0])
        if pos==len(ws): absent+=1
        else: invariant['item_matches_next_write']+=p[1]==ws[pos][1]
    streams=('vpc_reads','vpc_writes','pushes','secdisps','allocs','outputs','throws','panics')
    all_ticks=[e[0] for name in streams for e in d[name]]
    rotation=ps[0][2]&7
    counts=collections.Counter(); first={}
    for i,(p,q) in enumerate(zip(ps,ps[1:])):
        k,a,b=[p[j]|p[j+1]<<32 for j in (2,4,6)]
        sel=((k*phi+(k^p[1]))&MASK)>>61
        predicted=H((sel+rotation)&7,fmix64(p[1]),a,b)
        old=H((sel+(k&7))&7,fmix64(p[1]),a,b)
        observed=tuple(q[j]|q[j+1]<<32 for j in (2,4,6))
        counts['old_K']+=old[0]==observed[0]
        for name,x,y in zip(('K','A','B'),predicted,observed):
            counts[name]+=x==y
            if x!=y and name not in first:
                first[name]={'push_index':i,'item':hex(p[1]),'selector':sel,
                    'predicted_handler':(sel+rotation)&7,'before':list(map(hex,(k,a,b))),
                    'predicted':list(map(hex,predicted)),'observed':list(map(hex,observed)),
                    'actual_handler':'not captured','effective_table':'not captured'}
        counts['KAB']+=predicted==observed
    # Static anchors for each observed PC. An observed edge is not an instruction.
    pe=pefile.PE(str(ROOT/'pafet.bin'))
    dis=capstone.Cs(capstone.CS_ARCH_X86,capstone.CS_MODE_64)
    ins=list(dis.disasm(pe.get_data(0x804c0,0x8520),0x1400804c0))
    for name,lo,hi in [('dispatcher',0x4c720,0x4c92c),
                       ('table_remap',0x7fb70,0x7fffe),
                       ('slot_read',0x4a0e0,0x4a1be),
                       ('adapter',0x889e0,0x889e8),
                       ('table_init',0x811c4,0x8127f),
                       ('block_2d409a',0x8735f,0x87445)]:
        (OUT/(name+'.asm')).write_text('\n'.join(
            f'{i.address:016x}  {i.mnemonic} {i.op_str}'.rstrip()
            for i in dis.disasm(pe.get_data(lo,hi-lo),0x140000000+lo))+'\n')
    entries={}
    for x,y in zip(ins,ins[1:]):
        if x.mnemonic=='cmp' and x.op_str.startswith('eax, 0x') and y.mnemonic=='je':
            entries[int(x.op_str.split(', ')[1],16)]=int(y.op_str,16)
    visits=collections.Counter(w[1] for w in ws);edges=collections.defaultdict(collections.Counter)
    for x,y in zip(ws,ws[1:]): edges[x[1]][y[1]]+=1
    blocks=[]
    for pc,n in sorted(visits.items()):
        blocks.append({'pc':hex(pc),'visits':n,'native_entry':hex(entries[pc]) if pc in entries else None,
            'observed_successors':{hex(t):v for t,v in edges[pc].items()},
            'semantic_status':'PARCIAL' if pc==0x2d409a else 'NO DEMOSTRADO',
            'ir':'A ^= fmix64(A + 1); enqueue(0x8453b)' if pc==0x2d409a else None})
    (OUT/'blocks.json').write_text(json.dumps(blocks,indent=2)+'\n')
    baseline=json.loads((ROOT/'jack_xxv_evidence/hexvm_structure.json').read_text())
    report={'trace_sha256':hashlib.sha256(path.read_bytes()).hexdigest(),
        'historical_structure_summary':baseline['summary'],
        'current_main_loop_visits':visits[0x295b7f],
        'counts':{name:len(d[name]) for name in streams},'push_rows':len(ps),
        'invariants':dict(invariant),'push_without_later_write':absent,
        'unique_pcs':len(visits),'observed_fanout':dict(collections.Counter(len(edges[p]) for p in visits)),
        'unique_ticks':len(set(all_ticks)), 'events':len(all_ticks),
        'ticks_contiguous':sorted(all_ticks)==list(range(d['counts']['tick'])),
        'fixed_rotation':rotation,'comparisons':len(ps)-1,'matches':dict(counts),
        'first_mismatches':first,
        'first_A_block_check':hex((ps[0][4]|ps[0][5]<<32)^fmix64((ps[0][4]|ps[0][5]<<32)+1)),
        'limitations':['event tick continuity does not prove hooks caught all original events',
          'push-to-push predictions are not instruction-level lockstep',
          'no recorded handler table, selected handler, post-handler state or thread ID']}
    (OUT/'trace_audit.json').write_text(json.dumps(report,indent=2)+'\n')
    print(json.dumps(report,indent=2))

if __name__=='__main__': main()
