#!/usr/bin/env python3
"""Dynamic lifter for Pafet's REVoid-style VMs (Windows, Frida).

For one VM executor it hooks that VM's own helper functions:

  op(ctx, domain, logical_opcode)   -> one call per virtual instruction
  u32/u16/u8(ctx)                   -> decoded operands, in order
  push(ctx, value) / pop(ctx)       -> virtual stack traffic

and records the first invocation of the VM as a list of logical instructions.
Blocks are keyed by logical block id (the operand of JMP/JZ/JNZ). Every
conditional branch is then re-run with its popped condition flipped, so code
that normal inputs never reach is recorded too. Nothing is decrypted
statically: the binary's own decoder produces every opcode and operand.

Scope: logical program of the first invocation of each VM. A block that no
executed or forced jump targets is not recovered. Forced runs execute with an
inconsistent VM state; they are used only to read instructions, never values.

Requires Windows, Python 3.10+, frida and pefile. It executes pafet.bin and
pafet_pass8.exe from the repository root, one process at a time.

Usage:
  python scripts/pafet_vm_lift_xxxvii.py --list
  python scripts/pafet_vm_lift_xxxvii.py all
  python scripts/pafet_vm_lift_xxxvii.py NAME [NAME ...] [--out DIR]
"""
import argparse
import collections
import json
import pathlib
import struct
import threading
import time

import frida
import pefile

ROOT = pathlib.Path(__file__).resolve().parents[1]
BASE = 0x140000000
ORIGINAL = 'pafet.bin'
PASS8 = 'pafet_pass8.exe'   # 2-byte gate bypass; needed for VMs that only run after the SHA gate

# executor VA -> (name, binary, role)
NAMES = {
    0x14003f540: ('user', PASS8, 'username transform f_user'),
    0x1400804c0: ('hex', PASS8, 'ciphertext hex decoder'),
    0x1400c0510: ('cipher_buffer', PASS8, 'cipher pass: key copy, 8-byte block loop, unpad (main host 19)'),
    0x1400d3fe0: ('tdes_block', PASS8, '3DES block: three key schedules, then D(K3) E(K2) D(K1)'),
    0x14015faf0: ('cipher_unpad', PASS8, 'permissive unpad of the decrypted buffer'),
    0x140176950: ('des_block', PASS8, 'DES block: IP, 16 rounds, FP'),
    0x14018df50: ('des_round', PASS8, 'DES round function: E expansion, S-boxes, P'),
    0x1401e42b0: ('des_keyschedule', PASS8, 'DES key schedule: PC-1, rotations, PC-2'),
    0x14022a120: ('serial_inner', PASS8, 'serial RC4'),
    0x140264a60: ('serial_outer', PASS8, 'serial wrapper'),
    0x14027aba0: ('sha_msg', ORIGINAL, 'SHA-256 message/padding'),
    0x140290300: ('sha_compress', ORIGINAL, 'SHA-256 compression'),
    0x1402a4a20: ('sha_ch', ORIGINAL, 'SHA-256 Ch'),
    0x1402b8140: ('sha_ep0', ORIGINAL, 'SHA-256 big sigma 0'),
    0x1402ccb00: ('sha_ep1', ORIGINAL, 'SHA-256 big sigma 1'),
    0x1402df0e0: ('sha_maj', ORIGINAL, 'SHA-256 Maj'),
    0x1403216e0: ('sha_rotr', ORIGINAL, 'SHA-256 32-bit rotate right'),
    0x140335b10: ('sha_sig0', ORIGINAL, 'SHA-256 small sigma 0'),
    0x140377720: ('sha_sig1', ORIGINAL, 'SHA-256 small sigma 1'),
    0x14038d9d0: ('main', PASS8, 'main controller'),
}
# Semantics observed on the virtual stack (first POP is the right operand):
# 9 x-y, 25 x>=y (only seen with y=0), 39 x&y, 40 x|y, 42 x<<y, 43 x>>y (logical),
# 58 sign-extend low N bits, 59 zero-extend low N bits. 1-32, 41, 44 as in the main-VM decode.
OPNAMES = {1: 'CONST', 4: 'GET', 5: 'SET', 8: 'ADD', 9: 'SUB', 10: 'MUL', 20: 'EQ', 21: 'NE', 22: 'SLT', 24: 'SGT',
           25: 'SGE', 26: 'JMP', 27: 'JZ', 28: 'JNZ', 29: 'RET', 30: 'RET0', 31: 'DROP', 32: 'HOST',
           39: 'AND', 40: 'OR', 41: 'XOR', 42: 'SHL', 43: 'SHR', 44: 'NOT', 58: 'SEXT', 59: 'ZEXT'}
