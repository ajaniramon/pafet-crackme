#!/usr/bin/env python3
"""Hook the REAL user-VM dispatcher at 0x140048960.
Capture every call: (rcx, rdx (opcode as ptr), r8, r9) and return rax.
Compare across usernames to see if calls differ."""
import subprocess, frida, time, sys, json

EXE = r'C:\Users\Ramón\Desktop\pafet_pass8.exe'

INPUTS = [
    ('A', '0'),
    ('AA', '0'),
    ('alice', '0'),
    ('bob', '0'),
]

JS = r'''
Process.setExceptionHandler(d => { try { if (parseInt(d.context.rdi.toString(16).slice(-8),16)===0xe06d7363) return false; } catch(e){} return false; });
const mods = Process.enumerateModules();
let MAIN=null; for(const m of mods) if (/pafet.*\.exe$/i.test(m.name)) { MAIN=m; break; }
const BASE = MAIN.base;
const VM = BASE.add(0x48960);
function hex(ptr, n) { try { const b = ptr.readByteArray(n); return Array.from(new Uint8Array(b)).map(x=>x.toString(16).padStart(2,'0')).join(''); } catch(e) { return null; } }

Interceptor.attach(VM, {
  onEnter: function() {
    const c = this.context;
    // The thunk does: mov r8, [r8]; add rcx, 8; mov edx, [rdx]; jmp 0x140048960
    // So at entry: rdx = opcode (0..6), rcx = state ptr + 8, r8 = deref'd struct, r9 = unchanged
    this.opcode = c.rdx.toUInt32();
    this.rcx = c.rcx;
    this.r8 = c.r8;
    this.r9 = c.r9;
    // Read first 128 bytes at rcx, r8
    this.rcx_mem = hex(c.rcx, 48);
    this.r8_mem  = hex(c.r8, 48);
  },
  onLeave: function(retval) {
    send({kind:'call', opcode: this.opcode, rcx: this.rcx.toString(),
          r8: this.r8.toString(), r9: this.r9.toString(),
          rcx_mem: this.rcx_mem, r8_mem: this.r8_mem,
          ret: retval.toString(),
          rcx_mem_after: /* don't read again — stack may be gone */ null});
  }
});
'''

def run(user, serial):
    proc = subprocess.Popen([EXE], stdin=subprocess.PIPE, stdout=subprocess.PIPE, stderr=subprocess.PIPE)
    try: session = frida.attach(proc.pid)
    except Exception as e: print(f'FAIL {e}'); proc.kill(); return []
    script = session.create_script(JS)
    calls = []
    def cb(msg, data):
        if msg['type']=='send' and msg['payload']['kind']=='call':
            calls.append(msg['payload'])
    script.on('message', cb)
    script.load()
    try: proc.stdin.write(f'{user}\n{serial}\n'.encode()); proc.stdin.flush(); proc.stdin.close()
    except: pass
    try: proc.wait(timeout=90)
    except subprocess.TimeoutExpired: proc.kill()
    return calls

all_results = {}
for u, s in INPUTS:
    print(f'\n=== user={u!r} serial={s!r} ===')
    calls = run(u, s)
    print(f'  total calls: {len(calls)}')
    # Opcodes seen
    from collections import Counter
    op_count = Counter(c['opcode'] for c in calls)
    print(f'  opcodes seen: {dict(op_count)}')
    # Show first 10
    for i, c in enumerate(calls[:10]):
        print(f'  #{i+1} opc={c["opcode"]} r9={c["r9"]} ret={c["ret"]}')
        print(f'       rcx mem[:48]: {c["rcx_mem"]}')
        print(f'       r8  mem[:48]: {c["r8_mem"]}')
    all_results[f'{u}|{s}'] = calls

with open(r'C:\Users\Ramón\Desktop\pafet_realvm_trace.json', 'w') as f:
    json.dump(all_results, f)
print(f'\nSaved full trace')
