"""Offline reduction of flattened Serial scheduler jobs to field-effect kernels.

The generated artifact has no x64 PC, register file, stack, flags or instruction
stream. Z3 proves branch choices for arbitrary field inputs; unresolved paths
are rejected. Only the original pinned PE is analyzed, never a captured trace.
"""
import sys, pathlib, json, hashlib
ROOT=pathlib.Path(__file__).resolve().parents[1]
sys.path.insert(0,str(ROOT/'jack_xxxii_evidence/build/deps'))
sys.path.insert(0,str(ROOT))
import z3 as z
import pefile
from capstone.x86_const import X86_OP_IMM,X86_OP_MEM,X86_OP_REG
from pafet_audit_xxiv import cfg,BASE
from pafet_state_contract import ORIGINAL_SHA256,require

FIELDS={0x1b0:('key',64),0x4d8:('noise',64),0x1378:('chain',64),0x1370:('fetch',32),0x63d:('opcode',8)}
MIX=z.Function('mix',z.BitVecSort(64),z.BitVecSort(64))
def val(x,w=64):return z.BitVecVal(x&((1<<w)-1),w)
def cast(x,w,signed=False):
    if x.size()==w:return x
    return z.Extract(w-1,0,x) if x.size()>w else (z.SignExt if signed else z.ZeroExt)(w-x.size(),x)
def size(x):
    seen=set();pending=[x]
    while pending:
        a=pending.pop()
        if a.get_id() not in seen:seen.add(a.get_id());pending.extend(a.children())
    return len(seen)
def simp(x):
    reduced=z.simplify(x,elim_sign_ext=False)
    return reduced if size(reduced)<=size(x) else x
def integer(x):
    x=simp(x)
    if not z.is_bv_value(x):raise ValueError('Not constant: '+str(x))
    return x.as_long()
def ir(x):
    x=simp(x)
    if z.is_bv_value(x):return x.as_long()
    if z.is_const(x):return str(x)
    name=x.decl().name()
    if name=='=':return ['eq',*[ir(a) for a in x.children()]]
    if name=='not':return ['bool_not',ir(x.arg(0))]
    if name=='mix':return ['mix',ir(x.arg(0))]
    if name=='extract':return ['extract',*x.params(),ir(x.arg(0))]
    if name in ('zero_extend','sign_extend'):return [name,x.size(),x.arg(0).size(),ir(x.arg(0))]
    if name=='concat':return ['concat',[[a.size(),ir(a)] for a in x.children()]]
    if name not in ('bvadd','bvsub','bvmul','bvxor','bvor','bvand','bvnot','bvneg','bvshl','bvlshr','bvashr'):raise ValueError('IR op '+name)
    return [name,x.size(),*[ir(a) for a in x.children()]]

class NeedBranch(ValueError):
    def __init__(self,pc,condition):self.pc=pc;self.condition=condition