TERMINAL = (29, 30)


# ---------------------------------------------------------------- discovery
def _functions(pe):
    """.pdata entries grouped into functions via UNW_FLAG_CHAININFO (adjacency alone is not enough)."""
    img = pe.get_memory_mapped_image()
    ents = []
    for s in pe.sections:
        if s.Name.startswith(b'.pdata'):
            d = s.get_data()
            for i in range(0, s.Misc_VirtualSize - 11, 12):
                b, e, u = struct.unpack_from('<III', d, i)
                if b:
                    ents.append((BASE + b, BASE + e, (img[u] >> 3) & 4))
    ents.sort()
    out = []
    for b, e, chained in ents:
        if chained and out and out[-1]['end'] == b:
            out[-1]['end'] = e
            out[-1]['total'] = e - out[-1]['start']
        else:
            out.append(dict(start=b, end=e, first=e - b, total=e - b))
    return out


def discover(pe=None):
    """Each executor's helpers precede it in a fixed order; locate them by size pattern."""
    pe = pe or pefile.PE(str(ROOT / ORIGINAL), fast_load=True)
    ch = _functions(pe)
    res = {}
    prev_end = BASE + 0x1000
    near = lambda x, t, tol: abs(x - t) <= tol
    for ex in [c for c in ch if c['total'] >= 12000]:
        region = [c for c in ch if prev_end <= c['start'] < ex['start']]
        name, exe, role = NAMES.get(ex['start'], ('vm_%x' % (ex['start'] - BASE), PASS8, 'unidentified'))
        d = dict(name=name, exe=exe, role=role, exec=ex['start'])
        # U32, U16, U8 readers and the opcode-remap function: four shrinking functions before the materializer
        for i in range(len(region) - 5, 3, -1):
            s = [region[i + k]['total'] for k in range(4)]
            m = region[i + 4]['total']
            if s[0] > s[1] > s[2] > s[3] >= 120 and s[0] <= 430 and s[0] - s[3] < 160 and 1200 <= m <= 1900:
                d.update(u32=region[i]['start'], u16=region[i + 1]['start'], u8=region[i + 2]['start'],
                         op=region[i + 3]['start'], mat=region[i + 4]['start'])
                break
        # push and pop are the two functions before the 405-byte function (chain of ~1086 bytes);
        # some VMs have a 239- and a 176-byte function in between, some have them inlined
        # (a region can hold more than one runtime; take the candidate closest below the readers)
        for i in range(len(region) - 1, 1, -1):
            if 'u32' in d and region[i]['start'] > d['u32']:
                continue
            if near(region[i]['first'], 405, 8) and near(region[i]['total'], 1086, 30):
                j = i - 1
                while j >= 2 and (near(region[j]['first'], 239, 6) or near(region[j]['first'], 176, 6)):
                    j -= 1
                d['push'] = region[j - 1]['start']
                d['pop'] = region[j]['start']
                break
        d['complete'] = all(k in d for k in ('push', 'pop', 'u32', 'u16', 'u8', 'op'))
        res[name] = d
        prev_end = ex['end']
    return res


