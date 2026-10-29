#!/usr/bin/env python3
"""Cookie-correct User-VM replay, with an uncorrected negative control.

Run under Linux/WSL with GCC, Unicorn, Capstone and pefile. No translated
instruction or captured register is edited to manufacture a match.
"""
import argparse, gzip, hashlib, importlib.util, json, pathlib, struct
import unicorn
import capstone
from unicorn.x86_const import *
import pafet_native_diff_xxiv as differential

ROOT = pathlib.Path(__file__).resolve().parents[1]
OUT = ROOT/'jack_xxvii_evidence'
NAMES = differential.NAMES
COOKIE_RVA = 0x40d020

def prepare(uc,vector,runtime,restore_cookie):
    for name in NAMES:
        uc.reg_write(globals()['UC_X86_REG_'+name.upper()],int(vector['native_before'][name],16))
    rsp = int(vector['native_before']['rsp'],16)
    uc.mem_write(rsp,struct.pack('<Q',0xdeadbeef00000000))
    gs = 0x50000000
    uc.mem_map(gs,4096)
    uc.mem_write(gs+0x58,struct.pack('<Q',int(vector['tls_array'],16)))
    uc.reg_write(UC_X86_REG_GS_BASE,gs)
    if restore_cookie:
        cookie = bytes.fromhex(vector['image_cookie_hex'])
        for base in {0x140000000,runtime}:
            uc.mem_write(base+COOKIE_RVA,cookie)

def control(old,vector,runtime):
    constructor = unicorn.Uc
    final = {}
    def factory(*a,**k):
        uc = constructor(*a,**k); start = uc.emu_start
        def execute(entry,stop,*a,**k):
            prepare(uc,vector,runtime,False)
            start(entry,stop,*a,**k)
            final.update({n:hex(uc.reg_read(globals()['UC_X86_REG_'+n.upper()])) for n in NAMES})
        uc.emu_start = execute
        return uc
    old.Uc = factory
    try:
        memory = old.emulate_one(vector,pe_runtime_base=runtime)
    finally: old.Uc = constructor
    differences = {n:{'replay':final[n],'native':vector['native_after_caller'][n]}
                   for n in NAMES if int(final[n],16) != int(vector['native_after_caller'][n],16)}
    return {'memory_matches':memory['ok'],'memory_comparison':memory,'register_differences':differences}

def diagnose_memory(old,vector,runtime):
    """Locate replay writes to bytes that disagree at the native return boundary.

    This is a boundary diagnosis, not a native instruction trace. It must not
    be labelled the first instruction at which the Windows execution diverged.
    """
    constructor = unicorn.Uc
    ctx = int(vector['native_before']['rcx'],16)
    expected = bytes.fromhex(vector['after']['ctx_hex'])
    entry = bytes.fromhex(vector['ctx_hex'])
    writes = []; diagnosis = {}
    md = capstone.Cs(capstone.CS_ARCH_X86,capstone.CS_MODE_64)
    def factory(*a,**k):
        uc = constructor(*a,**k); start = uc.emu_start
        def on_write(u,access,address,size,value,data):
            if ctx <= address < ctx+len(entry):
                pc = u.reg_read(UC_X86_REG_RIP)
                ins = next(md.disasm(bytes(u.mem_read(pc,15)),pc))
                writes.append({'pc':hex(pc),'instruction':ins.mnemonic+' '+ins.op_str,
                               'offset':address-ctx,'size':size,
                               'value':hex(value&((1<<(size*8))-1))})
        uc.hook_add(unicorn.UC_HOOK_MEM_WRITE,on_write)
        def execute(entry_pc,stop,*a,**k):
            prepare(uc,vector,runtime,True)
            diagnosis['entry_context_matches_capture'] = bytes(uc.mem_read(ctx,len(entry))) == entry
            start(entry_pc,stop,*a,**k)
            actual = bytes(uc.mem_read(ctx,len(entry)))
            offsets = [i for i,(a,b) in enumerate(zip(actual,expected)) if a != b]
            affected = set(offsets)
            relevant = [w for w in writes if any(i in affected for i in range(w['offset'],w['offset']+w['size']))]
            diagnosis.update(context_different_bytes=len(offsets),different_offsets=list(map(hex,offsets)),
                first_replay_write_to_a_final_mismatching_byte=relevant[0] if relevant else None,
                relevant_write_count=len(relevant),
                examples=[{'offset':hex(i),'entry':entry[i:i+8].hex(),'native_return':expected[i:i+8].hex(),
                           'replay_return':actual[i:i+8].hex()} for i in (0x38,0x1800)],
                scope='Replay write localization only; native intermediate instruction states were not captured; root cause remains open.')
        uc.emu_start = execute
        return uc
    old.Uc = factory
    try: old.emulate_one(vector,pe_runtime_base=runtime)
    finally: old.Uc = constructor
    return diagnosis

