"""Serial instruction effects and native continuation reduced to state operations.

No x64 engine or observation files. A step ends before the next inlined decoder
reads PC, after the instruction's continuation commits. Unsupported native return continuations, rekey, remap rebuild or cache routes raise with the partial state.
"""
import hashlib
import struct
import pathlib
import sys
_scripts=str(pathlib.Path(__file__).resolve().parents[1]/'scripts')
if _scripts not in sys.path:sys.path.insert(0,_scripts)
from pafet_state_contract import ContractError
from .serial import FirstOpcode,FirstDecode,MASK,PHI,STEP,MUL,mid,mix
from .serial_regions import REGIONS

class UnsupportedSerialRoute(ValueError):pass

def rol(x,n):
    x&=MASK;n&=63
    return ((x<<n)|(x>>(64-n)))&MASK if n else x
def signed32(x):return x if x<1<<31 else x-(1<<32)

def capture_roots(entry,m,pe,include_pool=True):
    from pafet_state_contract import require
    c=entry['state']['gprs'][1];m.read(c,0x11f0,'Serial context')
    roots=[{'address':c,'size':0x11f0,'role':'Serial context'}]
    fields=[(0x1d0,2678,'bytecode'),(0x48,2678,'shadow'),(0xb10,104,'materialization bitmap'),(0xb50,104,'window bitmap'),(0x180,4096,'register banks'),(0x188,8192,'virtual stack'),(0x4b8,4*62*4,'dispatch table')]
    if include_pool:fields.append((0x1190,int.from_bytes(m.read(c+0x119c,4),'little'),'generated thunk pool'))
    for offset,size,role in fields:
        require(size>0,'Missing Serial root size','incomplete-input')
        address=int.from_bytes(m.read(c+offset,8),'little');m.read(address,size,role);roots.append({'address':address,'size':size,'role':role})
    for section in pe.sections:
        if section.Characteristics&0x80000000:roots.append({'address':entry['base']+section.VirtualAddress,'size':section.Misc_VirtualSize,'role':'writable PE '+section.Name.rstrip(b'\0').decode()})
    return roots

def update_decode_key(state,pc,counter):
    key=state.u(0x20);signed=signed32(counter)
    x=mix(((pc*MUL)&MASK)^rol(key,17)^((signed*PHI)&MASK)^state.u(0x260));live=(x^(x>>29))|1
    state.put(0x260,live)
    if live&0x3ff==0x2c5:
        hook=getattr(state,'full_remap_rebuild',None)
        if hook is None:raise UnsupportedSerialRoute('Full remap rebuild')
        hook()
    if live&31==0x15:
        x=mix((((signed^0x5a5a)*PHI)&MASK)^rol(key,17)^live^0x8f70feda99a6026d);lookup=(x^(x>>29))|1
        domain=(lookup>>8)&3;slot=(lookup>>40)%62
        at=state.u(0x4b8)+4*(domain*62+slot)
        target=((int.from_bytes(state.read(at,4),'little',signed=True)^signed32(state.u(0x4c8,4)))+state.u(0x4c0))&MASK
        state.put(0x260,mix(target^lookup)^live);state.put(0x268,state.u(0x268)+1)
        state.map_probes=getattr(state,'map_probes',0)+1

class SerialDecoderWithMapProbe(FirstDecode):
    """First decoder with the checked dispatch-table probe/key refresh."""
    update_decode_key=update_decode_key

