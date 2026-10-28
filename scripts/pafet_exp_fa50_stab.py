#!/usr/bin/env python3
"""Fase 6 — Stability test for 0x14016fa50.
Run 5 processes per credential pair, compare pre_518/pre_68/pre_20 at call #1
and across first 3 calls. Determine if these are:
 - Stable across processes AND variable across credentials → crypto real
 - Variable across processes → ASLR noise (like Loop 3)
"""
import subprocess, frida, sys, hashlib
from collections import defaultdict

EXE = r'C:\Users\Ramón\Desktop\pafet_pass8.exe'

JS = r'''
Process.setExceptionHandler(d => { try { if (parseInt(d.context.rdi.toString(16).slice(-8),16)===0xe06d7363) return false; } catch(e){} return false; });
const mods = Process.enumerateModules();
let MAIN=null; for(const m of mods) if (/pafet.*\.exe$/i.test(m.name)) { MAIN=m; break; }
const BASE = MAIN.base;
const CIPHER = BASE.add(0xc0510);
const FA50 = BASE.add(0x16fa50);
const DISP = BASE.add(0x396990);
function hex(ptr, n) { try { const b = ptr.readByteArray(n); return Array.from(new Uint8Array(b)).map(x=>x.toString(16).padStart(2,'0')).join(''); } catch(e) { return null; } }

let cipherDepth = 0;
let cipherNum = 0;
let callN = 0;

Interceptor.attach(CIPHER, {
  onEnter: function() { cipherDepth++; if (cipherDepth === 1) cipherNum++; },
  onLeave: function() { cipherDepth--; }
});

Interceptor.attach(FA50, {
  onEnter: function() {
    if (cipherDepth === 0) return;
    callN++;
    if (callN > 3) return;
    const c = this.context;
    this.rcx = c.rcx;
    try {
      this.pre_518 = c.rcx.add(0x518).readU64().toString();
      this.pre_68  = c.rcx.add(0x68).readU32();
      this.pre_20  = c.rcx.add(0x20).readU64().toString();
      // Also dump 48 bytes at rcx for context
      this.rcx_mem = hex(c.rcx, 128);
    } catch(e) {}
    send({kind:'fa50_entry', call: callN, cipher: cipherNum,
          rcx: c.rcx.toString(),
          pre_518: this.pre_518, pre_68: this.pre_68, pre_20: this.pre_20,
          rcx_mem: this.rcx_mem});
  }
});

let gotS38 = false;
Interceptor.attach(DISP, {
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
      send({kind:'s38', content: content});
    } catch(e) {}
  }
});
'''

def run(user, serial):
    proc = subprocess.Popen([EXE], stdin=subprocess.PIPE, stdout=subprocess.PIPE, stderr=subprocess.PIPE)
    try: session = frida.attach(proc.pid)
    except Exception as e: print(f'FAIL {e}'); proc.kill(); return None
    script = session.create_script(JS)
    result = {'calls': [], 's38': None, 'pid': proc.pid}
    def cb(msg, data):
        if msg['type']=='send':
            p = msg['payload']
            if p['kind']=='fa50_entry': result['calls'].append(p)
            elif p['kind']=='s38': result['s38'] = p['content']
    script.on('message', cb)
    script.load()
    try: proc.stdin.write(f'{user}\n{serial}\n'.encode()); proc.stdin.flush(); proc.stdin.close()
    except: pass
    try: proc.wait(timeout=120)
    except subprocess.TimeoutExpired: proc.kill()
    return result

# 5 runs per credential set
INPUTS = [('alice','serial01'), ('alice','serial02'), ('bob','serial01')]

summary = defaultdict(list)
for user, serial in INPUTS:
    print(f'\n### {user}/{serial} — 5 runs')
    for r in range(5):
        res = run(user, serial)
        if res is None: continue
        c1 = next((c for c in res['calls'] if c['call'] == 1), None)
        s38_sha = hashlib.sha256(bytes.fromhex(res['s38'])).hexdigest()[:16] if res['s38'] else None
        if c1:
            summary[(user,serial)].append({
                'pid': res['pid'],
                'rcx': c1['rcx'],
                'pre_518': c1['pre_518'],
                'pre_68': c1['pre_68'],
                'pre_20': c1['pre_20'],
                's38_sha': s38_sha,
            })
            print(f'  run {r+1}: pid={res["pid"]} rcx={c1["rcx"]} 518={c1["pre_518"]} 68={c1["pre_68"]} 20={c1["pre_20"]} s38sha={s38_sha}')

# Analysis
print('\n\n=== STABILITY ANALYSIS ===')
for key, runs in summary.items():
    if not runs: continue
    print(f'\n{key}:')
    for field in ['pre_518', 'pre_68', 'pre_20', 'rcx']:
        vals = set(r[field] for r in runs)
        stable = (len(vals) == 1)
        print(f'  {field:10}: {"STABLE" if stable else "VARIES"} across runs ({len(vals)} distinct)')
    s38s = set(r['s38_sha'] for r in runs if r['s38_sha'])
    print(f'  s38       : {"STABLE" if len(s38s)==1 else "VARIES"} across runs ({len(s38s)} distinct)')

print('\n=== KEY VARIATION ANALYSIS ===')
# For each field, check if STABLE across runs but VARIES across inputs
for field in ['pre_518', 'pre_68', 'pre_20']:
    print(f'\n{field}:')
    for key, runs in summary.items():
        if runs:
            vals = set(r[field] for r in runs)
            print(f'  {key}: first_val={runs[0][field]}, run-distinct={len(vals)}')
