#!/usr/bin/env python3
"""Ultra-minimal hook: only increment a counter inside JS, send nothing per-call.
Dump counter at end. Also try to read a 24B KEY buffer not from rcx but from a
dedicated field in the Ctx (we may need to find it)."""
import subprocess, frida, time, sys, hashlib, ctypes

EXE = r'C:\Users\Ramón\Desktop\pafet_oracle.exe'
WAIT = int(sys.argv[1]) if len(sys.argv) > 1 else 60

JS = r'''
const mods = Process.enumerateModules();
let MAIN = null;
for (const m of mods) if (/pafet.*\.exe$/i.test(m.name)) { MAIN = m; break; }
const BASE = MAIN.base;
const ENC_FN = BASE.add(0xc0510);

// Install a non-C++ exception trap only.
Process.setExceptionHandler(function (details) {
  const ctx = details.context;
  // 0xe06d7363 shows up in rdi for MSVC __CxxThrowException; skip those.
  try {
    const rdiLow = (ctx.rdi.toUInt32 ? ctx.rdi.toUInt32() : parseInt(ctx.rdi.toString(16).slice(-8), 16));
    if (rdiLow === 0xe06d7363) return false;
  } catch(e) {}
  console.log('[XCEPT!!] type=' + details.type + ' addr=' + details.address);
  send({kind:'exception', type:details.type, addr:details.address.toString()});
  return false;
});

let g = { n: 0, keys: [], rets: [], last_rcx: null, last_rdx: null };
globalThis.__g = g;

Interceptor.attach(ENC_FN, {
  onEnter: function () {
    g.n++;
    g.last_rcx = this.context.rcx;
    g.last_rdx = this.context.rdx;
    if (g.n <= 20) {
      // Only capture full key for first 20
      try {
        const b = this.context.rcx.readByteArray(24);
        g.keys.push(Array.from(new Uint8Array(b)).map(x=>x.toString(16).padStart(2,'0')).join(''));
      } catch(e) { g.keys.push('ERR'); }
    }
  },
  onLeave: function (retval) {
    if (g.n <= 20) g.rets.push(retval.toString());
  }
});

rpc.exports = {
  snapshot: function() { return {n: g.n, keys: g.keys, rets: g.rets}; },
};
console.log('[*] hooked silently');
'''

def on_message(msg, data):
    if msg['type'] == 'send':
        print(f'[MSG] {msg["payload"]}')
    elif msg['type'] == 'error':
        print(f'[ERR] {msg["description"]}')

proc = subprocess.Popen([EXE], stdin=subprocess.PIPE, stdout=subprocess.PIPE, stderr=subprocess.PIPE)
try:
    session = frida.attach(proc.pid)
except Exception as e:
    print(f'[*] attach failed: {e}')
    proc.kill(); sys.exit(1)
script = session.create_script(JS)
script.on('message', on_message)
script.load()
print(f'[*] attached & hooked pid={proc.pid}')

# Feed stdin
try:
    proc.stdin.write(b'\r\n\r\n')
    proc.stdin.flush()
    proc.stdin.close()
except Exception as e:
    print(f'[*] stdin write err: {e}')

# Wait with periodic snapshots
import threading
done = {'v': False}
def waiter():
    try:
        proc.wait(timeout=WAIT)
    except Exception:
        pass
    done['v'] = True
th = threading.Thread(target=waiter, daemon=True); th.start()

last_n = 0
for i in range(WAIT):
    if done['v']: break
    time.sleep(1)
    try:
        snap = script.exports_sync.snapshot()
        if snap['n'] != last_n:
            print(f'[t={i:2d}s] enc_count={snap["n"]}')
            last_n = snap['n']
    except Exception as e:
        print(f'[t={i:2d}s] snap err: {e}')
        break

# Final snapshot
try:
    snap = script.exports_sync.snapshot()
    print(f'\n[*] FINAL enc_count={snap["n"]}')
    for i, (k, r) in enumerate(zip(snap['keys'], snap['rets'])):
        print(f'   #{i+1}: key={k} ret={r}')
    if len(snap['keys']) > len(snap['rets']):
        print(f'   #{len(snap["keys"])}: key={snap["keys"][-1]} ret=<pending/never>')
except Exception as e:
    print(f'[*] final snap err: {e}')

if proc.poll() is None:
    proc.kill()
    print('[*] proc killed')
else:
    out = proc.stdout.read()
    print(f'[*] rc={proc.returncode}')
    i = out.find(b'[+] Flag: ')
    if i >= 0:
        pt_hex = out[i+10 : i+10+72]
        print(f'[+] plaintext sha256={hashlib.sha256(pt_hex).hexdigest()[:16]}')
        print(f'    first32: {pt_hex[:32]!r}')
