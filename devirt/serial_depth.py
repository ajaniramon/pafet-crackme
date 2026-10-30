"""Serial semantic depth extensions; observations are comparison inputs only."""
from .serial_scheduler import ScheduledSerialVMState
from .serial_regions_xxxiii import REGIONS
from .serial_alu import xor_variant
from .serial import mix


class DeepSerialVMState(ScheduledSerialVMState):
    regions = REGIONS

    def additional_job(self,label):
        if label != 0x2e0073:
            return False
        self.record('job_entry',0x230ef1)
        noise=self.u(0x348)^self.u(0x11e8)
        self.put(0x348,noise)
        self.put(0x20,mix(noise^self.u(0x20)))
        # RVA 23e0 is the proved odd/even predicate returning 1. CMOVNE
        # therefore selects the constructor-validated R15 decoder label.
        self.enqueue(0x27f17)
        self.jobs.append(label)
        self.record('job_end',0x232daa)
        return True

    def execute_opcode(self, opcode):
        if opcode != 41:
            return super().execute_opcode(opcode)
        self.noise_prefix()
        right = self.pop()
        left = self.pop()
        value = xor_variant(self.pe,left,right,self.u(0x28)) if self.domain==1 else left ^ right
        self.push(value)
        return dict(opcode=opcode, mnemonic='XOR_U64', left=left, right=right,
                    value=value, next_pc=self.peek(1)&0xffffffff)
