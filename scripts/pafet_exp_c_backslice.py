#!/usr/bin/env python3
"""EXPERIMENT C: Backward slice from s38 writer.
Previously identified: 0x14016fa6a writes something, caller 0x14016fa50.

Determine:
 - What exact value is being written
 - Where it was computed from
 - Whether Loop 3 outputs appear in this chain

Hook 0x14016fa50 entry + exit for ALL calls during cipher. Dump arg0 (rcx),
return value, and side-effect memory writes.

Also hook the surrounding call chain callers (0x14016d950, 0x140169d10, etc).
Count calls and dump returns."""
import subprocess, frida, sys

EXE = r'C:\Users\Ramón\Desktop\pafet_pass8.exe'

JS = r'''
Process.setExceptionHandler(d => { try { if (parseInt(d.context.rdi.toString(16).slice(-8),16)===0xe06d7363) return false; } catch(e){} return false; });
const mods = Process.enumerateModules();
let MAIN=null; for(const m of mods) if (/pafet.*\.exe$/i.test(m.name)) { MAIN=m; break; }
const BASE = MAIN.base;

const CIPHER = BASE.add(0xc0510);
const CRYPTO_FA50 = BASE.add(0x16fa50);
const LEVEL3 = BASE.add(0x176950);

function hex(ptr, n) { try { const b = ptr.readByteArray(n); return Array.from(new Uint8Array(b)).map(x=>x.toString(16).padStart(2,'0')).join(''); } catch(e) { return null; } }

let cipherDepth = 0;
let cipherNum = 0;
let level3Calls = 0;
let fa50Calls = 0;

Interceptor.attach(CIPHER, {
  onEnter: function() { cipherDepth++; if (cipherDepth === 1) cipherNum++; },
  onLeave: function() { cipherDepth--; }
});

Interceptor.attach(LEVEL3, {
  onEnter: function() { if (cipherDepth > 0) level3Calls++; },
});

// 0x14016fa50 writes to [rsi+0x518] (we saw in disasm). Monitor arg rcx and
// the [rcx+0x518] field before/after.
Interceptor.attach(CRYPTO_FA50, {
  onEnter: function() {
    if (cipherDepth === 0) return;
    fa50Calls++;
    this.rcx = this.context.rcx;
    this.rsi_val = this.context.rsi.toString();
    this.cipher = cipherNum;
    this.callN = fa50Calls;
    try {
      this.pre_518 = this.rcx.add(0x518).readU64().toString();
      this.pre_68  = this.rcx.add(0x68).readU32();
      this.pre_20  = this.rcx.add(0x20).readU64().toString();
    } catch(e) {}
  },
  onLeave: function(retval) {
    if (!this.rcx) return;
    try {
      const post_518 = this.rcx.add(0x518).readU64().toString();
      if (this.callN <= 20) {  // first 20 calls only
        send({kind:'fa50', cipher: this.cipher, call: this.callN,
              pre_518: this.pre_518, post_518: post_518,
              pre_68: this.pre_68, pre_20: this.pre_20,
              ret: retval.toString()});
      }
    } catch(e) {}
  }
});
'''

def run(user, serial):
    proc = subprocess.Popen([EXE], stdin=subprocess.PIPE, stdout=subprocess.PIPE, stderr=subprocess.PIPE)
    try: session = frida.attach(proc.pid)
    except Exception as e: print(f'FAIL {e}'); proc.kill(); return
    script = session.create_script(JS)
    events = []
    def cb(msg, data):
        if msg['type']=='send':
            events.append(msg['payload'])
    script.on('message', cb)
    script.load()
    try: proc.stdin.write(f'{user}\n{serial}\n'.encode()); proc.stdin.flush(); proc.stdin.close()
    except: pass
    try: proc.wait(timeout=120)
    except subprocess.TimeoutExpired: proc.kill()
    return events

for user, serial in [('alice','serial01'), ('alice','serial02')]:
    print(f'\n=== user={user} serial={serial} ===')
    evts = run(user, serial)
    print(f'  total: {len(evts)}')
    for e in evts[:20]:
        print(f'  {e}')
