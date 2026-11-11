#!/usr/bin/env python3
"""Validate pafet_cpp_evidence/pafet.cpp, the whole program, against the binaries on Windows.

Two configurations:
  original   pafet.bin            vs  pafet_test.exe
  bypass     pafet_pass8.exe      vs  pafet_test.exe --bypass-gate
(pafet_pass8.exe replaces the `jne` after the gate's memcmp with two NOPs.)

For each (username, serial), fed through standard input:
  1. Both programs run plainly; standard output and the exit code are compared byte for byte.
  2. The binary runs under Frida with hooks on twelve native callback switches (main, user,
     hex, outer serial, the two SHA switches and the six cipher switches). Every call becomes
     the record "<switch><case>:<arg|->:<ret|P>;" on return and is folded into a running
     FNV-1a hash kept every CHUNK records. pafet.cpp produces the same summary. Record counts
     and all checkpoints must be equal; on a difference the chunk is dumped on both sides.

Not hooked: the inner Serial-VM switch 0x140232e20 (serial.cpp of JACK XXXVI has no trace
records) and the callbacks of the seven branch-free SHA VMs. Their results still reach the
comparison through later records: the key bytes read by the key schedule and the words
returned by the compression callbacks.

Which cases take an argument comes from the lifted programs. P marks pointer-valued fields.
Credentials are chosen so that no cipher pass leaves a partial block.

Requires Windows, frida and clang++ on PATH. About 20 minutes.
Usage: python scripts/pafet_cpp_validate_xxxvii.py
"""
import hashlib
import json
import pathlib
import subprocess
import threading

import frida

