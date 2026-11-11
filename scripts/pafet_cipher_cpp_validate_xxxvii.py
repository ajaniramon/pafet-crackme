#!/usr/bin/env python3
"""Validate cipher_cpp_evidence/cipher.cpp against pafet_pass8.exe on Windows.

For each (username, serial):
  1. pafet_pass8.exe (the two-byte gate bypass) runs under Frida with hooks on the six native
     callback switches of the cipher VMs. Every call is turned, on return, into the record
     "<switch><case>:<arg|->:<ret|P>;" and folded into a running FNV-1a hash; the hash is
     kept after every CHUNK records. The run covers the three cipher passes of the main program.
  2. cipher.cpp, compiled with clang++, does the same for the key that the offline model
     derives from the credentials and the embedded 72-byte ciphertext.
  3. Record counts and every checkpoint must be equal. On a difference both sides dump the
     chunk and the first differing record is reported.

Which cases take an argument comes from the lifted programs (the HOST operand), not from
the C++ file. The one pointer-valued return (cipher_buffer case 1) is written as P.
The C++ output is also compared with scripts/pafet_des3_offline.py.

Credentials are chosen so that no pass leaves a partial block: there the original reads
heap bytes past the string and cipher.cpp does not model them.

Requires Windows, frida and clang++ on PATH. About two minutes per case.
Usage: python scripts/pafet_cipher_cpp_validate_xxxvii.py
"""
import hashlib
import json
import pathlib
import subprocess
import sys
import threading

import frida

ROOT = pathlib.Path(__file__).resolve().parents[1]
CPP = ROOT / 'cipher_cpp_evidence'
LIFTED = ROOT / 'jack_xxxvii_evidence' / 'lifted'
sys.path.insert(0, str(ROOT / 'scripts'))
import pafet_des3_offline as model  # noqa: E402

CHUNK = 50000
# letter -> (lifted program, dispatcher RVA, how the dispatcher receives the case index and arguments)
SWITCHES = {
    'b': ('cipher_buffer', 0x0c9170, 'direct'),      # edx = case, r8 = argument array
    'd': ('des_block', 0x17f790, 'direct'),
    't': ('tdes_block', 0x39dd20, 'indirect'),       # [rdx] = case, [r8] = argument array
    'u': ('cipher_unpad', 0x39db70, 'indirect'),
    'r': ('des_round', 0x3a0f10, 'indirect'),
    'k': ('des_keyschedule', 0x3a0d40, 'indirect'),
}

JS = r"""
const base = Process.enumerateModules().filter(m => m.name.toLowerCase().indexOf("pafet") >= 0)[0].base;
const SW = %(switches)s, CHUNK = %(chunk)d, D0 = %(d0)d, D1 = %(d1)d;
let h = 0x811c9dc5, count = 0, sent = false;
const cps = [], dump = [];
function record(t) {
  for (let i = 0; i < t.length; i++) { h ^= t.charCodeAt(i); h = Math.imul(h, 0x01000193) >>> 0; }
  if (count >= D0 && count < D1) dump.push([count, t]);
  count++;
  if (count %% CHUNK === 0) cps.push([count, h]);
}
for (const vm of Object.keys(SW)) {
  const s = SW[vm];
  Interceptor.attach(base.add(s.rva), {
    onEnter(a) {
      this.c = s.indirect ? a[1].readS32() : a[1].toInt32();
      this.a = '-';
      if (s.args.indexOf(this.c) >= 0) this.a = (s.indirect ? a[2].readPointer() : a[2]).readU64().toString(16);
    },
    onLeave(r) { record(vm + this.c + ':' + this.a + ':' + ((vm === 'b' && this.c === 1) ? 'P' : r.toString(16)) + ';'); }
  });
}
// main host 20: the format check that follows the third cipher pass
Interceptor.attach(base.add(0x397239), function () {
  if (sent) return;
  sent = true;
  cps.push([count, h]);
  send({count: count, cps: cps, dump: dump});
});
"""


def arg_cases(name):
    d = json.loads((LIFTED / (name + '.json')).read_text(encoding='utf-8'))
    return sorted({i['args'][0] for blk in d['program'].values() for i in blk if i['op'] == 32 and len(i['args']) == 2 and i['args'][1] > 0})


def native(user, serial, d0=0, d1=0, timeout=1200):
    switches = {vm: dict(rva=rva, indirect=kind == 'indirect', args=arg_cases(name)) for vm, (name, rva, kind) in SWITCHES.items()}
    dev = frida.get_local_device()
    pid = dev.spawn([str(ROOT / 'pafet_pass8.exe')], stdio='pipe')
    sess = dev.attach(pid)
    res = {}
    done = threading.Event()
    sc = sess.create_script(JS % dict(switches=json.dumps(switches), chunk=CHUNK, d0=d0, d1=d1))

    def on(msg, data):
        if msg['type'] == 'send':
            res.update(msg['payload'])
        else:
            res['error'] = msg.get('description', str(msg))
        done.set()

    sc.on('message', on)
    sess.on('detached', lambda *a: done.set())
    sc.load()
    dev.resume(pid)
    dev.input(pid, user + b"\n" + serial + b"\n")
    done.wait(timeout)
    for f in (lambda: dev.kill(pid), sess.detach):
        try:
            f()
        except Exception:
            pass
    return res


