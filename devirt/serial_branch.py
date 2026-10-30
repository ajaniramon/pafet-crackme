"""Deferred Serial control transfer: opcode 26 and authenticated commit."""
from .serial_depth import DeepSerialVMState
from .serial_regions_xxxiv import REGIONS
from .serial import MASK,PHI,MUL,mix,starts
from .serial_continuous import signed32

C2=0xc2b2ae3d27d4eb4f


class BranchSerialVMState(DeepSerialVMState):
    regions=REGIONS

    def noise_prefix(self):
        if self.spec()['opcode']!=26 or self.domain not in (1,3):
            return super().noise_prefix()
        spec=self.spec();n=self.u(spec['noise_offset'])
        constant=int.from_bytes(self.pe.get_data(spec['noise_constant_rva'],8),'little')
        self.put(spec['noise_offset'],n^(mix(n-constant)|1) if self.domain==1 else (n>>3)^mix(n-constant))

    def read_u32_operand(self):
        pc=self.control(1)&0xffffffff
        if pc+3>=self.u(0x1d8,4):self.fail('U32 operand outside bytecode')
        self.ensure_cached_window(pc,pc+3)
        b=self.read(self.u(0x1d0)+pc,4)
        packed=(b[1]<<24)|(b[3]<<16)|(b[0]<<8)|b[2]
        h=pc*0x84e97925&0xffffffff
        value=((h^(h>>13)^packed^0xba1c4fa3)*0x77167b7b)&0xffffffff
        self.set_control(1,pc+4)
        return pc,value

    def request_branch(self,target,origin):
        # RVA 1f10a0, arguments condition=0, mode=1, invert=0.
        take=1
        frame=self.u(0x384,4);salt=self.u(0x350);live=self.u(0x260)
        mask=mix(take*C2 ^ origin*MUL ^ frame ^ salt ^ live ^ 0x42524d4b)
        self.set_control(4,(mask&0xffffffff)^target)
        self.set_control(5,take)
        self.set_control(11,frame^origin)
        tag=mix(target*C2 ^ origin*PHI ^ take*MUL ^ frame ^ salt ^ live ^ 0x42525441)
        self.set_control(12,tag)
        self.set_control(6,1)
        self.put(0x388,self.u(0x388)+1)
        self.put(0x20,mix(take^origin^self.u(0x20)))
        self.set_control(0,0xffd5b)
        return 0xffd5b

    def execute_opcode(self,opcode):
        if opcode!=26:return super().execute_opcode(opcode)
        self.noise_prefix()
        pc,unit=self.read_u32_operand()
        origin=self.control(1)&0xffffffff
        if unit>=103:self.fail('Invalid materialization-unit label')
        target=starts()[unit]
        label=self.request_branch(target,origin)
        self.enqueue(label)
        return dict(opcode=26,mnemonic='REQUEST_BRANCH_UNIT_U32',operand=unit,
                    operand_pc=pc,target_pc=target,next_pc=origin)

    def continuation(self):
        if self.u(0x4ad,1)!=26:return super().continuation()
        if not self.budget&0x80000000:self.fail('Unthreaded branch wrapper return')
        if self.guard!=self.u(0x11b8):self.fail('Branch wrapper guard mismatch')
        if self.control(10)&0xffffffff:self.fail('Halted branch VM')
        if not self.u(0xad0,4):self.fail('Missing deferred-branch queue item')
        self.record('pending_queue_return',self.spec()['return_rva'])
        self.unwind_to_outer()

    def attestation_gate(self):
        origin=(self.u(0x384,4)^self.control(11))&0xffffffff
        take=self.control(5)&1;armed=self.control(6)&1
        encoded=self.control(4);tag=self.control(12)
        frame=self.u(0x384,4);salt=self.u(0x350);live=self.u(0x260)
        target=(encoded^mix(origin*MUL ^ take*C2 ^ frame ^ salt ^ live ^ 0x42524d4b))&0xffffffff
        expected=mix(target*C2 ^ origin*PHI ^ take*MUL ^ frame ^ salt ^ live ^ 0x42525441)
        valid=tag==expected
        pc=self.control(1)&0xffffffff
        self.set_control(1,target if valid and armed and take else pc)
        self.set_control(6,0);self.set_control(12,0)
        if armed and not valid:self.fail('Deferred branch attestation mismatch')
        pc=self.control(1)&0xffffffff
        self.put(0x20,mix(pc^self.u(0x20)))
        self.put(0x348,mix(signed32(self.u(0x11e0,4))^self.u(0x348)))
        self.enqueue(0x27f17)
