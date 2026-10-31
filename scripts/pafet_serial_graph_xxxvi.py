#!/usr/bin/env python3
"""JACK XXXVI virtual CFG: static decode + dynamic observations, kept apart.

Inputs: jack_xxxvi_evidence/static_sweep*.json (pafet_serial_static_xxxvi.py)
and jack_xxxvi_evidence/validation.json (devirt.serial_loop_validate). Output:
virtual_cfg.json/.dot and loops.json. Every node/edge carries provenance:
'static' (decoded from one capture's bytecode with recovered formulas),
'windows' (inside a Windows-trace-verified prefix) or 'x64-emulated' (verified
against original x64 emulated from the Windows entry). Nothing is inferred
from physical addresses; a back edge requires dominance in the static graph
and a dynamic cycle requires the same header to be re-entered by a verified
step after the back edge.
"""
import argparse
import collections
import json
import pathlib

ROOT = pathlib.Path(__file__).resolve().parents[1]
OUT = ROOT/'jack_xxxvi_evidence'


def load_rows(path):
    """validation.json rows with per-step traces restored from the gz companion."""
    import gzip
    report = json.loads(pathlib.Path(path).read_text())
    if report.get('traces'):
        traces = json.loads(gzip.decompress((pathlib.Path(path).parent/report['traces']).read_bytes()))
        for r in report['rows']: r.update(traces[r['case']])
    return report['rows']


def blocks_of(nodes):
    leaders = {0}
    for n in nodes.values():
        if n['kind'] in ('jump', 'cond'):
            leaders.add(n['target'])
            if n['kind'] == 'cond': leaders.add(n['pc']+n['length'])
    blocks = {}
    for l in sorted(leaders):
        if l not in nodes: continue
        pc = l; ins = []
        while pc in nodes:
            n = nodes[pc]; ins.append(pc)
            if n['kind'] != 'next' or pc+n['length'] in leaders: break
            pc += n['length']
        last = nodes[ins[-1]]
        succ = list(last.get('successors', [])) if last['kind'] != 'next' else [last['pc']+last['length']]
        blocks[l] = dict(start=l, instructions=ins, successors=succ, terminator=last['kind'])
    return blocks


def dominators(blocks, entry=0):
    preds = collections.defaultdict(set)
    for b in blocks.values():
        for s in b['successors']: preds[s].add(b['start'])
    allb = set(blocks); dom = {b: set(allb) for b in blocks}; dom[entry] = {entry}
    changed = True
    while changed:
        changed = False
        for b in blocks:
            if b == entry: continue
            new = {b} | (set.intersection(*[dom[p] for p in preds[b]]) if preds[b] else set())
            if new != dom[b]: dom[b] = new; changed = True
    return dom, preds


def postdominators(blocks):
    exits = [b for b in blocks if not blocks[b]['successors']]
    allb = set(blocks); pdom = {b: set(allb) for b in blocks}
    for e in exits: pdom[e] = {e}
    changed = True
    while changed:
        changed = False
        for b in blocks:
            if b in exits: continue
            succ = blocks[b]['successors']
            new = {b} | set.intersection(*[pdom[s] for s in succ])
            if new != pdom[b]: pdom[b] = new; changed = True
    return pdom


def natural_loops(blocks, dom, preds):
    loops = {}
    for b in blocks.values():
        for s in b['successors']:
            if s in dom[b['start']]:
                body = {s}; work = [b['start']]
                while work:
                    x = work.pop()
                    if x not in body: body.add(x); work.extend(preds[x])
                loops.setdefault(s, dict(header=s, latches=[], body=set()))
                loops[s]['latches'].append(b['start']); loops[s]['body'] |= body
    return loops


def path_lengths(blocks, nodes, loop):
    """Instruction counts of every simple header->latch->header iteration."""
    header = loop['header']; out = []
    def walk(b, seen, count):
        count += len(blocks[b]['instructions'])
        for s in blocks[b]['successors']:
            if s == header: out.append(count)
            elif s in loop['body'] and s not in seen: walk(s, seen | {s}, count)
    walk(header, {header}, 0)
    return sorted(set(out))