def cpp(exe, key, d0=0, d1=0):
    cmd = [str(exe), key.hex(), model.CIPHERTEXT.hex(), '3', '--chunk', str(CHUNK)]
    if d1:
        cmd += ['--dump', str(d0), str(d1)]
    lines = subprocess.run(cmd, capture_output=True, text=True, check=True).stdout.split('\n')
    out = dict(lengths=[int(x) for x in lines[0].split()[1:]], out=lines[1].split()[1] if len(lines[1].split()) > 1 else '',
               count=int(lines[2].split()[1]), cps=[], dump=[])
    for l in lines[3:]:
        f = l.split()
        if f and f[0] == 'cp':
            out['cps'].append([int(f[1]), int(f[2], 16)])
        elif f and f[0] == 'ev':
            out['dump'].append([int(f[1]), f[2]])
    return out


def main():
    exe = CPP / 'build' / 'cipher_test.exe'
    exe.parent.mkdir(exist_ok=True)
    subprocess.run(['clang++', '-std=c++17', '-O1', '-Wall', '-Wextra', str(CPP / 'cipher_main.cpp'), '-o', str(exe)], check=True)
    creds = [(b"alice", b"serial01"),                         # no pass ends in a padding byte
             (b"abc", b"s402"),                               # first pass ends in 08: one block removed
             (b"abc", b"z126"),                               # first pass ends in 00
             (b"", b""),                                      # all-zero key
             (b"abcdefghijklmnopqrstuvwxy", b"serial01")]     # 25-byte username: the key comes from it alone
    cases = []
    for user, serial in creds:
        key = model.derive_key(user, serial)
        try:
            stages = model.decrypt_material(key)
        except NotImplementedError:
            print(user, serial, 'leaves a partial block; skipped')
            continue
        m = cpp(exe, key)
        n = native(user, serial)
        equal = n.get('count') == m['count'] and n.get('cps') == m['cps']
        case = dict(username_hex=user.hex(), serial_hex=serial.hex(), key_hex=key.hex(), pass_lengths=m['lengths'],
                    callbacks_native=n.get('count'), callbacks_model=m['count'], checkpoints=len(m['cps']),
                    sequence_equal=equal, output_equals_offline_model=bytes.fromhex(m['out']) == stages[-1],
                    native_error=n.get('error'))
        if not equal and n.get('cps'):
            bad = next((i for i, (a, b) in enumerate(zip(n['cps'], m['cps'])) if a != b), min(len(n['cps']), len(m['cps'])))
            d0 = bad * CHUNK
            nd, md = native(user, serial, d0, d0 + CHUNK).get('dump', []), cpp(exe, key, d0, d0 + CHUNK)['dump']
            diff = next(((a, b) for a, b in zip(nd, md) if a != b), None)
            case['first_difference'] = dict(chunk=bad, native=diff[0] if diff else None, model=diff[1] if diff else None,
                                            before=[x[1] for x in md if diff and diff[1][0] - 6 <= x[0] < diff[1][0]])
        cases.append(case)
        print('user=%-27r serial=%-10r lengths=%s callbacks native=%s model=%s sequence=%s output=%s' % (
            user, serial, m['lengths'], n.get('count'), m['count'], 'EQUAL' if equal else 'DIFFERENT',
            'EQUAL' if case['output_equals_offline_model'] else 'DIFFERS'))
        if not equal:
            print('   ', case.get('first_difference') or n.get('error'))
    report = dict(binary='pafet_pass8.exe (two-byte gate bypass; the cipher VMs are unchanged)',
                  pe_sha256=hashlib.sha256((ROOT / 'pafet_pass8.exe').read_bytes()).hexdigest(),
                  source_sha256=hashlib.sha256((CPP / 'cipher.cpp').read_bytes()).hexdigest(),
                  compiler=subprocess.run(['clang++', '--version'], capture_output=True, text=True).stdout.split('\n')[0],
                  chunk=CHUNK, argument_cases={vm: arg_cases(name) for vm, (name, _, _) in SWITCHES.items()}, cases=cases,
                  all_sequences_equal=all(c['sequence_equal'] for c in cases),
                  all_outputs_equal_offline_model=all(c['output_equals_offline_model'] for c in cases),
                  total_callbacks_compared=sum(c['callbacks_model'] for c in cases if c['sequence_equal']))
    (CPP / 'validation.json').write_text(json.dumps(report, indent=1) + '\n', encoding='utf-8')
    print('sequences', report['all_sequences_equal'], '| outputs', report['all_outputs_equal_offline_model'],
          '| callbacks compared', report['total_callbacks_compared'])


if __name__ == '__main__':
    main()
