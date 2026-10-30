"""Reproduce JACK XXIX without using observations as candidate inputs."""
import argparse
import gzip
import hashlib
import json
import pathlib
import struct
import sys
import pefile
import capstone
from .serial import FirstOpcode,FirstDecode,materialize,permute8,starts

ROOT=pathlib.Path(__file__).resolve().parents[1]
sys.path.insert(0,str(ROOT/'scripts'))
from pafet_state_contract import Memory,require,load_verified,load_frames,ORIGINAL_SHA256
from pafet_state_compare import compare
from pafet_semantic_probe import IsolatedPE,BASE
OUT=ROOT/'jack_xxix_evidence'
BOUNDARIES={0x1f8210:0x1f8358,0x209290:0x2093d8}
DOMAINS={0x22fcce:0,0x231c07:1,0x22bc85:2,0x2304ba:3}

def read(path):return json.loads(gzip.decompress(path.read_bytes()))
def memory(entry):
    m=Memory()
    for r in entry['regions']:m.add(r['address'],bytes.fromhex(r['hex']))
    return m
def digest(data):return hashlib.sha256(data).hexdigest()

def resolve(entry,m):
    """Resolve the captured before-state remap and generated thunk independently."""
    ctx=entry['state']['gprs'][1];domain=DOMAINS[entry['state']['rip']-entry['base']]
    q=lambda at,n=8:int.from_bytes(m.read(at,n),'little')
    opcode=q(ctx+0x4ad,1);slot=q(ctx+0x4ce+2*(domain*62+opcode),2)
    table=q(ctx+0x4b8);relative=int.from_bytes(m.read(table+4*(domain*62+slot),4),'little',signed=True)
    key=int.from_bytes(m.read(ctx+0x4c8,4),'little',signed=True)
    thunk=((relative^key)+q(ctx+0x4c0))&((1<<64)-1)
    require(thunk==entry['state']['gprs'][0],'Independent table resolver differs from captured call target','semantic')
    md=capstone.Cs(capstone.CS_ARCH_X86,capstone.CS_MODE_64);md.detail=True
    ins=list(md.disasm(m.read(thunk,32),thunk))[:4]
    if len(ins)==4 and [i.mnemonic for i in ins]==['movabs','not','not','jmp'] and ins[0].reg_name(ins[0].operands[0].reg)=='rax' and all(i.op_str=='rax' for i in ins[1:]):
        return {'opcode':opcode,'domain':domain,'slot':slot,'thunk':hex(thunk),'operation':'double-not','body_rva':(ins[0].operands[1].imm&((1<<64)-1))-entry['base']}
    require(len(ins)==4 and ins[0].mnemonic=='mov' and ins[0].op_str.startswith('r11, qword ptr [rip') and ins[1].mnemonic=='movabs' and ins[3].mnemonic=='jmp' and ins[3].op_str=='rax','Unknown thunk template','semantic')
    cookie=q(ins[0].address+ins[0].size+ins[0].operands[1].mem.disp);immediate=ins[1].operands[1].imm&((1<<64)-1)
    operation=ins[2].mnemonic
    if operation=='xor':target=immediate^cookie
    elif operation=='add':target=(immediate+cookie)&((1<<64)-1)
    elif operation=='sub':target=(immediate-cookie)&((1<<64)-1)
    else:raise ValueError('Unknown thunk operation')
    return {'opcode':opcode,'domain':domain,'slot':slot,'thunk':hex(thunk),'operation':operation,'body_rva':target-entry['base']}

def regions_match(candidate,observed,entry):
    rows=[]
    for r in entry['contract']['required_regions']:
        a=candidate.read(r['address'],r['size']);b=observed.read(r['address'],r['size'])
        rows.append({'role':r['role'],'bytes':r['size'],'different_bytes':sum(x!=y for x,y in zip(a,b)),'candidate_sha256':digest(a),'native_sha256':digest(b)})
    require(not any(r['different_bytes'] for r in rows),'Semantic virtual-memory comparison failed','semantic',regions=rows)
    return rows

def semantic(entry,oracle_path,kind,pe):
    candidate=memory(entry);ctx=entry['state']['gprs'][1]
    if kind=='instruction':
        dispatch=resolve(entry,candidate);body=dispatch['body_rva'];require(body in BOUNDARIES,'Unmodeled opcode wrapper','semantic',body=hex(body))
        output=FirstOpcode(candidate,ctx,pe,body).run();boundary=entry['base']+BOUNDARIES[body]
    else:
        dispatch=None;output=FirstDecode(candidate,ctx,pe).run();boundary=entry['stop']
    # Only now do native measurements become available to the semantic path.
    oracle=read(oracle_path);observed=memory(entry);steps=0
    for row in oracle['trace']:
        for at,data in row['writes']:observed.add(at,bytes.fromhex(data),overwrite=True)
        steps+=1
        if row['after']['rip']==boundary:break
    else:raise ValueError('Static semantic boundary absent from native trace')
    return {'all_virtual_regions_match':True,'native_instructions_to_boundary':steps,'boundary_rva':hex(boundary-entry['base']),'dispatch':dispatch,'result':output,'regions':regions_match(candidate,observed,entry),
            'scope':'Whole declared virtual context and pointed roots; machine call-stack scratch, GPR temporaries and native flags are not outputs of the reduced semantic model.'}