class SerialVMState(FirstOpcode):
    regions = REGIONS
    @classmethod
    def from_initial_capture(cls,entry,pe):
        import pefile
        from pafet_state_contract import validate_entry,require,ORIGINAL_SHA256
        raw=pe.__data__[:];require(hashlib.sha256(raw).hexdigest()==ORIGINAL_SHA256,'Semantic model requires original PE','integrity')
        # pefile relocation mutates its PE and can close original section views.
        # Keep validation's relocated image separate from semantic PE tables.
        m,_,contract=validate_entry(entry,pefile.PE(data=raw))
        obj=cls(m,entry['state']['gprs'][1],pefile.PE(data=raw))
        obj.runtime_base=entry['base'];obj.guard=entry['state']['gprs'][8];obj.budget=entry['state']['gprs'][2]
        obj.roots=capture_roots(entry,m,obj.pe);obj.events=[];obj.phase='execute';obj.steps=0;obj.map_probes=0;obj.fault=None
        sites={0x22fcce:0,0x231c07:1,0x22bc85:2,0x2304ba:3}
        site=entry['state']['rip']-entry['base']
        if site not in sites:raise UnsupportedSerialRoute('Unknown initial Serial boundary')
        obj.domain=sites[site];obj.body=obj.resolve_handler(obj.domain,obj.u(0x4ad,1))
        if obj.peek(1)!=1 or obj.u(0x11e0,4)!=1:raise UnsupportedSerialRoute('Initial capture is not the first decoded instruction')
        return obj
    def fail(self,message):raise UnsupportedSerialRoute(message)
    def peek(self,index):
        mask=self.control_mask(index,self.u(0x160+index,1));encoded=self.u(0xf0+8*index)
        return (encoded-mask)&MASK if self.u(0xe8,1) else encoded^mask
    def record(self,name,boundary):
        self.events.append({'name':name,'boundary_rva':boundary,'pc':self.peek(1)&0xffffffff,'sp':self.peek(2)&0xffffffff,
                            'roles':[r['role'] for r in self.roots],
                            'regions':[(r['address'],self.read(r['address'],r['size'])) for r in self.roots]})
    def spec(self):
        if self.body not in self.regions:self.fail('Unknown native semantic wrapper '+hex(self.body))
        return self.regions[self.body]
    def noise_prefix(self):
        spec=self.spec();n=self.u(spec['noise_offset']);constant=int.from_bytes(self.pe.get_data(spec['noise_constant_rva'],8),'little')
        domain=spec['domain'];op=spec['opcode']
        if domain==0:v=n+(mix(n>>13)^constant)
        elif domain==1:v=n^(mix(n-constant if op==1 else n+constant)|1)
        elif domain==2:v=(n>>7)+mix(n^constant)
        else:v=(n>>3)^mix(n-constant if op==1 else n+constant)
        self.put(spec['noise_offset'],v)
    def mutate_byte(self,pc):
        if not 0<=pc<self.u(0x1d8,4):self.fail('Mutation outside bytecode')
        h=mix((pc*PHI)^self.u(0x20)^self.u(0x58)^self.u(0x50))
        byte=(h^(h>>24)^(h>>40))&255;byte=byte or 0x5a
        for base in (self.u(0x1d0),self.u(0x48)):
            self.m.add(base+pc,bytes([self.read(base+pc,1)[0]^byte]),overwrite=True)
        self.put(0x58,self.u(0x58)+1);self.put(0x50,h|1)
    def feedback(self,argument,marker):
        # Recovered 1f1520: nonzero and zero feedback paths are distinct.
        salt=self.u(0x350);frame_word=self.u(0x384,4);key=self.u(0x20)
        h=mix(((marker*PHI+0x95e8f2fe312fca73)&MASK)^key^salt^frame_word)
        value=(rol(h^argument,h&63)*(mix(h^0x44454331)|1))&MASK;zero=value==0
        if zero:self.fail('Zero feedback branch not differentially validated')
        word=mix((0xc2b2ae3d6586a604 if zero else 0x42524d4b)^((marker*MUL)&MASK)^frame_word^salt^self.u(0x260))
        decoded=word^(self.control(1)&0xffffffff)
        seed=(0xd6e8feb8240ba9d2 if zero else 0x42525441)^(((decoded&0xffffffff)*0xc2b2ae3d27d4eb4f)&MASK)^frame_word^salt^((marker*PHI)&MASK)^self.u(0x260)
        self.put(0x348,self.u(0x348)^mix(seed)^decoded)
        self.put(0x20,mix(marker^key^value))
    def continuation(self):
        spec=self.spec()
        if not self.budget&0x80000000:self.fail('Wrapper returns without threaded continuation')
        if self.guard!=self.u(0x11b8):self.fail('Wrapper guard mismatch')
        if self.control(10)&0xffffffff:self.fail('Halted VM')
        if self.u(0xad0,4):self.fail('Pending scheduler queue')
        label=self.control(0)&0xffffffff
        expected=struct.unpack('<4I',self.pe.get_data(0x3e2d90,16))[spec['domain']]
        if label!=expected:self.fail('Outer dispatcher label mismatch')
        if self.budget&0x7fffffff<2:
            self.budget_exhausted()
            return
        pc=self.control(1)&0xffffffff
        attest=mix(self.u(0x4ad,1)^pc^self.u(0x11e8));self.put(0x11e8,attest)
        self.put(0x20,mix(self.u(0x28)^self.u(0x20)^attest))
        self.mutate_byte(self.control(9))
        self.mutate_byte(self.control(8))
        pc=self.control(1)&0xffffffff
        if pc<self.u(0x1d8,4):self.mutate_byte(pc)
        last=self.control(8);self.set_control(9,last)
        marker=int.from_bytes(self.pe.get_data(spec['marker_rva'],4),'little')
        self.feedback(self.u(0x4ad,1)^self.u(0x348),marker)
        # ~(x*(x+1)) & (x^(x+1)) always has bit zero set. Only
        # the low two key bits decide this real scheduler-exit branch.
        if self.u(0x348)&3==1:
            label=int.from_bytes(self.pe.get_data(spec['exit_label_rva'],4),'little')
            self.set_control(0,label);self.phase='return_handoff'
            self.record('return_handoff',spec['return_rva']);return
        self.phase='decode';self.record('next_decoder',spec['decode_entry'])
    def resolve_handler(self,domain,opcode):
        if opcode>=60:self.fail('Extended remap operand prefix')
        slot=int.from_bytes(self.read(self.c+0x4ce+2*(domain*62+opcode),2),'little')
        at=self.u(0x4b8)+4*(domain*62+slot)
        pointer=((int.from_bytes(self.read(at,4),'little',signed=True)^signed32(self.u(0x4c8,4)))+self.u(0x4c0))&MASK
        # Decode fixed thunk data codecs only. Handler instructions are never
        # interpreted or executed by this implementation.
        import capstone as cs
        md=cs.Cs(cs.CS_ARCH_X86,cs.CS_MODE_64);md.detail=True
        ins=[]
        for instruction in md.disasm(self.read(pointer,32),pointer):
            ins.append(instruction)
            if instruction.mnemonic=='jmp':break
            if len(ins)>=4:break
        if len(ins) not in (2,4) or ins[-1].mnemonic!='jmp' or ins[-1].op_str!='rax':self.fail('Unknown thunk template')
        if ins[0].mnemonic=='movabs' and ins[0].reg_name(ins[0].operands[0].reg)=='rax' and (len(ins)==2 or all(x.mnemonic=='not' and x.op_str=='rax' for x in ins[1:3])):
            target=ins[0].operands[1].imm&MASK
        elif ins[0].mnemonic=='mov' and ins[0].op_str.startswith('r11, qword ptr [rip') and ins[1].mnemonic=='movabs' and ins[1].reg_name(ins[1].operands[0].reg)=='rax' and ins[2].op_str=='rax, r11':
            key=int.from_bytes(self.read(ins[0].address+ins[0].size+ins[0].operands[1].mem.disp,8),'little');value=ins[1].operands[1].imm&MASK
            op=ins[2].mnemonic
            if op=='xor':target=value^key
            elif op=='add':target=(value+key)&MASK
            elif op=='sub':target=(value-key)&MASK
            else:self.fail('Unknown thunk transform')
        else:self.fail('Unknown thunk codec')
        body=target-self.runtime_base
        if body not in self.regions or self.regions[body]['opcode']!=opcode or self.regions[body]['domain']!=domain:self.fail('Unknown opcode/body association '+hex(body))
        return body
    def decode_next(self):
        pc,opcode,token=self.decode_header()
        domain=(mid(((self.u(0x1178,4)*MUL)&MASK)^((opcode*PHI)&MASK)^token)>>33)&3
        self.put(0x11a0,self.u(0x11a0)+1)
        labels=struct.unpack('<4I',self.pe.get_data(0x3e2d90,16));self.set_control(0,labels[domain])
        self.control(1) # the remapper's read refreshes PC even for simple opcodes
        self.body=self.resolve_handler(domain,opcode);self.domain=domain;self.budget=(self.budget-1)&0xffffffff
        self.phase='execute';self.record('handler_entry',self.body)
    def decode_header(self):
        pc=self.control(1)&0xffffffff
        # This operation has only demonstrated the first materialized unit.
        if pc>=26 or self.read(self.u(0xb10),1)!=b'\1':self.fail('Undemonstrated materialization route')
        counter=self.u(0x11e0,4);signed=signed32(counter);key=self.u(0x20)
        update_decode_key(self,pc,counter)
        self.advance_register_epoch()
        self.ensure_cached_window(pc,pc)
        self.set_control(8,pc)
        raw=self.read(self.u(0x1d0)+pc,1)[0]^self.read(self.u(0x48)+pc,1)[0]
        self.set_control(1,pc+1)
        token=mix(signed^self.u(0x350)^self.u(0x348)^(pc+1)^key);self.put(0x28,token)
        opcode=self.pe.get_data(0x3ecf00+(raw^0xdd),1)[0]^0x63
        self.put(0x11e0,counter+1,4);self.put(0x4ad,opcode,1)
        if (counter+1)%32==0:self.fail('Decoder epoch transition')
        self.put(0x20,mix(opcode^(pc+1)^key))
        return pc,opcode,token
    def advance_register_epoch(self):
        epoch=(self.u(0x200,4)+1)&0xffffffff
        if epoch>=self.u(0x1fc,4):self.fail('Register rekey')
        self.put(0x200,epoch,4)
    def budget_exhausted(self):
        self.fail('Thread budget exhausted')
    def pop(self):
        sp=self.control(2)&0xffffffff
        if not 0<sp<=1023:self.fail('Stack underflow/invalid SP')
        index=sp-1;self.set_control(2,index)
        mask=((self.u(0xd65+index,1)*self.u(0x1a8))&MASK)^((sp*self.u(0x248))&MASK)^self.u(0x240)
        cell=self.u(0x188)+index*8;value=rol(int.from_bytes(self.read(cell,8),'little')^mask,-(mask>>58))
        tag=self.advance();self.put(0xd65+index,tag,1)
        mask=((tag*self.u(0x1a8))&MASK)^((sp*self.u(0x248))&MASK)^self.u(0x240)
        erased=rol(index^self.u(0x1b0),mask>>58)^mask
        self.m.add(cell,erased.to_bytes(8,'little'),overwrite=True)
        return value
    def read_u16_operand(self):
        pc=self.control(1)&0xffffffff
        self.ensure_cached_window(pc,pc+1)
        word=int.from_bytes(self.read(self.u(0x1d0)+pc,2),'little')
        h=(pc*0x84e97925)&0xffffffff
        operand=((word^((h^0x09f46000)>>13)^h)*0xffff8c3d)&0xffff
        self.set_control(1,pc+2)
        return pc,operand
    def store_register(self):
        self.noise_prefix();pc,operand=self.read_u16_operand()
        value=self.pop();reg=operand&255
        tag=self.advance();self.put(0xb65+reg,tag,1)
        mask=((tag*self.u(0x1a0))&MASK)^((reg*self.u(0x238))&MASK)^self.u(0x230)
        encoded=(value+mask)&MASK if self.u(0x1f8,1) else value^mask
        bank=(self.u(0x1f4,4)+reg)&1;at=self.u(0x180)+8*(bank*256+reg)
        self.m.add(at,encoded.to_bytes(8,'little'),overwrite=True)
        self.put(0x11c0,mix(reg^value^self.u(0x11c0)))
        return {'opcode':5,'mnemonic':'STORE_REG_U16','operand':operand,'register':reg,'value':value,'next_pc':pc+2}
    def step(self):
        if self.fault is not None:self.fail('Stopped state: '+self.fault)
        try:return self._step()
        except ValueError as error:
            self.fault=str(error)
            if isinstance(error,(ContractError,UnsupportedSerialRoute)):raise
            raise UnsupportedSerialRoute(str(error)) from error
    def _step(self):
        if self.phase=='return_handoff':self.fail('Native return continuation is not modeled')
        if self.phase=='decode':self.decode_next()
        opcode=self.u(0x4ad,1);start=self.peek(8)&0xffffffff
        result=self.execute_opcode(opcode)
        result.update(virtual_pc=start,native_body=hex(self.body))
        self.record('opcode_core',self.spec()['core_end']);self.continuation();self.steps+=1
        result.update(boundary_pc=self.peek(1)&0xffffffff,boundary_sp=self.peek(2)&0xffffffff,boundary_phase=self.phase)
        return result
    def execute_opcode(self,opcode):
        if opcode==1:return FirstOpcode.run(self)
        if opcode==5:return self.store_register()
        self.fail('Unknown semantic opcode '+str(opcode))
