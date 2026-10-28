#!/usr/bin/env python3
"""Run pafet_pass8.exe multiple times with distinct (user, serial) pairs.
Hook the cipher-VM 0x1400c0510, read the u64 at rcx+0x28 after each call.
Compare: if DES-cipher depends on input, the u64 changes between runs."""
import subprocess, frida, time, sys, hashlib, threading

EXE = r'C:\Users\Ramón\Desktop\pafet_pass8.exe'

INPUTS = [
    ('alice',   'serial01'),
    ('bob',     'serial02'),
    ('carol',   'ABCDEFGH'),
    ('',        ''),            # empty (baseline)
    ('ramon',   '00000000'),
]

JS = r'''
const mods = Process.enumerateModules();
let MAIN=null;
for(const m of mods) if (/pafet.*\.exe$/i.test(m.name)) { MAIN=m; break; }
const BASE = MAIN.base;
const ENC_FN = BASE.add(0xc0510);

Process.setExceptionHandler(function (details) {
  try {
    const rdiLo = parseInt(details.context.rdi.toString(16).slice(-8), 16);
    if (rdiLo === 0xe06d7363) return false;
  } catch(e) {}
  send({kind:'XCEPT', addr:details.address.toString()});
  return false;
});

Interceptor.attach(ENC_FN, {
  onEnter: function () { this.rcx = this.context.rcx; },
  onLeave: function (retval) {
    try {
      const w64 = this.rcx.add(0x28).readByteArray(8);
      const hex = Array.from(new Uint8Array(w64)).map(x=>x.toString(16).padStart(2,'0')).join('');
      send({kind:'cipher_wrote', hex: hex});
    } catch(e) { send({kind:'cipher_wrote', hex:'ERR'}); }
  }
});
'''

def run_once(user, serial):
    proc = subprocess.Popen([EXE], stdin=subprocess.PIPE, stdout=subprocess.PIPE, stderr=subprocess.PIPE)
    try:
        session = frida.attach(proc.pid)
    except Exception as e:
        print(f'[FAIL] attach: {e}')
        proc.kill(); return []
    script = session.create_script(JS)
    calls = []
    def on_message(msg, data):
        if msg['type']=='send':
            p = msg['payload']
            if p.get('kind')=='cipher_wrote':
                calls.append(p['hex'])
                print(f'    [t=?] cipher_wrote: {p["hex"]} (count={len(calls)})')
    script.on('message', on_message)
    script.load()
    try:
        proc.stdin.write(f'{user}\n{serial}\n'.encode())
        proc.stdin.flush(); proc.stdin.close()
    except Exception: pass
    try:
        proc.wait(timeout=90)
    except subprocess.TimeoutExpired:
        proc.kill()
    return calls

print(f'[*] Running {len(INPUTS)} input pairs:')
results = []
for user, serial in INPUTS:
    print(f'\n--- user={user!r} serial={serial!r} ---')
    calls = run_once(user, serial)
    print(f'    cipher-VM writes (3 expected): {calls}')
    results.append((user, serial, calls))

print('\n[*] SUMMARY:')
baseline = results[0][2] if results else None
for user, serial, calls in results:
    same = (calls == baseline) if baseline else True
    tag = 'SAME' if same else 'DIFFERENT'
    print(f'   user={user!r:<10} serial={serial!r:<12} calls={calls}  [{tag}]')