class Reducer:
    def __init__(self,ins,start,policy=None):
        self.ins=ins;self.pc=BASE+start;self.reg={'r12':val(0),'r15':val(0x27f17),'rsp':z.BitVec('frame',64)}
        self.mem={at:z.BitVec(n,w) for at,(n,w) in FIELDS.items()};self.modified=set();self.stages=[];self.proofs=0;self.count=0;self.policy=policy
    def regpart(self,name):
        low={'al':('rax',8),'cl':('rcx',8),'dl':('rdx',8),'bl':('rbx',8),'sil':('rsi',8),'dil':('rdi',8)}
        if name in low:return low[name]
        if name.startswith('e'):return 'r'+name[1:],32
        if name.startswith('r') and name.endswith('d'):return name[:-1],32
        if name.startswith('r') and name.endswith('b'):return name[:-1],8
        return name,64
    def read(self,o):
        if o.type==X86_OP_IMM:return val(o.imm,o.size*8)
        if o.type==X86_OP_REG:
            n,w=self.regpart(self.i.reg_name(o.reg))
            if n not in self.reg:raise ValueError('Unknown register '+n)
            return cast(self.reg[n],w)
        if o.type==X86_OP_MEM:
            m=o.mem
            if self.i.reg_name(m.base)!='rsp' or m.index:raise ValueError('Non-frame memory '+self.i.op_str)
            at=m.disp;w=o.size*8
            for p,x in self.mem.items():
                if p<=at and 8*(at-p)+w<=x.size():return z.Extract(8*(at-p)+w-1,8*(at-p),x)
            raise ValueError('Uninitialized frame offset '+hex(at))
        raise ValueError('Operand')
    def write(self,o,x):
        w=o.size*8;x=cast(x,w)
        if o.type==X86_OP_REG:
            n,w=self.regpart(self.i.reg_name(o.reg))
            if w==64:self.reg[n]=x
            elif w==32:self.reg[n]=cast(x,64)
            else:self.reg[n]=z.Concat(z.Extract(63,w,self.reg.get(n,val(0))),x)
        elif o.type==X86_OP_MEM:
            if self.i.reg_name(o.mem.base)!='rsp' or o.mem.index:raise ValueError('Non-frame write')
            at=o.mem.disp;self.mem[at]=x
            if at>=0x100:
                if at not in FIELDS:raise ValueError('Unknown persistent write '+hex(at))
                self.modified.add(at)
        else:raise ValueError('Write operand')
    def prove(self,c):
        c=simp(c)
        if z.is_true(c):return True
        if z.is_false(c):return False
        for result,query in [(True,z.Not(c)),(False,c)]:
            s=z.Solver();s.set(timeout=2000);s.add(query)
            if s.check()==z.unsat:self.proofs+=1;return result
        if self.policy is not None and not self.stages:
            if self.pc in self.policy:return self.policy[self.pc]
            raise NeedBranch(self.pc,c)
        raise ValueError('Input-dependent/unproved branch '+str(c))
    def flush(self,extra=None):
        stage={'writes':{FIELDS[p][0]:ir(self.mem[p]) for p in sorted(self.modified)}}
        if extra:stage.update(extra)
        if stage['writes'] or extra:self.stages.append(stage)
        self.modified.clear()
        for p,(n,w) in FIELDS.items():self.mem[p]=z.BitVec(n,w)
    def run(self):
        for _ in range(4000):
            self.i=i=self.ins[self.pc];self.count+=1;m=i.mnemonic;o=i.operands;nextpc=self.pc+i.size
            if m in ('mov','movabs','movzx','movsxd'):self.write(o[0],cast(self.read(o[1]),o[0].size*8,m=='movsxd'))
            elif m=='lea':
                a=o[1].mem;x=val(a.disp)
                for r,scale in [(a.base,1),(a.index,a.scale)]:
                    if r:
                        n,w=self.regpart(i.reg_name(r));x=x+self.reg[n]*scale
                self.write(o[0],x)
            elif m in ('xor','add','sub','and','or','imul','shr','shl'):
                if m=='imul' and len(o)==3:a,b=self.read(o[1]),self.read(o[2])
                else:a,b=self.read(o[0]),self.read(o[1])
                b=cast(b,a.size())
                if m in ('shr','shl'):b=b&(63 if a.size()==64 else 31)
                x={'xor':lambda:a^b,'add':lambda:a+b,'sub':lambda:a-b,'and':lambda:a&b,'or':lambda:a|b,'imul':lambda:a*b,'shr':lambda:z.LShR(a,b),'shl':lambda:a<<b}[m]()
                self.write(o[0],simp(x));self.zero=simp(x)==0;self.ordered=False
            elif m in ('inc','dec','not','neg'):
                x=self.read(o[0]);x={'inc':lambda:x+1,'dec':lambda:x-1,'not':lambda:~x,'neg':lambda:-x}[m]();self.write(o[0],simp(x))
                if m!='not':self.zero=simp(x)==0;self.ordered=False
            elif m in ('cmp','test'):
                self.a,self.b=self.read(o[0]),cast(self.read(o[1]),o[0].size*8);self.zero=(self.a-self.b if m=='cmp' else self.a&self.b)==0;self.ordered=m=='cmp'
            elif m in ('je','jne','jae','ja','jb','jbe','jge','jl','jle'):
                if m not in ('je','jne') and not getattr(self,'ordered',False):raise ValueError('Unmodeled ordering flags')
                if m in ('je','jne') and getattr(self,'zero',None) is None:raise ValueError('Unmodeled zero flag')
                c={'je':lambda:self.zero,'jne':lambda:z.Not(self.zero),'jae':lambda:z.UGE(self.a,self.b),'ja':lambda:z.UGT(self.a,self.b),'jb':lambda:z.ULT(self.a,self.b),'jbe':lambda:z.ULE(self.a,self.b),'jge':lambda:self.a>=self.b,'jl':lambda:self.a<self.b,'jle':lambda:self.a<=self.b}[m]()
                if self.prove(c):nextpc=o[0].imm
            elif m=='jmp':nextpc=o[0].imm
            elif m=='nop':pass
            elif m=='movdqa' and i.reg_name(o[1].mem.base)=='rip':
                table=i.address+i.size+o[1].mem.disp-BASE
                data=PE_IMAGE.get_data(table,16)
                following=[self.ins[p] for p in sorted(self.ins) if self.pc<p<self.pc+150]
                require(any(j.mnemonic=='call' and j.op_str=='0x140002430' for j in following),'Unproved selector predicate','static-shape')
                require(any(j.mnemonic=='cmove' and j.op_str=='ebx, r15d' for j in following),'Unproved selector replacement','static-shape')
                remap=next(j.operands[1].imm for j in following if j.mnemonic=='cmp' and j.op_str.startswith('ebx, '))
                self.flush()
                return dict(stages=self.stages,selector=list(__import__('struct').unpack('<4I',data)),replace_with_decoder=remap,entry_table_rva=table,proofs=self.proofs,native_reduced=self.count)
            elif m=='call':
                self.zero=None;self.ordered=False
                target=o[0].imm-BASE
                if target==0x2040:
                    x=self.reg['rcx'];self.reg['rax']=MIX(x)
                    for n in ('rcx','rdx','r8','r9','r10','r11'):self.reg.pop(n,None)
                elif target==0x23e0:
                    # ~(n*(n+1)) & (n^(n+1)) & 1 == 1 for every n.
                    self.reg['rax']=val(1)
                    for n in ('rcx','rdx','r8','r9','r10','r11'):self.reg.pop(n,None)
                elif target==0x1f1520:
                    arg=self.reg['rdx'];marker=integer(cast(self.reg['r8'],32));self.flush({'feedback':[ir(arg),marker],'native_call':hex(self.pc-BASE)})
                    for n in ('rax','rcx','rdx','r8','r9','r10','r11'):self.reg.pop(n,None)
                elif target==0x1f0db0:
                    label=integer(cast(self.reg['rdx'],32));self.flush();return dict(stages=self.stages,next_job=label,enqueue_call=self.pc-BASE,proofs=self.proofs,native_reduced=self.count)
                else:raise ValueError('Unsupported job helper '+hex(target))
            else:raise ValueError('Unsupported job instruction '+m+' '+i.op_str)
            self.pc=nextpc
        raise ValueError('Job reduction bound')

