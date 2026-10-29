#!/usr/bin/env python3
"""Independent original-bytecode decoder and bounded decoded-state interpreter.

Input is extracted PE bytecode, not a pre-captured instruction sequence.
Native opaque encodings, guards and threaded scheduling are kept separate
from this logical projection. Unsupported logical opcodes fail explicitly.
"""
import ctypes,gzip,hashlib,json,pathlib,struct
import pefile
from pafet_materialize_xxiii import extract,block_starts,mid,PHI,MUL
from pafet_writer_test_xxiii import build,Result

ROOT=pathlib.Path(__file__).resolve().parents[1];MASK=(1<<64)-1
OPS={1:'LOAD_CONST',4:'LOAD_REG',5:'STORE_REG',8:'ADD',21:'NEQ',22:'SLT',24:'SGT',
     26:'JUMP',27:'JZ',28:'JNZ',29:'RETURN',31:'DROP',32:'CALL',41:'XOR',44:'NOT'}
WIDTHS={1:[4],4:[2],5:[2],26:[4],27:[4],28:[4],32:[2,1]}

def runtime_selection(context,logical_opcode,native_caller,root,table_entry_i32=None,escape_operand=None):
    """Project native routing from explicit runtime state; never guess a channel.

    The native root CALL site is an input because its flattened control flow
    is not reconstructed by this logical decoder. Indirect table memory is
    also an input; omitted memory produces an explicit unresolved trampoline.
    """
    q=lambda off:struct.unpack_from('<Q',context,off)[0]
    d=lambda off:struct.unpack_from('<I',context,off)[0]
    roots={0x140041187:3,0x140042be5:1,0x140042cb2:2,0x1400479f3:0}
    if root:
        if native_caller not in roots:raise ValueError('unknown native root caller')
        channel=roots[native_caller]
    else:
        channel=(mid(((d(12)*MUL)&MASK)^((logical_opcode*PHI)&MASK)^q(0xe0))>>33)&3
    index=logical_opcode
    if logical_opcode in (60,61):
        if escape_operand is None:raise ValueError('escape path requires decoded u16 operand and context')
        index=(escape_operand+62)&0xffffffff
    at=0xf64+2*(channel*62+index)
    if at+2>len(context):raise ValueError('alias lookup outside supplied context snapshot')
    alias=struct.unpack_from('<H',context,at)[0]
    key=d(0xf50);base=q(0xf48);trampoline=None
    if table_entry_i32 is not None:
        signed=lambda x:(x&0xffffffff) if (x&0xffffffff)<0x80000000 else (x&0xffffffff)-(1<<32)
        trampoline=((signed(table_entry_i32)^signed(key))+base)&MASK
    return {'channel':channel,'alias':alias,'table_address':q(0xf40),'table_index':channel*62+alias,
        'key_u32':key,'handler_base':base,'trampoline':trampoline,
        'requires_indirect_table_memory':table_entry_i32 is None}

class Decoder:
    def __init__(self,pe):
        self.code=extract(pe)
        self.table=pe.get_data(0x3dfcb0,256)
        self.targets=block_starts()
        self.constants=[]
        for i in range(13):
            k=struct.unpack('<I',pe.get_data(0x3dd520+4*i,4))[0]
            a=struct.unpack('<Q',pe.get_data(0x3dd560+8*k,8))[0]
            b=struct.unpack('<Q',pe.get_data(0x3dd5d0+8*k,8))[0]
            self.constants.append((b^a) if k%3==0 else ((b+a)&MASK if k%3==1 else (b-a)&MASK))
    def operand(self,pc,width):
        if pc+width>len(self.code):raise ValueError('operand out of bytecode')
        b=self.code[pc:pc+width]
        x=(pc*0x7af13fd3)&0xffffffff
        if width==1:return b[0]^0xad
        if width==2:return ((int.from_bytes(b,'little')^x^(x>>13)^0xffff9a10)*0x1a8d)&65535
        if width==4:
            packed=b[3]<<24|b[1]<<16|b[2]<<8|b[0]
            return ((packed^x^(x>>13)^0xb2089a10)*0x0d936053)&0xffffffff
        raise ValueError(width)
    def decode(self,pc):
        start=pc;b=self.code[pc];raw=self.table[b^0x33]^0xeb;pc+=1
        if raw not in OPS:raise ValueError(f'unsupported logical opcode {raw} at {start}')
        args=[];readers=[]
        for width in WIDTHS.get(raw,[]):
            value=self.operand(pc,width)
            readers.append({'pc':pc,'width':width,'encoded_hex':self.code[pc:pc+width].hex(),'decoded':value})
            args.append(value);pc+=width
        return {'opcode_pc':start,'operand_pc':start+1,'encoded_opcode':b,'logical_opcode':raw,
            'operation':OPS[raw],'operands':args,'reader_events':readers,'fallthrough_pc':pc}

