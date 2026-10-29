#!/usr/bin/env python3
"""Compare native Windows boundary samples with the compiled C++ probe."""
import hashlib
import json
import pathlib
import struct
import subprocess

ROOT = pathlib.Path(__file__).resolve().parents[1]
HANDLERS = [0x4c490,0x4c4f0,0x4c560,0x4c5b0,0x4c5d0,0x4c630,0x4c690,0x4c6a0]


def main():
    path = ROOT/'jack_xxvi_evidence/windows_capture.json'
    raw = path.read_bytes()
    run = json.loads(raw)
    cap = run['capture']
    assert not run['host_errors'] and not cap['errors']
    assert run['same_file_size'] and run['patch_offsets'] == [0x395efb,0x395efc]
    assert run['original_sha256'] == hashlib.sha256((ROOT/'pafet.bin').read_bytes()).hexdigest()
    assert run['target_sha256'] == hashlib.sha256((ROOT/'pafet_pass8.exe').read_bytes()).hexdigest()
    assert run['collector_sha256'] == hashlib.sha256((ROOT/'scripts/pafet_hexvm_capture_xxvi.py').read_bytes()).hexdigest()
    ev = cap['events']
    assert all(a['tick'] < b['tick'] for a,b in zip(ev,ev[1:]))
    assert len({e['tid'] for e in ev}) == 1
    assert all(e['depth'] == 1 for e in ev)
    contexts = {e['state']['ctx'] for e in ev if e.get('state')}
    assert len(contexts) == 1
    req, expected, kinds = [], [], []
    pending = {}
    decoder = None
    observed_first = None
    def n(x): return int(x,0)
    def kab(s): return [n(s[k]) for k in ('k','a','b')]
    for e in ev:
        kind = e['kind']
        if kind in ('handler_enter','drain_enter') and 'state' in e:
            pending[(e['tid'],kind)] = e
        elif kind in ('handler_leave','drain_leave') and 'state' in e:
            before = pending.pop((e['tid'],kind.replace('leave','enter')))
            s,t = before['state'],e['state']
            if kind == 'handler_leave':
                assert before['h'] == e['h']
                req.append([0,e['h'],*kab(s)]); expected.append(kab(t)); kinds.append('native_handler')
            else:
                # The empty C++ drain keeps its initial zero VPC/tag; native
                # empty drains preserve arbitrary state and are checked directly.
                if not s['length']:
                    assert s == t
                    continue
                table = [HANDLERS.index(n(v)) for v in s['table']]
                assert table == [(table[0]+i)&7 for i in range(8)]
                req.append([1,*kab(s),*[n(s[k]) for k in ('lcg','steps','mult','mask1','mask2')],
                            s['additive'],table[0],s['length'],*[n(v) for v in s['pending']]])
                expected.append([*kab(t),*[n(t[k]) for k in ('lcg','steps','vpc')],t['tag'],t['length']])
                kinds.append('native_drain')
        elif kind == 'decoder_commit':
            decoder = e
        elif kind == 'decoder_next_push' and decoder is not None:
            s = decoder['state']; t = e['state']
            req.append([4,n(s['a']),n(s['b']),decoder['next_index'],decoder['opcode'],decoder['counter']&0xffffffff])
            expected.append([n(t['a']),n(t['b']),e['item']]); kinds.append('native_decoder_commit')
            if observed_first is None:
                observed_first = {'before':s['b'],'after':t['b'],
                                  'opcode':decoder['opcode'],'next_index':decoder['next_index']}
            decoder = None
    # Every throw from queue_push accounts for one missing normal push return.
    c = cap['counts']
    assert c['push_enter'] - c['push_leave'] == c['throw']
    assert c['catch'] == 2*c['throw']
    assert c['handler_enter'] == c['handler_leave'] == c['push_enter']
    assert c['drain_enter'] == c['drain_leave']
    assert c['remap_enter'] == c['remap_leave']
    throws = [e for e in ev if e['kind']=='throw']
    for e in throws:
        following = [v for v in ev if e['tick'] < v['tick'] and v['kind']=='catch'][:2]
        assert [v['rva'] for v in following] == [0x3ca648,0x88990]
        before,after = [v['state'] for v in following]
        assert after['pending'] == before['pending'] + [hex(int.from_bytes(bytes.fromhex(e['payload']),'little'))]
    slots = [n(e['value']) for e in ev if e['kind']=='slot_leave']
    assert len(slots)==16
    output = struct.pack('<16Q',*slots).hex()
    assert next(e for e in ev if e['kind']=='before_cleanup')['output_hex'] == output
    assert ev[-1]['kind']=='executor_leave' and ev[-1]['output_hex'] == output
    probe = ROOT/'jack_xxvi_evidence/build/hexvm_probe.exe'
    synthetic = json.loads((ROOT/'jack_xxvi_evidence/windows_differential.json').read_bytes())
    assert synthetic['probe_sha256'] == hashlib.sha256(probe.read_bytes()).hexdigest()
    cpp = subprocess.run([str(probe)],input=''.join(' '.join(format(x,'x') for x in r)+'\n' for r in req),text=True,capture_output=True,check=True)
    rows = cpp.stdout.splitlines()
    assert len(rows)==len(expected)
    counts = {}
    for line,want,kind in zip(rows,expected,kinds):
        assert [int(x,16) for x in line.split()] == want,kind
        counts[kind] = counts.get(kind,0)+1
    assert not pending
    report = {'run_id':run['run_id'],'trace_sha256':hashlib.sha256(raw).hexdigest(),
              'probe_sha256':hashlib.sha256(probe.read_bytes()).hexdigest(),
              'passes':counts,'native_counts':c,'first_B_commit':observed_first,
              'throw_payloads_delivered':len(throws),'output_qwords':slots,'output_bytes':len(bytes.fromhex(output)),
              'limitations':['bounded prefix samples, not full instruction lockstep',
                             'two-byte gate variant, not intact PE execution',
                             'no unhooked internal-state control',
                             'decoder prefix/remap and remaining program blocks not implemented',
                             '128-byte executor output is not yet related to final 72-byte object']}
    out = ROOT/'jack_xxvi_evidence/windows_audit.json'
    out.write_text(json.dumps(report,indent=2)+'\n',encoding='utf-8')
    print(json.dumps(report,indent=2))


if __name__ == '__main__': main()
