#!/usr/bin/env python3
"""Generate C++ instruction semantics from independently recovered native CFGs.

Generated code neither executes machine code nor links Unicorn. Capstone is a
build-time decoder. Unsupported instructions abort generation explicitly.
"""
import argparse,collections,hashlib,json,pathlib
import capstone,pefile
from capstone.x86_const import X86_OP_REG,X86_OP_IMM,X86_OP_MEM
from pafet_audit_xxiv import cfg,BASE,ROOT,OUT

REGS=['rax','rcx','rdx','rbx','rsp','rbp','rsi','rdi']+[f'r{i}' for i in range(8,16)]
ALIASES={}
for i,r in enumerate(REGS):
    ALIASES[r]=(i,64,0)
    if i<8:
        short=['a','c','d','b','sp','bp','si','di'][i]
        ALIASES['e'+short+('x' if i<4 else '')]=(i,32,0)
        ALIASES[short+('x' if i<4 else '')]=(i,16,0)
        ALIASES[short+('l' if i<4 else 'l')]=(i,8,0)
        if i<4:ALIASES[short+'h']=(i,8,8)
    else:
        for suffix,bits in [('d',32),('w',16),('b',8)]:ALIASES[r+suffix]=(i,bits,0)
CC={'e':0,'ne':1,'b':2,'ae':3,'be':4,'a':5,'l':6,'le':7,'g':8,'ge':9,'s':10,'ns':11,'o':12,'no':13}
def reg_index(md,r):
    if not r:return -1
    name=md.reg_name(r)
    return 16 if name=='rip' else ALIASES[name][0]
def operand(md,o):
    kind=reg=shift=segment=0;base=index=-1;scale=1;disp=imm=0;bits=o.size*8
    if o.type==X86_OP_REG:
        name=md.reg_name(o.reg)
        if name.startswith('xmm'):kind=3;reg=int(name[3:]);bits=128
        else:reg,bits,shift=ALIASES[name]
    elif o.type==X86_OP_IMM:kind=1;imm=o.imm&((1<<64)-1)
    elif o.type==X86_OP_MEM:
        kind=2;base=reg_index(md,o.mem.base);index=reg_index(md,o.mem.index);scale=o.mem.scale;disp=o.mem.disp
        if o.mem.segment:
            name=md.reg_name(o.mem.segment)
            if name!='gs':raise ValueError(('unsupported segment',name))
            segment=1
    else:raise ValueError(o.type)
    return 'Operand{%d,%d,%d,%d,%d,%d,%d,%d,%d,UINT64_C(0x%x)}'%(kind,reg,bits,shift,base,index,scale,segment,disp,imm)
