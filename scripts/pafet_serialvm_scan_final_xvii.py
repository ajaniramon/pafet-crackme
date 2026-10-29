#!/usr/bin/env python3
"""Jack XVII Phase 2c: scan RW memory at host 20 (final) for serial-VM output.

The executor 0x14022a120 is invoked once but the output of g_serial(serial)
is not in RW memory right after it. Hypothesis: the actual XOR happens
later (perhaps as part of key derivation handlers 12-15 which concatenate
f_user(user) + g_serial(serial) into the 24B key).

Scan RW memory at host 20 time, in both byte orders.
"""
import frida, threading, os
from Crypto.Cipher import ARC4

HERE = os.path.dirname(os.path.abspath(__file__))
EXE = os.path.join(HERE, '..', 'pafet_pass8.exe')

AGENT = r"""
const base = Process.enumerateModules().find(m => m.name.toLowerCase().endsWith('.exe')).base;
const H20 = base.add(0x397239);

let expected_hex = null;
let expected_rev_hex = null;

recv('expected', msg => {
  expected_hex = msg.payload.hex;
  expected_rev_hex = msg.payload.hex_rev;
});

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

Interceptor.attach(H20, {
  onEnter() {
    const fwd = scanAll(expected_hex);
    const rev = scanAll(expected_rev_hex);
    send({kind:'done', hits_fwd: fwd, hits_rev: rev});
  }
});
send({kind:'ready'});
"""


def run(user, serial, expected, timeout=180):
    dev = frida.get_local_device()
    pid = dev.spawn([EXE], stdio='pipe')
    result = {}
    done = threading.Event()
    expected_rev = expected[::-1]
    script_ref = [None]
    def on_msg(m, _):
        if m['type'] != 'send': return
        p = m['payload']
        if p.get('kind') == 'ready':
            script_ref[0].post({
                'type': 'expected',
                'hex': expected.hex(),
                'hex_rev': expected_rev.hex(),
            })
        elif p.get('kind') == 'done':
            result.update(p); done.set()
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
        print(f'\n=== serial={serial!r} ===')
        print(f'  expected forward:  {expected.hex()}')
        print(f'  expected reversed: {expected[::-1].hex()}')
        r = run(b'alice', serial, expected)
        print(f'  hits forward:  {len(r.get("hits_fwd", []))}')
        for h in r.get("hits_fwd", [])[:5]:
            print(f'    @ {h}')
        print(f'  hits reversed: {len(r.get("hits_rev", []))}')
        for h in r.get("hits_rev", [])[:5]:
            print(f'    @ {h}')


if __name__ == '__main__':
    main()
