"""JACK XXXVI: signed comparison, conditional deferred branch and an explicit
semantic-handler registry.

New opcodes register here instead of adding another subclass per family. The
inherited scheduler, controls, TLS frames and window materialization are reused
unchanged; this module adds no x64 engine, observation input or learned result.
"""
from .serial_hostcall import HostCallSerialVMState
from .serial_regions_xxxvi import REGIONS
from .serial import MASK,PHI,mix,starts
from .serial_continuous import signed32
from .serial_alu import add_variant

M1=0xff51afd7ed558ccd


def signed64(x):
    x&=MASK
    return x-(1<<64) if x>>63 else x


def rol64(x,n):
    x&=MASK;n&=63
    return ((x<<n)|(x>>(64-n)))&MASK if n else x


def condition_scramble(value,origin,opcode,frame,salt,live,key):
    """Original RVA 1f0e60. Rotation, odd multiplies and xorshifts are
    bijective, so the result is zero exactly when ``value`` is zero."""
    h=mix((((origin&0xffffffff)+1)*PHI)&MASK ^ frame ^ salt ^ live ^ key ^ opcode)
    x=rol64(value,h&63)
    x=(x*(mix(h^0x4e524d31)|1))&MASK
    x=((x>>(((h>>19)&31)+1))^x)
    x=(x*(mix(h^0x4e524d32)|1))&MASK
    return x^(x>>(((h>>41)&31)+1))


class NativeThrow(Exception):
    """vm_rc4_crypt_Sig thrown by enqueue; deliberately not a ValueError."""
    def __init__(self,encoded):super().__init__(hex(encoded));self.encoded=encoded


class DigestEvent:
    """Compact boundary record: SHA-256 over every declared root, in order."""
    __slots__=('name','boundary_rva','pc','sp','digest','layout')
    def __init__(self,name,boundary_rva,pc,sp,digest,layout):
        self.name=name;self.boundary_rva=boundary_rva;self.pc=pc;self.sp=sp;self.digest=digest;self.layout=layout
    def __getitem__(self,key):return getattr(self,key)
    def __contains__(self,key):return key in self.__slots__


class SemanticHandlers:
    """Opcode -> (mnemonic, implementation). Implementations receive the VM."""
    def __init__(self):self.table={}
    def register(self,opcode,mnemonic):
        def bind(function):
            if opcode in self.table:raise ValueError('Duplicate semantic opcode '+str(opcode))
            self.table[opcode]=(mnemonic,function);return function
        return bind
    def get(self,opcode):return self.table.get(opcode)


HANDLERS=SemanticHandlers()


@HANDLERS.register(22,'CMP_LT_S64')
def compare_less_signed(vm):
    # 1ee940 twice: right is the top cell. Domains 0-2 compare with the
    # sign bits flipped and SETB; domain 3 uses SETL. Both are signed '<'.
    right=vm.pop();left=vm.pop();result=int(signed64(left)<signed64(right))
    vm.push(result)
    return dict(left=left,right=right,result=result,next_pc=vm.peek(1)&0xffffffff)


@HANDLERS.register(27,'BRANCH_IF_ZERO_UNIT_U32')
def branch_if_zero(vm):
    # Scrambled value -> condition=(x==0), invert=0 for 1f10a0.
    return conditional_branch(vm,0)


@HANDLERS.register(24,'CMP_GT_S64')
def compare_greater_signed(vm):
    # Domains use flipped-sign SETB with swapped operands, SETG or SETA.
    right=vm.pop();left=vm.pop();result=int(signed64(left)>signed64(right))
    vm.push(result)
    return dict(left=left,right=right,result=result,next_pc=vm.peek(1)&0xffffffff)


@HANDLERS.register(21,'CMP_NE_U64')
def compare_not_equal(vm):
    right=vm.pop();left=vm.pop();result=int(left!=right)
    vm.push(result)
    return dict(left=left,right=right,result=result,next_pc=vm.peek(1)&0xffffffff)


@HANDLERS.register(8,'ADD_U64')
def add(vm):
    # Domain 0 calls native ALU 1ed730 selector 0 with token ctx+0x28; the
    # selected encrypted program is decoded and evaluated, not assumed.
    right=vm.pop();left=vm.pop()
    result=add_variant(vm.pe,left,right,vm.u(0x28)) if vm.domain==0 else (left+right)&MASK
    vm.push(result)
    return dict(left=left,right=right,result=result,next_pc=vm.peek(1)&0xffffffff)


