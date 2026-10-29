#!/usr/bin/env python3
"""Analyze the Frida trace from pafet_hexvm_capture_xxv.py and produce a
structured description of the hex-VM:
  - CFG: 72 blocks and their transitions
  - handler weights: how often each of the 8 state handlers fires
  - entry/exit sequence
  - counter and len distribution

Writes jack_xxv_evidence/hexvm_structure.json."""
import json, os, sys
from collections import Counter, defaultdict

HERE = os.path.dirname(os.path.abspath(__file__))
TRACE = os.path.join(HERE, '..', 'vm_pools_evidence', 'hexvm_full_trace_xxv.json')
OUT_DIR = os.path.join(HERE, '..', 'jack_xxv_evidence')
os.makedirs(OUT_DIR, exist_ok=True)

def main():
    with open(TRACE) as f:
        d = json.load(f)
    pushes   = d['pushes']   # [tick, item, K_low, K_high, counter, len]
    vpc_r    = d['vpc_reads']
    vpc_w    = d['vpc_writes']
    outputs  = d['outputs']
    secdisps = d['secdisps']
    throws   = d['throws']

    # Transitions and visit counts
    cfg = defaultdict(Counter)
    visits = Counter()
    for i in range(len(vpc_w)):
        pc = vpc_w[i][1]
        visits[pc] += 1
        if i + 1 < len(vpc_w):
            cfg[pc][vpc_w[i+1][1]] += 1

    # Classify blocks: entry (visits==1), hub (fanout>1), chain (fanout==1), exit (no outgoing)
    def classify(pc):
        outs = cfg[pc]
        if visits[pc] == 1: return 'entry'
        if sum(outs.values()) == 0: return 'exit'
        if len(outs) == 1: return 'chain'
        if len(outs) <= 4: return 'branch'
        return 'hub'

    blocks = {}
    for pc, c in visits.items():
        outs = cfg[pc]
        blocks[hex(pc)] = {
            'visits': c,
            'fanout': len(outs),
            'kind': classify(pc),
            'transitions': {hex(t): n for t, n in outs.most_common()},
        }

    # Build the sorted CFG in visit-count order
    cfg_summary = []
    for pc, c in visits.most_common():
        outs = cfg[pc]
        trans_str = ', '.join(f'0x{t:x}@{n}' for t,n in outs.most_common())
        cfg_summary.append(f'0x{pc:08x}  visits={c:7d}  fanout={len(outs)}  -> {trans_str}')

    # Entry sequence (first VPC writes, before the big loop)
    entry_seq = []
    seen = set()
    for w in vpc_w:
        if w[1] in seen:
            break
        entry_seq.append(hex(w[1]))
        seen.add(w[1])
        if len(entry_seq) >= 6:
            break

    # Last VPC writes before output_build (exit)
    out_tick_min = min(o[0] for o in outputs) if outputs else -1
    last_before = [w for w in vpc_w if w[0] < out_tick_min][-10:]
    exit_seq = [hex(w[1]) for w in last_before]

    # Push distribution: items match next VPC?
    items_match_next_vpc = 0
    for p in pushes[:1000]:
        tick, item = p[0], p[1]
        # Find next vpc_write with tick > this push's tick
        for w in vpc_w:
            if w[0] > tick:
                if w[1] == item:
                    items_match_next_vpc += 1
                break
    print(f'pushes.item == next vpc_write.pc: {items_match_next_vpc}/1000 sampled')

    # Counter progression check: counter at push matches push index
    pos_match = 0
    for i, p in enumerate(pushes[:1000]):
        if p[4] == i:  # counter == push index
            pos_match += 1
    print(f'pushes[i].counter == i: {pos_match}/1000')

    # Serialize structured output
    doc = {
        'summary': {
            'total_pushes': len(pushes),
            'total_vpc_reads': len(vpc_r),
            'total_vpc_writes': len(vpc_w),
            'total_secdisps': len(secdisps),
            'total_outputs': len(outputs),
            'total_throws': len(throws),
            'unique_vpc_values': len(visits),
            'main_loop_count': visits[0x295b7f] if 0x295b7f in visits else None,
        },
        'entry_sequence': entry_seq,
        'exit_sequence': exit_seq,
        'blocks': blocks,
        'cfg_summary': cfg_summary,
    }

    out = os.path.join(OUT_DIR, 'hexvm_structure.json')
    with open(out, 'w') as f:
        json.dump(doc, f, indent=1)
    print(f'[+] saved {out}')

    # Also save a condensed CFG text file for human review
    txt = os.path.join(OUT_DIR, 'hexvm_cfg.txt')
    with open(txt, 'w') as f:
        f.write(f'# hex-VM virtual program CFG (JACK XXV)\n')
        f.write(f'# {len(visits)} unique VPC values, {len(vpc_w)} total writes\n')
        f.write(f'# {len(pushes)} queue pushes, {len(outputs)} output_build calls\n')
        f.write(f'# {len(throws)} _CxxThrowException invocations\n')
        f.write(f'#\n')
        f.write(f'# entry sequence: {" -> ".join(entry_seq)}\n')
        f.write(f'# exit sequence: {" -> ".join(exit_seq)}\n')
        f.write(f'#\n')
        for line in cfg_summary:
            f.write(line + '\n')
    print(f'[+] saved {txt}')


if __name__ == '__main__':
    main()