def main():
    global PE_IMAGE
    raw=(ROOT/'pafet.bin').read_bytes();require(hashlib.sha256(raw).hexdigest()==ORIGINAL_SHA256,'Wrong PE','integrity');pe=pefile.PE(data=raw);PE_IMAGE=pe;ins,_=cfg(pe,BASE+0x22a120)
    def dispatch(label):
        pc=BASE+0x22b279
        for _ in range(40):
            i=ins[pc]
            if i.mnemonic=='cmp':a=label;b=0x27f17 if i.op_str.endswith('r15d') else i.operands[1].imm;pc+=i.size
            elif i.mnemonic in ('jg','je','jne'):pc=i.operands[0].imm if {'jg':a>b,'je':a==b,'jne':a!=b}[i.mnemonic] else pc+i.size
            else:return pc-BASE
        raise ValueError('Decision tree')
    values={0x27f17}
    for i in ins.values():
        if i.mnemonic=='cmp' and i.op_str.startswith('eax, ') and i.operands[1].type==X86_OP_IMM and i.address>=BASE+0x22b279:values.add(i.operands[1].imm)
    jobs={};gaps={}
    for label in sorted(values):
        try:jobs[label]=dict(entry=dispatch(label),**Reducer(ins,dispatch(label)).run())
        except (ValueError,KeyError) as error:gaps[hex(label)]=str(error)
    tails={}
    def branch_tree(start,policy):
        try:return Reducer(ins,start,policy).run()
        except NeedBranch as b:
            require(len(policy)<3,'Too many input branches','static-shape')
            return dict(condition=ir(b.condition),yes=branch_tree(start,{**policy,b.pc:True}),no=branch_tree(start,{**policy,b.pc:False}))
    seq=sorted(ins.values(),key=lambda i:i.address)
    for label in (0x85b36,0xf6105,0x1ad951,0x3abaef):
        start=dispatch(label)
        setter=next(i for i in seq if i.address>=BASE+start and i.mnemonic=='call' and i.op_str=='0x1401edea0')
        tail_start=setter.address+setter.size-BASE
        tails[label]=dict(entry=start,tail_start=tail_start,tree=branch_tree(tail_start,{}))
    manual={0x825f:'domain selection',0x27f17:'outer header decoder',0x28aab7:'unarmed attestation gate',
            **{n:'post-opcode common prefix and generated tail' for n in tails},
            **{n:'outer handler dispatch, opcode < 62' for n in (0x26dc07,0x338040,0x48cad,0x2a0025)}}
    out=ROOT/'jack_xxxii_evidence';(out/'jobs.json').write_bytes(json.dumps(dict(jobs={hex(k):v for k,v in jobs.items()},generic_reducer_gaps=gaps,manual_runtime_jobs={hex(k):v for k,v in manual.items()},runtime_unimplemented={k:dict(entry=hex(dispatch(int(k,16))),reason=v) for k,v in gaps.items() if int(k,16) not in manual},original_sha256=ORIGINAL_SHA256,z3=z.get_full_version()),indent=2).encode()+b'\n')
    (out/'tails.json').write_bytes(json.dumps({hex(k):v for k,v in tails.items()},indent=2).encode()+b'\n')
    import pprint
    (ROOT/'devirt/serial_jobs_xxxii.py').write_bytes(('"""Reduced job field-effect kernels; generated offline from the original PE."""\nJOBS = '+pprint.pformat(jobs,width=120,sort_dicts=False)+'\nTAILS = '+pprint.pformat(tails,width=120,sort_dicts=False)+'\n').encode())
    print('Reduced',len(jobs),'kernels;',len(manual),'manual semantic jobs;',len(gaps)-len(manual),'unimplemented outer states')
if __name__=='__main__':main()