def emit(md,i):
    op=i.mnemonic;os=i.operands;args=[operand(md,o) for o in os]
    a=args[0] if args else '';b=args[1] if len(args)>1 else '';d=args[2] if len(args)>2 else ''
    def read(x):return f'get({x})'
    def write(x,v):return f'put({x},{v});'
    n=os[0].size*8 if os else 0
    if op in ('mov','movabs'):return write(a,read(b))
    if op in ('movzx','movsxd','movsx'):
        value=read(b) if op=='movzx' else f'uint64_t(signed_value({read(b)},{os[1].size*8}))'
        return write(a,value)
    if op=='lea':return write(a,f'address({b})')
    if op in ('add','sub','cmp'):
        expr=f'arithmetic({read(a)},{read(b)},{n},{str(op!="add").lower()})'
        return expr+';' if op=='cmp' else write(a,expr)
    if op in ('xor','and','or','test'):
        symbol={'xor':'^','and':'&','or':'|','test':'&'}[op];expr=f'logic({read(a)}{symbol}{read(b)},{n})'
        return expr+';' if op=='test' else write(a,expr)
    if op=='not':return write(a,'~'+read(a))
    if op=='neg':return write(a,f'arithmetic(0,{read(a)},{n},true)')
    if op in ('inc','dec'):
        return '{uint64_t cf=c.flags&CF,defined=c.defined&CF;'+write(a,f'arithmetic({read(a)},1,{n},{str(op=="dec").lower()})')+'c.flags=(c.flags&~CF)|cf;c.defined=(c.defined&~CF)|defined;}'
    if op=='imul':return f'imul({a},{a if len(os)==2 else b},{b if len(os)==2 else d});'
    if op=='mul':return f'mul({a});'
    if op=='div':return f'divide({a});'
    if op in ('shl','shr','rol','ror'):return f'shift({a},{b},{["shl","shr","rol","ror"].index(op)});'
    if op in ('btr','bts'):return f'bitop({a},{b},{str(op=="bts").lower()});'
    if op=='push':return f'push({read(a)});'
    if op=='pop':return write(a,'pop()')
    if op=='call':
        target=f'next+UINT64_C(0x{(os[0].imm-i.address-i.size)&((1<<64)-1):x})' if os[0].type==X86_OP_IMM else read(a)
        return f'{{uint64_t target={target};push(next);next=target;}}'
    if op.startswith('ret'):return 'next=pop();'
    if op.startswith('j'):
        if os[0].type!=X86_OP_IMM:return f'next={read(a)};'
        target=f'next+UINT64_C(0x{(os[0].imm-i.address-i.size)&((1<<64)-1):x})'
        return f'next={target};' if op=='jmp' else f'if(condition({CC[op[1:]]}))next={target};'
    if op.startswith('cmov'):return f'if(condition({CC[op[4:]]}))'+write(a,read(b))
    if op.startswith('set'):return write(a,f'uint64_t(condition({CC[op[3:]]}))')
    if op in ('nop','endbr64'):return ''
    if op=='int3':return 'throw Fault(5,c.rip,"INT3");'
    if op=='int':return f'throw Fault(5,c.rip,"INT 0x{os[0].imm:x}");'
    if op in ('movdqu','movdqa','movups'):
        aligned='if(('+a+'.kind==2&&address('+a+')%16)||('+b+'.kind==2&&address('+b+')%16))throw Fault(4,c.rip,"unaligned MOVDQA");' if op=='movdqa' else ''
        return '{'+aligned+f'uint8_t v[16];vector_get({b},v);vector_put({a},v);'+'}'
    if op=='movd':
        if os[0].type==X86_OP_REG and md.reg_name(os[0].reg).startswith('xmm'):
            return '{uint8_t v[16]{};uint32_t x=uint32_t('+read(b)+');std::memcpy(v,&x,4);vector_put('+a+',v);}'
        return '{uint8_t v[16];vector_get('+b+',v);uint32_t x;std::memcpy(&x,v,4);'+write(a,'x')+'}'
    if op=='pxor':return '{uint8_t x[16],y[16];vector_get('+a+',x);vector_get('+b+',y);for(int k=0;k<16;k++)x[k]^=y[k];vector_put('+a+',x);}'
    if op in ('punpcklbw','punpcklwd'):
        width=1 if op=='punpcklbw' else 2
        return '{uint8_t x[16],y[16],z[16];vector_get('+a+',x);vector_get('+b+',y);for(int k=0;k<'+str(8//width)+';k++){std::memcpy(z+k*'+str(2*width)+',x+k*'+str(width)+','+str(width)+');std::memcpy(z+k*'+str(2*width)+'+'+str(width)+',y+k*'+str(width)+','+str(width)+');}vector_put('+a+',z);}'
    if op=='pshufd':return '{uint8_t x[16],z[16];vector_get('+b+',x);uint64_t control='+read(d)+';for(int k=0;k<4;k++)std::memcpy(z+4*k,x+4*((control>>(2*k))&3),4);vector_put('+a+',z);}'
    raise ValueError(('unsupported instruction',hex(i.address),op,i.op_str))

def main():
    ap=argparse.ArgumentParser();ap.add_argument('--entry',action='append',type=lambda s:int(s,0));ap.add_argument('--observed-families');args=ap.parse_args()
    OUT.mkdir(exist_ok=True);pe=pefile.PE(str(ROOT/'pafet.bin'));pending=args.entry or [BASE+0x3bea0];functions={};instructions={}
    if args.observed_families:
        families=set(map(int,args.observed_families.split(',')))
        catalog=json.loads((ROOT/'jack_xxiii_evidence/dispatch_coverage_windows.json').read_text())['native_targets']
        pending.extend(int(address,16) for address,ops in catalog.items() if families.intersection(ops))
    while pending:
        entry=pending.pop()
        if entry in functions:continue
        ins,info=cfg(pe,entry);functions[entry]=info;instructions.update(ins)
        pending.extend(c['target'] for c in info['calls'] if c['target'] is not None and BASE+0x1000<=c['target']<BASE+0x3a0000 and c['target'] not in functions)
    md=capstone.Cs(capstone.CS_ARCH_X86,capstone.CS_MODE_64);md.detail=True
    lines=['// Generated native instruction semantics; no machine-code execution.','#include "pafet_native_state_xxiv.h"','namespace pafet_xx iv {'.replace('xx iv','xxiv'),'void Machine::step(){','switch(canonical(c.rip)){']
    for pc,i in sorted(instructions.items()):
        lines.append(f'case UINT64_C(0x{pc:x}): {{next=c.rip+{i.size}; // {i.mnemonic} {i.op_str}')
        lines.append(emit(md,i));lines.append('c.rip=next;return;}')
    lines+=['default:if(trampoline())return;throw Fault(3,c.rip,"instruction not in translated CFG");','}','}','}']
    path=ROOT/'src/pafet_lifted_xxiv.cpp';path.write_text('\n'.join(lines)+'\n',encoding='utf-8',newline='\n')
    (OUT/'lift_manifest.json').write_text(json.dumps({'original_sha256':hashlib.sha256((ROOT/'pafet.bin').read_bytes()).hexdigest(),
        'generated_source_sha256':hashlib.sha256(path.read_bytes()).hexdigest(),'entry_points':sorted(functions),
        'instructions':len(instructions),'untranslated_direct_targets':sorted({c['target'] for f in functions.values() for c in f['calls'] if c['target'] is not None and c['target'] not in functions}),
        'scope':'Native instruction-by-instruction C++ state projection. Untranslated direct and indirect targets fail explicitly at runtime.'},indent=2)+'\n')
    print('Generated',len(instructions),'instructions from',len(functions),'native entries')
if __name__=='__main__':main()
