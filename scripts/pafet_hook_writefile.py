#!/usr/bin/env python3
"""Hook WriteFile and WriteConsoleA/W: the plaintext MUST pass through one of these
to get printed. Capture the buffer address and content."""
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

const api_names = ['WriteFile', 'WriteConsoleA', 'WriteConsoleW'];
for (const name of api_names) {
  const addr = Module.getGlobalExportByName(name);
  if (!addr) { console.log('[!] not found: ' + name); continue; }
  console.log('[*] hooking ' + name + ' @ ' + addr);
  Interceptor.attach(addr, {
    onEnter: function () {
      // Win64 ABI: rcx=hFile, rdx=buffer, r8=byteCount (WriteFile)
      // or hConsole, buffer, chars... (WriteConsole)
      const buf = this.context.rdx;
      const n = this.context.r8.toUInt32();
      if (n > 0 && n < 2048) {
        const data = dumpHex(buf, n);
        send({kind:'write', api:name, buf: buf.toString(), n: n, data: data});
      }
    }
  });
}
console.log('[*] all hooks installed');
'''

writes = []
def on_message(msg, data):
    if msg['type']=='send':
        p = msg['payload']
        if p.get('kind')=='write':
            writes.append(p)
            print(f'[WRITE #{len(writes)}] api={p["api"]} n={p["n"]} buf={p["buf"]}')
            # Preview
            try:
                b = bytes.fromhex(p['data'])
                print(f'   bytes: {b!r}')
            except: pass

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

print(f'\n[*] total writes captured: {len(writes)}')
# Look for the plaintext
NEEDLE = bytes.fromhex('3510366fbff5cb69')
for w in writes:
    try:
        b = bytes.fromhex(w['data'])
        if NEEDLE in b:
            offset = b.index(NEEDLE)
            print(f'[FOUND!] write #{writes.index(w)+1} api={w["api"]} buf={w["buf"]} offset=0x{offset:x}')
            print(f'   context around plaintext (-16..+32): {b[max(0,offset-16):offset+32]!r}')
    except: pass
