#!/usr/bin/env python3
"""Validate sha_cpp_evidence/sha.cpp against the original pafet.bin on Windows.

For each input:
  1. pafet.bin runs under Frida with hooks on the two native callback switches
     (0x1402834d0 sha_msg, 0x140298d10 sha_compress). Every call is recorded on return as
     (switch, case, first argument, return value), in one global order.
  2. sha.cpp, compiled with clang++, emits the same record for the same input.
  3. The two sequences must be equal element by element, and both digests must equal hashlib.

Pointer-valued fields differ between processes and are compared as "pointer":
sha_msg case 2 return, case 3 argument and case 20 return.
The native argument is read from the callback's argument array; it is compared only for
the cases the C++ model declares as taking an argument.

Static checks: the 64 immediates the native compression wrapper writes and the 8 state
immediates of the message wrapper equal the standard SHA-256 constants used in sha.cpp.

Requires Windows, frida, pefile, capstone and clang++ on PATH.
Usage: python scripts/pafet_sha_cpp_validate_xxxvii.py
"""
import hashlib
import json
import pathlib
import re
import subprocess
import threading

import capstone
import frida
import pefile

ROOT = pathlib.Path(__file__).resolve().parents[1]
CPP = ROOT / 'sha_cpp_evidence'
BASE = 0x140000000
POINTER = {('m', 2): 'ret', ('m', 3): 'arg', ('m', 20): 'ret'}

JS = r"""
const base = Process.enumerateModules().filter(m => m.name.toLowerCase().indexOf("pafet") >= 0)[0].base;
const ev = [];
function hook(vm, off) {
  Interceptor.attach(base.add(off), {
    onEnter(a) { this.c = a[1].toInt32(); let v = null; try { v = a[2].readU64().toString(16); } catch (e) {} this.a = v; },
    onLeave(r) { ev.push([vm, this.c, this.a, r.toString(16)]); }
  });
}
hook('m', 0x2834d0);
hook('c', 0x298d10);
Interceptor.attach(base.add(0x396ae9), function () {
  const n = this.context.r8.toInt32();
  send({ev: ev, digest: this.context.rax.readUtf8String(Math.min(n, 128))});
});
"""


def native(user, timeout=300):
    dev = frida.get_local_device()
    pid = dev.spawn([str(ROOT / 'pafet.bin')], stdio='pipe')
    sess = dev.attach(pid)
    res = {}
    done = threading.Event()
    sc = sess.create_script(JS)

    def on(msg, data):
        if msg['type'] == 'send':
            res.update(msg['payload'])
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


def model(exe, user):
    out = subprocess.run([str(exe), user.hex() or '-', '--trace'], capture_output=True, text=True, check=True).stdout.split('\n')
    ev = []
    for line in out[1:]:
        if line:
            vm, fn, arg, ret = line.split()
            ev.append((vm, int(fn), None if arg == '-' else int(arg, 16), int(ret, 16)))
    return out[0], ev


def compare(nat, mod):
    if len(nat) != len(mod):
        return dict(equal=False, reason='length', native=len(nat), model=len(mod),
                    first_difference=next((i for i, (a, b) in enumerate(zip(nat, mod)) if (a[0], a[1]) != (b[0], b[1])), None))
    for i, ((nvm, nfn, narg, nret), (mvm, mfn, marg, mret)) in enumerate(zip(nat, mod)):
        ptr = POINTER.get((mvm, mfn))
        ok = (nvm, nfn) == (mvm, mfn)
        ok = ok and (ptr == 'ret' or int(nret, 16) == mret)
        ok = ok and (marg is None or ptr == 'arg' or (narg is not None and int(narg, 16) == marg))
        if not ok:
            return dict(equal=False, reason='event', index=i, native=[nvm, nfn, narg, nret],
                        model=[mvm, mfn, None if marg is None else hex(marg), hex(mret)])
    return dict(equal=True)


