#!/usr/bin/env python3
"""Jack XIX — Phase 1: locate where the SHA-VM output materializes in RW memory.

For user=alice, SHA-256(alice) =
  2bd806c97f0e00af1a1fc3328fa763a9269723c8db8fac4f93af71db186d6e90
and the gate also compares against the target
  9419f86b97bd379906be72ea80517c075a499d0db0a37499132c2d203cc21420.
Look for both. Also look for the ASCII of alice to confirm input placement.
"""
import frida, threading, os, json

EXE = os.path.abspath('pafet_pass8.exe')

AGENT = r"""
const base = Process.enumerateModules().find(m => m.name.toLowerCase().endsWith('.exe')).base;

// SHA-VM executor
const EXEC_SHA = base.add(0x27aba0);
const H20      = base.add(0x397239);

// Patterns to hunt
const PATTERNS = [
  // SHA-256(alice) first 16 bytes
  ['sha256_alice_pfx', [0x2b,0xd8,0x06,0xc9,0x7f,0x0e,0x00,0xaf,0x1a,0x1f,0xc3,0x32,0x8f,0xa7,0x63,0xa9]],
  // SHA-256(alice) first 8 bytes (shorter needle)
  ['sha256_alice_8',   [0x2b,0xd8,0x06,0xc9,0x7f,0x0e,0x00,0xaf]],
  // SHA-256(alice) last 8 bytes (byte-reversed storage check)
  ['sha256_alice_tail', [0x3a,0xf7,0x1d,0xb1,0x86,0xd6,0xe9,0x00]],  // careful: last byte of hash is 0x90, this is wrong -> fix
  // Target constant from the gate
  ['gate_target_pfx',  [0x94,0x19,0xf8,0x6b,0x97,0xbd,0x37,0x99]],
  // ASCII alice
  ['alice_ascii',      [0x61,0x6c,0x69,0x63,0x65]],
  // SHA-256 initial state (IV) H0 first 4 bytes 0x6a09e667 little-endian
  ['sha_iv_h0_le',     [0x67,0xe6,0x09,0x6a]],
  // SHA-256 K round constant K[0] = 0x428a2f98 little-endian
  ['sha_k0_le',        [0x98,0x2f,0x8a,0x42]],
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

function doScan(label) {
  if (hookOnce[label]) return;
  hookOnce[label] = true;
  try { scans.push(scanAllRW(label)); } catch(e) { scans.push({label, err:''+e}); }
}

Interceptor.attach(EXEC_SHA, {
  onEnter() { doScan('sha_exec_enter'); },
  onLeave() { doScan('sha_exec_leave'); }
});
Interceptor.attach(H20, {
  onEnter() {
    doScan('h20_enter');
    send({kind:'done', scans});
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
    done.wait(90)
    try: dev.kill(pid)
    except Exception: pass
    return result


def main():
    print('=== Phase 1: locate SHA-VM output for alice ===')
    r = run(b'alice')
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

    out = os.path.join('vm_pools_evidence', 'sha_output_location_xix.json')
    with open(out, 'w') as fh:
        json.dump(r, fh, indent=1)
    print(f'\n[+] saved {out}')


if __name__ == '__main__':
    main()