class Machine:
    def __init__(self,decoder,user,lib,initial_registers=None):
        self.decoder=decoder;self.user=user;self.lib=lib;self.pc=0;self.stack=[]
        self.regs=list(initial_registers) if initial_registers is not None else [0]*256
        self.working=bytearray();self.output=None;self.index=0;self.halted=False;self.result=None
    def host(self,op,args):
        if op==0:self.working=bytearray(self.user);return 0
        if op==1:self.working.reverse();return 0
        if op==2:self.index=args[0];return 0
        if op==3:return int(self.index<len(self.working))
        if op==5:return self.index
        if op==6:self.output=bytes(self.working);return 0
        if op!=4:raise ValueError(('unsupported host',op))
        n=len(self.working);obj=bytearray(32)
        obj[16:24]=struct.pack('<Q',n);obj[24:32]=struct.pack('<Q',15 if n<16 else n)
        if n<16:obj[:n]=self.working
        else:obj[:8]=struct.pack('<Q',0x60001000)
        cobj=ctypes.create_string_buffer(bytes(obj),32)
        heap=ctypes.create_string_buffer(bytes(self.working)+b'\0',n+1)
        r=Result();self.lib.pafet_host4_xxiii(cobj,heap,0x60000000,self.index,ctypes.byref(r))
        self.working=bytearray((cobj.raw if n<16 else heap.raw)[:n])
        return r.rax
    def step(self):
        ir=self.decoder.decode(self.pc);op=ir['logical_opcode'];a=ir['operands'];pc=ir['fallthrough_pc']
        before=list(self.stack)
        if op==1:self.stack.append(self.decoder.constants[a[0] if a[0]<13 else 0])
        elif op==4:self.stack.append(self.regs[a[0]&255])
        elif op==5:self.regs[a[0]&255]=self.stack.pop()
        elif op==31:self.stack.pop()
        elif op==44:self.stack[-1]=~self.stack[-1]&MASK
        elif op in (8,21,22,24,41):
            y=self.stack.pop();x=self.stack.pop()
            sx=x if x<(1<<63) else x-(1<<64);sy=y if y<(1<<63) else y-(1<<64)
            value={8:lambda:(x+y)&MASK,41:lambda:x^y,21:lambda:int(x!=y),22:lambda:int(sx<sy),24:lambda:int(sx>sy)}[op]()
            self.stack.append(value)
        elif op in (26,27,28):
            target=self.decoder.targets[a[0]]
            take=True if op==26 else ((self.stack.pop()==0) if op==27 else (self.stack.pop()!=0))
            if take:pc=target
        elif op==32:
            nargs=min(a[1],32)
            args=self.stack[-nargs:] if nargs else []
            if nargs:del self.stack[-nargs:]
            self.stack.append(self.host(a[0],args))
        elif op==29:self.result=self.stack.pop();self.halted=True
        else:raise ValueError(op)
        self.pc=pc
        return {**ir,'stack_before':before,'stack_after':list(self.stack),
            'post_core_pc':ir['fallthrough_pc'],'next_opcode_pc':pc,
            'deferred_transfer':op in (26,27,28) and pc!=ir['fallthrough_pc']}

