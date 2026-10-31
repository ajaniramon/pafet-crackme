"""Serial outer work scheduler: queue semantics and reduced field-effect jobs.

No x64 execution, native register interpreter, trace input or observation load.
Job kernels are generated offline from the pinned PE, not captured execution.
"""
from .serial_extended import ExtendedSerialVMState
from .serial_continuous import signed32
from .serial import MASK,PHI,MUL,mix
from .serial_jobs_xxxii import JOBS,TAILS

FIELDS={'key':(0x20,8),'noise':(0x348,8),'chain':(0x11e8,8),'fetch':(0x11e0,4),'opcode':(0x4ad,1)}

def expression(x,env):
    if isinstance(x,int):return x
    if isinstance(x,str):return env[x]
    op=x[0]
    if op=='eq':return expression(x[1],env)==expression(x[2],env)
    if op=='bool_not':return not expression(x[1],env)
    if op=='mix':return mix(expression(x[1],env))
    if op=='extract':return (expression(x[3],env)>>x[2])&((1<<(x[1]-x[2]+1))-1)
    if op in ('sign_extend','zero_extend'):
        v=expression(x[3],env)&((1<<x[2])-1)
        if op=='sign_extend' and v>>(x[2]-1):v-=1<<x[2]
        return v&((1<<x[1])-1)
    if op=='concat':
        v=0
        for width,item in x[1]:v=(v<<width)|expression(item,env)
        return v
    w=x[1];a=[expression(v,env) for v in x[2:]]
    if op=='bvadd':v=sum(a)
    elif op=='bvmul':
        v=1
        for n in a:v*=n
    elif op in ('bvxor','bvand','bvor'):
        v=a[0]
        for n in a[1:]:v=v^n if op=='bvxor' else v&n if op=='bvand' else v|n
    elif op=='bvsub':v=a[0]-a[1]
    elif op=='bvnot':v=~a[0]
    elif op=='bvneg':v=-a[0]
    elif op=='bvshl':v=a[0]<<a[1]
    elif op=='bvlshr':v=a[0]>>a[1]
    elif op=='bvashr':v=(a[0]-(1<<w) if a[0]>>(w-1) else a[0])>>a[1]
    else:raise ValueError('Unknown field-effect IR operation '+op)
    return v&((1<<w)-1)

