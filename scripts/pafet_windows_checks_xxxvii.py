#!/usr/bin/env python3
"""JACK XXXVII Windows checks of the three stages that decide acceptance.

  gate    original pafet.bin, no instrumentation: which odd usernames pass the SHA gate?
  digest  original pafet.bin under Frida: read the hex digest the binary computes, at the
          native comparator (RVA 0x396ae9), and compare it with hashlib.sha256.
  oracle  pafet_oracle.exe (research variant that prints the decrypted buffer): compare
          its output with scripts/pafet_des3_offline.py for boundary lengths.

None of these searches for credentials. Input reaches the binary through a pipe, so the
CRT's text-mode translation applies: CR before LF is dropped and 0x1a ends the input.

Usage: python scripts/pafet_windows_checks_xxxvii.py {gate|digest|oracle|all} [--workers N]
"""
import argparse
import hashlib
import json
import pathlib
import subprocess
import sys
import threading
import time
from concurrent.futures import ThreadPoolExecutor

ROOT = pathlib.Path(__file__).resolve().parents[1]
OUT = ROOT / 'jack_xxxvii_evidence'
sys.path.insert(0, str(ROOT / 'scripts'))
import pafet_des3_offline as model  # noqa: E402


def execute(exe, user, serial, timeout):
    t = time.time()
    try:
        p = subprocess.run([str(ROOT / exe)], input=user + b"\n" + serial + b"\n", capture_output=True, timeout=timeout)
        return p.returncode, p.stdout, time.time() - t
    except subprocess.TimeoutExpired as e:
        return 'timeout', e.stdout or b'', time.time() - t


def text_mode(user):
    """What getline receives when `user` + LF is piped to a text-mode stdin."""
    data = (user + b"\n").replace(b"\r\n", b"\n")
    data = data.split(b"\x1a")[0]
    return data.split(b"\n")[0]


# ------------------------------------------------------------------ gate
def gate_cases():
    cases = [('a*%d' % n, b'a' * n) for n in list(range(0, 70)) + [119, 120, 121, 127, 128, 129, 183, 184, 185, 255, 256, 257, 511, 512, 513, 1000, 4096]]
    pat = bytes(range(0x21, 0x7f)) * 3
    cases += [('pattern%d' % n, pat[:n]) for n in (15, 16, 17, 23, 24, 25, 55, 56, 57, 63, 64, 65)]
    cases += [('nul', b'a\0b'), ('nul_only', b'\0'), ('high', bytes(range(0x80, 0x100))), ('cr', b'alice\r'), ('spaces', b'  '),
              ('ff*64', b'\xff' * 64), ('00*64', b'\0' * 64), ('target_hex', model.USERNAME_SHA256.encode()),
              ('target_raw', bytes.fromhex(model.USERNAME_SHA256))]
    return cases


def gate(workers):
    def one(c):
        name, user = c
        rc, out, dt = execute('pafet.bin', user, b'x', 120)
        return dict(case=name, length=len(user), returncode=rc, rejected=b'Invalid username' in out, seconds=round(dt, 2))
    with ThreadPoolExecutor(workers) as ex:
        res = list(ex.map(one, gate_cases()))
    return dict(binary='pafet.bin', cases=len(res), rejected=sum(r['rejected'] for r in res),
                not_rejected=[r for r in res if not r['rejected']], results=res)


# ------------------------------------------------------------------ digest
JS = r"""
const base = Process.enumerateModules().filter(m => m.name.toLowerCase().indexOf("pafet") >= 0)[0].base;
Interceptor.attach(base.add(0x396ae9), function () {   // cmp r8, rcx: computed size vs target size
  const n = this.context.r8.toInt32();
  send({n: n}, this.context.rax.readByteArray(Math.min(n, 256)));
});
"""


def computed_digest(user, timeout=180):
    import frida
    dev = frida.get_local_device()
    pid = dev.spawn([str(ROOT / 'pafet.bin')], stdio='pipe')
    sess = dev.attach(pid)
    res = {}
    done = threading.Event()
    sc = sess.create_script(JS)

    def on(msg, data):
        if msg['type'] == 'send':
            res['n'] = msg['payload']['n']
            res['digest'] = bytes(data).decode('ascii', 'replace')
        else:
            res['error'] = str(msg)
        done.set()

    sc.on('message', on)
    sc.load()
    dev.resume(pid)
    dev.input(pid, user + b"\nx\n")
    done.wait(timeout)
    for f in (lambda: dev.kill(pid), sess.detach):
        try:
            f()
        except Exception:
            pass
    return res


