"""Encoded TLS call frames and the recovered native callback boundary.

Host function IDs 0/1 are direct indexed-scalar operations from the original
callback switch. Other IDs fail; there is no functional RC4 replacement.
"""
from .serial_signextend import SignExtendSerialVMState
from .serial import MASK,PHI,STEP,MUL,mix


class HostCallSerialVMState(SignExtendSerialVMState):
    @classmethod
    def from_initial_capture(cls,entry,pe):
        s=super().from_initial_capture(entry,pe)
        array=int.from_bytes(s.read(s.gs_base+0x58,8),'little')
        s.tls=int.from_bytes(s.read(array,8),'little')+0x610
        s.receiver=s.u(0xb0)
        s.read(s.tls,0x528);s.read(s.receiver,104)
        index=int.from_bytes(s.read(s.receiver+8,8),'little');s.read(index,4)
        s.entry_tls_depth=s.tu(0x524,4)
        s.roots.extend([dict(address=s.tls,size=0x528,role='encoded TLS callback frames'),
                        dict(address=s.receiver,size=104,role='native callback receiver'),
                        dict(address=index,size=4,role='native callback index')])
        return s

    def tu(self,offset,size=8):return int.from_bytes(self.read(self.tls+offset,size),'little')
    def tp(self,offset,value,size=8):self.m.add(self.tls+offset,(value&((1<<(size*8))-1)).to_bytes(size,'little'),overwrite=True)

    def frame_mask(self,f,slot,tag):
        return ((tag*self.tu(0x510))&MASK)^(((4*f+slot+1)*self.tu(0x508))&MASK)^self.tu(0x500)

    def frame_store(self,f,slot,value):
        seed=(self.tu(0x518)*PHI+STEP)&MASK;self.tp(0x518,seed)
        tag=(seed>>29)&255;self.tp(f*40+32+slot,tag,1)
        mask=self.frame_mask(f,slot,tag)
        self.tp(f*40+slot*8,value+mask if self.tu(0x520,1) else value^mask)

    def frame_load(self,f,slot):
        mask=self.frame_mask(f,slot,self.tu(f*40+32+slot,1));encoded=self.tu(f*40+8*slot)
        value=(encoded-mask)&MASK if self.tu(0x520,1) else encoded^mask
        self.frame_store(f,slot,value)
        return value

    def frame_hash(self,depth,pc,function,sp):
        return mix(depth*PHI ^ (sp+1)*0xbf58476d1ce4e5b9 ^ pc*MUL ^ function*0xc2b2ae3d27d4eb4f ^ self.u(0x350) ^ self.u(0x340) ^ 0x43465354)

    def frame_push(self,pc,function,sp):
        depth=self.tu(0x524,4)
        if depth>=32:self.fail('TLS callback-frame overflow')
        for slot,value in enumerate((pc,function,sp,self.frame_hash(depth+1,pc,function,sp))):
            self.frame_store(depth,slot,value)
        self.tp(0x524,depth+1,4)

    def frame_pop(self):
        depth=self.tu(0x524,4)
        if not depth:self.fail('TLS callback-frame underflow')
        f=depth-1;pc,function,sp,tag=[self.frame_load(f,i) for i in range(4)]
        pc&=0xffffffff;function&=0xffffffff;sp&=0xffffffff
        expected=self.frame_hash(depth,pc,function,sp)
        for slot in range(4):self.frame_store(f,slot,mix((4*f+slot+1)^self.tu(0x510)))
        self.tp(0x524,f,4)
        if tag!=expected:self.fail('TLS callback-frame authentication mismatch')
        if pc>self.u(0x1d8,4):self.fail('TLS callback return PC outside bytecode')
        return pc

    def host_call(self,function,args):
        vtable=int.from_bytes(self.read(self.receiver,8),'little')-self.runtime_base
        if vtable!=0x3f1820:self.fail('Unknown callback receiver vtable')
        target=int.from_bytes(self.pe.get_data(vtable+16,8),'little')-self.pe.OPTIONAL_HEADER.ImageBase
        if target!=0x39d940:self.fail('Unknown native callback binding')
        index=int.from_bytes(self.read(self.receiver+8,8),'little')
        if function==0:
            if not args:self.fail('Missing callback index argument')
            self.m.add(index,(args[0]&0xffffffff).to_bytes(4,'little'),overwrite=True)
            return 0
        if function==1:return int.from_bytes(self.read(index,4),'little',signed=True)&MASK
        self.fail('Unknown native callback function '+str(function))

    def noise_prefix(self):
        spec=self.spec()
        if spec['opcode'] not in (31,32):return super().noise_prefix()
        n=self.u(spec['noise_offset']);c=int.from_bytes(self.pe.get_data(spec['noise_constant_rva'],8),'little')
        d=self.domain;sub=spec['noise_subtract']
        value=n+(mix(n>>13)^c) if d==0 else n^(mix(n-c if sub else n+c)|1) if d==1 else (n>>7)+mix(n^c) if d==2 else (n>>3)^mix(n-c if sub else n+c)
        self.put(spec['noise_offset'],value)

    def execute_opcode(self,opcode):
        if opcode==31:
            self.noise_prefix();value=self.pop()
            return dict(opcode=31,mnemonic='DROP_U64',value=value,next_pc=self.peek(1)&0xffffffff)
        if opcode!=32:return super().execute_opcode(opcode)
        self.noise_prefix();pc,function=self.read_u16_operand();_,count=self.read_u8_operand();count=min(count,32)
        args=list(reversed([self.pop() for _ in range(count)]))
        sp=self.control(2)&0xffffffff;origin=self.control(1)&0xffffffff
        self.frame_push(origin,function,sp)
        self.set_control(13,self.control(13)+1)
        result=self.host_call(function,args)
        self.set_control(13,self.control(13)-1)
        self.set_control(1,self.frame_pop())
        self.put(0x20,mix(self.control(13)^function^self.u(0x20)))
        self.push(result)
        return dict(opcode=32,mnemonic='HOST_CALL_U16_U8',function=function,argc=count,args=args,result=result,next_pc=origin)

    def unwind_to_outer(self):
        # All supported callbacks are non-reentrant and balance their TLS frame.
        # This proves the native post-child depth clamp inactive on this route.
        if self.tu(0x524,4)!=self.entry_tls_depth:self.fail('Unbalanced callback TLS depth at thread return')
        return super().unwind_to_outer()
