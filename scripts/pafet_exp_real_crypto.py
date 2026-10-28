#!/usr/bin/env python3
"""Verify 0x1401af6b0 is the REAL plaintext producer.
Hook entry+exit; capture r14 state struct contents at entry; capture plaintext
buffer address if r14 contains it.
Run 3 processes × 3 credentials. Check if state is key-dependent and process-stable."""
import subprocess, frida, sys, hashlib

EXE = r'C:\Users\Ramón\Desktop\pafet_pass8.exe'

JS = r'''
Process.setExceptionHandler(d => { try { if (parseInt(d.context.rdi.toString(16).slice(-8),16)===0xe06d7363) return false; } catch(e){} return false; });
const mods = Process.enumerateModules();
let MAIN=null; for(const m of mods) if (/pafet.*\.exe$/i.test(m.name)) { MAIN=m; break; }
const BASE = MAIN.base;
const CIPHER = BASE.add(0xc0510);
const FN = BASE.add(0x1af6b0);
const DISP = BASE.add(0x396990);
function hex(ptr, n) { try { const b = ptr.readByteArray(n); return Array.from(new Uint8Array(b)).map(x=>x.toString(16).padStart(2,'0')).join(''); } catch(e) { return null; } }

let cipherDepth = 0, cipherNum = 0, fnCall = 0;
Interceptor.attach(CIPHER, {
  onEnter: function() { cipherDepth++; if (cipherDepth === 1) cipherNum++; },
  onLeave: function() { cipherDepth--; }
});

Interceptor.attach(FN, {
  onEnter: function() {
    if (cipherDepth === 0 || cipherNum !== 3) return;
    fnCall++;
    if (fnCall > 3) return;
    const c = this.context;
    // Dump some key state fields read inside the function
    try {
      send({kind:'fn_entry', cipher: cipherNum, call: fnCall,
        rcx: c.rcx.toString(),
        r14_668: c.r14.add(0x668).readU64().toString(),
        r14_658: c.r14.add(0x658).readU64().toString(),
        r14_670: c.r14.add(0x670).readU8(),
        r14_77f: c.r14.add(0x77f).readU8(),
        r14_11a8: c.r14.add(0x11a8).readU64().toString(),
        r14_730: c.r14.add(0x730).readU64().toString(),
        r14_738: c.r14.add(0x738).readU64().toString()});
    } catch(e) { send({kind:'err', err:e.toString()}); }
  }
});

let gotS38 = false;
Interceptor.attach(DISP, {
  onEnter: function() {
    const op = this.context.rdx.toUInt32() & 0xFF;
    if (op !== 20 || gotS38) return;
    gotS38 = true;
    this.rdi = this.context.rcx;
  },
  onLeave: function() {
    if (!this.rdi) return;
    try {
      const sp = this.rdi.add(0x38).readPointer();
      const size = sp.add(0x10).readU64().valueOf();
      const cap = sp.add(0x18).readU64().valueOf();
      const dp = (cap >= 16n) ? sp.readPointer() : sp;
      send({kind:'s38', content: hex(dp, Math.min(Number(size), 72))});
    } catch(e) {}
  }
});
'''

def run(user, serial):
    proc = subprocess.Popen([EXE], stdin=subprocess.PIPE, stdout=subprocess.PIPE, stderr=subprocess.PIPE)
    try: session = frida.attach(proc.pid)
    except Exception as e: return None
    script = session.create_script(JS)
    res = {'calls':[], 's38':None, 'pid':proc.pid}
    def cb(msg, data):
        if msg['type']=='send':
            p = msg['payload']
            if p['kind']=='fn_entry': res['calls'].append(p)
            elif p['kind']=='s38': res['s38']=p['content']
    script.on('message', cb)
    script.load()
    try: proc.stdin.write(f'{user}\n{serial}\n'.encode()); proc.stdin.flush(); proc.stdin.close()
    except: pass
    try: proc.wait(timeout=120)
    except subprocess.TimeoutExpired: proc.kill()
    return res

INPUTS = [('alice','serial01'), ('alice','serial02'), ('bob','serial01')]
for user, serial in INPUTS:
    print(f'\n### {user}/{serial} — 3 runs')
    for r in range(3):
        res = run(user, serial)
        if res is None: continue
        s38sha = hashlib.sha256(bytes.fromhex(res['s38'])).hexdigest()[:16] if res['s38'] else None
        print(f'  run {r+1}: pid={res["pid"]} s38sha={s38sha}')
        for c in res['calls'][:1]:  # first fn call
            print(f'    call#1: 668={c["r14_668"]} 658={c["r14_658"]} 670={c["r14_670"]} 77f={c["r14_77f"]}')
            print(f'            11a8={c["r14_11a8"]} 730={c["r14_730"]} 738={c["r14_738"]}')