ROOT = pathlib.Path(__file__).resolve().parents[1]
CPP = ROOT / 'pafet_cpp_evidence'
LIFTED = ROOT / 'jack_xxxvii_evidence' / 'lifted'
CHUNK = 50000
# letter -> (lifted program, dispatcher RVA, 'direct': edx = case, r8 = args; 'indirect': [rdx] = case, [r8] = args)
SWITCHES = {
    'M': ('main', 0x396990, 'direct'), 'U': ('user', 0x048960, 'direct'), 'H': ('hex', 0x088a00, 'direct'),
    'S': ('serial_outer', 0x39d740, 'indirect'),
    'm': ('sha_msg', 0x2834d0, 'direct'), 'c': ('sha_compress', 0x298d10, 'direct'),
    'b': ('cipher_buffer', 0x0c9170, 'direct'), 'd': ('des_block', 0x17f790, 'direct'),
    't': ('tdes_block', 0x39dd20, 'indirect'), 'u': ('cipher_unpad', 0x39db70, 'indirect'),
    'r': ('des_round', 0x3a0f10, 'indirect'), 'k': ('des_keyschedule', 0x3a0d40, 'indirect'),
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
      if (s.args.indexOf(this.c) >= 0)
        this.a = (vm === 'm' && this.c === 3) ? 'P' : (s.indirect ? a[2].readPointer() : a[2]).readU64().toString(16);
    },
    onLeave(r) {
      const ptr = (vm === 'm' && (this.c === 2 || this.c === 20)) || (vm === 'b' && this.c === 1);
      record(vm + this.c + ':' + this.a + ':' + (ptr ? 'P' : r.toString(16)) + ';');
      // the three callbacks after which the main program returns
      if (vm === 'M' && (this.c === 9 || this.c === 22 || this.c === 23) && !sent) {
        sent = true;
        if (count %% CHUNK !== 0) cps.push([count, h]);
        send({count: count, cps: cps, dump: dump});
      }
    }
  });
}
"""


def arg_cases(name):
    d = json.loads((LIFTED / (name + '.json')).read_text(encoding='utf-8'))
    return sorted({i['args'][0] for blk in d['program'].values() for i in blk if i['op'] == 32 and len(i['args']) == 2 and i['args'][1] > 0})


def native_trace(exe, stdin, d0=0, d1=0, timeout=1500):
    switches = {vm: dict(rva=rva, indirect=kind == 'indirect', args=arg_cases(name)) for vm, (name, rva, kind) in SWITCHES.items()}
    dev = frida.get_local_device()
    pid = dev.spawn([str(ROOT / exe)], stdio='pipe')
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
    dev.input(pid, stdin)
    done.wait(timeout)
    for f in (lambda: dev.kill(pid), sess.detach):
        try:
            f()
        except Exception:
            pass
    return res


def plain(cmd, stdin, timeout=600):
    p = subprocess.run([str(c) for c in cmd], input=stdin, capture_output=True, timeout=timeout)
    return p.returncode, p.stdout


def model_trace(exe, flags, stdin, d0=0, d1=0):
    out = CPP / 'build' / 'trace.txt'
    cmd = [str(exe)] + flags + ['--trace', str(out), '--chunk', str(CHUNK)] + (['--dump', str(d0), str(d1)] if d1 else [])
    subprocess.run(cmd, input=stdin, capture_output=True, check=False)
    res = dict(count=None, cps=[], dump=[])
    for l in out.read_text().split('\n'):
        f = l.split()
        if not f:
            continue
        if f[0] == 'count':
            res['count'] = int(f[1])
        elif f[0] == 'cp':
            res['cps'].append([int(f[1]), int(f[2], 16)])
        elif f[0] == 'ev':
            res['dump'].append([int(f[1]), f[2]])
    return res


def main():
    exe = CPP / 'build' / 'pafet_test.exe'
    exe.parent.mkdir(exist_ok=True)
    subprocess.run(['clang++', '-std=c++17', '-O1', '-Wall', '-Wextra', str(CPP / 'pafet_main.cpp'), '-o', str(exe)], check=True)
    long_user = b"abcdefghijklmnopqrstuvwxy"
    runs = [('original', 'pafet.bin', [], c) for c in [(b"alice", b"serial01"), (b"", b""), (long_user, b"x"), (b"A" * 120, b"serial01")]]
    runs += [('bypass', 'pafet_pass8.exe', ['--bypass-gate'], c) for c in
             [(b"alice", b"serial01"), (b"abc", b"s402"), (b"abc", b"z126"), (b"", b""), (long_user, b"serial01")]]
    cases = []
    for config, binary, flags, (user, serial) in runs:
        stdin = user + b"\n" + serial + b"\n"
        nrc, nout = plain([ROOT / binary], stdin)
        mrc, mout = plain([exe] + flags, stdin)
        n = native_trace(binary, stdin)
        m = model_trace(exe, flags, stdin)
        seq = n.get('count') == m['count'] and n.get('cps') == m['cps']
        case = dict(configuration=config, binary=binary, username_hex=user.hex(), serial_hex=serial.hex(),
                    stdout_equal=nout == mout, stdout_sha256=hashlib.sha256(nout).hexdigest(), exit_code_native=nrc, exit_code_model=mrc,
                    callbacks_native=n.get('count'), callbacks_model=m['count'], checkpoints=len(m['cps']), sequence_equal=seq,
                    native_error=n.get('error'))
        if not seq and n.get('cps'):
            bad = next((i for i, (a, b) in enumerate(zip(n['cps'], m['cps'])) if a != b), min(len(n['cps']), len(m['cps'])))
            d0 = bad * CHUNK
            nd = native_trace(binary, stdin, d0, d0 + CHUNK).get('dump', [])
            md = model_trace(exe, flags, stdin, d0, d0 + CHUNK)['dump']
            diff = next(((a, b) for a, b in zip(nd, md) if a != b), None)
            case['first_difference'] = dict(chunk=bad, native=diff[0] if diff else (nd[len(md):len(md) + 1] or None),
                                            model=diff[1] if diff else (md[len(nd):len(nd) + 1] or None),
                                            before=[x[1] for x in md if diff and diff[1][0] - 8 <= x[0] < diff[1][0]])
        cases.append(case)
        print('%-8s user=%-27r serial=%-10r stdout=%s exit=%s/%s callbacks native=%s model=%s sequence=%s' % (
            config, user if len(user) < 30 else user[:8] + b'...', serial, 'EQUAL' if case['stdout_equal'] else 'DIFFERS', nrc, mrc,
            n.get('count'), m['count'], 'EQUAL' if seq else 'DIFFERENT'), flush=True)
        if not seq:
            print('    ', case.get('first_difference') or n.get('error'), flush=True)
    sources = ['pafet_cpp_evidence/pafet.cpp', 'pafet_cpp_evidence/vm_common.h', 'sha_cpp_evidence/sha.cpp',
               'cipher_cpp_evidence/cipher.cpp', 'serial_cpp_evidence/serial.cpp']
    report = dict(binaries={b: hashlib.sha256((ROOT / b).read_bytes()).hexdigest() for b in ('pafet.bin', 'pafet_pass8.exe')},
                  sources={s: hashlib.sha256((ROOT / s).read_bytes()).hexdigest() for s in sources},
                  compiler=subprocess.run(['clang++', '--version'], capture_output=True, text=True).stdout.split('\n')[0],
                  chunk=CHUNK, switches={vm: dict(program=name, dispatcher_rva=hex(rva), convention=kind, argument_cases=arg_cases(name))
                                         for vm, (name, rva, kind) in SWITCHES.items()},
                  cases=cases,
                  all_stdout_equal=all(c['stdout_equal'] for c in cases),
                  all_exit_codes_equal=all(c['exit_code_native'] == c['exit_code_model'] for c in cases),
                  all_sequences_equal=all(c['sequence_equal'] for c in cases),
                  total_callbacks_compared=sum(c['callbacks_model'] for c in cases if c['sequence_equal']),
                  total_checkpoints=sum(c['checkpoints'] for c in cases if c['sequence_equal']))
    (CPP / 'validation.json').write_text(json.dumps(report, indent=1) + '\n', encoding='utf-8')
    print('stdout', report['all_stdout_equal'], '| exit codes', report['all_exit_codes_equal'], '| sequences', report['all_sequences_equal'],
          '| callbacks compared', report['total_callbacks_compared'], '| checkpoints', report['total_checkpoints'])


if __name__ == '__main__':
    main()
