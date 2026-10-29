#!/usr/bin/env python3
"""Jack XVII Phase 2b: locate the serial-VM output buffer in RW memory.

After the executor returns, scan every RW region for the expected
g_serial(serial) byte string. For multiple serials to differentiate
cross-contamination.
"""
import frida, threading, os, json
from Crypto.Cipher import ARC4

HERE = os.path.dirname(os.path.abspath(__file__))
EXE = os.path.join(HERE, '..', 'pafet_pass8.exe')

AGENT = r"""
const base = Process.enumerateModules().find(m => m.name.toLowerCase().endsWith('.exe')).base;
const EXECUTOR = base.add(0x22a120);

let before_exit_hits = [];
let after_exit_hits = [];
let exec_ctx_addr = null;

// Expected output provided by caller (uint8 array)
let expected = null;

recv('expected', msg => { expected = msg.payload.hex; });

function scanAll(expectedHex) {
  const hits = [];
  const expBytes = [];
  for (let i = 0; i < expectedHex.length; i += 2) {
    expBytes.push(parseInt(expectedHex.substr(i, 2), 16));
  }
  const expArr = new Uint8Array(expBytes);
  const N = expArr.length;
  const ranges = Process.enumerateRangesSync({protection:'rw-', coalesce:true});
  for (const r of ranges) {
    if (r.size > 64*1024*1024) continue;
    try {
      const mem = r.base.readByteArray(r.size);
      const bytes = new Uint8Array(mem);
      for (let i = 0; i < bytes.length - N; i++) {
        let match = true;
        for (let j = 0; j < N; j++) {
          if (bytes[i+j] !== expArr[j]) { match = false; break; }
        }
        if (match) {
          hits.push(r.base.add(i).toString());
          if (hits.length > 20) break;
        }
      }
    } catch(e) {}
    if (hits.length > 20) break;
  }
  return hits;
}

Interceptor.attach(EXECUTOR, {
  onEnter() {
    exec_ctx_addr = this.context.rcx.toString();
    if (expected) {
      before_exit_hits = scanAll(expected);
    }
  },
  onLeave(retval) {
    if (expected) {
      after_exit_hits = scanAll(expected);
    }
    send({kind:'done',
          exec_ctx: exec_ctx_addr,
          hits_before: before_exit_hits,
          hits_after: after_exit_hits});
  }
});

send({kind:'ready'});
"""


def run(user, serial, expected_output, timeout=180):
    dev = frida.get_local_device()
    pid = dev.spawn([EXE], stdio='pipe')
    result = {}
    done = threading.Event()
    def on_msg(m, _):
        if m['type'] != 'send': return
        p = m['payload']
        if p.get('kind') == 'ready':
            # Push expected to agent
            script_ref[0].post({'type': 'expected', 'hex': expected_output.hex()})
        elif p.get('kind') == 'done':
            result.update(p); done.set()
    script_ref = [None]
    dev.on('output', lambda p,f,d: None)
    sess = dev.attach(pid)
    scr = sess.create_script(AGENT)
    script_ref[0] = scr
    scr.on('message', on_msg)
    scr.load()
    dev.resume(pid)
    dev.input(pid, user + b'\r\n' + serial + b'\r\n')
    done.wait(timeout)
    try: dev.kill(pid)
    except: pass
    return result


def main():
    for serial in [b'serial01', b'serial02', b'aaaaaaaa']:
        expected = ARC4.new(b'\0').encrypt(serial)
        print(f'\n=== serial={serial!r} expected={expected.hex()} ===')
        r = run(b'alice', serial, expected)
        print(f'  exec ctx addr: {r.get("exec_ctx")}')
        print(f'  hits BEFORE executor: {len(r.get("hits_before", []))}: {r.get("hits_before", [])[:5]}')
        print(f'  hits AFTER executor:  {len(r.get("hits_after", []))}: {r.get("hits_after", [])[:5]}')


if __name__ == '__main__':
    main()
