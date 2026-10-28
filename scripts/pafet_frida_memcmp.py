#!/usr/bin/env python3
"""Hook memcmp @ 0x1403a68e0 — called inside handler 8 to compare the computed
hash of username against a hardcoded value. Dump both buffers."""
import subprocess, frida, sys, time

EXE = r'C:\Users\RAMN~1\AppData\Local\Temp\pafet_orig.exe'

JS = r'''
Process.setExceptionHandler(d => { try { if (parseInt(d.context.rdi.toString(16).slice(-8),16)===0xe06d7363) return false; } catch(e){} return false; });
const mods = Process.enumerateModules();
let MAIN=null; for(const m of mods) if (/pafet.*\.exe$/i.test(m.name)) { MAIN=m; break; }
const BASE = MAIN.base;
const MEMCMP = BASE.add(0x3a68e0);
function hex(ptr, n) { try { const b = ptr.readByteArray(n); return Array.from(new Uint8Array(b)).map(x=>x.toString(16).padStart(2,'0')).join(''); } catch(e) { return null; } }

let callN = 0;
Interceptor.attach(MEMCMP, {
  onEnter: function() {
    callN++;
    const c = this.context;
    const n = c.r8.toUInt32();
    // Only care about short-to-medium buffers (hashes/strings)
    if (n < 2 || n > 256) return;
    const a = hex(c.rcx, Math.min(n, 128));
    const b = hex(c.rdx, Math.min(n, 128));
    send({kind:'memcmp', n: callN, len: n, a: a, b: b, rcx: c.rcx.toString(), rdx: c.rdx.toString()});
  }
});
console.log('[*] memcmp hooked');
'''

cmps = []
def cb(msg, data):
    if msg['type']=='send':
        p = msg['payload']
        if p['kind']=='memcmp':
            cmps.append(p)
            match = (p['a'] == p['b'])
            print(f'[CMP #{p["n"]}] len={p["len"]} match={match}')
            print(f'   a: {p["a"][:120]}')
            print(f'   b: {p["b"][:120]}')

proc = subprocess.Popen([EXE], stdin=subprocess.PIPE, stdout=subprocess.PIPE, stderr=subprocess.PIPE)
try: session = frida.attach(proc.pid)
except Exception as e: print(f'FAIL {e}'); proc.kill(); sys.exit(1)
script = session.create_script(JS)
script.on('message', cb)
script.load()
# Feed test credentials
proc.stdin.write(b'testuser\ntestserial\n'); proc.stdin.flush(); proc.stdin.close()
try: proc.wait(timeout=90)
except: proc.kill()
print(f'\n[*] rc={proc.returncode}')
print(f'[*] total memcmp hits captured: {len(cmps)}')
