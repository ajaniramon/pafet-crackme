#!/usr/bin/env python3
"""Jack XVIII — Phase 1: locate where the serial-VM output materializes in RW memory.

For user=alice, serial=serial01, we expect the g_serial output
ad7dfb28c25b6d0b to appear in some RW region at some point. Also look for
the RC4 stream head de188941a3375d3a and intermediate buffers.
"""
import frida, threading, os, json

EXE = os.path.abspath('pafet_pass8.exe')

AGENT = r"""
const base = Process.enumerateModules().find(m => m.name.toLowerCase().endsWith('.exe')).base;

// Key hook points for the serial-VM chain
const DISP_SERIAL = base.add(0x264a60);   // dispatcher
const MID_SERIAL  = base.add(0x39d740);   // intermediate
const EXEC_SERIAL = base.add(0x22a120);   // executor
const H20         = base.add(0x397239);   // host 20 (end of VM phase)

// Patterns to hunt (array of [name, bytes])
const PATTERNS = [
  ['g_serial_out',   [0xad,0x7d,0xfb,0x28,0xc2,0x5b,0x6d,0x0b]],
  ['rc4_stream_8',   [0xde,0x18,0x89,0x41,0xa3,0x37,0x5d,0x3a]],
  ['rc4_stream_16',  [0xde,0x18,0x89,0x41,0xa3,0x37,0x5d,0x3a,0x8a,0x06,0x1e,0x67,0x57,0x6e,0x92,0x6d]],
  ['serial01_ascii', [0x73,0x65,0x72,0x69,0x61,0x6c,0x30,0x31]],
];

function scanAllRW(label) {
  const ranges = Process.enumerateRanges({protection:'rw-', coalesce:true});
  const hits = {};
  for (var p = 0; p < PATTERNS.length; p++) hits[PATTERNS[p][0]] = [];

  for (var ri = 0; ri < ranges.length; ri++) {
    const r = ranges[ri];
    if (r.size > 64 * 1024 * 1024) continue;
    var mem;
    try { mem = r.base.readByteArray(r.size); } catch(e) { continue; }
    const bytes = new Uint8Array(mem);
    for (var pi = 0; pi < PATTERNS.length; pi++) {
      const name = PATTERNS[pi][0];
      const patArr = PATTERNS[pi][1];
      const plen = patArr.length;
      if (hits[name].length >= 10) continue;
      for (var i = 0; i < bytes.length - plen; i++) {
        var ok = true;
        for (var j = 0; j < plen; j++) {
          if (bytes[i+j] !== patArr[j]) { ok = false; break; }
        }
        if (ok) {
          hits[name].push(r.base.add(i).toString());
          if (hits[name].length >= 10) break;
        }
      }
    }
  }
  return {label: label, hits: hits};
}

let scans = [];
let hookOnce = {};

function doScan(label) {
  if (hookOnce[label]) return;
  hookOnce[label] = true;
  try { scans.push(scanAllRW(label)); } catch(e) { scans.push({label, err:''+e}); }
}

Interceptor.attach(DISP_SERIAL, { onEnter() { doScan('disp_enter'); }});
Interceptor.attach(MID_SERIAL,  { onEnter() { doScan('mid_enter');  }});
Interceptor.attach(EXEC_SERIAL, {
  onEnter() { doScan('exec_enter'); },
  onLeave() { doScan('exec_leave'); }
});
Interceptor.attach(H20, {
  onEnter() {
    doScan('h20_enter');
    send({kind:'done', scans});
  }
});
send({kind:'ready'});
"""


def run(user, serial):
    dev = frida.get_local_device()
    pid = dev.spawn([EXE], stdio='pipe')
    done = threading.Event()
    result = {}
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
    done.wait(90)
    try: dev.kill(pid)
    except Exception: pass
    return result


def main():
    print('=== Phase 1: locate serial-VM output for alice/serial01 ===')
    r = run(b'alice', b'serial01')
    scans = r.get('scans', [])
    for sc in scans:
        label = sc.get('label', '?')
        if 'err' in sc:
            print(f'[{label}] ERROR: {sc["err"]}')
            continue
        hits = sc.get('hits', {})
        print(f'[{label}]')
        for name, locs in hits.items():
            if locs:
                print(f'  {name}: {len(locs)} hit(s) at {locs[:3]}')
            else:
                print(f'  {name}: NONE')

    out = os.path.join('vm_pools_evidence', 'serial_output_location_xviii.json')
    with open(out, 'w') as fh:
        json.dump(r, fh, indent=1)
    print(f'\n[+] saved {out}')


if __name__ == '__main__':
    main()
