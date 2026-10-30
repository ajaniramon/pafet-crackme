"""Report finite-corpus coverage and semantic execution cost, without native replay."""
import hashlib
import ast
import json
import platform
import statistics
import sys
import subprocess
import time
import pefile
from .serial_extended_validate import OUT, ROOT, candidate
from .serial_continuous_validate import read, compare_events
from .serial_extended import ExtendedSerialVMState
from pafet_state_contract import require


def main():
    current = json.loads((OUT/'validation.json').read_bytes())
    previous = json.loads((ROOT/'jack_xxx_evidence/validation.json').read_bytes())
    fresh = [r for r in current['rows'] if r['level_C'] and r['case'].startswith('jack_xxxi_evidence/')]
    timings = []
    for row in fresh:
        entry = read(ROOT/row['case']/'frame_00.entry.json.gz')
        for repeat in range(5):
            start = time.perf_counter()
            state = ExtendedSerialVMState.from_initial_capture(entry, pefile.PE(str(ROOT/'pafet.bin')))
            preflight = time.perf_counter()-start
            steps = []
            for _ in range(3):
                start = time.perf_counter(); state.step(); steps.append((time.perf_counter()-start)*1000)
            timings.append(dict(case=row['case'], repeat=repeat, preflight_ms=preflight*1000, step_ms=steps))
    baseline = [r for r in previous['rows'] if r.get('level_C') and r['case'].startswith('jack_xxx_evidence/')]
    def pcs(rows, field):
        result=set()
        for row in rows:
            folder=ROOT/row['case'];entry=read(folder/'frame_00.entry.json.gz');trace=read(folder/'frame_00.trace.json.gz')
            count=row[field]['boundaries'][-1]['native_instructions']
            result.update(x['pc']-entry['base'] for x in trace['trace'][:count])
        return result
    old_pcs, new_pcs=pcs(baseline,'level_B'),pcs(fresh,'semantic')
    entry=read(OUT/'captures/process_b/frame_00.entry.json.gz')
    normal,_,_=candidate(entry)
    ablated=ExtendedSerialVMState.from_initial_capture(entry,pefile.PE(str(ROOT/'pafet.bin')))
    ablated.noise_prefix=lambda:None
    for _ in range(3):ablated.step()
    ablation=compare_events(entry,ablated.events,read(OUT/'captures/process_b/frame_00.trace.json.gz'))
    require(normal.logical_state()==ablated.logical_state() and not ablation['all_events_match'], 'Noise ablation control changed', 'regression')
    reuse=[]
    selections={'devirt/serial.py':('advance','control_mask','control','set_control','push','pool_push','ensure_cached_window'),
                'devirt/serial_continuous.py':('peek','noise_prefix','mutate_byte','feedback','pop')}
    for path, names in selections.items():
        old=subprocess.run(['git','show','39c61f3066ae7378147bf6a70b0f95bfce15e9df:'+path],cwd=ROOT,capture_output=True,check=True).stdout
        def functions(source):
            return {node.name:ast.dump(node,include_attributes=False) for node in ast.walk(ast.parse(source)) if isinstance(node,ast.FunctionDef)}
        before,after=functions(old),functions((ROOT/path).read_bytes())
        for name in names:
            require(before[name]==after[name],'Reported unchanged mechanism differs','regression',path=path,function=name)
            reuse.append(dict(path=path,function=name,ast_unchanged=True,ast_sha256=hashlib.sha256(after[name].encode()).hexdigest()))
    report=dict(baseline=dict(consecutive=2, opcodes=2, fresh_cases=len(baseline),
                             fresh_inline_cases=previous['fresh_inline_decoder_chains'],
                             observed_native_instances=previous['fresh_level_C_instructions_to_final_boundary'],
                             unique_native_pcs=len(old_pcs)),
                current=dict(consecutive=3, opcodes=3, fresh_cases=len(fresh),
                             observed_native_instances=current['fresh_native_instructions_in_C_intervals'],
                             unique_native_pcs=len(new_pcs), native_pcs_outside_baseline_C_intervals=len(new_pcs-old_pcs)),
                timing=dict(environment=platform.platform(),python=sys.version,samples=timings,
                            median_preflight_ms=statistics.median(t['preflight_ms'] for t in timings),
                            median_step_ms=[statistics.median(t['step_ms'][i] for t in timings) for i in range(3)],
                            scope='15 semantic runs with snapshots/projection checks enabled; PE preflight timed separately. No native tracing/emulation is executed by these steps; this is not a native speedup measurement.'),
                noise_ablation=dict(kind='deliberate candidate ablation; not natural coverage',
                                    logical_endpoint_equal=True,full_state_equal=False,
                                    first_divergence=ablation['first_divergence'],
                                    conclusion='Noise can be represented compactly but cannot be omitted under the full-memory contract.'),
                reused_function_audit=reuse,
                source_sha256={p:hashlib.sha256((ROOT/p).read_bytes()).hexdigest() for p in ['devirt/serial_extended.py','devirt/serial_continuous.py','devirt/serial_extended_metrics.py']})
    (OUT/'metrics.json').write_bytes(json.dumps(report,indent=2).encode()+b'\n')
    print('PASS: coverage and semantic timing recorded')


if __name__=='__main__':main()