def main():
    ap = argparse.ArgumentParser(); ap.add_argument('--no-build',action='store_true')
    ap.add_argument('--historical-control',action='store_true'); args = ap.parse_args()
    OUT.mkdir(exist_ok=True)
    provenance = json.loads((OUT/'capture_provenance.json').read_bytes())
    blob = (OUT/'cookie_frames.json.gz').read_bytes()
    assert hashlib.sha256(blob).hexdigest() == provenance['capture_sha256']
    assert hashlib.sha256((ROOT/'pafet.bin').read_bytes()).hexdigest() == provenance['original_sha256']
    captures = json.loads(gzip.decompress(blob))
    spec = importlib.util.spec_from_file_location('cookie_harness',ROOT/'scripts/pafet_h3bea0_unicorn_xiii.py')
    old = importlib.util.module_from_spec(spec); spec.loader.exec_module(old)
    if args.historical_control:
        path = ROOT/'jack_xxiv_evidence/fresh_native_vectors.json.gz'
        historical = json.loads(gzip.decompress(path.read_bytes()))
        cases = [{'case':label,'frame':i,**control(old,v,int(c['pe_base'],16))}
                 for label,c in historical.items() for i,v in enumerate(c['vectors'])]
        assert len(cases) == 6 and all(c['memory_matches'] for c in cases)
        assert [(c['case'],c['frame'],list(c['register_differences'])) for c in cases if c['register_differences']] == [('alice',0,['rcx'])]
        report = {'historical_capture_sha256':hashlib.sha256(path.read_bytes()).hexdigest(),
                  'cases':cases,'scope':'Historical missing-cookie negative control; the old capture has no process cookie and cannot validate its restoration.'}
        (OUT/'historical_cookie_control.json').write_text(json.dumps(report,indent=2)+'\n',encoding='utf-8')
        print('Historical control: 6/6 memory; only alice/0 RCX differs')
        return
    differential.OUT = OUT
    lib = differential.library(not args.no_build)
    cases = []
    for label,capture in captures.items():
        runtime = int(capture['pe_base'],16)
        for index,vector in enumerate(capture['vectors']):
            result = None
            try:
                result = differential.run_vector(lib,old,label,index,vector,runtime,
                    lambda uc,v:prepare(uc,v,runtime,True))
                assert result['historical_capture_comparison']['ok'],result['historical_capture_comparison']
                differences = {n:[result['final_gprs'][n],vector['native_after_caller'][n]] for n in NAMES
                               if int(result['final_gprs'][n],16) != int(vector['native_after_caller'][n],16)}
                assert not differences,('native return',differences)
                negative = control(old,vector,runtime)
            except Exception as error:
                failure = {'all_match':False,'case':label,'frame':index,'error':repr(error),
                           'capture_sha256':provenance['capture_sha256'],
                           'replay_sha256':hashlib.sha256(pathlib.Path(__file__).read_bytes()).hexdigest(),
                           'source_sha256':{str(p):hashlib.sha256((ROOT/p).read_bytes()).hexdigest() for p in (
                               'pafet.bin','src/pafet_lifted_xxiv.cpp','src/pafet_native_state_xxiv.h',
                               'src/pafet_native_api_xxiv.cpp','scripts/pafet_native_diff_xxiv.py',
                               'scripts/pafet_h3bea0_unicorn_xiii.py')},
                           'library_sha256':hashlib.sha256((OUT/'build/libpafet_xxiv.so').read_bytes()).hexdigest(),
                           'completed_cases':cases,'scope':'Stopped at the first failing fresh frame; no six-frame closure claimed.'}
                if result:
                    failure.update(steps=result['steps'],instruction_lockstep=result['all_instruction_states_match'],
                        native_memory_comparison=result['historical_capture_comparison'],
                        native_return_register_differences={n:[result['final_gprs'][n],vector['native_after_caller'][n]]
                            for n in NAMES if int(result['final_gprs'][n],16)!=int(vector['native_after_caller'][n],16)},
                        memory_diagnosis=diagnose_memory(old,vector,runtime))
                (OUT/'first_divergence.json').write_text(json.dumps(failure,indent=2)+'\n',encoding='utf-8')
                raise
            row = {'case':label,'frame':index,'steps':result['steps'],'all_16_native_return_gprs_match':True,
                   'native_context_and_captured_extras_match':True,'instruction_lockstep':result['all_instruction_states_match'],
                   'process_cookie_hex':vector['image_cookie_hex'],'final_gprs':result['final_gprs'],
                   'negative_control':negative,'captured_extra_regions':len(vector['extra'])}
            cases.append(row)
            print(label,index,result['steps'],'PASS 16 GPRs + native memory + instruction lockstep; control',list(negative['register_differences']),flush=True)
    assert len(cases) == 6
    sensitive = sum(bool(c['negative_control']['register_differences']) or not c['negative_control']['memory_matches'] for c in cases)
    assert sensitive > 0,'corpus did not exercise the cookie-sensitive path'
    report = {'all_match':True,'frames':6,'cookie_sensitive_frames':sensitive,'cases':cases,
              'capture_sha256':provenance['capture_sha256'],
              'translated_source_sha256':hashlib.sha256((ROOT/'src/pafet_lifted_xxiv.cpp').read_bytes()).hexdigest(),
              'cpu_header_sha256':hashlib.sha256((ROOT/'src/pafet_native_state_xxiv.h').read_bytes()).hexdigest(),
              'library_sha256':hashlib.sha256((OUT/'build/libpafet_xxiv.so').read_bytes()).hexdigest(),
              'replay_sha256':hashlib.sha256(pathlib.Path(__file__).read_bytes()).hexdigest(),
              'scope':'0x14003bea0: six fresh native frames, corrected entry RSP/TLS and captured image cookie; C++/original-x64 lockstep; no output register patched',
              'limitations':['finite captured frames','native initial RFLAGS/XMM unavailable','captured memory only','two-byte SHA-gate variant','no new queue exception coverage']}
    (OUT/'cookie_differential.json').write_text(json.dumps(report,indent=2)+'\n',encoding='utf-8')
    (OUT/'first_divergence.json').unlink(missing_ok=True)
    print('PASS 6/6; negative control reproduces RCX discrepancy in',sensitive,'frames')

if __name__ == '__main__': main()
