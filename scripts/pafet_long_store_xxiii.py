#!/usr/bin/env python3
"""Six long native-component cases and two controls with a store watchpoint.

Original PE file is untouched. Uses the frozen adapted Linux loader, never
an unmodified Windows acceptance claim. Each impending store at 48a3a is
single-stepped and its actual written byte is sampled immediately afterwards.
"""
import argparse,collections,gzip,hashlib,json,os,pathlib,struct,subprocess

ROOT=pathlib.Path(__file__).resolve().parents[1];OUT=ROOT/'jack_xxiii_evidence'
CASES=[(f'long_a{n}',b'a'*n) for n in (23,24,25)]+[
    (f'long_pattern{n}',bytes(65+i for i in range(n))) for n in (23,24,25)]+[
    ('control_alice',b'alice'),('control_ramon',b'ramon')]

def main():
    ap=argparse.ArgumentParser();ap.add_argument('--only');ap.add_argument('--skip-existing',action='store_true');args=ap.parse_args()
    refs=OUT/'reference_traces';refs.mkdir(exist_ok=True);full=OUT/'native_long';full.mkdir(exist_ok=True)
    reports=[]
    for label,user in CASES:
        if args.only and label!=args.only:continue
        if args.skip_existing and (full/(label+'.report.json')).exists() and (full/(label+'.jsonl.gz')).exists():continue
        path=full/(label+'.jsonl');br=full/(label+'.br')
        env=dict(os.environ,SOL_TICK='1',SOL_STACK_BASE='0x50000000')
        for key in ('SOL_POOLS','SOL_READBYTE','SOL_NO_BRANCH'):env.pop(key,None)
        run=subprocess.run([str(ROOT/'native_xxiii/native/blind_probe'),'--sol-user',user.hex(),str(path),str(br)],
            cwd=ROOT/'native_xxiii/native',env=env,capture_output=True,text=True,timeout=120)
        assert run.returncode==0,(label,run.stdout,run.stderr)
        data=path.read_bytes();events=(json.loads(x) for x in data.splitlines());projection=[]
        counts=collections.Counter();handlers=[];states={};before=[];after=[];objects=[];balance=None;exceptions=[];exports=[]
        for e in events:
            counts[e['kind']]+=1
            if e['kind'] in ('handler_state','core_state'):
                projection.append({k:e[k] for k in ('kind','step','pc','stack','registers')})
                if e['kind']=='handler_state':states[e['step']]=e
            elif e['kind']=='handler_enter':handlers.append(e);projection.append(e)
            elif e['kind'] in ('actual_store_before','actual_store_after','host_boundary','host_object','call_balance','export_boundary'):
                projection.append(e)
                if e['kind']=='actual_store_before':before.append(e)
                if e['kind']=='actual_store_after':after.append(e)
                if e['kind']=='host_object':objects.append(e)
                if e['kind']=='call_balance':balance=e
                if e['kind']=='export_boundary':exports.append(e)
            elif e['kind']=='memory':projection.append(e)
            elif e['kind']=='exception_unwind':exceptions.append(e);projection.append(e)
        wrapper_hex=run.stdout.split('SOL-OUTPUT ')[1].split('\n')[0]
        vm_outputs=[e for e in objects if e['name']=='output' and e['initialized']]
        assert vm_outputs
        native_hex=vm_outputs[-1]['hex']
        cpp=subprocess.run([str(OUT/'build/original_vm_xxiii'),str(ROOT/'pafet.bin'),user.hex()],capture_output=True,text=True,check=True)
        assert cpp.stdout.splitlines()[0]=='OUTPUT '+native_hex,(label,cpp.stdout,native_hex)
        assert len(before)==len(after)==len(user)
        stores=[]
        for i,(a,b) in enumerate(zip(before,after)):
            assert a['index']==i and a['address']==b['address'] and a['step']==b['step']
            assert a['rip']==0x140048a3a and b['rip']==0x140048a3e
            assert a['value']==b['byte']==bytes.fromhex(native_hex)[i]
            obj=next(x for x in objects if x['step']==a['step'] and x['name']=='working')
            assert obj['buffer']==a['buffer']
            if len(user)>=16:assert obj['capacity']>=16 and obj['address']!=a['buffer']
            else:assert obj['capacity']<16 and obj['address']==a['buffer']
            stores.append({'step':a['step'],'rip':hex(a['rip']),'next_rip':hex(b['rip']),
                'index':i,'object_address':hex(obj['address']),'buffer_address':hex(a['buffer']),
                'write_address':hex(a['address']),'before':a['before'],'written':b['byte'],
                'capacity':obj['capacity'],'size':obj['size']})
        assert balance and balance['open']==0
        assert balance['entries']==balance['returns']+balance['unwinds']+balance['tails']
        assert counts['unexplained_unwind']==0
        aliases=[]
        for h in handlers:
            raw=bytes.fromhex(states[h['step']]['ctx_hex']);index=h['ch']*62+h['raw_op']
            alias=struct.unpack_from('<H',raw,0xf64+index*2)[0]
            assert alias==h['alias'] and h['entry']==h['selected_target']
            aliases.append({'step':h['step'],'channel':h['ch'],'logical_opcode':h['raw_op'],
                'alias':alias,'native_target':hex(h['entry']),'trampoline':hex(h['selected_trampoline']),
                'root':h['external_resolver_for_step'],'parent_handler':h['parent_handler'],
                'caller':hex(h['caller']),'r9':hex(h['args'][3]),'mode':hex(h['args'][1]&0xffffffff)})
        roots=sum(h['external_resolver_for_step'] for h in handlers)
        assert roots==counts['resolve'] and len(handlers)==counts['operand']
        summary={'label':label,'input_hex':user.hex(),'stack_base':'0x50000000','returncode':run.returncode,
            'stdout':run.stdout,'stderr':run.stderr,'event_counts':dict(counts),'balance':balance,
            'comparison_output_hex':native_hex,'comparison_boundary':'host6 output object before outer wrapper export',
            'source_jsonl_sha256':hashlib.sha256(data).hexdigest(),
            'scope':'Fresh Linux adapted component run; actual original host4 store single-stepped. No native Windows acceptance.'}
        packed=gzip.compress(data,mtime=0);tmp=full/(label+'.jsonl.gz.complete')
        with tmp.open('wb') as f:f.write(packed);f.flush();os.fsync(f.fileno())
        tmp.replace(full/(label+'.jsonl.gz'))
        assert gzip.decompress((full/(label+'.jsonl.gz')).read_bytes())==data
        (refs/(label+'.jsonl.gz')).write_bytes(gzip.compress(('\n'.join(json.dumps(x,separators=(',',':')) for x in projection)+'\n').encode(),mtime=0))
        (refs/(label+'.summary.json')).write_text(json.dumps(summary,indent=2)+'\n')
        report={'case':label,'user_hex':user.hex(),'native_output_hex':native_hex,'cpp_output_matches':True,
            'handler_entries':len(handlers),'resolver_calls':roots,'inline_entries':len(handlers)-roots,
            'native_targets':sorted({hex(x['entry']) for x in handlers}),
            'pairs':len({(x['ch'],x['alias']) for x in handlers}),
            'all_runtime_aliases_match_snapshot_table':True,'single_step_stores':stores,
            'wrapper_stdout_output_hex':wrapper_hex,'outer_wrapper_export_matches_vm_output':wrapper_hex==native_hex,
            'export_boundaries':exports,
            'dispatch_observations':aliases,'call_balance':balance,
            'handler_unwinds':[e for e in exceptions if e['entry'] in {h['entry'] for h in handlers}]}
        (full/(label+'.report.json')).write_text(json.dumps(report,indent=2)+'\n');reports.append(report)
        path.unlink();br.unlink(missing_ok=True)
        print(label,'output matches','stores',len(stores),'handlers',len(handlers),'roots',roots,flush=True)
    all_reports=[json.loads(p.read_text()) for p in sorted(full.glob('*.report.json'))]
    (OUT/'long_store_differential.json').write_text(json.dumps({'cases':[{k:v for k,v in r.items() if k!='dispatch_observations'} for r in all_reports],
        'cases_executed':len(all_reports),'windows_executions':0},indent=2)+'\n')

if __name__=='__main__':main()