def static_cfg(decoder):
    pending=[0];seen={};edges=[]
    while pending:
        pc=pending.pop()
        if pc in seen:continue
        ir=decoder.decode(pc);seen[pc]=ir;op=ir['logical_opcode'];successors=[]
        if op in (26,27,28):successors.append(decoder.targets[ir['operands'][0]])
        if op not in (26,29):successors.append(ir['fallthrough_pc'])
        for target in successors:
            edges.append({'from':pc,'to':target,'deferred':op in (26,27,28)})
            pending.append(target)
    return {'entry':0,'nodes':[seen[x] for x in sorted(seen)],'edges':edges,
        'instructions':len(seen),'physical_blocks':len({x//24 for x in seen}),
        'scope':'Conservative logical CFG: both conditional edges. Not native dispatcher/guard CFG.'}

def validate_capture(decoder,lib,path,summary):
    first=None;pre={};post={};raw=[]
    with gzip.open(path,'rt') as f:
        for line in f:
            event=json.loads(line)
            if event['kind']=='handler_state':pre[event['step']]=event
            elif event['kind']=='core_state':post[event['step']]=event
            elif event['kind']=='handler_enter':raw.append(event['raw_op'])
    first=pre[1];machine=Machine(decoder,bytes.fromhex(summary['input_hex']),lib,first['registers']);program=[]
    for step in sorted(pre):
        event=pre[step]
        assert machine.pc+1==event['pc'],('pre PC',step,machine.pc,event['pc'])
        assert machine.stack==event['stack'],('pre stack',step)
        assert machine.regs==event['registers'],('pre registers',step)
        ir=machine.step()
        assert ir['logical_opcode']==raw[step-1],('raw opcode',step)
        if step in post:
            after=post[step]
            assert ir['post_core_pc']==after['pc'],('post PC',step,ir,after['pc'])
            assert machine.stack==after['stack'],('post stack',step,ir,machine.stack,after['stack'])
            assert machine.regs==after['registers'],('post registers',step,ir)
        program.append(ir)
    assert machine.halted
    expected=summary.get('comparison_output_hex',summary['stdout'].split('SOL-OUTPUT ')[1].split('\n')[0])
    assert machine.output is not None and machine.output.hex()==expected,(machine.output,expected)
    return {'capture':path.name,'operations':len(program),'post_states_compared':len(post),
        'all_pre_decoded_pc_stack_256registers_match':True,
        'all_available_post_decoded_pc_stack_256registers_match':True,
        'output_hex':machine.output.hex(),'bytecode_sha256':hashlib.sha256(decoder.code).hexdigest()},program

def main():
    import argparse
    ap=argparse.ArgumentParser();ap.add_argument('--captures',type=pathlib.Path,default=ROOT/'jack_xxiii_evidence/reference_traces');args=ap.parse_args()
    d=Decoder(pefile.PE(str(ROOT/'pafet.bin')));lib=build();results=[];first_ir=None
    for path in sorted(args.captures.glob('*.jsonl.gz')):
        label=path.name.split('.')[0];summary=json.loads((args.captures/(label+'.summary.json')).read_text())
        r,program=validate_capture(d,lib,path,summary);results.append(r)
        if label=='a8':first_ir=program
        print(label,r['operations'],'all decoded states + output match',flush=True)
    out=ROOT/'jack_xxiii_evidence';out.mkdir(exist_ok=True)
    (out/'original_program_ir.json').write_text(json.dumps(static_cfg(d),indent=2)+'\n')
    (out/'decoder_differential.json').write_text(json.dumps({'captures':results,
        'scope':'Decoded logical state. Initial untouched registers supplied as initial state; no native encoded/guard state equivalence claim.'},indent=2)+'\n')
    if first_ir is not None:(out/'decoded_a8_ir.json').write_text(json.dumps(first_ir,indent=2)+'\n')
if __name__=='__main__':main()