# ---------------------------------------------------------------- tracing
JS = r"""
const base = Process.enumerateModules().filter(m => m.name.toLowerCase().indexOf("pafet") >= 0)[0].base;
const C = %(cfg)s, FLIPS = %(flips)s, LAST = %(last)d, BUDGET = %(budget)d, CAP = %(cap)d;
let ev = [], total = 0, nbr = 0, flipNext = false, flipped = false, after = 0, stopped = false, ret = false, afterRet = 0;
function flush(done) { send({done: !!done, ev: ev}); ev = []; }
function stop() { if (!stopped) { stopped = true; flush(true); } }
function tick() {
  if (stopped) return;
  total++;
  if (ret && ++afterRet >= 1) return stop();
  if (flipped && ++after >= BUDGET) return stop();
  if (total >= CAP) return stop();
  if (ev.length >= (flipped ? 400 : 4000)) flush(false);
}
// A process that dies after a forced flip, or a RET with no stack traffic, must not lose its tail.
setInterval(function () { if (!stopped && ev.length) flush(false); }, 100);
function hook(name, off, onE, onL) {
  Interceptor.attach(base.add(off), {
    onEnter(a) { this.x = onE ? onE(a) : null; },
    onLeave(r) { if (stopped) return; const y = onL ? onL.call(this, r) : null; ev.push([name, this.x, y]); tick(); }
  });
}
Interceptor.attach(base.add(C.op), {onEnter(a) {
  if (stopped) return;
  const op = a[2].toInt32();
  ev.push(['OP', a[1].toInt32(), op]);
  if (op === 27 || op === 28) { if (FLIPS.indexOf(nbr) >= 0) flipNext = true; nbr++; }
  tick();
  if (op === 29 || op === 30) stop();   // first invocation finished; the return value itself is not needed
}});
hook('U32', C.u32, null, r => r.toInt32());
hook('U16', C.u16, null, r => r.toInt32());
hook('U8', C.u8, null, r => r.toInt32());
hook('PUSH', C.push, a => a[1].toString(16), null);
hook('POP', C.pop, null, function (r) {
  const v = r.toString(16);
  if (flipNext) {
    flipNext = false;
    if (nbr - 1 === LAST) flipped = true;
    r.replace(ptr(v === '0' ? 1 : 0));
    return 'F' + v;
  }
  return v;
});
"""


def run(cfg, user=b"abc", serial=b"serial01", flips=(), budget=20000, cap=400000, timeout=400):
    dev = frida.get_local_device()
    hooks = {k: cfg[k] - BASE for k in ('op', 'u32', 'u16', 'u8', 'push', 'pop')}
    js = JS % dict(cfg=json.dumps(hooks), flips=json.dumps(list(flips)), last=max(flips) if flips else -1,
                   budget=budget, cap=cap)
    pid = dev.spawn([str(ROOT / cfg['exe'])], stdio='pipe')
    sess = dev.attach(pid)
    evs = []
    done = threading.Event()
    st = {'status': 'timeout'}
    sc = sess.create_script(js)

    def on(msg, data):
        if msg['type'] == 'send':
            evs.extend(msg['payload']['ev'])
            if msg['payload']['done']:
                st['status'] = 'done'
                done.set()
        else:
            st['status'] = 'error: ' + msg.get('description', '?')
            done.set()

    def detached(*a):
        if st['status'] == 'timeout':
            st['status'] = 'exited'
        done.set()

    sc.on('message', on)
    sess.on('detached', detached)
    sc.load()
    dev.resume(pid)
    dev.input(pid, user + b"\n" + serial + b"\n")
    done.wait(timeout)
    time.sleep(0.05)
    for f in (lambda: dev.kill(pid), sess.detach):
        try:
            f()
        except Exception:
            pass
    return evs, st['status']


def parse(evs):
    ins = []
    cur = None
    for name, x, y in evs:
        if name == 'OP':
            cur = dict(dom=x, op=y, args=[], kinds=[], pops=[], pushes=[], forced=False)
            ins.append(cur)
        elif cur is None:
            continue
        elif name in ('U8', 'U16', 'U32'):
            cur['args'].append(y)
            cur['kinds'].append(name)
        elif name == 'POP':
            if y.startswith('F'):
                cur['forced'] = True
                y = y[1:]
            cur['pops'].append(int(y, 16))
        elif name == 'PUSH':
            cur['pushes'].append(int(x, 16))
    return ins


