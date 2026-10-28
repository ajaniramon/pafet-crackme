#!/usr/bin/env python3
"""Hook main script-VM dispatcher 0x140396990. On each entry capture:
   - rax (opcode), rcx (ctx), rdx (image_base), r8, r9
   - 2 KB at rcx
   - 2 KB at r8  (if looks like a pointer)
   - 2 KB at r9  (if looks like a pointer)
On each leave re-dump the same regions (post-op state).
Export via RPC at end; search offline for the plaintext prefix."""
import subprocess, frida, time, sys, hashlib, threading, json

EXE = r'C:\Users\Ramón\Desktop\pafet_oracle.exe'
WAIT = 90

JS = r'''
const mods = Process.enumerateModules();
let MAIN=null;
for(const m of mods) if (/pafet.*\.exe$/i.test(m.name)) { MAIN=m; break; }
const BASE = MAIN.base;
const DISP = BASE.add(0x396990);

Process.setExceptionHandler(function (details) {
  try {
    const rdiLo = parseInt(details.context.rdi.toString(16).slice(-8), 16);
    if (rdiLo === 0xe06d7363) return false;
  } catch(e) {}
  send({kind:'XCEPT', addr:details.address.toString()});
  return false;
});

function dumpHex(ptr, n) {
  try {
    const b = ptr.readByteArray(n);
    return Array.from(new Uint8Array(b)).map(x=>x.toString(16).padStart(2,'0')).join('');
  } catch(e) { return null; }
}
function isPtr(p) {
  try {
    const low = parseInt(p.toString(16).slice(-8), 16);
    const hi = p.toString(16).length;
    return hi >= 10 && low > 0x1000;
  } catch(e) { return false; }
}

let seq = 0;
Interceptor.attach(DISP, {
  onEnter: function () {
    const c = this.context;
    seq++;
    // edx IS the opcode value as an integer (0..0x17). The thunk dereferenced
    // the pointer before tail-jumping here, so c.rdx holds the opcode itself.
    let opcode = 0xFF;
    try { opcode = c.rdx.toUInt32() & 0xFF; } catch(e) {}
    let r8_val = null;
    try { r8_val = c.r8.readPointer(); } catch(e) {}
    const e = {
      n: seq,
      rcx: c.rcx.toString(),
      rdx: c.rdx.toString(),
      r8:  c.r8.toString(),
      r8_deref: r8_val ? r8_val.toString() : null,
      opcode: opcode,
      pre_rcx: isPtr(c.rcx) ? dumpHex(c.rcx, 4096) : null,
      pre_r8d: r8_val && isPtr(r8_val) ? dumpHex(r8_val, 512) : null,
      pre_rsp: dumpHex(c.rsp, 1024),
    };
    this.e = e;
    this.saved_rcx = c.rcx; this.saved_r8 = c.r8;
    this.saved_r8_val = r8_val;
    this.saved_rsp = c.rsp;
  },
  onLeave: function (retval) {
    const e = this.e;
    e.ret = retval.toString();
    e.post_rcx = isPtr(this.saved_rcx) ? dumpHex(this.saved_rcx, 4096) : null;
    e.post_r8d = this.saved_r8_val && isPtr(this.saved_r8_val) ? dumpHex(this.saved_r8_val, 512) : null;
    e.post_rsp = dumpHex(this.saved_rsp, 1024);
    send({kind:'op', e: e});
  }
});
console.log('[*] main-VM dispatch hooked');
'''

ops = []
def on_message(msg, data):
    if msg['type']=='send':
        p = msg['payload']
        if p.get('kind')=='op':
            ops.append(p['e'])
            e = p['e']
            print(f'[OP #{e["n"]}] opcode={e["opcode"]:3d} rcx={e["rcx"]} ret={e.get("ret","")}')
        elif p.get('kind')=='XCEPT':
            print(f'[XCEPT!] {p}')
    elif msg['type']=='error':
        print(f'[ERR] {msg["description"]}')

proc = subprocess.Popen([EXE], stdin=subprocess.PIPE, stdout=subprocess.PIPE, stderr=subprocess.PIPE)
try:
    session = frida.attach(proc.pid)
except Exception as e:
    print(f'[FAIL] attach: {e}'); proc.kill(); sys.exit(1)
script = session.create_script(JS)
script.on('message', on_message)
script.load()
print(f'[*] attached pid={proc.pid}')

try:
    proc.stdin.write(b'\r\n\r\n'); proc.stdin.flush(); proc.stdin.close()
except Exception: pass

done = {'v': False}
def waiter():
    try: proc.wait(timeout=WAIT)
    except: pass
    done['v'] = True
threading.Thread(target=waiter, daemon=True).start()

last_n = 0
for i in range(WAIT):
    if done['v']: break
    time.sleep(1)
    if len(ops) != last_n:
        print(f'    [t={i}s] ops_seen={len(ops)}')
        last_n = len(ops)

if proc.poll() is None: proc.kill()
else:
    out = proc.stdout.read()
    print(f'\n[*] rc={proc.returncode}')
    i = out.find(b'[+] Flag: ')
    if i >= 0:
        pt = out[i+10 : i+10+72]
        print(f'[+] plaintext sha256={hashlib.sha256(pt).hexdigest()[:16]}  (baseline 956043bd298b7234)')

print(f'\n[*] captured ops: {len(ops)}')
# Save to disk
out_path = r'C:\Users\Ramón\Desktop\pafet_mainvm_ops.json'
with open(out_path, 'w') as f:
    json.dump(ops, f)
print(f'[*] dumped to {out_path}')

# Quick summary: opcodes seen
if ops:
    print(f'[*] opcodes sequence: {[e["opcode"] for e in ops]}')
    # Search for plaintext prefix
    needle = '3510366fbff5cb69'
    for e in ops:
        for field in ['pre_rcx','pre_r8d','pre_rsp','post_rcx','post_r8d','post_rsp']:
            v = e.get(field)
            if v and needle in v:
                offset = v.index(needle)
                print(f'[FOUND!] op #{e["n"]} opcode={e["opcode"]} field={field} byteoff=0x{offset//2:x}')
