#!/usr/bin/env python3
"""Hook WriteFile and capture backtrace. Also hook memcpy to find who stages
the plaintext into the buffer."""
import subprocess, frida, time, sys, hashlib, threading

EXE = r'C:\Users\Ramón\Desktop\pafet_oracle.exe'
WAIT = 90

JS = r'''
Process.setExceptionHandler(function (details) {
  try { const rdiLo = parseInt(details.context.rdi.toString(16).slice(-8), 16);
    if (rdiLo === 0xe06d7363) return false;
  } catch(e) {}
  return false;
});

function dumpHex(ptr, n) {
  try {
    const b = ptr.readByteArray(n);
    return Array.from(new Uint8Array(b)).map(x=>x.toString(16).padStart(2,'0')).join('');
  } catch(e) { return null; }
}

// 1. WriteFile with backtrace
const wf = Module.getGlobalExportByName('WriteFile');
Interceptor.attach(wf, {
  onEnter: function () {
    const buf = this.context.rdx;
    const n = this.context.r8.toUInt32();
    if (n < 20 || n > 500) return;
    const data = dumpHex(buf, n);
    // Capture the call stack
    const bt = Thread.backtrace(this.context, Backtracer.ACCURATE).slice(0, 15).map(p => p.toString());
    send({kind:'wf', buf: buf.toString(), n: n, data: data, bt: bt});
  }
});
console.log('[*] WriteFile hooked');

// 2. memcpy — all variants
for (const name of ['memcpy', 'RtlCopyMemory', 'memmove']) {
  try {
    const addr = Module.getGlobalExportByName(name);
    if (!addr) continue;
    Interceptor.attach(addr, {
      onEnter: function () {
        const dst = this.context.rcx;
        const src = this.context.rdx;
        const n = this.context.r8.toUInt32();
        if (n < 8 || n > 128) return;
        // Only report if the source bytes contain our needle, or the dst/src is near the final buffer
        try {
          const b = src.readByteArray(Math.min(n, 32));
          const hex = Array.from(new Uint8Array(b)).map(x=>x.toString(16).padStart(2,'0')).join('');
          if (hex.includes('3510366fbff5cb69')) {
            const bt = Thread.backtrace(this.context, Backtracer.ACCURATE).slice(0, 15).map(p => p.toString());
            send({kind:'mcpy_hit', api:name, dst:dst.toString(), src:src.toString(), n:n, data:hex, bt:bt});
          }
        } catch(e) {}
      }
    });
    console.log('[*] ' + name + ' hooked');
  } catch(e) {}
}
console.log('[*] all hooks installed');
'''

hits = []
def on_message(msg, data):
    if msg['type']=='send':
        p = msg['payload']
        hits.append(p)
        if p.get('kind')=='wf':
            print(f'\n[WriteFile] buf={p["buf"]} n={p["n"]}')
            try:
                b = bytes.fromhex(p['data'])
                nl = b.find(b'\n')
                print(f'   first line: {b[:nl+1]!r}')
            except: pass
            print(f'   backtrace:')
            for addr in p['bt']:
                print(f'      {addr}')
        elif p.get('kind')=='mcpy_hit':
            print(f'\n[memcpy HIT!] api={p["api"]} dst={p["dst"]} src={p["src"]} n={p["n"]}')
            print(f'   data: {p["data"]}')
            print(f'   backtrace:')
            for addr in p['bt']:
                print(f'      {addr}')

proc = subprocess.Popen([EXE], stdin=subprocess.PIPE, stdout=subprocess.PIPE, stderr=subprocess.PIPE)
try: session = frida.attach(proc.pid)
except Exception as e: print(f'[FAIL] {e}'); proc.kill(); sys.exit(1)
script = session.create_script(JS)
script.on('message', on_message)
script.load()
print(f'[*] attached pid={proc.pid}')
try: proc.stdin.write(b'\r\n\r\n'); proc.stdin.flush(); proc.stdin.close()
except: pass

try: proc.wait(timeout=WAIT)
except subprocess.TimeoutExpired: proc.kill()

print(f'\n[*] rc={proc.returncode}')
print(f'[*] total hits: {len(hits)}')
