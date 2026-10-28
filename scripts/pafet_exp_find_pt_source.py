#!/usr/bin/env python3
"""Find the TRUE producer of the plaintext bytes.
Scan the heap for the plaintext prefix after each major helper function during
cipher #3 to narrow when/where the plaintext bytes first appear."""
import subprocess, frida, sys

EXE = r'C:\Users\Ramón\Desktop\pafet_pass8.exe'

JS = r'''
Process.setExceptionHandler(d => { try { if (parseInt(d.context.rdi.toString(16).slice(-8),16)===0xe06d7363) return false; } catch(e){} return false; });
const mods = Process.enumerateModules();
let MAIN=null; for(const m of mods) if (/pafet.*\.exe$/i.test(m.name)) { MAIN=m; break; }
const BASE = MAIN.base;
const CIPHER = BASE.add(0xc0510);

const PT_PATTERN = 'fd 20 77 a1 01 ac df ae';

function scanAll() {
  const hits = [];
  for (const r of Process.enumerateRanges('rw-')) {
    try {
      const found = Memory.scanSync(r.base, r.size, PT_PATTERN);
      for (const f of found) hits.push(f.address.toString());
    } catch(e) {}
  }
  return hits;
}

let cipherDepth = 0;
let cipherNum = 0;
let scansDone = 0;

Interceptor.attach(CIPHER, {
  onEnter: function() { cipherDepth++; if (cipherDepth === 1) cipherNum++; },
  onLeave: function() {
    cipherDepth--;
    if (cipherDepth === 0 && cipherNum === 3) {
      const h = scanAll();
      send({kind:'cipher3_end', hits: h});
    }
  }
});

// Hook some KEY candidate functions and scan at their return to find where
// the plaintext first appears.
// We know plaintext appears at some point during cipher #3. We want to narrow
// to a function whose exit sees the plaintext for the FIRST time.
// Candidates: all level-3+ sub-functions called from 0x14016fa50 and friends.
const CANDIDATES = [
  {addr: BASE.add(0x16d950), name: 'fn_0x14016d950'},
  {addr: BASE.add(0x169d10), name: 'fn_0x140169d10'},
  {addr: BASE.add(0x168f10), name: 'fn_0x140168f10'},
  {addr: BASE.add(0x16cd80), name: 'fn_0x14016cd80'},
  {addr: BASE.add(0x16ca90), name: 'fn_0x14016ca90'},
  {addr: BASE.add(0x16fa50), name: 'fn_0x14016fa50'},
];

let fnDepth = {};
let fnFirstScanOnReturn = {};
for (const c of CANDIDATES) {
  fnDepth[c.name] = 0;
  Interceptor.attach(c.addr, {
    onEnter: function() {
      if (cipherDepth === 0 || cipherNum !== 3) return;
      this.name = c.name;
      fnDepth[c.name]++;
    },
    onLeave: function() {
      if (this.name === undefined) return;
      fnDepth[this.name]--;
      if (fnDepth[this.name] !== 0) return;  // not outermost
      if (fnFirstScanOnReturn[this.name]) return;  // already captured first
      scansDone++;
      if (scansDone > 100) return;  // safety
      const h = scanAll();
      if (h.length > 0) {
        fnFirstScanOnReturn[this.name] = true;
        send({kind:'first_pt_after', fn: this.name, hits: h, scanN: scansDone});
      }
    }
  });
}
'''

def run(user, serial):
    proc = subprocess.Popen([EXE], stdin=subprocess.PIPE, stdout=subprocess.PIPE, stderr=subprocess.PIPE)
    try: session = frida.attach(proc.pid)
    except Exception as e: print(f'FAIL {e}'); proc.kill(); return
    script = session.create_script(JS)
    events = []
    def cb(msg, data):
        if msg['type']=='send':
            events.append(msg['payload'])
            p = msg['payload']
            print(f'  {p}', flush=True)
    script.on('message', cb)
    script.load()
    try: proc.stdin.write(f'{user}\n{serial}\n'.encode()); proc.stdin.flush(); proc.stdin.close()
    except: pass
    try: proc.wait(timeout=180)
    except subprocess.TimeoutExpired: proc.kill()
    return events

print('=== alice/serial01 ===')
run('alice', 'serial01')
