#!/usr/bin/env python3
"""Surgical hook on Loop 3 of 0x140176950 (at 0x1401776a0..0x1401776bc).
Loop 3 writes 32 bytes to [rsi] via 4 iterations of fmix64((rdi XOR r15 XOR r13)).

Capture at Loop 3 entry: r13, r15, rdi, rsi
Capture at Loop 3 bottom: rax (fmix output), rsi (after += 8)

Compare 3 inputs:
 - alice/serial01
 - alice/serial02  (serial changes)
 - bob/serial01    (user changes)
"""
import subprocess, frida, sys

EXE = r'C:\Users\Ramón\Desktop\pafet_pass8.exe'

JS = r'''
Process.setExceptionHandler(d => { try { if (parseInt(d.context.rdi.toString(16).slice(-8),16)===0xe06d7363) return false; } catch(e){} return false; });
const mods = Process.enumerateModules();
let MAIN=null; for(const m of mods) if (/pafet.*\.exe$/i.test(m.name)) { MAIN=m; break; }
const BASE = MAIN.base;

const LOOP3_TOP    = BASE.add(0x1776a0);   // 0x1401776a0
const LOOP3_BOTTOM = BASE.add(0x1776bc);   // 0x1401776bc (jne)

function hex(ptr, n) { try { const b = ptr.readByteArray(n); return Array.from(new Uint8Array(b)).map(x=>x.toString(16).padStart(2,'0')).join(''); } catch(e) { return null; } }

let callNum = 0;  // counts invocations of 0x140176950
let iterInCall = 0;

Interceptor.attach(LOOP3_TOP, {
  onEnter: function() {
    const c = this.context;
    if (iterInCall === 0) {
      // First iteration = loop entry (new call)
      callNum++;
      send({kind:'loop3_entry', call: callNum,
            r13: c.r13.toString(), r15: c.r15.toString(),
            rdi: c.rdi.toString(), rsi: c.rsi.toString()});
    }
    iterInCall++;
    if (iterInCall > 4) iterInCall = 0;  // reset safety
  }
});

Interceptor.attach(LOOP3_BOTTOM, {
  onEnter: function() {
    const c = this.context;
    // At this point rsi has been advanced by 8. The last 8 bytes written are at [rsi-8].
    try {
      const last_u64 = c.rsi.sub(8).readU64();
      send({kind:'loop3_iter', call: callNum, iter: iterInCall,
            rax: c.rax.toString(), r14: c.r14.toString(),
            written: last_u64.toString()});
    } catch(e) {}
    if (iterInCall >= 4) {
      // Last iter — dump the 32 bytes written to the buffer
      try {
        const buf_start = c.rsi.sub(32);
        const buf_data = hex(buf_start, 32);
        send({kind:'loop3_output', call: callNum, buf: buf_start.toString(), data: buf_data});
      } catch(e) {}
      iterInCall = 0;
    }
  }
});
'''

def run(user, serial):
    proc = subprocess.Popen([EXE], stdin=subprocess.PIPE, stdout=subprocess.PIPE, stderr=subprocess.PIPE)
    try: session = frida.attach(proc.pid)
    except Exception as e: print(f'FAIL {e}'); proc.kill(); return
    script = session.create_script(JS)
    calls = []
    def cb(msg, data):
        if msg['type']=='send':
            calls.append(msg['payload'])
    script.on('message', cb)
    script.load()
    try: proc.stdin.write(f'{user}\n{serial}\n'.encode()); proc.stdin.flush(); proc.stdin.close()
    except: pass
    try: proc.wait(timeout=120)
    except subprocess.TimeoutExpired: proc.kill()
    return calls

for user, serial in [('alice','serial01'), ('alice','serial02'), ('bob','serial01')]:
    print(f'\n=== user={user} serial={serial} ===')
    calls = run(user, serial)
    print(f'  total events: {len(calls)}')
    # Group by call
    from collections import defaultdict
    by_call = defaultdict(list)
    for c in calls:
        by_call[c.get('call', 0)].append(c)
    print(f'  distinct Loop 3 invocations: {len(by_call)}')
    # Show first 3 calls
    for cnum in sorted(by_call.keys())[:3]:
        events = by_call[cnum]
        entry = next((e for e in events if e['kind']=='loop3_entry'), None)
        iters = [e for e in events if e['kind']=='loop3_iter']
        output = next((e for e in events if e['kind']=='loop3_output'), None)
        print(f'  call #{cnum}:')
        if entry:
            print(f'    entry: r13={entry["r13"]} r15={entry["r15"]} rdi={entry["rdi"]} rsi={entry["rsi"]}')
        for i, it in enumerate(iters[:4]):
            print(f'    iter {i}: rax={it["rax"]} written={it["written"]}')
        if output:
            print(f'    output buf={output["buf"]} 32B={output["data"]}')
