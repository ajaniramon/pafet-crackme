#!/usr/bin/env python3
"""Hook the `call rax` at 0x1400c4468 inside cipher-VM.
Dump rax (= vtable method ptr), rcx, rdx, r8 at the moment of the call.
This tells us which main-VM thunk variant and what opcode is passed."""
import subprocess, frida, sys

EXE = r'C:\Users\Ramón\Desktop\pafet_pass8.exe'

JS = r'''
Process.setExceptionHandler(d => { try { if (parseInt(d.context.rdi.toString(16).slice(-8),16)===0xe06d7363) return false; } catch(e){} return false; });
const mods = Process.enumerateModules();
let MAIN=null; for(const m of mods) if (/pafet.*\.exe$/i.test(m.name)) { MAIN=m; break; }
const BASE = MAIN.base;
const CALL_RAX = BASE.add(0xc4468);

Interceptor.attach(CALL_RAX, {
  onEnter: function() {
    const c = this.context;
    send({kind:'call_rax', rax: c.rax.toString(), rcx: c.rcx.toString(), rdx: c.rdx.toString(), r8: c.r8.toString()});
  }
});
'''

def run(user, serial='serial01'):
    proc = subprocess.Popen([EXE], stdin=subprocess.PIPE, stdout=subprocess.PIPE, stderr=subprocess.PIPE)
    try: session = frida.attach(proc.pid)
    except Exception as e: print(f'FAIL {e}'); proc.kill(); return []
    script = session.create_script(JS)
    calls = []
    def cb(msg, data):
        if msg['type']=='send' and msg['payload']['kind']=='call_rax':
            calls.append(msg['payload'])
            print(f'  call_rax: rax={msg["payload"]["rax"]} rdx={msg["payload"]["rdx"]}', flush=True)
    script.on('message', cb)
    script.load()
    try: proc.stdin.write(f'{user}\n{serial}\n'.encode()); proc.stdin.flush(); proc.stdin.close()
    except: pass
    try: proc.wait(timeout=120)
    except subprocess.TimeoutExpired: proc.kill()
    return calls

print('=== user=alice serial=serial01 ===')
calls = run('alice', 'serial01')
print(f'  total call_rax: {len(calls)}')
from collections import Counter
print(f'  rax values: {Counter(c["rax"] for c in calls[:50])}')
print(f'  rdx values: {Counter(c["rdx"] for c in calls[:50])}')
