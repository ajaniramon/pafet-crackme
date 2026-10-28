#!/usr/bin/env python3
"""Precise instrumentation: hook EVERY main-VM dispatch entry with per-op scans
of ALL writable heap ranges (not just Ctx/stack). Report the EARLIEST op in
which the plaintext prefix appears."""
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

const mods = Process.enumerateModules();
let MAIN=null;
for(const m of mods) if (/pafet.*\.exe$/i.test(m.name)) { MAIN=m; break; }
const BASE = MAIN.base;
const DISP = BASE.add(0x396990);

const PATTERN = '35 10 36 6f bf f5 cb 69';

function scanAllRw() {
  // Enumerate rw-x ranges and scan each
  const hits = [];
  const ranges = Process.enumerateRanges('rw-');
  for (const r of ranges) {
    try {
      const found = Memory.scanSync(r.base, r.size, PATTERN);
      for (const f of found) hits.push({region: r.base.toString(), size: r.size, addr: f.address.toString()});
    } catch(e) {}
  }
  return hits;
}

let seq = 0;
let firstHitOp = null;

Interceptor.attach(DISP, {
  onEnter: function () {
    seq++;
    this.n = seq;
    this.opcode = this.context.rdx.toUInt32() & 0xFF;
  },
  onLeave: function (retval) {
    // Scan all writable memory for the needle
    const hits = scanAllRw();
    if (hits.length > 0 && firstHitOp === null) {
      firstHitOp = {op: this.n, opcode: this.opcode, hits: hits};
      send({kind:'first_hit', op: this.n, opcode: this.opcode, hits: hits});
    }
    send({kind:'op', n: this.n, opcode: this.opcode, hits: hits.length, ret: retval.toString()});
  }
});

console.log('[*] global-scan hook ready');
'''

all_hits = []
def on_message(msg, data):
    if msg['type']=='send':
        p = msg['payload']
        if p.get('kind')=='first_hit':
            print(f'\n[FIRST!] op #{p["op"]} opcode={p["opcode"]}')
            for h in p['hits']:
                print(f'   {h}')
        elif p.get('kind')=='op':
            print(f'[OP #{p["n"]}] opcode={p["opcode"]:3d} hits_total={p["hits"]} ret={p["ret"]}')

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
