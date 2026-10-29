#!/usr/bin/env python3
"""Reproducible script for Jack IX: traces the actual output-buffer pathway
of the user-VM.

Discovery: the output of f_user does NOT live at [ctx+0x10] during user-VM
execution (that pointer is 0x0 throughout). It lives at [*ctx+0x5e8] (also
reachable via [*ctx+0x5f8] offset 0x10, or [*ctx+0x600] offset 0x0 — three
pointers to the same heap region, 0x90 B apart).

Hooks the resolver at 0x14003ebb0, polls [*ctx+0x5e8] at every resolver
call, and records transitions. Each transition shows which (ch, op) was
executing when the buffer changed.
"""
import frida, threading, os, json, sys

EXE = os.path.join(os.path.dirname(os.path.abspath(__file__)), '..', 'pafet_pass8.exe')

AGENT = r"""
const base = Process.enumerateModules().find(m => m.name.toLowerCase().endsWith('.exe')).base;
const RESOLVER = base.add(0x3ebb0);
const H20      = base.add(0x397239);
let ctx = null, callN = 0, hist = [], last = null;
Interceptor.attach(RESOLVER, {
  onEnter() {
    callN++;
    if (!ctx) ctx = this.context.rcx;
    try {
      const p = ctx.add(0x5e8).readPointer();
      const b = Array.from(new Uint8Array(p.readByteArray(32)))
        .map(x => x.toString(16).padStart(2,'0')).join('');
      if (b !== last) {
        hist.push({
          call: callN,
          ch: this.context.rdx.toInt32(),
          op: this.context.r8.toInt32(),
          bytes: b,
          ptr: p.toString()
        });
        last = b;
      }
    } catch(e) {}
  }
});
Interceptor.attach(H20, {
  onEnter() { send({kind:'done', hist: hist, total: callN}); }
});
send({kind:'ready'});
"""


def main():
    user = sys.argv[1].encode() if len(sys.argv) > 1 else b'alice'
    serial = sys.argv[2].encode() if len(sys.argv) > 2 else b'serial01'
    dev = frida.get_local_device()
    pid = dev.spawn([EXE], stdio='pipe')
    done = threading.Event(); result = {}
    def on_msg(m, _):
        if m['type'] == 'send' and m['payload'].get('kind') == 'done':
            result.update(m['payload']); done.set()
    dev.on('output', lambda p, f, d: None)
    sess = dev.attach(pid)
    scr = sess.create_script(AGENT)
    scr.on('message', on_msg)
    scr.load()
    dev.resume(pid)
    dev.input(pid, user + b'\r\n' + serial + b'\r\n')
    done.wait(120)
    try: dev.kill(pid)
    except Exception: pass

    print(f'user={user!r}  total resolver calls={result.get("total")}')
    print(f'Output buffer transitions:')
    for h in result.get('hist', []):
        print(f'  call {h["call"]:4d} (ch={h["ch"]}, op={h["op"]:2d}): {h["bytes"][:40]}')


if __name__ == '__main__':
    main()
