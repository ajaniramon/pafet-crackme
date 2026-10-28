#!/usr/bin/env python3
"""Hook 0x14003f540 (user-VM executor). At entry: snapshot rcx, r8 and the
input buffer. At exit: dump the stack buffers at [rsp+0x1780] (4KB) and
[rsp+0x2780] (8KB) to see if the bytecode is decrypted there.
Compare entropy with the encrypted bytecode's 7.876."""
import subprocess, frida, time, sys, hashlib, math
from collections import Counter

EXE = r'C:\Users\Ramón\Desktop\pafet_pass8.exe'

INPUTS = [
    ('alice', 'serial01'),
    ('bob',   'serial01'),
]

JS = r'''
Process.setExceptionHandler(d => { try { if (parseInt(d.context.rdi.toString(16).slice(-8),16)===0xe06d7363) return false; } catch(e){} return false; });
const mods = Process.enumerateModules();
let MAIN=null; for(const m of mods) if (/pafet.*\.exe$/i.test(m.name)) { MAIN=m; break; }
const BASE = MAIN.base;
const EXEC = BASE.add(0x3f540);
function hex(ptr, n) { try { const b = ptr.readByteArray(n); return Array.from(new Uint8Array(b)).map(x=>x.toString(16).padStart(2,'0')).join(''); } catch(e) { return null; } }

let n = 0;
Interceptor.attach(EXEC, {
  onEnter: function() {
    n++;
    if (n > 1) return;  // only the first call (handler 10)
    const c = this.context;
    this.rcx = c.rcx;  // output buffer
    this.r8  = c.r8;   // likely struct ptr with vtable (first qword = ptr)
    this.rsp = c.rsp;
    // At function entry, rsp still points to return address.
    // The function will push 7 regs (56B) + 'sub rsp, X' where X = 0x4790.
    // After that, buffers are at rsp+0x1780, rsp+0x2780. We'll compute post-prolog rsp.
    try {
      const r8val = this.r8.readPointer();
      this.r8_val = r8val;
      this.r8_vtable = hex(r8val, 32);
    } catch(e) {}
    // Dump the input buffer: handler 10 passed rcx = [rbp+0x20] (local), which contains
    // the user string before this call. We can inspect r8 content for the vtable and the data.
    send({kind:'enter', n: n, rcx: this.rcx.toString(), r8: this.r8.toString(),
          r8_val: this.r8_val ? this.r8_val.toString() : null, r8_vt: this.r8_vtable || null,
          rsp: this.rsp.toString()});
  },
  onLeave: function(retval) {
    if (n !== 1) return;
    // After the function returns, rsp is restored. But we captured this.rsp at entry.
    // Post-prolog rsp = this.rsp - 8 (ret addr) - 56 (pushes) - 0x4790
    const post_rsp = this.rsp.sub(8 + 56 + 0x4790);
    // The buffers at offsets +0x1780 and +0x2780 are relative to post_rsp.
    const buf1 = post_rsp.add(0x1780);
    const buf2 = post_rsp.add(0x2780);
    // But by onLeave, stack is unwound. The data may still be there, in free stack region
    // just below current rsp. Let's try reading both.
    send({kind:'leave', n: n,
          output_buf: hex(this.rcx.add(0), 128),      // Where the output string went
          buf1_at_post_rsp_1780: hex(buf1, 1024),
          buf2_at_post_rsp_2780: hex(buf2, 1024),
          retval: retval.toString()});
  }
});
'''

def entropy(bs):
    if not bs: return 0
    c = Counter(bs)
    n = len(bs)
    return -sum((cnt/n) * math.log2(cnt/n) for cnt in c.values())

def run(user, serial):
    proc = subprocess.Popen([EXE], stdin=subprocess.PIPE, stdout=subprocess.PIPE, stderr=subprocess.PIPE)
    try: session = frida.attach(proc.pid)
    except Exception as e: print(f'FAIL {e}'); proc.kill(); return {}
    script = session.create_script(JS)
    res = {}
    def cb(msg, data):
        if msg['type']=='send':
            p = msg['payload']
            res[p['kind']] = p
    script.on('message', cb)
    script.load()
    try: proc.stdin.write(f'{user}\n{serial}\n'.encode()); proc.stdin.flush(); proc.stdin.close()
    except: pass
    try: proc.wait(timeout=60)
    except subprocess.TimeoutExpired: proc.kill()
    return res

for u, s in INPUTS:
    print(f'\n=== user={u!r} serial={s!r} ===')
    r = run(u, s)
    e = r.get('enter', {})
    l = r.get('leave', {})
    print(f'  ENTER: rcx={e.get("rcx")} r8={e.get("r8")} r8_val={e.get("r8_val")}')
    print(f'    r8 vtable+struct bytes: {e.get("r8_vt","")}')
    if l:
        for k, buf_hex in [('output_buf', l.get('output_buf')),
                           ('buf1 (code? at post_rsp+0x1780, 1KB)', l.get('buf1_at_post_rsp_1780')),
                           ('buf2 (stack? at post_rsp+0x2780, 1KB)', l.get('buf2_at_post_rsp_2780'))]:
            if buf_hex is None: continue
            b = bytes.fromhex(buf_hex)
            e_v = entropy(b)
            nz = sum(1 for x in b if x != 0)
            print(f'  {k}: entropy={e_v:.3f}  nonzero={nz}/{len(b)}')
            print(f'    first 64: {buf_hex[:128]}')
