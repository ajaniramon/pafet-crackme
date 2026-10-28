#!/usr/bin/env python3
"""EXPERIMENT A: Run alice/serial01 5 times, capture Loop 3 call #1 (r13, r15,
outputs) + rcx on entry to 0x140176950 + the FIRST qword of RCX if it's a ptr
+ the final s38 72 bytes.

Hypothesis: if r13/r15/outputs vary by ASLR but s38 remains constant,
Loop 3 is auxiliary (attestation/fingerprint)."""
import subprocess, frida, sys, hashlib

EXE = r'C:\Users\Ramón\Desktop\pafet_pass8.exe'

JS = r'''
Process.setExceptionHandler(d => { try { if (parseInt(d.context.rdi.toString(16).slice(-8),16)===0xe06d7363) return false; } catch(e){} return false; });
const mods = Process.enumerateModules();
let MAIN=null; for(const m of mods) if (/pafet.*\.exe$/i.test(m.name)) { MAIN=m; break; }
const BASE = MAIN.base;

const LEVEL3_ENTRY = BASE.add(0x176950);
const LOOP3_TOP    = BASE.add(0x1776a0);
const DISP_ENTRY   = BASE.add(0x396990);

function hex(ptr, n) { try { const b = ptr.readByteArray(n); return Array.from(new Uint8Array(b)).map(x=>x.toString(16).padStart(2,'0')).join(''); } catch(e) { return null; } }

let level3Calls = 0;
let level3EntryStash = null;

Interceptor.attach(LEVEL3_ENTRY, {
  onEnter: function() {
    const c = this.context;
    level3Calls++;
    const rcx = c.rcx;
    let rcx_deref0 = null, rcx_deref1 = null;
    try { rcx_deref0 = rcx.readPointer().toString(); } catch(e) {}
    try { rcx_deref1 = rcx.add(8).readPointer().toString(); } catch(e) {}
    // Record only first call for size
    if (level3Calls <= 3) {
      send({kind:'level3_entry', call: level3Calls,
            rcx: rcx.toString(), rcx_deref0: rcx_deref0, rcx_deref1: rcx_deref1,
            rcx_bytes: hex(rcx, 48)});
    }
    level3EntryStash = {call: level3Calls};
  }
});

let loop3Iters = 0;
Interceptor.attach(LOOP3_TOP, {
  onEnter: function() {
    const c = this.context;
    if (loop3Iters === 0 && level3EntryStash && level3EntryStash.call <= 3) {
      // Loop 3 entry for this level-3 call
      send({kind:'loop3_entry', call: level3EntryStash.call,
            r13: c.r13.toString(), r15: c.r15.toString(),
            rdi: c.rdi.toString(), rsi: c.rsi.toString()});
    }
    loop3Iters++;
    if (loop3Iters >= 4) loop3Iters = 0;
  }
});

// Hook opcode 20 of main-VM to capture s38 just before CMO{ check
let gotS38 = false;
Interceptor.attach(DISP_ENTRY, {
  onEnter: function() {
    const op = this.context.rdx.toUInt32() & 0xFF;
    if (op !== 20 || gotS38) return;
    gotS38 = true;
    this.rdi = this.context.rcx;
  },
  onLeave: function() {
    if (!this.rdi) return;
    try {
      const sp = this.rdi.add(0x38).readPointer();
      const size = sp.add(0x10).readU64().valueOf();
      const cap = sp.add(0x18).readU64().valueOf();
      const dp = (cap >= 16n) ? sp.readPointer() : sp;
      const content = hex(dp, Math.min(Number(size), 72));
      send({kind:'s38', size: Number(size), content: content});
    } catch(e) {}
  }
});
'''

def run_once():
    proc = subprocess.Popen([EXE], stdin=subprocess.PIPE, stdout=subprocess.PIPE, stderr=subprocess.PIPE)
    try: session = frida.attach(proc.pid)
    except Exception as e: print(f'FAIL {e}'); proc.kill(); return None
    script = session.create_script(JS)
    result = {'level3_entries': [], 'loop3_entries': [], 's38': None, 'pid': proc.pid}
    def cb(msg, data):
        if msg['type']=='send':
            p = msg['payload']
            k = p['kind']
            if k == 'level3_entry': result['level3_entries'].append(p)
            elif k == 'loop3_entry': result['loop3_entries'].append(p)
            elif k == 's38': result['s38'] = p
    script.on('message', cb)
    script.load()
    try: proc.stdin.write(b'alice\nserial01\n'); proc.stdin.flush(); proc.stdin.close()
    except: pass
    try: proc.wait(timeout=120)
    except subprocess.TimeoutExpired: proc.kill()
    return result

results = []
for i in range(5):
    print(f'\n=== Run {i+1}/5 ===', flush=True)
    r = run_once()
    if r:
        results.append(r)
        print(f'  pid={r["pid"]}')
        for L3 in r['level3_entries']:
            print(f'  L3 call#{L3["call"]} rcx={L3["rcx"]} deref0={L3["rcx_deref0"]} deref1={L3["rcx_deref1"]}')
            print(f'    rcx_bytes[:48]={L3["rcx_bytes"]}')
        for lp in r['loop3_entries']:
            print(f'  Loop3 call#{lp["call"]} r13={lp["r13"]} r15={lp["r15"]} rdi={lp["rdi"]} rsi={lp["rsi"]}')
        if r['s38']:
            print(f'  s38 size={r["s38"]["size"]} content={r["s38"]["content"][:48]}...')

# Comparative analysis
print('\n\n=== SUMMARY ===')
print(f'5 runs of alice/serial01 — compare r13/r15/outputs across runs:')
# For each Loop 3 call index (1, 2, 3), compare across runs
for call_idx in [1, 2, 3]:
    print(f'\nLoop 3 call #{call_idx}:')
    for i, r in enumerate(results):
        lp = next((x for x in r['loop3_entries'] if x['call'] == call_idx), None)
        if lp:
            print(f'  run {i+1}: r13={lp["r13"]} r15={lp["r15"]}')

print(f'\ns38 across 5 runs:')
for i, r in enumerate(results):
    s = r.get('s38')
    if s:
        print(f'  run {i+1}: {s["content"][:48]}... (sha16={hashlib.sha256(bytes.fromhex(s["content"])).hexdigest()[:16]})')