def main():
    ap = argparse.ArgumentParser(description=__doc__)
    ap.add_argument('--static', default=str(OUT/'static_sweep.json'))
    ap.add_argument('--validation', default=str(OUT/'validation.json'))
    args = ap.parse_args()
    static = json.loads(pathlib.Path(args.static).read_text())
    nodes = {n['pc']: n for n in static['nodes']}
    blocks = blocks_of(nodes); dom, preds = dominators(blocks); pdom = postdominators(blocks)
    loops = natural_loops(blocks, dom, preds)
    rows = load_rows(args.validation) if pathlib.Path(args.validation).exists() else []
    # Dynamic overlay from verified steps only.
    observed = collections.defaultdict(list); edges = collections.defaultdict(list)
    outcomes = collections.defaultdict(collections.Counter); visits = collections.defaultdict(collections.Counter)
    for r in rows:
        verified = r['verified_steps']; windows = r.get('windows', {}).get('executed_steps_closed', 0) if r.get('windows', {}).get('all_events_match') else 0
        trace = r['trace'][:verified]
        for i, t in enumerate(trace):
            level = 'windows' if i < windows else 'x64-emulated'
            observed[t['pc']].append(dict(case=r['case'], step=t['step'], level=level, body=t['domain_body']))
            visits[t['pc']][r['case']] += 1
            if 'taken' in t: outcomes[t['pc']][('taken' if t['taken'] else 'fallthrough')] += 1
            if i+1 < len(trace):
                edges[(t['pc'], trace[i+1]['pc'])].append(dict(case=r['case'], from_step=t['step'], level='windows' if i+1 < windows else 'x64-emulated'))
    node_out = []
    for pc in sorted(nodes):
        n = dict(nodes[pc]); n['provenance'] = ['static-decode']
        obs = observed.get(pc, [])
        if obs:
            n['provenance'].append('dynamic')
            n['dynamic'] = dict(instances=len(obs), cases=sorted({o['case'] for o in obs}), levels=sorted({o['level'] for o in obs}),
                                first=obs[0], domains_bodies=sorted({o['body'] for o in obs}))
        node_out.append(n)
    edge_out = []
    for b in blocks.values():
        last = nodes[b['instructions'][-1]]
        for s in b['successors']:
            kind = 'jump' if last['kind'] == 'jump' else ('taken' if last['kind'] == 'cond' and s == last['target'] else 'fallthrough')
            e = dict(source=last['pc'], target=s, kind=kind, provenance=['static-decode'])
            if (last['pc'], s) in edges:
                e['provenance'].append('dynamic'); obs = edges[(last['pc'], s)]
                e['dynamic'] = dict(traversals=len(obs), cases=sorted({o['case'] for o in obs}), levels=sorted({o['level'] for o in obs}))
            edge_out.append(e)
    loop_out = []
    for h, l in sorted(loops.items()):
        header_cond = next((pc for pc in blocks[h]['instructions'] if nodes[pc]['kind'] == 'cond'), None)
        exits = sorted({(nodes[blocks[b]['instructions'][-1]]['pc'], s) for b in l['body'] for s in blocks[b]['successors'] if s not in l['body']})
        lengths = path_lengths(blocks, nodes, l)
        dyn = []
        for r in rows:
            trace = r['trace'][:r['verified_steps']]
            hv = [t['step'] for t in trace if t['pc'] == h]
            back = sum(1 for i in range(len(trace)-1) if trace[i+1]['pc'] == h and any(trace[i]['pc'] == nodes[blocks[x]['instructions'][-1]]['pc'] for x in l['latches']))
            exit_taken = [trace[i]['step'] for i in range(len(trace)-1) if (trace[i]['pc'], trace[i+1]['pc']) in exits]
            if hv: dyn.append(dict(case=r['case'], user=r.get('user'), header_entries=len(hv), back_edges_traversed=back,
                                   first_entry_step=hv[0], last_entry_step=hv[-1], strides=sorted({b-a for a, b in zip(hv, hv[1:])}),
                                   exit_steps=exit_taken))
        loop_out.append(dict(header=h, latches=sorted(l['latches']), body_blocks=sorted(l['body']),
                             body_instructions=sum(len(blocks[b]['instructions']) for b in l['body']),
                             condition_pc=header_cond, condition=nodes[header_cond]['mnemonic'] if header_cond else None,
                             exit_edges=[dict(source=a, target=b) for a, b in exits], iteration_lengths=lengths,
                             proof='Back edge to a dominating header in the static decode', dynamic=dyn))
    loop_headers = set(loops)
    bifurcations = []
    for b in blocks.values():
        last = nodes[b['instructions'][-1]]
        if last['kind'] != 'cond': continue
        ipdom = None
        cands = pdom[b['start']] - {b['start']}
        for c in cands:
            if all(c == d or d in pdom[c] for d in cands): ipdom = c
        bifurcations.append(dict(pc=last['pc'], mnemonic=last['mnemonic'], block=b['start'], targets=last['successors'],
                                 loop_header=b['start'] in loop_headers, reconverges_at=ipdom,
                                 observed=dict(outcomes.get(last['pc'], {}))))
    halts = [n['pc'] for n in nodes.values() if n['kind'] == 'halt']
    reach = set(); work = [0]
    while work:
        x = work.pop()
        if x in reach: continue
        reach.add(x); work.extend(blocks[x]['successors'])
    cfg = dict(schema='pafet-serial-cfg-v2', static_entry=static.get('entry'),
               nodes=node_out, edges=edge_out, blocks=[dict(start=b['start'], instructions=len(b['instructions']), successors=b['successors'])
                                                      for b in blocks.values()],
               loops=loop_out, bifurcations=bifurcations,
               termination=dict(halt_pcs=halts, halt_statically_reachable=any(h in reach for h in halts),
                                route='HALT core: control3=0, control0=0xfe1ab, control10=1; wrapper 1ee450 -> pop-only RET; dispatcher 22fd0c -> 232daa -> 22b088 -> 22b0a2 -> cleanup 22b0af',
                                dynamically_reached=[dict(case=r['case'], step=r['verified_steps']) for r in rows
                                                     if any(t['opcode'] == 30 for t in r['trace'][:r['verified_steps']])]),
               summary=dict(static_instructions=len(nodes), basic_blocks=len(blocks), jumps=sum(n['kind'] == 'jump' for n in nodes.values()),
                            conditional_branches=sum(n['kind'] == 'cond' for n in nodes.values()), halts=len(halts),
                            unknown_frontiers=[n['pc'] for n in nodes.values() if n['kind'] not in ('next', 'jump', 'cond', 'halt')],
                            opcodes=sorted({n['opcode'] for n in nodes.values() if 'opcode' in n}),
                            dynamic_distinct_pcs=len(observed), static_only_pcs=len(set(nodes)-set(observed)),
                            observed_pcs_outside_static=sorted(set(observed)-set(nodes)),
                            physical_bytes=2678, bytes_in_static_instructions=sum(n.get('length', 0) for n in nodes.values()),
                            natural_loops=len(loops)),
               scope='Static graph from the recovered decoder/operand formulas applied to one capture; dynamic overlay only from verified steps. Bytes outside decoded instructions remain unclassified.')
    (OUT/'virtual_cfg.json').write_text(json.dumps(cfg, indent=1)+'\n')
    (OUT/'loops.json').write_text(json.dumps(dict(loops=loop_out, bifurcations=bifurcations, termination=cfg['termination']), indent=1)+'\n')
    dot = ['digraph serial {', ' node [shape=box,fontname=monospace];']
    for b in blocks.values():
        seen = any(pc in observed for pc in b['instructions'])
        label = '\\l'.join('%d %s' % (pc, nodes[pc].get('mnemonic', '?')) for pc in b['instructions'])+'\\l'
        dot.append(' b%d [label="%s"%s];' % (b['start'], label, ',style=filled,fillcolor=lightblue' if seen else ''))
        for s in b['successors']: dot.append(' b%d -> b%d;' % (b['start'], s))
    dot.append('}')
    (OUT/'virtual_cfg.dot').write_text('\n'.join(dot)+'\n')
    print(json.dumps(cfg['summary'], indent=1))
    for l in loop_out: print('loop', l['header'], 'latches', l['latches'], 'lengths', l['iteration_lengths'], 'dyn', [(d['case'][-11:], d['header_entries'], d['back_edges_traversed']) for d in l['dynamic']])
    for b in bifurcations: print('branch', b['pc'], b['mnemonic'], 'loop_header' if b['loop_header'] else '', 'reconverges', b['reconverges_at'], b['observed'])


if __name__ == '__main__':
    main()
