#!/usr/bin/env python3
"""Spawn oracle via subprocess, attach Frida immediately, feed stdin, capture
cipher-VM entries. Compare plaintext against known K=0 baseline."""
import subprocess, frida, time, sys, hashlib

MODE = sys.argv[1] if len(sys.argv) > 1 else 'hook-enc-empty'
EXE = r'C:\Users\Ramón\Desktop\pafet_oracle.exe'

JS = r'''
const mods = Process.enumerateModules();
let MAIN = null;
for (const m of mods) if (/pafet.*\.exe$/i.test(m.name)) { MAIN = m; break; }
if (!MAIN) for (const m of mods) if (/\.exe$/i.test(m.name)) { MAIN = m; break; }
const BASE = MAIN.base;
console.log('[*] main @ ' + BASE + ' (' + MAIN.name + ')');

Process.setExceptionHandler(function (details) {
  const t = details.type;
  const ctx = details.context;
  // Filter: only report NON-C++ exceptions (rdi != 0xe06d7363)
  const isCxx = ctx.rdi && (ctx.rdi.toUInt32 ? ctx.rdi.toUInt32() === 0xe06d7363 : false);
  if (!isCxx) {
    console.log('[XCEPT!!] type=' + t + ' addr=' + details.address + ' rip=' + ctx.rip);
    send({kind:'exception', type:t, addr:details.address.toString(), rip:ctx.rip.toString()});
  }
  return false;
});

const ENC_FN = BASE.add(0xc0510);
let encDepth = 0;
Interceptor.attach(ENC_FN, {
  onEnter: function () {
    encDepth++;
    try {
      const key = this.context.rcx.readByteArray(24);
      const hex = Array.from(new Uint8Array(key)).map(x=>x.toString(16).padStart(2,'0')).join('');
      send({kind:'enc_enter', n:encDepth, key: hex, rdx:this.context.rdx.toString()});
    } catch(e) { send({kind:'enc_enter', n:encDepth, key:'READ_FAIL'}); }
  },
  onLeave: function (retval) {
    send({kind:'enc_leave', n:encDepth, ret: retval.toString()});
  }
});
console.log('[*] ENC_FN hooked, ready');
'''

enc_entries = []
exceptions = []
def on_message(msg, data):
    if msg['type'] == 'send':
        p = msg['payload']
        if p.get('kind') == 'enc_enter':
            enc_entries.append(p)
            print(f'[ENC_ENTER #{p["n"]}] key={p["key"]}')
        elif p.get('kind') == 'enc_leave':
            print(f'[ENC_LEAVE #{p["n"]}] ret={p["ret"]}')
        elif p.get('kind') == 'exception':
            exceptions.append(p)
            print(f'[XCEPT!] {p}')
    elif msg['type'] == 'error':
        print(f'[ERR] {msg["description"]}')

# Launch oracle with pipes
proc = subprocess.Popen([EXE], stdin=subprocess.PIPE, stdout=subprocess.PIPE,
                        stderr=subprocess.PIPE, creationflags=subprocess.CREATE_SUSPENDED if hasattr(subprocess, 'CREATE_SUSPENDED') else 0)
# Attach ASAP
try:
    session = frida.attach(proc.pid)
    script = session.create_script(JS)
    script.on('message', on_message)
    script.load()
    print(f'[*] attached pid={proc.pid}, script loaded')
except Exception as e:
    print(f'[*] attach FAILED: {e}')
    proc.kill()
    sys.exit(1)

# Resume process (if suspended)
try:
    import ctypes
    k = ctypes.windll.kernel32
    TH32CS_SNAPTHREAD = 0x00000004
    THREAD_SUSPEND_RESUME = 0x0002
    class THREADENTRY32(ctypes.Structure):
        _fields_ = [('dwSize', ctypes.c_ulong), ('cntUsage', ctypes.c_ulong),
                    ('th32ThreadID', ctypes.c_ulong), ('th32OwnerProcessID', ctypes.c_ulong),
                    ('tpBasePri', ctypes.c_long), ('tpDeltaPri', ctypes.c_long),
                    ('dwFlags', ctypes.c_ulong)]
    snap = k.CreateToolhelp32Snapshot(TH32CS_SNAPTHREAD, 0)
    te = THREADENTRY32(); te.dwSize = ctypes.sizeof(THREADENTRY32)
    k.Thread32First(snap, ctypes.byref(te))
    while True:
        if te.th32OwnerProcessID == proc.pid:
            h = k.OpenThread(THREAD_SUSPEND_RESUME, False, te.th32ThreadID)
            if h:
                k.ResumeThread(h)
                k.CloseHandle(h)
        if not k.Thread32Next(snap, ctypes.byref(te)): break
    k.CloseHandle(snap)
    print('[*] threads resumed')
except Exception as e:
    print(f'[*] resume failed, proceeding anyway: {e}')

# Feed stdin and read output
try:
    out, err = proc.communicate(input=b'\r\n\r\n', timeout=30)
    print(f'[*] proc exited rc={proc.returncode}')
    print(f'[*] stdout ({len(out)} B): {out[:300]!r}')
    # Extract Flag plaintext
    i = out.find(b'[+] Flag: ')
    if i >= 0:
        pt_hex = out[i+10 : i+10+72]
        print(f'[+] plaintext (72B) sha256={hashlib.sha256(pt_hex).hexdigest()[:16]}')
        print(f'    first 16: {pt_hex[:16]!r}')
except subprocess.TimeoutExpired:
    proc.kill()
    print('[*] TIMEOUT')

print(f'\n[*] totals: enc_enter={len(enc_entries)}, exceptions={len(exceptions)}')
if enc_entries:
    print(f'[*] first key: {enc_entries[0]["key"]}')
    print(f'[*] distinct keys: {len(set(e["key"] for e in enc_entries))}')