def helper_validation(pe):
    # Explicit synthetic states: these tests do not count as native Windows paths.
    env=IsolatedPE(pe)
    for x in range(256):require(env.call(BASE+0x1ecfc0,x)==permute8(x),'Permutation mismatch','semantic',input=x)
    ctx=env.alloc(0x2000);buf=env.alloc(2678);shadow_ptr=env.alloc(2678);bitmap=env.alloc(104)
    for offset,pointer in [(0x1d0,buf),(0x48,shadow_ptr),(0xb50,bitmap)]:env.putq(ctx+offset,pointer)
    env.mu.mem_write(ctx+0x1d8,struct.pack('<I',2678));cases=[];blob=pe.get_data(0x3e9c10,2678)
    canonical=bytearray(2678)
    for name,period,current in [('zero_shadow',0,0),('nonzero_shadow',0,0),('protected_windows',32,3)]:
        shadow=bytes(2678) if name=='zero_shadow' else bytes((i*37+11)&255 for i in range(2678))
        env.mu.mem_write(shadow_ptr,shadow);env.mu.mem_write(buf,bytes(2678));env.mu.mem_write(bitmap,bytes(104));env.putq(ctx+0xb20,0)
        env.mu.mem_write(ctx+0xaf4,struct.pack('<I',period));env.mu.mem_write(ctx+0xaf0,struct.pack('<I',current));expected=bytearray(2678)
        for block in range(103):
            lo,data=materialize(blob,block,shadow,period,current);expected[lo:lo+len(data)]=data
            env.call(BASE+0x1f1fe0,ctx,0,block)
            require(bytes(env.mu.mem_read(buf,2678))==expected,'Materializer buffer mismatch','semantic',case=name,block=block)
            require(env.q(ctx+0xb20)==block+1,'Materializer counter mismatch','semantic')
            require(bytes(env.mu.mem_read(bitmap+lo//26,1))==b'\1','Materializer bitmap mismatch','semantic')
        if name=='zero_shadow':canonical[:]=expected
        cases.append({'case':name,'blocks':103,'all_buffer_bytes_counter_bitmap_match':True,'sha256':digest(expected)})
    (OUT/'serial.unmasked.bin').write_bytes(canonical)
    return {'permutation_inputs':256,'materializer_calls':309,'native_helper_calls':565,'cases':cases,'unmasked_blob_sha256':digest(canonical),'physical_block_starts':starts(),
            'scope':'Original x64 helpers in isolated Unicorn with synthetic initialized memory. These are not additional Windows captures or proof of 103 opcode semantics.'}

def main():
    ap=argparse.ArgumentParser(description=__doc__);ap.add_argument('--skip-helpers',action='store_true');ap.add_argument('--output',type=pathlib.Path,default=OUT/'validation.json');args=ap.parse_args()
    require(sys.flags.optimize==0,'Reused isolated helper harness uses assertions; run without python -O','unsupported-runtime')
    registry=json.loads((OUT/'corpus.json').read_bytes())
    for path,sha in registry['artifacts'].items():load_verified(ROOT/path,sha)
    require(digest((ROOT/'pafet.bin').read_bytes())==ORIGINAL_SHA256,'Original PE identity differs','integrity')
    pe=pefile.PE(str(ROOT/'pafet.bin'));rows=[]
    for case in registry['captures']:
        folder=ROOT/case['path'];manifest=load_frames(folder)
        for item in manifest['frames']:
            a=folder/(item['stem']+'.entry.json.gz');b=folder/(item['stem']+'.trace.json.gz');entry=read(a);oracle=read(b)
            row={'case':folder.name,'kind':case['kind'],'windows_unicorn':compare(entry,oracle)}
            require(row['windows_unicorn']['all_match'],'Windows replay mismatch','comparison',case=folder.name)
            if case['kind'] in ('instruction','decoder'):
                row['semantic']=semantic(entry,b,case['kind'],pe)
            elif case['kind']=='decoder-gap':
                try:semantic(entry,b,'decoder',pe)
                except ValueError as error:
                    require(str(error)=='Unimplemented decoder map refresh','Unexpected semantic failure','semantic')
                    row['semantic']={'status':'unknown','reason':str(error),'first_unmodeled_native_rva':'0x229df4','candidate_result_emitted':False}
                else:raise ValueError('Recorded decoder gap unexpectedly changed; review and update its contract')
            rows.append(row);print(folder.name,'Windows/Unicorn PASS',len(oracle['trace']),'semantic='+('PASS' if row.get('semantic',{}).get('all_virtual_regions_match') else row.get('semantic',{}).get('status','not-claimed')),flush=True)
    report={'all_claimed_checks_pass':True,'captures':rows,'native_windows_instructions':sum(r['windows_unicorn']['instructions_compared'] for r in rows),'first_instruction_semantic_cases':sum(r['kind']=='instruction' for r in rows),'helper_validation':None if args.skip_helpers else helper_validation(pe),
            'source_sha256':{p.as_posix():digest((ROOT/p).read_bytes()) for p in map(pathlib.Path,['devirt/serial.py','devirt/serial_validate.py','scripts/pafet_native_step_capture.py','scripts/pafet_state_contract.py','scripts/pafet_state_replay.py','scripts/pafet_state_compare.py','scripts/pafet_semantic_probe.py','scripts/pafet_audit_xxiv.py','scripts/pafet_serial_audit_xxix.py'])},'scope':'First opcode and bounded decoder routes; explicit unknown map-refresh branch; no full Serial VM or RC4-program claim.'}
    args.output.write_bytes(json.dumps(report,indent=2).encode()+b'\n')
    print('PASS: pinned native paths and claimed semantic boundaries; unknown route retained')
if __name__=='__main__':main()
