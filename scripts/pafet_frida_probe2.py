#!/usr/bin/env python3
"""Probe but FEED stdin with dummy credentials so the program actually proceeds."""
import sys, time, threading, frida, subprocess, os

MODE = sys.argv[1] if len(sys.argv) > 1 else 'probe-only'
TARGET = sys.argv[2] if len(sys.argv) > 2 else 'pass8'
WAIT = int(sys.argv[3]) if len(sys.argv) > 3 else 15

if TARGET == 'oracle':
    EXE = r'C:\Users\Ramón\Desktop\pafet_oracle.exe'
    ARGS = [EXE]
else:
    EXE = r'C:\Users\Ramón\Desktop\pafet_pass8.exe'
    ARGS = [EXE]

exc_count = [0]
enc_count = [0]
def on_message(msg, data):
    if msg['type'] == 'send':
        p = msg['payload']
        if p.get('kind') == 'exception':
            exc_count[0] += 1
            if exc_count[0] <= 4:
                print(f'[MSG] exc #{exc_count[0]} type={p["type"]} rip={p["rip"]}')
        elif p.get('kind') == 'enc_enter':
            enc_count[0] += 1
            print(f'[MSG] ENC_ENTER #{enc_count[0]} key={p.get("key","")}')
        elif p.get('kind') == 'enc_leave':
            print(f'[MSG] ENC_LEAVE #{enc_count[0]} ret={p.get("ret","")}')
        else:
            print(f'[MSG] {p}')

pid = frida.spawn(ARGS, stdio='pipe')
print(f'[*] spawned pid={pid}')
session = frida.attach(pid)
with open(r'C:\Users\Ramón\Desktop\pafet_frida_probe.js', 'r') as f:
    jsrc = f.read()
jsrc = f'globalThis.MODE = "{MODE}";\n' + jsrc + """
// Also hook ENC to see if it is reached
try {
  const ENC = Module.findBaseAddress('pafet_pass8.exe') || Module.findBaseAddress('pafet_oracle.exe');
  if (ENC) {
    const ENC_FN = ENC.add(0xc0510);
    Interceptor.attach(ENC_FN, {
      onEnter: function () {
        try {
          const key = this.context.rcx.readByteArray(24);
          const hex = Array.from(new Uint8Array(key)).map(x=>x.toString(16).padStart(2,'0')).join('');
          send({kind:'enc_enter', key: hex});
        } catch(e) {
          send({kind:'enc_enter', key: 'READ_FAIL'});
        }
      },
      onLeave: function (retval) {
        send({kind:'enc_leave', ret: retval.toString()});
      }
    });
    console.log('[*] ENC_FN hooked');
  } else {
    console.log('[*] cannot find ENC base');
  }
} catch(e) { console.log('[*] ENC hook err: ' + e); }
"""
# To make this an "integrity test", also allow MODE='hook-enc-empty' to install the empty hook separately.
script = session.create_script(jsrc)
script.on('message', on_message)
script.load()
print('[*] script loaded, resuming')
frida.resume(pid)

# Feed stdin for pafet_pass8.exe through frida (uses stdio='pipe')
if TARGET == 'pass8':
    time.sleep(0.5)
    try:
        frida.get_local_device().input(pid, b'testuser\ntestserial01\n')
        print('[*] fed stdin: testuser\\ntestserial01\\n')
    except Exception as e:
        print(f'[*] stdin feed error: {e}')

# Wait
t0 = time.time()
while time.time() - t0 < WAIT:
    time.sleep(0.5)
    try:
        import psutil
        p = psutil.Process(pid)
        s = p.status()
        if s == 'stopped' or s == 'dead':
            print(f'[*] process status={s}, breaking')
            break
    except Exception:
        print(f'[*] process gone')
        break

try:
    import psutil
    p = psutil.Process(pid)
    print(f'[*] final process status: {p.status()}')
    p.terminate()
except Exception as e:
    print(f'[*] (final) process gone: {e}')

print(f'\n[*] totals: exceptions={exc_count[0]} enc_enter={enc_count[0]}')
