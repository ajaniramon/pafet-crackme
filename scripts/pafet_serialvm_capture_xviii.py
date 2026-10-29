#!/usr/bin/env python3
"""Jack XVIII — Phase 2: capture serial-VM input/output pairs.

Hook the exec_leave of 0x14022a120 and scan RW memory for the expected
output (= g_serial(serial)). This also confirms where the output lives
in the heap for each serial.
"""
import frida, threading, os, json
from Crypto.Cipher import ARC4

EXE = os.path.abspath('pafet_pass8.exe')

AGENT_TMPL = r"""
const base = Process.enumerateModules().find(function(m){ return m.name.toLowerCase().endsWith('.exe'); }).base;
const EXEC_SERIAL = base.add(0x22a120);
const H20         = base.add(0x397239);

const EXPECTED = __EXPECTED__;  // array of bytes to search for
const SERIAL_ASCII = __SERIAL_ASCII__;

function scan(label, pattern) {
  const ranges = Process.enumerateRanges({protection:'rw-', coalesce:true});
  const hits = [];
  for (var ri = 0; ri < ranges.length; ri++) {
    const r = ranges[ri];
    if (r.size > 64 * 1024 * 1024) continue;
    var mem;
    try { mem = r.base.readByteArray(r.size); } catch(e) { continue; }
    const bytes = new Uint8Array(mem);
    const plen = pattern.length;
    for (var i = 0; i < bytes.length - plen; i++) {
      var ok = true;
      for (var j = 0; j < plen; j++) {
        if (bytes[i+j] !== pattern[j]) { ok = false; break; }
      }
      if (ok) {
        hits.push(r.base.add(i).toString());
        if (hits.length >= 5) return hits;
      }
    }
  }
  return hits;
}

var scans = [];
Interceptor.attach(EXEC_SERIAL, {
  onLeave() {
    scans.push({
      label: 'exec_leave',
      expected_output_hits: scan('exp', EXPECTED),
      serial_ascii_hits:    scan('srl', SERIAL_ASCII),
    });
  }
});
Interceptor.attach(H20, {
  onEnter() {
    scans.push({
      label: 'h20_enter',
      expected_output_hits: scan('exp', EXPECTED),
      serial_ascii_hits:    scan('srl', SERIAL_ASCII),
    });
    send({kind:'done', scans: scans});
  }
});
"""


def run(user, serial):
    expected = ARC4.new(b'\0').encrypt(serial)
    agent = AGENT_TMPL \
        .replace('__EXPECTED__', '[' + ','.join(str(b) for b in expected) + ']') \
        .replace('__SERIAL_ASCII__', '[' + ','.join(str(b) for b in serial) + ']')
    dev = frida.get_local_device()
    pid = dev.spawn([EXE], stdio='pipe')
    done = threading.Event()
    result = {}
    def on_msg(m, _):
        if m['type'] == 'send' and m['payload'].get('kind') == 'done':
            result.update(m['payload']); done.set()
    dev.on('output', lambda p, f, d: None)
    sess = dev.attach(pid)
    scr = sess.create_script(agent)
    scr.on('message', on_msg)
    scr.load()
    dev.resume(pid)
    dev.input(pid, user + b'\r\n' + serial + b'\r\n')
    done.wait(60)
    try: dev.kill(pid)
    except Exception: pass
    return expected, result


def main():
    tests = [b'serial01', b'hola', b'test', b'xxxxxxxx', b'aaaaaaaa',
             b'serial02', b'ab', b'0', b'longerserial123', b'abcdefgh']
    results = []
    print(f'{"serial":20} | {"expected (g_serial)":32} | exec_leave hits | h20 hits')
    print('-' * 110)
    for s in tests:
        expected, r = run(b'alice', s)
        scans = r.get('scans', [])
        exec_hits = len([x for x in scans if x['label']=='exec_leave' and x['expected_output_hits']])
        h20_hits  = len([x for x in scans if x['label']=='h20_enter'  and x['expected_output_hits']])
        exec_locs = [x['expected_output_hits'] for x in scans if x['label']=='exec_leave']
        h20_locs  = [x['expected_output_hits'] for x in scans if x['label']=='h20_enter']
        passed = h20_hits > 0
        print(f'{s.decode("latin-1"):20} | {expected.hex():32} | {str(exec_locs[0] if exec_locs else "[]"):30} | {"PASS" if passed else "FAIL"}')
        results.append({
            'serial': s.decode('latin-1'),
            'expected_g_serial_hex': expected.hex(),
            'exec_leave_locs': exec_locs,
            'h20_enter_locs': h20_locs,
            'validated': passed,
        })

    out = os.path.join('vm_pools_evidence', 'serialvm_vectors_xviii.json')
    with open(out, 'w') as fh:
        json.dump(results, fh, indent=1)
    npass = sum(1 for r in results if r['validated'])
    print(f'\n[*] Validated: {npass}/{len(results)}  (output appears in RW memory matching g_serial oracle)')
    print(f'[+] saved {out}')


if __name__ == '__main__':
    main()
