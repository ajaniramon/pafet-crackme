#!/usr/bin/env python3
"""Capture full MS x64 arg set + output region of each cipher-VM call.
Still no send-per-call: everything buffered in JS, pulled via RPC."""
import subprocess, frida, time, sys, hashlib, threading

EXE = r'C:\Users\Ramón\Desktop\pafet_oracle.exe'
WAIT = 60

JS = r'''
const mods = Process.enumerateModules();
let MAIN = null;
for (const m of mods) if (/pafet.*\.exe$/i.test(m.name)) { MAIN = m; break; }
const BASE = MAIN.base;
const ENC_FN = BASE.add(0xc0510);

Process.setExceptionHandler(function (details) {
  const ctx = details.context;
  try {
    const rdi = ctx.rdi;
    const lo = parseInt(rdi.toString(16).slice(-8), 16);
    if (lo === 0xe06d7363) return false;
  } catch(e) {}
  send({kind:'XCEPT', type:details.type, addr:details.address.toString(), rip:ctx.rip.toString()});
  return false;
});

function dumpHex(ptr, n) {
  try {
    const b = ptr.readByteArray(n);
    return Array.from(new Uint8Array(b)).map(x=>x.toString(16).padStart(2,'0')).join('');
  } catch(e) { return 'ERR'; }
}

let calls = [];
Interceptor.attach(ENC_FN, {
  onEnter: function () {
    const c = this.context;
    const entry = {
      n: calls.length + 1,
      rcx: c.rcx.toString(),
      rdx: c.rdx.toString(),
      r8:  c.r8.toString(),
      r9:  c.r9.toString(),
      rsp8:  c.rsp.add(0x28).readPointer().toString(), // 5th arg (shadow space + 1)
      rsp9:  c.rsp.add(0x30).readPointer().toString(),
      // Dump 48 bytes at each pointer-like arg
      rcx_mem: dumpHex(c.rcx, 48),
      rdx_mem: (c.rdx.toUInt32() > 0x10000) ? dumpHex(c.rdx, 48) : '(immediate)',
      r8_mem:  (c.r8.toUInt32() > 0x10000)  ? dumpHex(c.r8, 48)  : '(immediate)',
      r9_mem:  (c.r9.toUInt32() > 0x10000)  ? dumpHex(c.r9, 48)  : '(immediate)',
    };
    this.entry = entry;
    this.saved_rcx = c.rcx;
    this.saved_rdx = c.rdx;
    this.saved_r8  = c.r8;
    calls.push(entry);
  },
  onLeave: function (retval) {
    const e = this.entry;
    e.ret = retval.toString();
    // Dump the SAME regions AFTER the call to detect what was written
    e.rcx_mem_after = dumpHex(this.saved_rcx, 48);
    e.rdx_mem_after = (this.saved_rdx.toUInt32() > 0x10000) ? dumpHex(this.saved_rdx, 48) : '(immediate)';
    e.r8_mem_after  = (this.saved_r8.toUInt32() > 0x10000)  ? dumpHex(this.saved_r8, 48)  : '(immediate)';
    send({kind:'call_done', call: e});
  }
});

rpc.exports = { snapshot: function() { return calls; } };
console.log('[*] hook ready');
'''

calls_py = []
def on_message(msg, data):
    if msg['type'] == 'send':
        p = msg['payload']
        if p.get('kind') == 'call_done':
            e = p['call']
            calls_py.append(e)
            print(f'[CALL #{e["n"]}] rcx={e["rcx"]} rdx={e["rdx"]} r8={e["r8"]} ret={e.get("ret","")}')
        elif p.get('kind') == 'XCEPT':
            print(f'[XCEPT!] {p}')
        else:
            print(f'[MSG] {p}')
    elif msg['type'] == 'error':
        print(f'[ERR] {msg["description"]}')

proc = subprocess.Popen([EXE], stdin=subprocess.PIPE, stdout=subprocess.PIPE, stderr=subprocess.PIPE)
try:
    session = frida.attach(proc.pid)
except Exception as e:
    print(f'[*] attach failed: {e}'); proc.kill(); sys.exit(1)
script = session.create_script(JS)
script.on('message', on_message)
script.load()
print(f'[*] attached pid={proc.pid}')

try:
    proc.stdin.write(b'\r\n\r\n'); proc.stdin.flush(); proc.stdin.close()
except Exception as e:
    print(f'[*] stdin err: {e}')

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
    try:
        snap = script.exports_sync.snapshot()
        n = len(snap)
        if n != last_n:
            print(f'[t={i:2d}s] enc_count={n}')
            last_n = n
    except Exception as e:
        print(f'[t={i:2d}s] snap err: {e}')
        break

# Final: use the stream-collected calls_py
print(f'\n[*] FINAL calls received via send: {len(calls_py)}')
for e in calls_py:
    print(f'\n--- call #{e["n"]} ---')
    print(f'  rcx = {e["rcx"]}  rdx = {e["rdx"]}')
    print(f'  r8  = {e["r8"]}   r9  = {e["r9"]}')
    print(f'  ret = {e.get("ret","(none)")}')
    print(f'  rcx IN : {e["rcx_mem"]}')
    print(f'  rcx OUT: {e.get("rcx_mem_after","(none)")}')
    if e["rdx_mem"] != '(immediate)':
        print(f'  rdx IN : {e["rdx_mem"]}')
        print(f'  rdx OUT: {e.get("rdx_mem_after","(none)")}')
    if e["r8_mem"] != '(immediate)':
        print(f'  r8  IN : {e["r8_mem"]}')
        print(f'  r8  OUT: {e.get("r8_mem_after","(none)")}')

if proc.poll() is None:
    proc.kill()
else:
    out = proc.stdout.read()
    print(f'\n[*] rc={proc.returncode}')
    i = out.find(b'[+] Flag: ')
    if i >= 0:
        pt_hex = out[i+10 : i+10+72]
        print(f'[+] plaintext sha256={hashlib.sha256(pt_hex).hexdigest()[:16]}  (expected 956043bd298b7234)')
        print(f'    first48: {pt_hex[:48].hex()}')