class Program:
    def __init__(self):
        self.blocks = {}                         # block id -> [(opcode, args, kinds)]
        self.complete = set()                    # blocks whose terminator was recorded
        self.samples = collections.defaultdict(list)   # (block, idx) -> [(pops, pushes)] from unforced prefixes
        self.edges = collections.defaultdict(set)      # (block, idx) -> {'T','F'}
        self.natural = set()                     # positions executed without any forced flip before them
        self.natural_edges = collections.defaultdict(set)   # branch outcomes seen before any forced flip
        self.cond_values = collections.defaultdict(set)     # condition values popped before any forced flip
        self.conflicts = []

    def walk(self, ins, tag, truncated):
        if truncated and ins:
            ins = ins[:-1]                        # the last instruction of a cut trace may lack operands
        blk, idx, nbr, clean = 0, 0, 0, True
        branches = []
        for n, i in enumerate(ins):
            lst = self.blocks.setdefault(blk, [])
            k = (i['op'], tuple(i['args']), tuple(i['kinds']))
            if idx < len(lst):
                if lst[idx] != k:
                    self.conflicts.append(dict(run=tag, n=n, block=blk, idx=idx, known=lst[idx], seen=k))
                    break
            else:
                lst.append(k)
            if clean:
                self.natural.add((blk, idx))
                if len(self.samples[(blk, idx)]) < 8:
                    self.samples[(blk, idx)].append((tuple(i['pops']), tuple(i['pushes'])))
            op = i['op']
            if op == 26:
                self.complete.add(blk)
                blk, idx = i['args'][0], 0
            elif op in (27, 28):
                if not i['pops']:
                    break
                cond = i['pops'][0]
                eff = (1 if cond == 0 else 0) if i['forced'] else cond
                taken = (eff == 0) if op == 27 else (eff != 0)
                self.edges[(blk, idx)].add('T' if taken else 'F')
                if clean and not i['forced']:
                    self.natural_edges[(blk, idx)].add('T' if taken else 'F')
                    if len(self.cond_values[(blk, idx)]) < 6:
                        self.cond_values[(blk, idx)].add(cond)
                branches.append(dict(ordinal=nbr, pos=(blk, idx), taken=taken))
                nbr += 1
                if i['forced']:
                    clean = False
                blk, idx = (i['args'][0], 0) if taken else (blk, idx + 1)
            elif op in TERMINAL:
                self.complete.add(blk)
                break
            else:
                idx += 1
        return branches


def lift(cfg, inputs, max_forced=300, log=print):
    P = Program()
    queue = []           # (user, flips, branches)
    stats = []
    for u in inputs:
        evs, st = run(cfg, u)
        ins = parse(evs)
        br = P.walk(ins, 'base:%d' % len(u), st != 'done')
        queue.append((u, (), br))
        stats.append(dict(kind='base', user_len=len(u), status=st, instructions=len(ins)))
        log('  base len=%-3d status=%-8s instr=%-6d blocks=%d' % (len(u), st, len(ins), len(P.blocks)))
    tried = set()
    forced = 0
    while forced < max_forced:
        todo = None
        for u, flips, br in queue:
            last = max(flips) if flips else -1
            for b in br:
                if b['ordinal'] <= last:
                    continue
                want = 'F' if b['taken'] else 'T'
                if want not in P.edges[b['pos']] and (b['pos'], want) not in tried:
                    todo = (u, tuple(flips) + (b['ordinal'],), b['pos'], want)
                    break
            if todo:
                break
        if not todo:
            break
        u, flips, pos, want = todo
        tried.add((pos, want))
        forced += 1
        evs, st = run(cfg, u, flips=flips, timeout=400)   # a late branch needs the whole natural prefix first
        ins = parse(evs)
        br = P.walk(ins, 'force:%d:%s' % (len(u), flips), True)
        queue.append((u, flips, br))
        stats.append(dict(kind='forced', user_len=len(u), flips=list(flips), status=st, instructions=len(ins)))
        log('  force %-14s pos=%s want=%s status=%-8s instr=%-6d blocks=%d' % (flips, pos, want, st, len(ins), len(P.blocks)))
    return P, stats


# ---------------------------------------------------------------- output
def listing(P, cfg):
    out = ['# %s (%s) executor 0x%x; logical program recovered dynamically.' % (cfg['name'], cfg['role'], cfg['exec']),
           '# block ids are logical (JMP/JZ/JNZ operands). [forced-only] = reached only with a flipped branch.']
    consts = {}
    for b in sorted(P.blocks):
        tag = '' if b in P.complete else '   # INCOMPLETE: terminator not recorded'
        out.append('block %d:%s' % (b, tag))
        for i, (op, args, kinds) in enumerate(P.blocks[b]):
            name = OPNAMES.get(op, 'OP%d' % op)
            text = '  %2d  %-6s %s' % (i, name, ' '.join(str(a) for a in args))
            s = P.samples.get((b, i), [])
            if op == 1 and s and s[0][1]:
                consts[args[0]] = s[0][1][0]
                text += '   = 0x%x' % s[0][1][0]
            elif op in (27, 28):
                text += '   -> block %d  seen=%s' % (args[0], ''.join(sorted(P.edges.get((b, i), ()))))
            elif op == 26:
                text += '   -> block %d' % args[0]
            if (b, i) not in P.natural:
                text += '   [forced-only]'
            out.append(text)
    return '\n'.join(out) + '\n', consts


