"""Scalar materialization and bytecode-window transitions after deferred jumps."""
from .serial_branch import BranchSerialVMState
from .serial import PHI,mix,materialize,starts


class WindowSerialVMState(BranchSerialVMState):
    def xor_range(self,lo,hi,byte):
        if hi<=lo:return
        at=self.u(0x1d0)+lo
        self.m.add(at,bytes(v^byte for v in self.read(at,hi-lo)),overwrite=True)

    def toggle32(self,index):
        size=self.u(0x1d8,4);period=self.u(0xaf4,4)
        h=mix(index*PHI^0xb05b1cd7a583065f)
        self.xor_range(index*period,min((index+1)*period,size),(h^(h>>8)^(h>>16))&255)

    def toggle26(self,index):
        size=self.u(0x1d8,4);period=self.u(0xb58,4)
        h=mix(index*PHI^0xb05b1cd7b48a0a5e)
        self.xor_range(index*period,min((index+1)*period,size),(h^(h>>9)^(h>>21))&255)

    def ensure_cached_window(self,lo,hi):
        size=self.u(0x1d8,4);period=self.u(0xaf4,4);width=self.u(0xb58,4)
        if (size,period,width)!=(2678,32,26) or not 0<=lo<=hi<size:
            self.fail('Unknown window layout/range')
        first,last=lo//period,hi//period;wfirst,wlast=lo//width,hi//width
        if last-first>1 or wlast-wfirst>1:self.fail('Unsupported wide window request')
        old=self.u(0xaf0,4);old26=self.u(0xb5c,4)
        fast32=first in (old,old+1) and last in (old,old+1)
        fast26=wfirst in (old26,old26+1) and wlast in (old26,old26+1)
        bitmap=self.u(0xb50)
        if not (fast32 and fast26):
            if old26!=0xffffffff:
                for index in (old26,old26+1):
                    if index<103 and self.read(bitmap+index,1)!=b'\0':
                        self.toggle26(index);self.m.add(bitmap+index,b'\0',overwrite=True)
            if not fast32:
                count=(size+period-1)//period
                for index in (old,old+1):
                    if index<count:self.toggle32(index)
                self.put(0xaf0,first,4)
                for index in (first,first+1):
                    if index<count:self.toggle32(index)
            self.put(0xb5c,wfirst,4)
            for index in (wfirst,wfirst+1):
                if index<103 and self.read(bitmap+index,1)==b'\0':
                    self.toggle26(index);self.m.add(bitmap+index,b'\1',overwrite=True)
        else:
            # Fast 1f0660 still enters 1f05c0, which materializes missing masks.
            self.put(0xb5c,wfirst,4)
            for index in (wfirst,wfirst+1):
                if index<103 and self.read(bitmap+index,1)==b'\0':
                    self.toggle26(index);self.m.add(bitmap+index,b'\1',overwrite=True)

    def prepare_opcode_byte(self,pc):
        if not 0<=pc<2678:self.fail('Opcode outside bytecode')
        positions=starts();unit=positions.index((pc//26)*26)
        self.put(0xb18,unit,4)
        bitmap=self.u(0xb10)
        if self.read(bitmap+unit,1)==b'\0':
            self.m.add(bitmap+unit,b'\1',overwrite=True)
            lo,data=materialize(self.pe.get_data(0x3e9c10,2678),unit,
                                self.read(self.u(0x48),2678),self.u(0xaf4,4),self.u(0xaf0,4))
            self.m.add(self.u(0x1d0)+lo,data,overwrite=True)
            self.m.add(self.u(0xb50)+lo//26,b'\1',overwrite=True)
            self.put(0xb20,self.u(0xb20)+1)
            if self.phase=='outer_decode':self.record('materializer_return',0x229d33)
