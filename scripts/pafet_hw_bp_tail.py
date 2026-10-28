#!/usr/bin/env python3
"""HW BP on bytes 68-71 (last 4 bytes) of the plaintext 80-byte alloc.
Re-arms after each hit. Captures RIPs that write to the end of the buffer."""
import subprocess, frida, sys

EXE = r'C:\Users\Ramón\Desktop\pafet_pass8.exe'

JS = r'''
Process.setExceptionHandler(function(details) {
  try {
    const ctx = details.context;
    const rdiLo = parseInt(ctx.rdi.toString(16).slice(-8), 16);
    if (rdiLo === 0xe06d7363) return false;
    if (details.type === 'breakpoint' || details.type === 'single-step') {
      send({kind:'bp_hit', rip: ctx.rip.toString(),
            rax: ctx.rax.toString(), rcx: ctx.rcx.toString(),
            rdx: ctx.rdx.toString(), r8: ctx.r8.toString(),
            r9: ctx.r9.toString(), rbx: ctx.rbx.toString(),
            rsi: ctx.rsi.toString(), rdi: ctx.rdi.toString()});
      // Re-arm
      try {
        if (watchedPtr) {
          const tid = Process.getCurrentThreadId();
          Process.getThreadById(tid).unsetHardwareWatchpoint(0);
          Process.getThreadById(tid).setHardwareWatchpoint(0, watchedPtr, 4, 'w');
        }
      } catch(e) {}
      return true;
    }
  } catch(e) {}
  return false;
});

const mods = Process.enumerateModules();
let MAIN=null; for(const m of mods) if (/pafet.*\.exe$/i.test(m.name)) { MAIN=m; break; }
const BASE = MAIN.base;
const CIPHER = BASE.add(0xc0510);
const OP_NEW = BASE.add(0x3a4080);

let cipherNum = 0;
let watchedPtr = null;
let watchedSet = false;

Interceptor.attach(CIPHER, {
  onEnter: function() { cipherNum++; }
});

Interceptor.attach(OP_NEW, {
  onEnter: function() { this.size = this.context.rcx.toUInt32(); },
  onLeave: function(retval) {
    if (this.size === 80 && cipherNum === 3 && !watchedSet) {
      watchedSet = true;
      watchedPtr = retval.add(68);  // bytes 68-71
      send({kind:'alloc80', addr: retval.toString(), watch: watchedPtr.toString()});
      try {
        const tid = Process.getCurrentThreadId();
        Process.getThreadById(tid).setHardwareWatchpoint(0, watchedPtr, 4, 'w');
      } catch(e) { send({kind:'err', msg: e.toString()}); }
    }
  }
});
'''

def run(user, serial):
    proc = subprocess.Popen([EXE], stdin=subprocess.PIPE, stdout=subprocess.PIPE, stderr=subprocess.PIPE)
    try: session = frida.attach(proc.pid)
    except Exception as e: print(f'FAIL {e}'); proc.kill(); return
    script = session.create_script(JS)
    hits = []
    def cb(msg, data):
        if msg['type']=='send':
            p = msg['payload']
            if p['kind']=='bp_hit':
                hits.append(p)
                print(f'  BP hit #{len(hits)}: rip={p["rip"]} rcx={p["rcx"]} rdx={p["rdx"]} r8={p["r8"]} rbx={p["rbx"]} rdi={p["rdi"]}', flush=True)
            else:
                print(f'  {p}', flush=True)
    script.on('message', cb)
    script.load()
    try: proc.stdin.write(f'{user}\n{serial}\n'.encode()); proc.stdin.flush(); proc.stdin.close()
    except: pass
    try: proc.wait(timeout=180)
    except subprocess.TimeoutExpired: proc.kill()
    print(f'Total BP hits: {len(hits)}')

print('=== alice/serial01 ===')
run('alice', 'serial01')
