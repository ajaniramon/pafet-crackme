#!/usr/bin/env python3
"""Capture per-handler counts for the 8 state handlers of the secondary dispatcher.
Hooks are JS-counted so Frida's queue doesn't overflow."""
import frida, threading, os, sys, json
HERE = os.path.dirname(os.path.abspath(__file__))
EXE  = os.path.join(HERE, '..', 'pafet_pass8.exe')

AGENT = r"""
const base = Process.enumerateModules().find(m => m.name.toLowerCase().endsWith('.exe')).base;
const EXECUTOR = base.add(0x804c0);
const HANDLERS = [0x4c490,0x4c4f0,0x4c560,0x4c5b0,0x4c5d0,0x4c630,0x4c690,0x4c6a0];
let counts = HANDLERS.map(() => 0);
let in_exec = false;
let done_sent = false;
Interceptor.attach(EXECUTOR, {
  onEnter() { in_exec = true; },
  onLeave() {
    in_exec = false;
    if (!done_sent) { done_sent = true; setTimeout(() => send({kind:'done', counts: counts}), 500); }
  }
});
for (let i = 0; i < HANDLERS.length; i++) {
  const idx = i;
  Interceptor.attach(base.add(HANDLERS[i]), {
    onEnter() { if (in_exec) counts[idx]++; }
  });
}
setTimeout(() => { if (!done_sent) { done_sent=true; send({kind:'done', counts: counts, timeout:true}); } }, 120000);
"""

def main():
    dev = frida.get_local_device()
    pid = dev.spawn([EXE], stdio='pipe')
    done = threading.Event()
    result = {}
    def on_msg(m, _):
        if m['type']=='send' and m['payload'].get('kind')=='done':
            result.update(m['payload']); done.set()
    dev.on('output', lambda p, f, d: None)
    sess = dev.attach(pid)
    scr  = sess.create_script(AGENT)
    scr.on('message', on_msg)
    scr.load()
    dev.resume(pid)
    dev.input(pid, b'alice\r\nserial01\r\n')
    done.wait(150)
    try: dev.kill(pid)
    except: pass
    HANDLERS = [0x4c490,0x4c4f0,0x4c560,0x4c5b0,0x4c5d0,0x4c630,0x4c690,0x4c6a0]
    counts = result.get('counts', [])
    print('Handler hit counts:')
    for i, h in enumerate(HANDLERS):
        print(f'  [{i}] 0x{h:x}: {counts[i] if i < len(counts) else "?"}')
    print(f'\nTotal: {sum(counts)}  (timeout: {result.get("timeout")})')

if __name__ == '__main__':
    main()
