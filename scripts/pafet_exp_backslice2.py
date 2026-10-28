#!/usr/bin/env python3
"""Backward slice: hook all memcpy/memset variants + operator new during cipher #3.
For any memcpy of size 72 or 80, log src/dst/caller.
For each operator new of size 72/80/88, log addr + caller (via return address).
Goal: identify where the plaintext originates (producer, not copier)."""
import subprocess, frida, sys

EXE = r'C:\Users\Ramón\Desktop\pafet_pass8.exe'

JS = r'''
Process.setExceptionHandler(d => { try { if (parseInt(d.context.rdi.toString(16).slice(-8),16)===0xe06d7363) return false; } catch(e){} return false; });
const mods = Process.enumerateModules();
let MAIN=null; for(const m of mods) if (/pafet.*\.exe$/i.test(m.name)) { MAIN=m; break; }
const BASE = MAIN.base;
const CIPHER = BASE.add(0xc0510);
const OP_NEW = BASE.add(0x3a4080);
const MEMCPY_FAST = BASE.add(0x3a6070);
const MEMCPY_SSE  = BASE.add(0x3a2ff0);
const MEMSET      = BASE.add(0x3a6720);
function hex(ptr, n) { try { const b = ptr.readByteArray(n); return Array.from(new Uint8Array(b)).map(x=>x.toString(16).padStart(2,'0')).join(''); } catch(e) { return null; } }

let cipherDepth = 0;
let cipherNum = 0;

Interceptor.attach(CIPHER, {
  onEnter: function() { cipherDepth++; if (cipherDepth === 1) cipherNum++; },
  onLeave: function() { cipherDepth--; }
});

// Track memcpy calls with size 72 or 80
function hookCopy(addr, name) {
  Interceptor.attach(addr, {
    onEnter: function() {
      if (cipherDepth === 0 || cipherNum !== 3) return;  // only cipher #3
      const n = this.context.r8.toUInt32();
      if (n !== 72 && n !== 80 && n !== 73) return;
      const dst = this.context.rcx;
      const src = this.context.rdx;
      const src_data = hex(src, Math.min(n, 72));
      const dst_before = hex(dst, Math.min(n, 72));
      const ret = this.returnAddress;
      send({kind: name, cipher: cipherNum, dst: dst.toString(), src: src.toString(),
            n: n, src_data: src_data, dst_before: dst_before, ret: ret.toString()});
    }
  });
}
hookCopy(MEMCPY_FAST, 'memcpy_fast');
hookCopy(MEMCPY_SSE,  'memcpy_sse');

// Track operator new of 80 and 88 bytes with return address
Interceptor.attach(OP_NEW, {
  onEnter: function() {
    if (cipherDepth === 0 || cipherNum !== 3) return;
    this.size = this.context.rcx.toUInt32();
  },
  onLeave: function(retval) {
    if (this.size === undefined) return;
    if (this.size !== 80 && this.size !== 88 && this.size !== 72) return;
    const ret = this.returnAddress;
    send({kind:'alloc', cipher: cipherNum, size: this.size, addr: retval.toString(), caller: ret.toString()});
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

print('=== alice/serial01 — cipher #3 only ===')
evts = run('alice', 'serial01')
print(f'total events: {len(evts)}')

# Group events
from collections import Counter
kinds = Counter(e['kind'] for e in evts)
print(f'kinds: {dict(kinds)}')

# Show allocations
allocs = [e for e in evts if e['kind']=='alloc']
print(f'\nAllocations in cipher #3 (size 72/80/88): {len(allocs)}')
for a in allocs[:10]:
    # Compute offset of caller RIP in module
    try:
        caller_hex = a['caller']
        # Just show absolute
        print(f'  size={a["size"]} addr={a["addr"]} caller={caller_hex}')
    except: pass

# Show memcpys with plaintext marker
pt_marker = 'fd2077a1'
copies = [e for e in evts if e['kind'] in ('memcpy_fast','memcpy_sse')]
print(f'\nmemcpy 72/80/73 bytes in cipher #3: {len(copies)}')
for c in copies[:10]:
    has_pt = c['src_data'] and pt_marker in c['src_data']
    tag = '  !!! PLAINTEXT !!!' if has_pt else ''
    print(f'  n={c["n"]} src={c["src"]} dst={c["dst"]} ret={c["ret"]}{tag}')
    print(f'    src_data[:48]: {c["src_data"][:96]}')