class ScheduledSerialVMState(ExtendedSerialVMState):
    @classmethod
    def from_initial_capture(cls,entry,pe):
        s=super().from_initial_capture(entry,pe)
        if s.c-entry['state']['gprs'][4]!=0x190 or entry['state']['gprs'][12]!=0 or entry['state']['gprs'][15]!=0x27f17:
            s.fail('Unknown outer native-frame contract')
        s.read(s.c-0xec,4)
        s.jobs=[];s.callbacks=[]
        s.remaps=[]
        return s

    def enqueue(self,label):
        count=self.u(0xad8)+1;self.put(0xad8,count)
        encoded=label^self.u(0xac8)
        if (count^self.u(0x260))&0x1ff==0:self.full_remap_rebuild()
        if count==1 or (((-1003*count)^self.u(0xac8,4))&0xfff)==31:
            self.throw_label(encoded);return
        n=self.u(0xad0,4)
        if n>=64:self.fail('Scheduler queue overflow')
        self.put(0x8c8+8*n,encoded);self.put(0xad0,n+1,4)

    def throw_label(self,encoded):
        # Native 1f0e48 calls _CxxThrowException with the encoded label.
        self.fail('Scheduler exception delivery')

    def callback(self,index):
        targets=[0x1f0a30,0x1f0aa0,0x1f0af0,0x1f0b10,0x1f0b70,0x1f0bc0,0x1f0bd0,0x1f09d0]
        actual=self.u(0x288+8*index)-self.runtime_base
        if actual not in targets:self.fail('Unknown queue callback binding')
        selector=index;index=targets.index(actual)
        key,noise,queue=self.u(0x20),self.u(0x348),self.u(0xac8)
        if index==0:self.put(0x20,mix((queue>>7)^key));self.put(0xac8,queue+PHI)
        elif index==1:self.put(0xac8,queue^mix(noise+1))
        elif index==2:self.put(0x348,noise+((queue&6)|1))
        elif index==3:self.put(0x20,key^mix(queue^noise))
        elif index==4:self.put(0xac8,mix(queue^key))
        elif index==5:self.put(0x348,noise^((queue>>32)&255))
        elif index==6:self.put(0x20,mix(queue+key))
        else:self.put(0x348,mix(queue^noise))
        self.callbacks.append(dict(selector=selector,target=hex(actual)))

    def drain(self):
        for _ in range(8):
            n=self.u(0xad0,4)
            if not n:return
            self.put(0xad0,n-1,4)
            encoded=self.u(0x8c8+8*(n-1));key=self.u(0xac8);job=key^encoded
            index=((key*PHI+encoded)&MASK)>>61
            self.put(0xac8,mix(job));self.callback(index);self.set_control(0,job&0xffffffff)

    def full_remap_rebuild(self):
        from .serial_remap import rebuild
        self.record('remap_entry',0x2297e0);result=rebuild(self)
        self.remaps.append(result);self.record('remap_exit',0x229c6d)

    def prepare_next_instruction(self):
        """Reach the next handler entry without counting/executing its opcode."""
        if self.fault is not None:self.fail('Stopped state: '+self.fault)
        try:self._prepare_next_instruction()
        except ValueError as error:
            self.fault=str(error)
            raise

    def _prepare_next_instruction(self):
        if self.phase in ('outer_dispatch','outer_jobs','outer_decode'):
            for _ in range(8):
                if self.phase=='execute':break
                if self.phase=='outer_decode':
                    self.decode_header();self.record('outer_header_end',0x22a115)
                    self.enqueue(0x825f);self.phase='outer_jobs';self.record('job_end',0x232daa)
                else:self.dispatch_next()
            if self.phase!='execute':self.fail('Semantic scheduler handoff bound')
        if self.phase=='decode':self.decode_next()

    def _step(self):
        self.prepare_next_instruction()
        return super()._step()

    def kernel(self,job):
        for stage in job['stages']:
            env={n:self.u(at,size) for n,(at,size) in FIELDS.items()}
            updates={n:expression(x,env) for n,x in stage['writes'].items()}
            args=stage.get('feedback');argument=expression(args[0],env) if args else None
            for n,v in updates.items():self.put(FIELDS[n][0],v,FIELDS[n][1])
            if args:self.feedback(argument,args[1])
        if 'selector'in job:
            slot=(self.u(0x4ad,1)^self.u(0x20)^self.u(0x348))&3
            label=job['selector'][slot]
            if label==job['replace_with_decoder']:label=0x27f17
            self.enqueue(label)
        else:self.enqueue(job['next_job'])

    def attestation_gate(self):
        self.control(11);self.control(5);armed=self.control(6)&1
        self.control(4);self.control(12)
        # 1f0f80 and 1f1000 are pure. With armed=0 both their results
        # are masked out. The armed path is deliberately not guessed.
        if armed:self.fail('Armed outer attestation gate')
        self.set_control(1,self.control(1)&0xffffffff)
        self.set_control(6,0);self.set_control(12,0)
        pc=self.control(1)&0xffffffff;self.put(0x20,mix(pc^self.u(0x20)))
        self.put(0x348,mix(signed32(self.u(0x11e0,4))^self.u(0x348)))
        self.enqueue(0x27f17)

    def opcode_finish(self,tail):
        pc=self.control(1)&0xffffffff
        attest=mix(self.u(0x4ad,1)^pc^self.u(0x11e8));self.put(0x11e8,attest)
        self.put(0x20,mix(self.u(0x28)^self.u(0x20)^attest))
        self.mutate_byte(self.control(9)&0xffffffff)
        self.mutate_byte(self.control(8)&0xffffffff)
        pc=self.control(1)&0xffffffff
        if pc<self.u(0x1d8,4):self.mutate_byte(pc)
        self.set_control(9,self.control(8))
        self.record('opcode_finish_prefix',tail['tail_start'])
        tree=tail['tree'];env={n:self.u(at,size) for n,(at,size) in FIELDS.items()}
        while 'condition'in tree:tree=tree['yes'] if expression(tree['condition'],env) else tree['no']
        self.kernel(tree)

    def dispatch_next(self,budget=128):
        if self.fault is not None:self.fail('Stopped state: '+self.fault)
        try:return self._dispatch_next(budget)
        except ValueError as error:
            self.fault=str(error)
            raise

    def additional_job(self,label):
        """Versioned semantic extensions may handle independently proved jobs."""
        return False

    def _dispatch_next(self,budget):
        if self.phase not in ('outer_dispatch','outer_jobs'):self.fail('Not at outer dispatch')
        if self.phase=='outer_dispatch':
            if self.control(10)&0xffffffff:self.fail('Outer halt/cleanup')
            label=self.control(0)&0xffffffff
            caller=[0x22fcd0,0x231c09,0x22bc87,0x2304bc].index(self.outer_return_rva)
            if label==[0x26dc07,0x338040,0x48cad,0x2a0025][caller]:
                self.fail('Unvalidated post-wrapper fallback enqueue')
            self.record('post_wrapper',0x232daa)
        for _ in range(budget):
            if self.control(10)&0xffffffff:self.fail('Outer halt/cleanup')
            self.drain();self.control(6)
            label=self.control(0)&0xffffffff
            self.set_control(0,label) # proved opaque guard leaves the logical label
            if self.guard!=self.u(0x11b8):self.fail('Outer guard mismatch')
            label=self.control(0)&0xffffffff
            if label==0x27f17:
                self.record('outer_decoder',0x229c70);self.phase='outer_decode'
                return dict(work='decode',pc=self.peek(1),jobs=len(self.jobs))
            if label==0x825f:
                self.record('job_entry',0x22b6c5)
                domain=(mix(((self.u(0x1178,4)*MUL)&MASK)^((self.u(0x4ad,1)*PHI)&MASK)^self.u(0x28))>>33)&3
                import struct
                self.enqueue(struct.unpack('<4I',self.pe.get_data(0x3e2d90,16))[domain])
                self.jobs.append(label);self.record('job_end',0x232daa);continue
            domain_labels=[0x26dc07,0x338040,0x48cad,0x2a0025]
            if label in domain_labels:
                domain=domain_labels.index(label);opcode=self.u(0x4ad,1)
                if opcode>=62:self.fail('Outer invalid opcode guard')
                self.put(0x11a0,self.u(0x11a0)+1);self.control(1)
                self.body=self.resolve_handler(domain,opcode);self.domain=domain
                self.budget=0x80000003 if int.from_bytes(self.read(self.c-0xec,4),'little') else 3
                self.parents=[]
                self.outer_return_rva=[0x22fcd0,0x231c09,0x22bc87,0x2304bc][domain]
                self.phase='execute';self.record('handler_entry',self.body)
                return dict(work='handler',opcode=opcode,domain=domain)
            if label==0x28aab7:
                self.record('job_entry',0x2300de);self.attestation_gate()
                self.jobs.append(label);self.record('job_end',0x232daa);continue
            if label in TAILS:
                self.record('job_entry',TAILS[label]['entry']);self.opcode_finish(TAILS[label])
                self.jobs.append(label);self.record('job_end',0x232daa);continue
            if self.additional_job(label):continue
            if label not in JOBS:self.fail('Unknown outer job '+hex(label))
            job=JOBS[label];self.record('job_entry',job['entry']);self.kernel(job)
            self.jobs.append(label);self.record('job_end',0x232daa)
        self.fail('Semantic scheduler work bound')