@HANDLERS.register(44,'NOT_U64')
def bitwise_not(vm):
    value=vm.pop();result=(~value)&MASK
    vm.push(result)
    return dict(value=value,result=result,next_pc=vm.peek(1)&0xffffffff)


@HANDLERS.register(59,'ZERO_EXTEND_LOW_U8')
def zero_extend(vm):
    # Same U8 reader as 0x3a. Unlike sign extension, width 0 yields zero
    # (JE to XOR EDX,EDX), not identity.
    pc,operand=vm.read_u8_operand()
    width=operand&63;value=vm.pop()
    result=value&((1<<width)-1) if width else 0
    vm.push(result)
    return dict(operand=operand,width=width,value=value,result=result,next_pc=pc+1)


@HANDLERS.register(30,'HALT')
def halt(vm):
    # Three PRNG-tagged control writes: result/status control 3 = 0, outer
    # work label 0xfe1ab (halt job 22c8f6) and logical halt flag control 10.
    vm.set_control(3,0);vm.set_control(0,0xfe1ab);vm.set_control(10,1)
    return dict(halted=True,next_pc=vm.peek(1)&0xffffffff)


def conditional_branch(vm,invert):
    pc,unit=vm.read_u32_operand()
    value=vm.pop()
    origin=vm.control(1)&0xffffffff
    scrambled=condition_scramble(value,origin,vm.u(0x4ad,1),vm.u(0x384,4),vm.u(0x350),vm.u(0x260),vm.u(0x20))
    if unit>=103:vm.fail('Invalid materialization-unit label')
    target=starts()[unit]
    zero=int(scrambled==0)
    label=vm.request_branch(target,origin,value=scrambled,condition=zero,invert=invert)
    vm.enqueue(label)
    return dict(operand=unit,operand_pc=pc,condition_value=value,taken=bool(zero^invert),
                target_pc=target,fallthrough_pc=origin,next_pc=origin)


@HANDLERS.register(28,'BRANCH_IF_NONZERO_UNIT_U32')
def branch_if_nonzero(vm):
    return conditional_branch(vm,1)


# Receiver fields R[k] = *(receiver+8+8k) and their recovered pointee sizes.
FIELD_SIZES=(4,256,1,32,8,4,1,1,8,8,1,8)
FIELD_ROLES=('int32 index','byte table','byte accumulator','MSVC std::string object','uint64 modulus',
             'int32 index 2','byte cursor A','byte cursor B','uint64 offset','uint64 value','byte operand','buffer pointer')


