#!/usr/bin/env python3
"""Set HW breakpoint on the 80-byte buffer that will hold the plaintext.
Procedure:
 1. Hook operator new during the 3rd cipher-VM call.
 2. When an 80-byte allocation returns, immediately set a HW BP (write) on that address.
 3. Capture the RIP that fires the BP.
"""
import subprocess, frida, sys

EXE = r'C:\Users\Ramón\Desktop\pafet_pass8.exe'

JS = r'''
let watchpointActive = false;
let watchedPtr = null;
Process.setExceptionHandler(function(details) {
  try {
    const ctx = details.context;
    const rdiLo = parseInt(ctx.rdi.toString(16).slice(-8), 16);
    if (rdiLo === 0xe06d7363) return false;  // skip C++ throws
    if (details.type === 'breakpoint' || details.type === 'single-step') {
      send({kind:'bp_hit', rip: ctx.rip.toString(),
            rax: ctx.rax.toString(), rcx: ctx.rcx.toString(), rdx: ctx.rdx.toString(),
            r8: ctx.r8.toString(), r9: ctx.r9.toString(), rbx: ctx.rbx.toString()});
      // Re-arm the watchpoint
      try {
        if (watchedPtr) {
          const tid = Process.getCurrentThreadId();
          Process.getThreadById(tid).unsetHardwareWatchpoint(0);
          Process.getThreadById(tid).setHardwareWatchpoint(0, watchedPtr, 1, 'w');
        }
      } catch(e) {}
      return true;  // handled
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
let watchedAddrs = new Set();

Interceptor.attach(CIPHER, {
  onEnter: function() { cipherNum++; },
});

Interceptor.attach(OP_NEW, {
  onEnter: function() {
    this.size = this.context.rcx.toUInt32();
  },
  onLeave: function(retval) {
    // Interested in 80-byte allocations during cipher #3
    if (this.size === 80 && cipherNum === 3 && !watchedAddrs.has(retval.toString())) {
      const addr = retval;
      watchedAddrs.add(addr.toString());
      send({kind:'alloc80', addr: addr.toString()});
      try {
        watchedPtr = addr;
        const tid = Process.getCurrentThreadId();
        Process.getThreadById(tid).setHardwareWatchpoint(0, addr, 1, 'w');
        send({kind:'watchpoint_set', addr: addr.toString()});
      } catch(e) {
        send({kind:'watchpoint_err', err: e.toString()});
      }
    }
  }
});
'''

def run(user, serial):
    proc = subprocess.Popen([EXE], stdin=subprocess.PIPE, stdout=subprocess.PIPE, stderr=subprocess.PIPE)
    try: session = frida.attach(proc.pid)
    except Exception as e: print(f'FAIL {e}'); proc.kill(); return
    script = session.create_script(JS)
    def cb(msg, data):
        if msg['type']=='send':
            p = msg['payload']
            print(f'  {p}', flush=True)
    script.on('message', cb)
    script.load()
    try: proc.stdin.write(f'{user}\n{serial}\n'.encode()); proc.stdin.flush(); proc.stdin.close()
    except: pass
    try: proc.wait(timeout=120)
    except subprocess.TimeoutExpired: proc.kill()

print('=== user=alice serial=serial01 ===')
run('alice', 'serial01')
