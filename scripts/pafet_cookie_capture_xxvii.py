#!/usr/bin/env python3
"""Fresh six-frame User-VM corpus with the process security cookie recorded.

Preserve the XXIV collector and evidence. Capture the first two 0x3bea0
invocations for each of alice, ramon and a*23 in the existing gate variant.
"""
import gzip, hashlib, json, pathlib, threading, uuid
import frida
from pafet_capture_native_xxiv import AGENT as ORIGINAL_AGENT, ROOT

OUT = ROOT/'jack_xxvii_evidence'
COOKIE_RVA = 0x40d020

def agent():
    source = ORIGINAL_AGENT.replace('TRANSFER_FILTER', '')
    replacements = {
        'native_before:regs(c),': 'native_before:regs(c),image_cookie_hex:hex(base.add(0x40d020),8),thread_id:this.threadId,',
        'v.native_after=regs(this.context);': 'v.image_cookie_after_hex=hex(base.add(0x40d020),8);v.native_after=regs(this.context);',
        "onLeave(){if(this.user)send({kind:'done',pe_base:base.toString(),vectors,entries,open,errors});}":
        "onLeave(){if(this.user){send({kind:'done',pe_base:base.toString(),vectors,entries,open,errors});recv('ack',()=>{}).wait();}}",
    }
    for before, after in replacements.items():
        assert source.count(before) == 1, before
        source = source.replace(before, after)
    return source

def main():
    OUT.mkdir(exist_ok=True)
    original = (ROOT/'pafet.bin').read_bytes()
    executable = ROOT/'pafet_pass8.exe'
    variant = executable.read_bytes()
    offsets = [i for i,(a,b) in enumerate(zip(original,variant)) if a != b]
    assert len(original) == len(variant) and offsets == [0x395efb,0x395efc]
    source = agent()
    provenance = {'run_id':str(uuid.uuid4()),'original_sha256':hashlib.sha256(original).hexdigest(),
                  'oracle_sha256':hashlib.sha256(variant).hexdigest(),
                  'collector_sha256':hashlib.sha256(pathlib.Path(__file__).read_bytes()).hexdigest(),
                  'base_collector_sha256':hashlib.sha256((ROOT/'scripts/pafet_capture_native_xxiv.py').read_bytes()).hexdigest(),
                  'agent_sha256':hashlib.sha256(source.encode()).hexdigest(),'cookie_rva':hex(COOKIE_RVA),
                  'patch_offsets':list(map(hex,offsets)),'frida_version':frida.__version__,
                  'selection':'first two handler invocations in each of three independent processes',
                  'limitations':['native initial RFLAGS/XMM unavailable','captured regions only','two-byte SHA-gate variant']}
    device = frida.get_local_device()
    captures = {}
    for label,user in [('alice',b'alice'),('ramon',b'ramon'),('long_a23',b'a'*23)]:
        done = threading.Event(); result = {}; errors = []
        pid = device.spawn([str(executable)],stdio='pipe')
        session = None
        try:
            session = device.attach(pid); script = session.create_script(source)
            def message(msg,data):
                if msg['type'] == 'error': errors.append(msg); done.set()
                elif msg['type'] == 'send':
                    result.update(msg['payload']); script.post({'type':'ack'}); done.set()
            script.on('message',message); script.load(); device.resume(pid)
            device.input(pid,user+b'\r\nserial01\r\n')
            assert done.wait(60),('capture timeout',label)
            assert not errors and not result.get('errors') and not result.get('open'),(errors,result.get('errors'))
            assert result['entries'] == len(result['vectors']) == 2
            assert len({v['thread_id'] for v in result['vectors']}) == 1
            for v in result['vectors']:
                assert 'native_after_caller' in v
                assert len(v['image_cookie_hex']) == 16 and v['image_cookie_hex'] == v['image_cookie_after_hex']
                assert all(info.get('after_hex') is not None for info in v['extra'].values())
            captures[label] = result
            print(label,'2 frames, process cookie stable, caller return captured',flush=True)
        finally:
            try: device.kill(pid)
            except frida.ProcessNotFoundError: pass
            if session:
                try: session.detach()
                except frida.InvalidOperationError: pass
    blob = gzip.compress(json.dumps(captures,separators=(',',':')).encode(),mtime=0)
    (OUT/'cookie_frames.json.gz').write_bytes(blob)
    provenance.update(frames=6,capture_sha256=hashlib.sha256(blob).hexdigest())
    (OUT/'capture_provenance.json').write_text(json.dumps(provenance,indent=2)+'\n',encoding='utf-8')

if __name__ == '__main__': main()
