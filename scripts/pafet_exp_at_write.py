#!/usr/bin/env python3
"""Instrument EXACTLY the write site 0x1401afa6a.
Capture r14+* state fields at the moment of the plaintext byte write.
3 runs x 3 input pairs. If state is key-dependent AND process-stable at
THIS point → real crypto. If still ASLR variable → function is noise too."""
import subprocess, frida, sys, hashlib
from collections import defaultdict

EXE = r'C:\Users\Ramón\Desktop\pafet_pass8.exe'

JS = r'''
Process.setExceptionHandler(d => { try { if (parseInt(d.context.rdi.toString(16).slice(-8),16)===0xe06d7363) return false; } catch(e){} return false; });
const mods = Process.enumerateModules();
let MAIN=null; for(const m of mods) if (/pafet.*\.exe$/i.test(m.name)) { MAIN=m; break; }
const BASE = MAIN.base;
const CIPHER = BASE.add(0xc0510);
const WRITE_SITE = BASE.add(0x1afa6a);  // the exact RIP that writes plaintext bytes
const DISP = BASE.add(0x396990);

let cipherDepth = 0, cipherNum = 0, hitCount = 0;
Interceptor.attach(CIPHER, {
  onEnter: function() { cipherDepth++; if (cipherDepth === 1) cipherNum++; },
  onLeave: function() { cipherDepth--; }
});

// Attach as instruction-level probe
Interceptor.attach(WRITE_SITE, function(args) {
  if (cipherNum !== 3) return;
  hitCount++;
  if (hitCount > 8) return;
  const c = this.context;
  try {
    send({kind:'write', hit: hitCount,
      rcx: c.rcx.toString(16),
      rdx: c.rdx.toString(),
      r8: parseInt(c.r8.toString(16).slice(-2), 16),
      r14_668: c.r14.add(0x668).readU64().toString(),
      r14_658: c.r14.add(0x658).readU64().toString(),
      r14_670: c.r14.add(0x670).readU8(),
      r14_77f: c.r14.add(0x77f).readU8(),
      r14_11a8: c.r14.add(0x11a8).readU64().toString(),
      r14_730: c.r14.add(0x730).readU64().toString(),
      r14_738: c.r14.add(0x738).readU64().toString()});
  } catch(e) { send({kind:'err', e:e.toString()}); }
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
      const b = dp.readByteArray(Math.min(Number(size), 72));
      const hex = Array.from(new Uint8Array(b)).map(x=>x.toString(16).padStart(2,'0')).join('');
      send({kind:'s38', content: hex});
    } catch(e) {}
  }
});
'''

def run(user, serial):
    proc = subprocess.Popen([EXE], stdin=subprocess.PIPE, stdout=subprocess.PIPE, stderr=subprocess.PIPE)
    try: session = frida.attach(proc.pid)
    except Exception as e: return None
    script = session.create_script(JS)
    res = {'writes':[], 's38':None, 'pid':proc.pid}
    def cb(msg, data):
        if msg['type']=='send':
            p = msg['payload']
            if p['kind']=='write': res['writes'].append(p)
            elif p['kind']=='s38': res['s38']=p['content']
    script.on('message', cb)
    script.load()
    try: proc.stdin.write(f'{user}\n{serial}\n'.encode()); proc.stdin.flush(); proc.stdin.close()
    except: pass
    try: proc.wait(timeout=180)
    except subprocess.TimeoutExpired: proc.kill()
    return res

INPUTS = [('alice','serial01'), ('alice','serial02'), ('bob','serial01')]
for user, serial in INPUTS:
    print(f'\n### {user}/{serial} — 3 runs', flush=True)
    for r in range(3):
        res = run(user, serial)
        if res is None: continue
        s38sha = hashlib.sha256(bytes.fromhex(res['s38'])).hexdigest()[:16] if res['s38'] else None
        print(f'  run {r+1}: pid={res["pid"]} s38sha={s38sha} writes_captured={len(res["writes"])}', flush=True)
        # First 2 writes to compare state across processes
        for w in res['writes'][:2]:
            print(f'    hit#{w["hit"]}: rdx={w["rdx"]} r8=0x{w["r8"]:02x} 668={w["r14_668"]} 658={w["r14_658"]} 670={w["r14_670"]} 77f={w["r14_77f"]}', flush=True)
            print(f'              11a8={w["r14_11a8"]} 730={w["r14_730"]} 738={w["r14_738"]}', flush=True)
