#!/usr/bin/env python3
"""JACK XXXVI: merge per-process validation rows and derive honest metrics.

Inputs: one or more serial_loop_validate outputs (--rows). Writes
validation.json, coverage.json, status.json, progress.json and
counterexamples.json under jack_xxxvi_evidence/. Windows-verified and
emulation-verified depths are always reported separately.
"""
import argparse
import hashlib
import json
import pathlib
import sys
ROOT = pathlib.Path(__file__).resolve().parents[1]; sys.path.insert(0, str(ROOT))
from devirt.serial_regions_xxxvi import REGIONS
from devirt.serial_jobs_xxxii import JOBS
from devirt.serial_loop import HANDLERS
OUT = ROOT/'jack_xxxvi_evidence'


def write(name, value): (OUT/name).write_text(json.dumps(value, indent=1)+'\n')


def main():
    ap = argparse.ArgumentParser(description=__doc__); ap.add_argument('--rows', nargs='+', required=True); args = ap.parse_args()
    rows = {}; sources = None
    for path in args.rows:
        report = json.loads(pathlib.Path(path).read_text()); sources = report['source_sha256']
        for r in report['rows']:
            old = rows.get(r['case'])
            if old is None or r['verified_steps'] > old['verified_steps']: rows[r['case']] = r
    rows = [rows[k] for k in sorted(rows)]
    import gzip
    traces = {r['case']: dict(trace=r['trace'], callback_log=r.get('callback_log'), callback_log_tail=r.get('callback_log_tail')) for r in rows}
    (OUT/'validation_traces.json.gz').write_bytes(gzip.compress(json.dumps(traces, separators=(',', ':')).encode(), mtime=0))
    slim = [{k: v for k, v in r.items() if k not in ('trace', 'callback_log', 'callback_log_tail')} for r in rows]
    (OUT/'validation.json').write_text(json.dumps(dict(rows=slim, traces='validation_traces.json.gz', source_sha256=sources,
          scope='Candidate from one Windows entry per process. Windows trace covers the captured prefix; later boundaries are compared with original x64 emulated from the same entry, with C++ exception delivery by a modeled OS stub (scripts/pafet_eh_stub.py). Not Windows observations beyond the trace.'), indent=1)+'\n')
    complete = [r for r in rows if r['capture_status'] == 'complete' and r['windows']['all_events_match']]
    windows_max = max(r['windows']['executed_steps_closed'] for r in complete)
    emulated_max = max(r['verified_steps'] for r in complete)
    at_max = [r for r in complete if r['verified_steps'] == emulated_max]
    ge = lambda n: sorted({r['run_id'] for r in complete if r['verified_steps'] >= n})
    bodies = {int(t['domain_body'], 16) for r in complete for t in r['trace'][:r['verified_steps']]}
    old = json.loads((ROOT/'jack_xxxv_evidence/coverage.json').read_text())
    previous = set()
    for op, ds in old['cumulative_domains'].items():
        for b, s in REGIONS.items():
            if s['opcode'] == int(op, 16) and s['domain'] in ds: previous.add(b)
    cumulative = (bodies | previous) & REGIONS.keys()
    domains = {}
    for b in sorted(cumulative): domains.setdefault(hex(REGIONS[b]['opcode']), set()).add(REGIONS[b]['domain'])
    jobs = {int(j, 16) for r in complete for j in r.get('jobs', [])} & JOBS.keys()
    kernels = jobs | {int(v, 16) for v in old['observed_labels']}
    write('coverage.json', dict(static_bindings=len(REGIONS), cumulative_verified_bindings=len(cumulative),
          cumulative_domains={k: sorted(v) for k, v in domains.items()},
          unverified_bindings=[dict(rva=hex(b), opcode=s['opcode'], domain=s['domain']) for b, s in sorted(REGIONS.items()) if b not in cumulative],
          generated_kernels=len(JOBS), observed_generated_kernels=len(kernels), unobserved_generated_labels=list(map(hex, sorted(JOBS.keys()-kernels))),
          host_callback_functions_executed=sorted({f for r in complete for f in r.get('callback_functions', [])}),
          scope='Bindings/kernels count only from complete Windows captures whose emulated continuation matched; XXXV cumulative evidence retained.'))
    import subprocess
    subprocess.run([sys.executable, str(ROOT/'scripts/pafet_serial_graph_xxxvi.py')], check=True, cwd=ROOT, stdout=subprocess.DEVNULL)
    cfg = json.loads((OUT/'virtual_cfg.json').read_text())
    rejected = [r for r in rows if r['capture_status'] != 'complete']
    write('counterexamples.json', dict(
        rejected_windows_captures=[dict(case=r['case'], status='REJECTED_INCOMPLETE as a Windows capture',
                                        emulated_continuation_verified_steps=r['verified_steps'], exceptions=r.get('exceptions'),
                                        treatment='Windows trace stops at external code during C++ exception dispatch; the continuation is only emulation evidence and is not counted for depth, domain or kernel coverage.')
                                   for r in rejected],
        first_unsupported=[dict(case=r['case'], verified_steps=r['verified_steps'], candidate_failure=r['candidate_failure'],
                                native_frontier=r.get('native_frontier')) for r in rows],
        negative_controls=[dict(case=r['case'], controls=r['negative_controls']) for r in rows if r.get('negative_controls')],
        scope='Negative controls are synthetic corruptions; no natural guard-failure equivalence is claimed.'))
    loops = cfg['loops']
    from devirt.serial import starts
    unit_of = {start: k for k, start in enumerate(starts())}
    executed = {t['pc'] for r in complete for t in r['trace'][:r['verified_steps']]}
    units = sorted({unit_of[(pc//26)*26] for pc in executed})
    observed_blocks = [b['start'] for b in cfg['blocks'] if b['start'] in executed]
    dimension = dict(static_instructions=cfg['summary']['static_instructions'], dynamic_distinct_pcs=len(executed),
                     dynamic_instruction_instances=sum(r['verified_steps'] for r in complete),
                     opcode_families=len(cfg['summary']['opcodes']), materialization_units_with_static_code=103,
                     materialization_units_executed=len(units), basic_blocks=len(cfg['blocks']), basic_blocks_executed=len(observed_blocks),
                     natural_loops=len(loops), loops_with_verified_back_edge=sum(any(d['back_edges_traversed'] for d in l['dynamic']) for l in loops),
                     loops_with_verified_exit=sum(any(d['exit_steps'] for d in l['dynamic']) for l in loops),
                     exit_routes_static=len(cfg['termination']['halt_pcs']), halt_reached_dynamically=bool(cfg['termination']['dynamically_reached']),
                     unclassified_bytes=2678-cfg['summary']['bytes_in_static_instructions'])
    write('progress.json', dict(
        maximum_windows_verified_instructions=windows_max, maximum_emulation_verified_instructions=emulated_max,
        processes_at_maximum=len(at_max), users_at_maximum=sorted({r['user'] for r in at_max}),
        processes_with_at_least={str(n): len(ge(n)) for n in (18, 25, 100, 500, 1000, 5000, 20000) if ge(n)},
        implemented_semantic_opcodes=sorted([1, 4, 5, 26, 31, 32, 41, 58] + list(HANDLERS.table)),
        dimension=dimension, static_program=cfg['summary'], loops=[dict(header=l['header'], iteration_lengths=l['iteration_lengths'],
              dynamic=[dict(case=d['case'], header_entries=d['header_entries'], back_edges=d['back_edges_traversed'], exits=d['exit_steps']) for d in l['dynamic']]) for l in loops],
        termination=cfg['termination'],
        global_devirtualization_percentage=None,
        reason='The reachable static program is closed (478 instructions, no unknown opcode), but native halt cleanup, other outer states and Windows confirmation beyond the trace remain open; a single percentage would hide these different evidence levels.'))
    write('status.json', dict(baseline_commit='34b0a39f3b15051e8fdb534efde55f37305a3d6e',
        maximum_windows_verified_instructions=windows_max, maximum_emulation_verified_instructions=emulated_max,
        independent_processes=len(complete), rejected_windows_captures=len(rejected),
        semantic_instruction_instances=sum(r['verified_steps'] for r in complete),
        emulated_native_instructions=sum(r['emulated']['native_instructions'] for r in complete),
        emulated_boundaries=sum(r['emulated']['compared_events'] for r in complete),
        exception_deliveries=sum(r.get('exceptions', 0) for r in complete),
        VM_status=dict(Serial='PARTIAL: closed static program, three loops and HALT recovered; long emulation-verified runs; native cleanup open',
                       User='unchanged', SHA='unchanged', Hex='unchanged'),
        source_sha256={p: hashlib.sha256((ROOT/p).read_bytes()).hexdigest() for p in
                       ['scripts/pafet_serial_metrics_xxxvi.py', 'scripts/pafet_serial_graph_xxxvi.py', 'scripts/pafet_serial_static_xxxvi.py',
                        'scripts/pafet_serial_audit_xxxvi.py', 'scripts/pafet_eh_stub.py', 'devirt/serial_loop.py', 'devirt/serial_loop_validate.py']}))
    print('windows max', windows_max, 'emulated max', emulated_max, 'processes', len(complete), 'bindings', len(cumulative), '/', len(REGIONS), 'kernels', len(kernels), '/', len(JOBS))


if __name__ == '__main__':
    main()
