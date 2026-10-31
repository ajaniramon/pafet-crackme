#!/usr/bin/env python3
"""Re-run historical Serial validators (XXVIII-XXXV) after JACK XXXVI edits."""
import json,pathlib,subprocess,sys,time
ROOT=pathlib.Path(__file__).resolve().parents[1];OUT=ROOT/'jack_xxxvi_evidence'
RUNS=[('xxviii',['scripts/pafet_lab_xxviii.py']),('xxix',['-m','devirt.serial_validate']),('xxx',['-m','devirt.serial_continuous_validate']),
      ('xxxi',['-m','devirt.serial_extended_validate']),('xxxii',['-m','devirt.serial_scheduler_validate']),
      ('xxxiii',['-m','devirt.serial_depth_validate']),('xxxiv',['-m','devirt.serial_branch_validate']),('xxxv',['-m','devirt.serial_program_validate'])]
rows=[]
for name,cmd in RUNS:
    out=OUT/f'regressions/{name}_regression.json';out.parent.mkdir(exist_ok=True);began=time.time()
    r=subprocess.run([sys.executable,*cmd,'--output',str(out.relative_to(ROOT))],cwd=ROOT,capture_output=True,text=True)
    (OUT/f'regressions/{name}_regression.txt').write_text(r.stdout+r.stderr)
    rows.append(dict(name=name,command=['python',*cmd,'--output',str(out.relative_to(ROOT))],exit_code=r.returncode,seconds=round(time.time()-began,1)))
    print(rows[-1],flush=True)
(OUT/'regressions.json').write_text(json.dumps(rows,indent=1)+'\n')
sys.exit(any(r['exit_code'] for r in rows))