def immediates(pe, va, size):
    """dword immediates stored by `mov dword ptr [rbp + off], imm`, in instruction order."""
    md = capstone.Cs(capstone.CS_ARCH_X86, capstone.CS_MODE_64)
    code = pe.get_memory_mapped_image()[va - BASE: va - BASE + size]
    out = []
    for ins in md.disasm(bytes(code), va):
        m = re.match(r'dword ptr \[rbp \+ (0x[0-9a-f]+)\], (0x[0-9a-f]+)$', ins.op_str)
        if ins.mnemonic == 'mov' and m:
            out.append((int(m.group(1), 16), int(m.group(2), 16)))
    return out


def constants():
    pe = pefile.PE(str(ROOT / 'pafet.bin'), fast_load=True)
    src = (CPP / 'sha.cpp').read_text(encoding='utf-8')
    k_src = [int(x, 16) for x in re.findall(r'0x[0-9a-f]{8}', src[src.index('uint32_t K[64]'):src.index('// ---', src.index('uint32_t K[64]'))])]
    iv_src = [int(x, 16) for x in re.findall(r'0x[0-9a-f]{8}', src[src.index('state[8] = {'):src.index('+0x38')])]
    k_nat = [v for off, v in immediates(pe, 0x140298930, 0x300) if 0x40 <= off < 0x140]
    iv_nat = [v for off, v in immediates(pe, 0x1402831c0, 0x100) if 0x130 <= off < 0x150]
    return dict(k_native=len(k_nat), k_equal=k_nat == k_src and len(k_src) == 64,
                iv_native=[hex(v) for v in iv_nat], iv_equal=iv_nat == iv_src and len(iv_src) == 8)


def main():
    exe = CPP / 'build' / 'sha_test.exe'
    exe.parent.mkdir(exist_ok=True)
    subprocess.run(['clang++', '-std=c++17', '-O1', '-Wall', '-Wextra', str(CPP / 'sha_main.cpp'), '-o', str(exe)], check=True)
    pat = bytes((i * 7 + 33) % 94 + 33 for i in range(300))
    inputs = [b'', b'a', b'abc', pat[:55], pat[:56], pat[:57], pat[:63], pat[:64], pat[:65], pat[:119], pat[:120], pat[:128],
              pat[:200], bytes([0x00, 0xff, 0x80, 0x41, 0x7f]), bytes(range(0x80, 0xc0))]
    cases = []
    for u in inputs:
        n = native(u)
        digest, mod = model(exe, u)
        ref = hashlib.sha256(u).hexdigest()
        c = compare(n.get('ev', []), mod)
        cases.append(dict(input_hex=u.hex(), length=len(u), callbacks_native=len(n.get('ev', [])), callbacks_model=len(mod),
                          sequence=c, digest_native=n.get('digest'), digest_model=digest, digest_hashlib=ref,
                          digests_equal=n.get('digest') == digest == ref))
        print('len=%-3d callbacks native=%-6d model=%-6d sequence=%s digest=%s' % (
            len(u), len(n.get('ev', [])), len(mod), 'EQUAL' if c['equal'] else c, 'EQUAL' if cases[-1]['digests_equal'] else 'DIFFER'))
    report = dict(binary='pafet.bin', pe_sha256=hashlib.sha256((ROOT / 'pafet.bin').read_bytes()).hexdigest(),
                  source_sha256=hashlib.sha256((CPP / 'sha.cpp').read_bytes()).hexdigest(),
                  compiler=subprocess.run(['clang++', '--version'], capture_output=True, text=True).stdout.split('\n')[0],
                  constants=constants(), cases=cases,
                  all_sequences_equal=all(c['sequence']['equal'] for c in cases),
                  all_digests_equal=all(c['digests_equal'] for c in cases),
                  total_callbacks_compared=sum(c['callbacks_model'] for c in cases if c['sequence']['equal']))
    (CPP / 'validation.json').write_text(json.dumps(report, indent=1) + '\n', encoding='utf-8')
    print('constants', report['constants']['k_equal'], report['constants']['iv_equal'],
          '| sequences', report['all_sequences_equal'], '| digests', report['all_digests_equal'],
          '| callbacks compared', report['total_callbacks_compared'])


if __name__ == '__main__':
    main()
