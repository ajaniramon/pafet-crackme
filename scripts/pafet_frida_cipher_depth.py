#!/usr/bin/env python3
"""Hook main-VM dispatcher 0x140396990 with depth tracking.
Top-level main-VM processes user. Cipher-VM 0x1400c0510 re-enters main-VM
via vtable[2]=thunk-to-main-VM. We separate those recursive calls."""
import subprocess, frida, sys, json

EXE = r'C:\Users\Ramón\Desktop\pafet_pass8.exe'

JS = r'''
Process.setExceptionHandler(d => { try { if (parseInt(d.context.rdi.toString(16).slice(-8),16)===0xe06d7363) return false; } catch(e){} return false; });
const mods = Process.enumerateModules();
let MAIN=null; for(const m of mods) if (/pafet.*\.exe$/i.test(m.name)) { MAIN=m; break; }
const BASE = MAIN.base;
const DISP = BASE.add(0x396990);
const CIPHER = BASE.add(0xc0510);

function hex(ptr, n) { try { const b = ptr.readByteArray(n); return Array.from(new Uint8Array(b)).map(x=>x.toString(16).padStart(2,'0')).join(''); } catch(e) { return null; } }

let depth = 0;
let cipherDepth = 0;
let maxCipherDepth = 0;

Interceptor.attach(CIPHER, {
  onEnter: function() { cipherDepth++; maxCipherDepth = Math.max(maxCipherDepth, cipherDepth); },
  onLeave: function() { cipherDepth--; }
});

Interceptor.attach(DISP, {
  onEnter: function() {
    depth++;
    const op = this.context.rdx.toUInt32() & 0xFF;
    const inside = cipherDepth > 0;
    send({kind:'op', d: depth, op: op, inside_cipher: inside, rcx: this.context.rcx.toString()});
  },
  onLeave: function(retval) {
    depth--;
  }
});
'''

def run(user, serial='0'):
    proc = subprocess.Popen([EXE], stdin=subprocess.PIPE, stdout=subprocess.PIPE, stderr=subprocess.PIPE)
    try: session = frida.attach(proc.pid)
    except Exception as e: print(f'FAIL {e}'); proc.kill(); return []
    script = session.create_script(JS)
    ops = []
    def cb(msg, data):
        if msg['type']=='send' and msg['payload']['kind']=='op':
            ops.append(msg['payload'])
    script.on('message', cb)
    script.load()
    try: proc.stdin.write(f'{user}\n{serial}\n'.encode()); proc.stdin.flush(); proc.stdin.close()
    except: pass
    try: proc.wait(timeout=120)
    except subprocess.TimeoutExpired: proc.kill()
    return ops

for user, serial in [('alice', 'serial01'), ('alice', 'serial02')]:
    print(f'\n=== user={user} serial={serial} ===')
    seq = run(user, serial)
    if seq:
        print(f'  total ops: {len(seq)}')
        # Separate top-level (not inside cipher) from recursive (inside cipher)
        toplvl = [x for x in seq if not x['inside_cipher']]
        inside = [x for x in seq if x['inside_cipher']]
        print(f'  top-level ops: {len(toplvl)}: {[x["op"] for x in toplvl]}')
        print(f'  inside-cipher ops: {len(inside)}')
        # Group inside into cipher-VM invocations by rcx (same rcx = same invocation)
        if inside:
            # Chunks: each cipher-VM call is a contiguous group with same rcx
            print(f'  inside-cipher op sequence (first 60): {[x["op"] for x in inside[:60]]}')
            # unique rcx values
            from collections import Counter
            rcx_count = Counter(x['rcx'] for x in inside)
            print(f'  distinct rcx inside cipher: {len(rcx_count)}')
            for r, c in list(rcx_count.items())[:5]:
                print(f'    rcx={r}: {c} ops')
