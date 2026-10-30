"""Recovered U8 reader and opcode 0x3a; no native engine or observations."""
from .serial_windows import WindowSerialVMState
from .serial_regions_xxxv import REGIONS
from .serial import MASK,mix


def sign_extend_low(value,operand):
    width=(operand&63) or 64
    low=value&((1<<width)-1)
    return (low-(1<<width) if low>>(width-1) else low)&MASK


class SignExtendSerialVMState(WindowSerialVMState):
    regions=REGIONS

    def noise_prefix(self):
        if self.spec()['opcode']!=58 or self.domain not in (1,3):
            return super().noise_prefix()
        spec=self.spec();n=self.u(spec['noise_offset'])
        constant=int.from_bytes(self.pe.get_data(spec['noise_constant_rva'],8),'little')
        self.put(spec['noise_offset'],n^(mix(n-constant)|1) if self.domain==1 else (n>>3)^mix(n-constant))

    def read_u8_operand(self):
        pc=self.control(1)&0xffffffff
        if pc>=self.u(0x1d8,4):self.fail('U8 operand outside bytecode')
        self.ensure_cached_window(pc,pc)
        self.set_control(1,pc+1)
        return pc,self.read(self.u(0x1d0)+pc,1)[0]^0x80

    def execute_opcode(self,opcode):
        if opcode!=58:return super().execute_opcode(opcode)
        self.noise_prefix()
        pc,operand=self.read_u8_operand()
        value=self.pop();result=sign_extend_low(value,operand)
        self.push(result)
        return dict(opcode=58,mnemonic='SIGN_EXTEND_LOW_U8',operand=operand,
                    width=(operand&63) or 64,value=value,result=result,next_pc=pc+1)
