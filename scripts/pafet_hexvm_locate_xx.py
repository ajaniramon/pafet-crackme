#!/usr/bin/env python3
"""Jack XX — Phase 1: locate where the hex-VM output materializes in RW memory.

The hex-VM (executor at 0x1400804c0) parses 144 ASCII hex chars from
0x1403dbbc0 into 72 bytes. Hunt for the decoded bytes.
"""
import frida, threading, os, json

EXE = os.path.abspath('pafet_pass8.exe')

AGENT = r"""
const base = Process.enumerateModules().find(m => m.name.toLowerCase().endsWith('.exe')).base;

const EXEC_HEX = base.add(0x804c0);
const H20      = base.add(0x397239);

const PATTERNS = [
  // Decoded first 16 bytes of the ciphertext
  ['hex_decoded_pfx', [0x6f,0x56,0xf7,0x9c,0x3e,0x34,0x88,0x35,0xaa,0x3c,0x3f,0xc5,0xf5,0x51,0xd5,0x01]],
  // First 8 bytes (shorter needle for narrower matches)
  ['hex_decoded_8',   [0x6f,0x56,0xf7,0x9c,0x3e,0x34,0x88,0x35]],
  // Tail 8 bytes of the 72-byte decoded block
  ['hex_decoded_tail',[0xab,0xb0,0xa6,0x7d,0xa5,0x4b,0xa9,0x3b]],
  // Middle bytes
  ['hex_decoded_mid', [0x45,0x50,0x24,0xb3,0x73,0xac,0xad,0x82]],
  // ASCII of the hex source first 16 chars
  ['hex_ascii_pfx',   [0x36,0x66,0x35,0x36,0x66,0x37,0x39,0x63,0x33,0x65,0x33,0x34,0x38,0x38,0x33,0x35]],
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
      if (hits[name].length >= 5) continue;
      for (var i = 0; i < bytes.length - plen; i++) {
        var ok = true;
        for (var j = 0; j < plen; j++) {
          if (bytes[i+j] !== patArr[j]) { ok = false; break; }
        }
        if (ok) {
          hits[name].push(r.base.add(i).toString());
          if (hits[name].length >= 5) break;
        }
      }
    }
  }
  return {label: label, hits: hits};
}

let scans = [];
let hookOnce = {};
let callN = 0;

function doScan(label) {
  if (hookOnce[label]) return;
  hookOnce[label] = true;
  try { scans.push(scanAllRW(label)); } catch(e) { scans.push({label, err:''+e}); }
}

Interceptor.attach(EXEC_HEX, {
  onEnter() { callN++; doScan('hex_exec_enter_call' + callN); },
  onLeave() { doScan('hex_exec_leave_call' + callN); }
});
Interceptor.attach(H20, {
  onEnter() {
    doScan('h20_enter');
    send({kind:'done', scans, total_calls: callN});
  }
});
send({kind:'ready'});
"""


def run(user):
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
    dev.input(pid, user + b'\r\nserial01\r\n')
    done.wait(120)
    try: dev.kill(pid)
    except Exception: pass
    return result


def main():
    print('=== Phase 1: locate hex-VM output ===')
    r = run(b'alice')
    scans = r.get('scans', [])
    print(f'Total hex-VM invocations: {r.get("total_calls")}')
    for sc in scans:
        label = sc.get('label', '?')
        if 'err' in sc:
            print(f'[{label}] ERROR: {sc["err"]}')
            continue
        hits = sc.get('hits', {})
        has_hits = any(len(v) > 0 for v in hits.values())
        if not has_hits:
            continue  # skip empty scans
        print(f'[{label}]')
        for name, locs in hits.items():
            if locs:
                print(f'  {name}: {len(locs)} hit(s) at {locs[:3]}')

    out = os.path.join('vm_pools_evidence', 'hex_output_location_xx.json')
    with open(out, 'w') as fh:
        json.dump(r, fh, indent=1)
    print(f'\n[+] saved {out}')


if __name__ == '__main__':
    main()
