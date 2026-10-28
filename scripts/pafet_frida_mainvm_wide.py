#!/usr/bin/env python3
"""Wider instrumentation: in each main-VM op, scan the heap near rcx (Ctx)
and the stack near rsp for the plaintext prefix. Report FIRST appearance."""
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

const needle = new Uint8Array([0x35,0x10,0x36,0x6f,0xbf,0xf5,0xcb,0x69]);

function scanRegion(baseStr, size) {
  // Memory.scanSync for needle in [base, base+size)
  try {
    const base = ptr(baseStr);
    const pattern = '35 10 36 6f bf f5 cb 69';
    const results = Memory.scanSync(base, size, pattern);
    return results.map(r => ({addr: r.address.toString(), size: r.size}));
  } catch(e) { return []; }
}

const mods = Process.enumerateModules();
let MAIN=null;
for(const m of mods) if (/pafet.*\.exe$/i.test(m.name)) { MAIN=m; break; }
const BASE = MAIN.base;
const DISP = BASE.add(0x396990);

let seq = 0;
let firstHit = null;
Interceptor.attach(DISP, {
  onEnter: function () {
    const c = this.context;
    seq++;
    this.n = seq;
    this.opcode = c.rdx.toUInt32() & 0xFF;
    this.rcx = c.rcx; this.rsp = c.rsp;
  },
  onLeave: function (retval) {
    // Scan Ctx (rcx) + 0..32KB and stack (rsp -16K..+16K) for the needle
    const hits = [];
    try {
      const ctxHits = Memory.scanSync(this.rcx, 32*1024, '35 10 36 6f bf f5 cb 69');
      for (const h of ctxHits) hits.push({region:'ctx', addr: h.address.toString(), offset_from_ctx: h.address.sub(this.rcx).toInt32()});
    } catch(e) {}
    try {
      const stackBase = this.rsp.sub(16*1024);
      const stackHits = Memory.scanSync(stackBase, 32*1024, '35 10 36 6f bf f5 cb 69');
      for (const h of stackHits) hits.push({region:'stack', addr: h.address.toString(), offset_from_rsp: h.address.sub(this.rsp).toInt32()});
    } catch(e) {}
    if (hits.length > 0 && firstHit === null) {
      firstHit = {op: this.n, opcode: this.opcode, hits: hits};
      send({kind:'first_hit', op: this.n, opcode: this.opcode, hits: hits, ret: retval.toString()});
    }
    send({kind:'op', n: this.n, opcode: this.opcode, hits_now: hits.length, ret: retval.toString()});
  }
});

console.log('[*] wide-scan hook ready');
'''

def on_message(msg, data):
    if msg['type']=='send':
        p = msg['payload']
        if p.get('kind')=='first_hit':
            print(f'\n[FIRST HIT!] op #{p["op"]} opcode={p["opcode"]}')
            for h in p['hits']:
                print(f'   {h}')
        elif p.get('kind')=='op':
            if p['hits_now'] > 0:
                print(f'[OP #{p["n"]}] opcode={p["opcode"]:3d} hits_now={p["hits_now"]}')

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
print(f'\n[*] rc={proc.returncode}')
