#!/usr/bin/env python3
"""Minimal hook test — attach each hex-VM landmark and send on fire."""
import frida, threading, os, json, sys
HERE = os.path.dirname(os.path.abspath(__file__))
EXE  = os.path.join(HERE, '..', 'pafet_pass8.exe')

AGENT = r"""
const base = Process.enumerateModules().find(m => m.name.toLowerCase().endsWith('.exe')).base;
send({kind:'base', v: base.toString()});

const points = {
  executor:   0x804c0,
  queue_push: 0x4c880,
  sec_disp:   0x4c720,
  vpc_read:   0x49a30,
  vpc_write:  0x49af0,
  alloc:      0x7fa70,
  output_bld: 0x889e0,
  throw_ex:   0x3a5fa0,
  panic:      0x49330,
};

for (const [name, rva] of Object.entries(points)) {
  try {
    Interceptor.attach(base.add(rva), {
      onEnter() { send({kind:'hit', name: name, rcx: this.context.rcx.toString(), edx: this.context.rdx.toInt32() & 0xffffffff, rip: this.context.rip.toString()}); }
    });
    send({kind:'attach_ok', name: name, va: base.add(rva).toString()});
  } catch(e) {
    send({kind:'attach_err', name: name, err: String(e)});
  }
}

setTimeout(() => send({kind:'done'}), 25000);
"""

def main():
    dev = frida.get_local_device()
    pid = dev.spawn([EXE], stdio='pipe')
    done = threading.Event()
    hits = {}
    attach_ok = []
    attach_err = []
    def on_msg(m, _):
        if m['type'] != 'send': return
        p = m['payload']
        k = p.get('kind')
        if k == 'base':      print('[base]', p['v'])
        elif k == 'attach_ok': attach_ok.append(p['name'])
        elif k == 'attach_err': attach_err.append((p['name'], p['err']))
        elif k == 'hit':
            name = p['name']
            hits[name] = hits.get(name, 0) + 1
            if hits[name] <= 3:
                print(f"[hit#{hits[name]}] {name:12s} rcx={p['rcx']} edx={p['edx']:#x} rip={p['rip']}")
        elif k == 'done':
            print('[done]'); done.set()
    dev.on('output', lambda p, f, d: None)
    sess = dev.attach(pid)
    scr  = sess.create_script(AGENT)
    scr.on('message', on_msg)
    scr.load()
    dev.resume(pid)
    dev.input(pid, b'alice\r\nserial01\r\n')
    done.wait(40)
    try: dev.kill(pid)
    except: pass
    print('attach_ok:', attach_ok)
    print('attach_err:', attach_err)
    print('hits:', hits)

if __name__ == '__main__':
    main()
