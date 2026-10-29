#!/usr/bin/env python3
"""Bounded finite-set analysis of the recovered logical program.

TOP models unknown host values. This is a proof under explicit decoded-state
and host contracts, not a proof over unported native guards or corrupt states.
"""
import collections,json,pathlib
import pefile
from pafet_decode_xxiii import Decoder,MASK
ROOT=pathlib.Path(__file__).resolve().parents[1]
TOP=None
def exact(v):return frozenset((v&MASK,))
def join(a,b):
    if a is None or b is None:return TOP
    result=a|b
    return result if len(result)<=16 else TOP
def binary(a,b,f):
    if a is None or b is None:return TOP
    result=frozenset(f(x,y)&MASK for x in a for y in b)
    return result if len(result)<=16 else TOP
def signed(x):return x if x<(1<<63) else x-(1<<64)

def analyze(d):
    states={0:(tuple([exact(0)]*16+[TOP]*240),())};todo=collections.deque([0]);iterations=0;predicates={}
    while todo:
        pc=todo.popleft();registers,stack=states[pc];r=list(registers);s=list(stack)
        ir=d.decode(pc);op=ir['logical_opcode'];args=ir['operands'];fall=ir['fallthrough_pc'];successors=[fall]
        iterations+=1;assert iterations<20000
        if op==1:s.append(exact(d.constants[args[0] if args[0]<13 else 0]))
        elif op==4:s.append(r[args[0]&255])
        elif op==5:r[args[0]&255]=s.pop()
        elif op==31:s.pop()
        elif op==44:s[-1]=None if s[-1] is None else frozenset(~x&MASK for x in s[-1])
        elif op in (8,21,22,24,41):
            y=s.pop();x=s.pop()
            f={8:lambda a,b:a+b,41:lambda a,b:a^b,21:lambda a,b:int(a!=b),22:lambda a,b:int(signed(a)<signed(b)),24:lambda a,b:int(signed(a)>signed(b))}[op]
            s.append(binary(x,y,f))
        elif op in (26,27,28):
            target=d.targets[args[0]]
            if op==26:successors=[target]
            else:
                condition=s.pop();predicates[pc]=join(predicates.get(pc,frozenset()),condition)
                can_zero=condition is None or 0 in condition
                can_nonzero=condition is None or any(x!=0 for x in condition)
                take=can_zero if op==27 else can_nonzero
                keep=can_nonzero if op==27 else can_zero
                successors=([target] if take else [])+([fall] if keep else [])
        elif op==32:
            n=min(args[1],32)
            for _ in range(n):s.pop()
            host=args[0]
            s.append(exact(0) if host in (0,1,2,6) else (frozenset((0,1)) if host==3 else TOP))
        elif op==29:s.pop();successors=[]
        else:raise AssertionError(op)
        for successor in successors:
            state=(tuple(r),tuple(s))
            if successor in states:
                a,b=states[successor];assert len(b)==len(s),(successor,'stack shape')
                state=(tuple(join(x,y) for x,y in zip(a,r)),tuple(join(x,y) for x,y in zip(b,s)))
            if states.get(successor)!=state:states[successor]=state;todo.append(successor)
    return {'reachable_instruction_pcs':sorted(states),'reachable_instructions':len(states),
        'iterations':iterations,'predicate_values':{str(k):None if v is None else sorted(v) for k,v in predicates.items()},
        'logical_block54_physical_pc':d.targets[54],'block54_reachable':d.targets[54] in states}

def main():
    d=Decoder(pefile.PE(str(ROOT/'pafet.bin')));original=analyze(d)
    assert original['predicate_values']['480']==[0] and not original['block54_reachable']
    # Falsification control changes only this analyzer's in-memory constant
    # model. The PE is never written or run with modified data.
    d.constants[3]=d.constants[2]^6;control=analyze(d)
    assert control['block54_reachable']
    report={'original':original,'model_only_positive_control':control,
        'contract':['Recovered 1752-byte program and constant tables.',
                    'First 16 decoded registers initially zero, others TOP.',
                    'Host 0/1/2/6 return zero, host3 arbitrary boolean, host4/5 TOP.',
                    'Native guards do not corrupt the decoded logical state.'],
        'qualification':'Logical abstract interpretation; positive control is model-only, not original acceptance or a native altered-PE experiment.'}
    (ROOT/'jack_xxiii_evidence/abstract_program.json').write_text(json.dumps(report,indent=2)+'\n')
    print('original reachable',original['reachable_instructions'],'block54',original['block54_reachable'],
          'model positive-control reachable',control['reachable_instructions'],'block54',control['block54_reachable'])
if __name__=='__main__':main()