def summary(P, cfg, stats):
    hosts = collections.Counter()
    for lst in P.blocks.values():
        for op, args, kinds in lst:
            if op == 32 and len(args) == 2:
                hosts[args[0]] += 1
    return dict(name=cfg['name'], role=cfg['role'], executor=hex(cfg['exec']), binary=cfg['exe'],
                helpers={k: hex(cfg[k]) for k in ('op', 'u32', 'u16', 'u8', 'push', 'pop')},
                blocks=len(P.blocks), complete_blocks=len(P.complete),
                instructions=sum(len(v) for v in P.blocks.values()),
                natural_instructions=len(P.natural),
                conditional_branches=len(P.edges),
                one_sided_branches=sorted(k for k, v in P.edges.items() if len(v) < 2),
                branches=[dict(block=b, idx=i, op=P.blocks[b][i][0], target=P.blocks[b][i][1][0],
                               recorded=''.join(sorted(P.edges[(b, i)])),
                               natural=''.join(sorted(P.natural_edges.get((b, i), ()))),
                               natural_condition_values=[hex(v) for v in sorted(P.cond_values.get((b, i), ()))])
                          for (b, i) in sorted(P.edges)],
                opcode_histogram=dict(sorted(collections.Counter(op for l in P.blocks.values() for op, _, _ in l).items())),
                host_indices=sorted(hosts), conflicts=len(P.conflicts), conflict_detail=P.conflicts[:5], runs=stats)


def main():
    ap = argparse.ArgumentParser(description=__doc__, formatter_class=argparse.RawDescriptionHelpFormatter)
    ap.add_argument('names', nargs='*')
    ap.add_argument('--list', action='store_true')
    ap.add_argument('--out', type=pathlib.Path, default=ROOT / 'jack_xxxvii_evidence' / 'lifted')
    ap.add_argument('--max-forced', type=int, default=300)
    args = ap.parse_args()
    cfgs = discover()
    if args.list or not args.names:
        for c in cfgs.values():
            print('%-13s exec=%x %-9s %-16s %s' % (c['name'], c['exec'], 'ok' if c['complete'] else 'NO-HELPERS', c['exe'], c['role']))
        return
    args.out.mkdir(parents=True, exist_ok=True)
    names = list(cfgs) if args.names == ['all'] else args.names
    for name in names:
        cfg = cfgs[name]
        if not cfg['complete']:
            print(name, 'helpers not located; skipped')
            continue
        print('==', name, cfg['role'])
        inputs = [b"", b"abc", b"A" * 55, b"B" * 56, b"C" * 64, b"D" * 120] if name == 'sha_msg' else [b"abc", b"abcdefghijklmnopqrstuvwxy"]
        P, stats = lift(cfg, inputs, args.max_forced)
        text, consts = listing(P, cfg)
        (args.out / (name + '.txt')).write_text(text, encoding='utf-8')
        s = summary(P, cfg, stats)
        s['constants'] = {str(k): hex(v) for k, v in sorted(consts.items())}
        s['program'] = {str(b): [dict(op=op, name=OPNAMES.get(op, 'OP%d' % op), args=list(a), kinds=list(k), natural=(b, i) in P.natural)
                                 for i, (op, a, k) in enumerate(lst)] for b, lst in sorted(P.blocks.items())}
        (args.out / (name + '.json')).write_text(json.dumps(s, indent=1), encoding='utf-8')
        print('   blocks=%d complete=%d instructions=%d branches=%d one-sided=%d conflicts=%d' % (
            s['blocks'], s['complete_blocks'], s['instructions'], s['conditional_branches'], len(s['one_sided_branches']), s['conflicts']))


if __name__ == '__main__':
    main()