class LoopSerialVMState(HostCallSerialVMState):
    regions=REGIONS
    handlers=HANDLERS
    deferred_branch_opcodes=(26,27,28)

    def noise_prefix(self):
        spec=self.spec()
        if self.handlers.get(spec['opcode']) is None:return super().noise_prefix()
        # Same four domain formulas as the earlier families; the subtract
        # flag is read from each wrapper by the static audit.
        n=self.u(spec['noise_offset']);c=int.from_bytes(self.pe.get_data(spec['noise_constant_rva'],8),'little')
        d=self.domain;sub=spec['noise_subtract']
        value=n+(mix(n>>13)^c) if d==0 else n^(mix(n-c if sub else n+c)|1) if d==1 else (n>>7)+mix(n^c) if d==2 else (n>>3)^mix(n-c if sub else n+c)
        self.put(spec['noise_offset'],value)

    def decoder_epoch(self,counter,key):
        # Inlined decoders (e.g. 1fa5f6) and outer decoder 22a087: every 32nd
        # fetch folds the counter and pre-update key into the noise word.
        self.put(0x348,mix((signed32(counter)&MASK)^key^self.u(0x348)))
        self.epochs=getattr(self,'epochs',0)+1

    def execute_opcode(self,opcode):
        entry=self.handlers.get(opcode)
        if entry is None:return super().execute_opcode(opcode)
        mnemonic,function=entry
        self.noise_prefix()
        result=function(self)
        return dict(opcode=opcode,mnemonic=mnemonic,**result)

    @classmethod
    def from_initial_capture(cls,entry,pe):
        s=super().from_initial_capture(entry,pe)
        s.callback_log=[]
        known={r['address'] for r in s.roots}
        for k,(size,role) in enumerate(zip(FIELD_SIZES,FIELD_ROLES)):
            at=s.field(k)
            s.read(at,size)
            if k==0 and at in known:continue  # XXXV root 'native callback index'
            s.roots.append(dict(address=at,size=size,role='callback R%d %s'%(k,role)))
        return s

    full_events=None

    def record(self,name,boundary):
        """Past ``full_events``, keep one SHA-256 over all declared roots
        (in order) instead of raw bytes, so long runs stay in memory."""
        if self.full_events is None or len(self.events)<self.full_events:return super().record(name,boundary)
        import hashlib
        layout=getattr(self,'_layout',None)
        if layout is None or len(layout)!=len(self.roots):
            layout=self._layout=tuple((r['address'],r['size']) for r in self.roots)
        h=hashlib.sha256()
        for at,size in layout:h.update(self.read(at,size))
        self.events.append(DigestEvent(name,boundary,self.peek(1)&0xffffffff,self.peek(2)&0xffffffff,h.digest(),layout))

    # --- C++ exception route (enqueue -> dispatcher catch funclet 3cab48) ---
    def throw_label(self,encoded):
        if getattr(self,'in_core',False):
            # Branch cores end with this enqueue; nothing after it runs.
            self.pending_throw=NativeThrow(encoded);return
        raise NativeThrow(encoded)

    def deliver(self,thrown):
        """Throw at 1f0e48 -> FH4 try state 6 of dispatcher 22a120 -> catch.

        Every intervening frame is EH-free except HOST_CALL wrappers, whose
        RAII guard (1eead0) clamps TLS depth to its entry value. Supported
        callbacks are balanced, so the clamp must be inactive here."""
        self.record('cxx_throw',0x3a5fa0)
        if self.tu(0x524,4)!=self.entry_tls_depth:self.fail('Active TLS clamp during exception unwind')
        self.put(0xae0,self.u(0xae0)+1)                     # funclet: inc [frame+0xc70]
        n=self.u(0xad0,4)
        if n>=64:self.fail('Catch queue overflow (JOPF)')
        self.put(0x8c8+8*n,thrown.encoded);self.put(0xad0,n+1,4)  # 1f0c20
        self.parents.clear();self.phase='outer_jobs'
        self.throws=getattr(self,'throws',0)+1
        self.record('catch_resume',0x232db7)

    # --- Natural termination route after HALT (opcode 30) ---
    def continuation(self):
        if self.u(0x4ad,1)!=30:return super().continuation()
        # Wrapper tail: threaded budget and guard checks, then 1ee450 reads
        # (and re-tags) control 10; nonzero jumps to a pop-only RET.
        if not self.budget&0x80000000:self.fail('Unthreaded HALT wrapper return')
        if self.guard!=self.u(0x11b8):self.fail('HALT wrapper guard mismatch')
        if not self.control(10)&0xffffffff:self.fail('HALT without logical halt flag')
        self.record('halt_wrapper_return',self.spec()['return_rva'])
        self.unwind_to_outer()

    def _dispatch_next(self,budget):
        if self.phase=='halted':self.fail('Serial-VM halted; native cleanup from 22b0af is not modeled')
        if self.phase=='outer_dispatch' and self.peek(10)&0xffffffff:
            self.control(10)                         # 22fd0c: halted -> 232daa
            self.record('post_wrapper',0x232daa);self.phase='outer_jobs'
        if self.phase=='outer_jobs' and self.peek(10)&0xffffffff:
            self.control(10)                         # loop top 22b088
            if self.control(6)&1:self.fail('Halt with armed deferred branch')  # 22b0a2
            self.phase='halted';self.record('halt_cleanup_entry',0x22b0af)
            return dict(work='halt_cleanup')
        return super()._dispatch_next(budget)

    def _prepare_next_instruction(self):
        if self.phase=='halted':self.fail('Serial-VM halted; native cleanup from 22b0af is not modeled')
        for _ in range(64):
            try:
                result=super()._prepare_next_instruction()
                if self.phase=='halted':self.fail('Serial-VM halted; native cleanup from 22b0af is not modeled')
                return result
            except NativeThrow as thrown:self.deliver(thrown)
        self.fail('Exception delivery bound')

    def _step(self):
        self.prepare_next_instruction()
        if self.phase!='execute':self.fail('No handler entry after scheduling')
        opcode=self.u(0x4ad,1);start=self.peek(8)&0xffffffff
        self.in_core=True;self.pending_throw=None
        try:result=self.execute_opcode(opcode)
        finally:self.in_core=False
        result.update(virtual_pc=start,native_body=hex(self.body))
        if self.pending_throw is not None:
            # The core's last effect threw: no core_end, no continuation.
            thrown,self.pending_throw=self.pending_throw,None
            self.deliver(thrown);result['exception_delivered']=True
        else:
            self.record('opcode_core',self.spec()['core_end']);self.continuation()
        self.steps+=1
        result.update(boundary_pc=self.peek(1)&0xffffffff,boundary_sp=self.peek(2)&0xffffffff,boundary_phase=self.phase)
        return result

    def field(self,k):return int.from_bytes(self.read(self.receiver+8+8*k,8),'little')
    def rd(self,at,size):return int.from_bytes(self.read(at,size),'little')
    def wr(self,at,value,size):self.m.add(at,(value&((1<<(8*size))-1)).to_bytes(size,'little'),overwrite=True)
    def table(self,index):
        # Signed index into R[1]; reads outside captured memory fail by contract.
        return self.field(1)+index

    def host_call(self,function,args):
        """Original switch 232e20, case by case. Arguments are the popped
        values; a missing argument fails instead of reading native scratch."""
        vtable=int.from_bytes(self.read(self.receiver,8),'little')-self.runtime_base
        if vtable!=0x3f1820:self.fail('Unknown callback receiver vtable')
        target=int.from_bytes(self.pe.get_data(vtable+16,8),'little')-self.pe.OPTIONAL_HEADER.ImageBase
        if target!=0x39d940:self.fail('Unknown native callback binding')
        if function>22:return 0  # 232e26 JA -> XOR EAX,EAX; RET
        F=self.field;rd=self.rd;wr=self.wr
        def arg():
            if not args:self.fail('Missing callback argument for function %d'%function)
            return args[0]
        sx=lambda v:v-(1<<32) if v>>31 else v
        result=0
        if function==0:wr(F(0),arg(),4)
        elif function==1:result=sx(rd(F(0),4))&MASK
        elif function==2:
            i=sx(rd(F(0),4));wr(self.table(i),i,1);result=rd(self.table(i),1)
        elif function==3:wr(F(2),arg(),1)
        elif function==4:result=rd(F(3)+0x10,8)
        elif function==5:wr(F(4),arg(),8)
        elif function==6:wr(F(5),arg(),4)
        elif function==7:result=sx(rd(F(5),4))&MASK
        elif function==8:result=rd(F(4),8)
        elif function==9:
            obj=F(3);data=rd(obj,8) if rd(obj+0x18,8)>=16 else obj
            i=sx(rd(F(5),4));modulus=rd(F(4),8)
            if not modulus:self.fail('Callback 9 divide by zero (#DE)')
            rem=(i&MASK)%modulus
            value=(rd(data+rem,1)+rd(self.table(i),1)+rd(F(2),1))&255
            wr(F(2),value,1);result=value
        elif function==10:
            i=sx(rd(F(5),4));value=(rd(F(2),1)+rd(self.table(i),1))&255
            wr(F(2),value,1);result=value
        elif function==11:
            a=self.table(rd(F(2),1));b=self.table(sx(rd(F(5),4)))
            x,y=rd(a,1),rd(b,1);wr(b,x,1);wr(a,y,1)
        elif function==12:wr(F(6),arg(),1)
        elif function==13:wr(F(7),arg(),1)
        elif function==14:wr(F(8),arg(),8)
        elif function==15:result=rd(F(8),8)
        elif function==16:result=rd(F(9),8)
        elif function==17:result=rd(F(6),1)
        elif function==18:
            value=(rd(F(7),1)+rd(self.table(rd(F(6),1)),1))&255
            wr(F(7),value,1);result=value
        elif function==19:
            a=self.table(rd(F(7),1));b=self.table(rd(F(6),1))
            x,y=rd(a,1),rd(b,1);wr(b,x,1);wr(a,y,1)
        elif function==20:
            t=self.table(0)
            result=rd(t+((rd(t+rd(F(7),1),1)+rd(t+rd(F(6),1),1))&255),1)
        elif function==21:wr(F(10),arg(),1)
        else:
            at=(rd(F(11),8)+rd(F(8),8))&MASK
            if not self.m.covered(at,1):self.fail('Callback 22 output byte outside captured memory')
            if not any(r['address']<=at<r['address']+r['size'] for r in self.roots):
                self.roots.append(dict(address=at,size=1,role='callback 22 output byte'))
            value=rd(at,1)^rd(F(10),1);wr(at,value,1);result=value
        self.callback_log.append(dict(function=function,args=list(args),result=result))
        return result
