"""Recovered Serial mechanisms; no RC4 model and no captured result inputs.

Only the first PUSH_POOL_U32 instruction core is implemented. Unknown opcodes,
uncached operand windows, stack overflow and unproved layouts fail explicitly.
Native continuation/scheduling is outside that semantic boundary.
"""
import struct

MASK=(1<<64)-1
PHI=0x9e3779b97f4a7c15
STEP=0x2545f4914f6cdd1d
MUL=0xd6e8feb86659fd93
M1=0xff51afd7ed558ccd
M2=0xc4ceb9fe1a85ec53
SEEDS=(0xce4026a15e9d1756,0x6c19ac6adf439369,0x8ad132345c081f7c,0x28aab9fddcfe9b17)

def mid(x):
    x&=MASK;x=((x^(x>>33))*M1)&MASK
    return ((x^(x>>33))*M2)&MASK
def mix(x):
    x=mid(x);return x^(x>>33)
def permute8(x):
    left,right=(x>>4)&15,x&15
    for seed in SEEDS:
        p=mid(((right*MUL)&MASK)^seed)
        left,right=right,(left^(p>>17)^(p>>50))&15
    return (left<<4)|right
def starts():
    result=[0]
    for b in range(1,103):
        x=b-1
        for _ in range(64):
            x=permute8(x)
            if x<102:break
        else:x=b-1
        result.append((x+1)*26)
    if sorted(result)!=list(range(0,2678,26)):raise ValueError('Serial block permutation is not bijective')
    return result