def digest():
    pat = bytes((i * 7 + 33) % 94 + 33 for i in range(600))
    cases = [pat[:n] for n in list(range(0, 70)) + [119, 120, 121, 127, 128, 129, 183, 184, 185, 191, 192, 193, 247, 248, 249, 255, 256, 257, 300, 511, 512, 513]]
    cases += [bytes([b]) for b in range(256) if b != 0x0a]
    for b in (0x00, 0x0d, 0x1a, 0x7f, 0x80, 0xff):
        cases += [b'ab' + bytes([b]) + b'cd', bytes([b]) * 3]
    res = []
    for u in cases:
        r = computed_digest(u)
        raw = hashlib.sha256(u).hexdigest()
        seen = hashlib.sha256(text_mode(u)).hexdigest()
        res.append(dict(user_hex=u[:24].hex(), length=len(u), computed=r.get('digest'), size=r.get('n'),
                        equals_sha256_of_piped_bytes=r.get('digest') == raw,
                        equals_sha256_of_text_mode_input=r.get('digest') == seen))
    return dict(binary='pafet.bin', hook='RVA 0x396ae9 (native comparator, before the size check)', cases=len(res),
                equal_to_sha256_of_piped_bytes=sum(r['equals_sha256_of_piped_bytes'] for r in res),
                equal_to_sha256_of_text_mode_input=sum(r['equals_sha256_of_text_mode_input'] for r in res),
                differences_after_text_mode=[r for r in res if not r['equals_sha256_of_text_mode_input']],
                differences_raw=[r for r in res if not r['equals_sha256_of_piped_bytes']], results=res)


# ------------------------------------------------------------------ oracle
def oracle(workers):
    pat = b"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789"
    cases = [(pat[:n], b"serial01") for n in (0, 1, 7, 8, 9, 14, 15, 16, 17, 22, 23, 24, 25, 31, 32, 33, 48)]
    cases += [(b"alice", pat[::-1][:n]) for n in (0, 1, 7, 9, 15, 16, 17, 19, 24, 32)]
    cases += [(pat[:8], pat[10:26]), (pat[:16], pat[20:28]), (pat[:15], b""), (pat[:16], b""), (pat[:17], b"")]

    def one(c):
        user, serial = c
        rc, out, dt = execute('pafet_oracle.exe', user, serial, 600)
        i = out.find(b"[+] Flag: ")
        got = None
        if i >= 0:
            got = out[i + 10:]
            got = (got[:-2] if got.endswith(b"\r\n") else got).replace(b"\r\n", b"\n")   # undo stdout text mode
        prefix = model.plaintext_prefix(user, serial)
        try:
            full = model.plaintext(user, serial)
        except NotImplementedError:
            full = None                                # the model refuses heap-dependent partial tails
        verdict = ('no_output' if got is None else 'full_match' if full is not None and got == full
                   else 'first_block_match' if got[:8] == prefix else 'mismatch')
        return dict(user_len=len(user), serial_len=len(serial), verdict=verdict, model_has_full_output=full is not None,
                    output_len=None if got is None else len(got), seconds=round(dt, 1))
    with ThreadPoolExecutor(workers) as ex:
        res = list(ex.map(one, cases))
    count = lambda v: sum(r['verdict'] == v for r in res)
    return dict(binary='pafet_oracle.exe (research variant; not acceptance by the original)', cases=len(res),
                full_match=count('full_match'), first_block_match=count('first_block_match'),
                mismatch=count('mismatch'), no_output=count('no_output'), results=res)


def main():
    ap = argparse.ArgumentParser(description=__doc__, formatter_class=argparse.RawDescriptionHelpFormatter)
    ap.add_argument('what', choices=['gate', 'digest', 'oracle', 'all'])
    ap.add_argument('--workers', type=int, default=3, help='parallel processes for gate/oracle (each uses one core)')
    args = ap.parse_args()
    OUT.mkdir(exist_ok=True)
    for name in (['gate', 'digest', 'oracle'] if args.what == 'all' else [args.what]):
        t = time.time()
        r = gate(args.workers) if name == 'gate' else digest() if name == 'digest' else oracle(args.workers)
        r['pe_sha256'] = hashlib.sha256((ROOT / r['binary'].split(' ')[0]).read_bytes()).hexdigest()
        (OUT / ('windows_%s.json' % name)).write_text(json.dumps(r, indent=1) + '\n', encoding='utf-8')
        print(name, {k: v for k, v in r.items() if isinstance(v, (int, str))}, '%.0fs' % (time.time() - t))


if __name__ == '__main__':
    main()
