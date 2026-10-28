#!/usr/bin/env python3
"""Hook 0x140002480 (user-VM dispatcher). Capture every call:
(ecx=depth, edx=start_pc, r8=arg0, r9=arg1) and return rax.
Run with several inputs to catalog the ENTIRE sequence of VM calls."""
import subprocess, frida, time, sys, json

EXE = r'C:\Users\Ramón\Desktop\pafet_pass8.exe'

INPUTS = [
    ('A', '0'),
    ('AB', '0'),
    ('alice', 'serial01'),
    ('', ''),
]

JS = r'''
Process.setExceptionHandler(d => { try { if (parseInt(d.context.rdi.toString(16).slice(-8),16)===0xe06d7363) return false; } catch(e){} return false; });
const mods = Process.enumerateModules();
let MAIN=null; for(const m of mods) if (/pafet.*\.exe$/i.test(m.name)) { MAIN=m; break; }
const BASE = MAIN.base;
const VM = BASE.add(0x2480);

Interceptor.attach(VM, {
  onEnter: function() {
    const c = this.context;
    this.depth = c.rcx.toUInt32();
    this.pc = c.rdx.toUInt32();
    this.r8 = c.r8;
    this.r9 = c.r9;
  },
  onLeave: function(retval) {
    send({kind:'call', depth: this.depth, pc: this.pc,
          r8: this.r8.toString(), r9: this.r9.toString(),
          ret: retval.toString()});
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

for u, s in INPUTS:
    print(f'\n=== user={u!r} serial={s!r} ===')
    calls = run(u, s)
    print(f'  total calls to 0x140002480: {len(calls)}')
    # Show first 20 unique depth-0 calls (top-level)
    top = [c for c in calls if c['depth'] == 0]
    print(f'  top-level calls (depth=0): {len(top)}')
    for i, c in enumerate(top[:15]):
        print(f'    #{i+1}: pc={c["pc"]:3d}  r8={c["r8"]}  r9={c["r9"]}  ret={c["ret"]}')
    # Count by PC
    from collections import Counter
    pc_count = Counter((c['depth'], c['pc']) for c in calls)
    print(f'  distinct (depth, pc) seen: {len(pc_count)}')
    for (dp, pc), cnt in sorted(pc_count.items())[:10]:
        print(f'    depth={dp} pc={pc}: {cnt} calls')

# Save for offline analysis
import json
with open(r'C:\Users\Ramón\Desktop\pafet_vmdispatch_trace.json','w') as f:
    all_data = {}
    for u, s in INPUTS:
        pass  # already captured per-run above
    json.dump({'inputs': [(u,s) for u,s in INPUTS]}, f)