def materialize(blob,block,shadow=None,period=0,current=0):
    """Original 1f1fe0 scalar effects for one of 103 permuted 26-byte units."""
    if len(blob)!=2678 or not 0<=block<103:raise ValueError('Unproved Serial blob/block shape')
    shadow=bytes(2678) if shadow is None else shadow
    if len(shadow)!=2678:raise ValueError('Missing shadow bytes')
    lo=starts()[block];hi=min(lo+26,len(blob));data=bytearray(blob[lo:hi])
    for pass_base in (0,STEP,(2*STEP)&MASK):
        h=mid(((lo*PHI)&MASK)^((block*MUL)&MASK)^0xb05b1cd7b48a0a20)
        for i in range(lo,hi):
            seed=((i*PHI)&MASK)^(h>>33)^(h&0xffffffff)^pass_base^((block*MUL)&MASK)^0xb05b1cd7a6870259
            p=mid(seed);data[i-lo]^=((p>>57)^(p>>24))&255
    x=(block*PHI)&MASK
    h=mid_after_first_xor((x^(x>>33))^0x424c4b31)
    state=mix(h^0xb05b1cd7b58e005b) or PHI
    for j,value in enumerate(data):
        x=(((h^0xb05b1cd7f6c64112)+j*0xf2fd861dbf7f1ad1)&MASK)^0x845d18de2a3561b1
        x=(x*0x2001)&MASK;x^=x>>7;x=(x*9)&MASK;x^=x>>17;x=(x+0x6024aef629aa0053)&MASK
        value^=((x>>40)^(x>>24)^(state>>29)^x^0x7d)&255;data[j]=value
        state=((value^state)*0xf2fd861dbf7f1ad1+0x6024aef629aa0053)&MASK;state^=state>>31
    for j,i in enumerate(range(lo,hi)):
        data[j]^=shadow[i]
        if period and i//period not in (current,(current+1)&0xffffffff):
            h=mix(((i//period)*PHI)^0xb05b1cd7a583065f)
            data[j]^=(h^(h>>8)^(h>>16))&255
    return lo,bytes(data)

def mid_after_first_xor(x):
    x=(x*M1)&MASK;x=((x^(x>>33))*M2)&MASK
    return x^(x>>33)

class FirstOpcode:
    """Byte-addressed before-state -> exact virtual-context/stack effects."""
    def __init__(self,memory,context,pe,body=0x1f8210):self.m=memory;self.c=context;self.pe=pe;self.body=body;self.ir=[]
    def read(self,at,size):return self.m.read(at,size)
    def u(self,offset,size=8):return int.from_bytes(self.read(self.c+offset,size),'little')
    def put(self,offset,value,size=8):self.m.add(self.c+offset,(value&((1<<(8*size))-1)).to_bytes(size,'little'),overwrite=True)
    def advance(self):
        x=(self.u(0x1b0)*PHI+STEP)&MASK;self.put(0x1b0,x);self.put(0x1b8,self.u(0x1b8)+1)
        return (x>>27)&255
    def control_mask(self,index,tag):return ((tag*self.u(0xe0))&MASK)^(((index+1)*self.u(0xd8))&MASK)^self.u(0xd0)
    def control(self,index):
        at=0xf0+index*8;mask=self.control_mask(index,self.u(0x160+index,1));encoded=self.u(at)
        value=(encoded-mask)&MASK if self.u(0xe8,1) else encoded^mask
        self.set_control(index,value);return value
    def set_control(self,index,value):
        tag=self.advance();self.put(0x160+index,tag,1);mask=self.control_mask(index,tag)
        self.put(0xf0+index*8,value+mask if self.u(0xe8,1) else value^mask)
    def push(self,value):
        sp=self.control(2)&0xffffffff
        if sp>1022:raise ValueError('Unimplemented Serial stack failure path')
        tag=self.advance();self.put(0xd65+sp,tag,1)
        mask=((tag*self.u(0x1a8))&MASK)^(((sp+1)*self.u(0x248))&MASK)^self.u(0x240)
        shift=mask>>58;rot=((value<<shift)|(value>>(64-shift)))&MASK if shift else value
        self.m.add(self.u(0x188)+sp*8,(rot^mask).to_bytes(8,'little'),overwrite=True)
        self.set_control(2,sp+1);self.ir.append({'op':'push','value':value,'before_sp':sp,'after_sp':sp+1})
    def ensure_cached_window(self,lo,hi):
        active32=self.u(0xaf0,4);active26=self.u(0xb5c,4)
        if self.u(0xaf4,4)!=32 or self.u(0xb58,4)!=26 or any(p//32 not in (active32,active32+1) or p//26 not in (active26,active26+1) for p in (lo,hi)):
            raise ValueError('Unimplemented uncached operand window')
        wanted=lo//26;bitmap=self.u(0xb50)
        if any(self.read(bitmap+i,1)==b'\0' for i in (wanted,wanted+1) if i<103):
            raise ValueError('Unimplemented uncached operand window')
        self.put(0xb5c,wanted,4)
    def run(self):
        if self.u(0x4ad,1)!=1:raise ValueError('Unknown Serial opcode')
        self.noise_prefix()
        return self.pool_push()
    def noise_prefix(self):
        if self.body==0x1f8210:
            noise=self.u(0x2f8);self.put(0x2f8,noise+(mix(noise>>13)^0x475c1810bb749f1d))
        elif self.body==0x209290:
            noise=self.u(0x2e0);self.put(0x2e0,noise^(mix(noise-0x1afa6d24c555e4de)|1))
        else:raise ValueError('Unproved Serial opcode-1 wrapper flavor')
    def pool_push(self):
        ip=self.control(1)&0xffffffff
        if ip+3>=self.u(0x1d8,4):raise ValueError('Operand outside bytecode')
        # 1f0660 fast window path; do not invent the other window effects.
        # The fast path calls 1f05c0 and retains its current window descriptor.
        self.ensure_cached_window(ip,ip+3)
        b=self.read(self.u(0x1d0)+ip,4);packed=(b[1]<<24)|(b[3]<<16)|(b[0]<<8)|b[2]
        h=(ip*0x84e97925)&0xffffffff;selector=((h^(h>>13)^packed^0xba1c4fa3)*0x77167b7b)&0xffffffff
        self.set_control(1,ip+4)
        index=selector if selector<17 else 0
        permutation=struct.unpack('<17I',self.pe.get_data(0x3ead00,68));slot=permutation[index]
        a=int.from_bytes(self.pe.get_data(0x3eae40+8*slot,8),'little');b=int.from_bytes(self.pe.get_data(0x3ead80+8*slot,8),'little')
        value=(a^b) if slot%3==0 else (a+b)&MASK if slot%3==1 else (a-b)&MASK
        self.ir.append({'op':'read_scrambled_u32','pc':ip,'raw_hex':self.read(self.u(0x1d0)+ip,4).hex(),'selector':selector,'pool_slot':slot})
        self.push(value)
        return {'opcode':1,'mnemonic':'PUSH_POOL_U32','operand_pc':ip,'next_pc':ip+4,'selector':selector,'value':value,'ir':self.ir}

class FirstDecode(FirstOpcode):
    """First natural decoder route, ending before its queue tail jump.

    Remap, domain-map refresh and register-rekey branches are explicit gaps.
    This is not a general Serial decoder implementation.
    """
    def update_decode_key(self,pc,counter):
        key=self.u(0x20);rot=((key<<17)|(key>>(64-17)))&MASK
        x=mix(((pc*MUL)&MASK)^rot^((counter*PHI)&MASK)^self.u(0x260));live=(x^(x>>29))|1
        if live&0x3ff==0x2c5 or live&31==0x15:raise ValueError('Unimplemented decoder map refresh')
        self.put(0x260,live)
    def run(self):
        if self.u(0x11e0,4)!=0:raise ValueError('Only first decode is modeled')
        pc=self.control(1)&0xffffffff
        if pc!=0 or self.u(0x1d8,4)!=2678 or self.u(0xaf4,4)!=32 or self.u(0xaf0,4)!=0 or self.u(0xb58,4)!=26:raise ValueError('Unproved first materialization route')
        bitmap=self.u(0xb10)
        if self.read(bitmap,1)!=b'\0':raise ValueError('Expected unmaterialized first block')
        self.m.add(bitmap,b'\1',overwrite=True);self.put(0xb18,0,4)
        shadow=self.read(self.u(0x48),2678)
        lo,data=materialize(self.pe.get_data(0x3e9c10,2678),0,shadow,32,0)
        self.m.add(self.u(0x1d0)+lo,data,overwrite=True)
        self.m.add(self.u(0xb50),b'\1',overwrite=True);self.put(0xb20,self.u(0xb20)+1)
        key=self.u(0x20);self.update_decode_key(pc,0)
        epoch=(self.u(0x200,4)+1)&0xffffffff
        if epoch>=self.u(0x1fc,4):raise ValueError('Unimplemented decoder register rekey')
        self.put(0x200,epoch,4);self.ensure_cached_window(pc,pc)
        self.set_control(8,pc)
        raw=self.read(self.u(0x1d0),1)[0]^shadow[0]
        self.set_control(1,pc+1)
        self.put(0x28,mix(self.u(0x350)^self.u(0x348)^(pc+1)^key))
        opcode=self.pe.get_data(0x3ecf00+(raw^0xdd),1)[0]^0x63
        self.put(0x11e0,1,4);self.put(0x4ad,opcode,1);self.put(0x20,mix(opcode^(pc+1)^key))
        return {'pc':pc,'raw_header':hex(raw),'opcode':opcode,'next_pc':pc+1,'materialized_bytes':len(data),'new_materializations':1,'next_native_state':hex(0x825f)}

def __getattr__(name):
    if name=='SerialVMState':
        from .serial_continuous import SerialVMState
        return SerialVMState
    raise AttributeError(name)
