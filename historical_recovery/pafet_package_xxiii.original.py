#!/usr/bin/env python3
"""Local source/evidence archives and SHA manifests; no Git or publication."""
import argparse,hashlib,json,pathlib,zipfile
ROOT=pathlib.Path(__file__).resolve().parents[1];OUT=ROOT/'jack_xxiii_evidence'

def description(path):
    data=path.read_bytes();return {'bytes':len(data),'sha256':hashlib.sha256(data).hexdigest()}

def selected():
    files={ROOT/'pafet.bin',ROOT/'PAFET_JACK_XXIII.md',ROOT/'README.md',ROOT/'PAFET_NIGHT_REPORT.md'}
    files.update(ROOT/'docs'/x for x in ['03-user-vm.md','09-bytecode.md','10-dispatch-topology.md','11-reproduce.md','13-open-gaps.md','14-real-bytecode-xxiii.md'])
    files.update((ROOT/'src').glob('*xxiii*'))
    files.update(ROOT/'src'/x for x in ['pafet_h3a50_native.cpp','pafet_h3a50_native.h','pafet_canonical_interp_vii.h'])
    files.update((ROOT/'scripts').glob('*xxiii.py'))
    files.update(ROOT/'scripts'/x for x in ['pafet_semantic_probe.py','decode_user_blob_vi.py','pafet_h3bea0_unicorn_xiii.py','pafet_h14a00_unicorn_xvi.py','pafet_dispatch_coverage_ivB.py'])
    files.update(ROOT/'vm_pools_evidence'/x for x in ['h3bea0_vectors_xiii.json','h14a00_vectors_xvi.json','user_bytecode_canonical_vi.bin','user_bytecode_at_executor_vi.bin','usuario_blob_enc.bin','usuario_vm_handlers_full.json'])
    # Keep frozen sources + generated probe inventory; never ship mapped images or executables.
    for p in (ROOT/'native_xxiii').rglob('*'):
        if p.is_file() and 'native' not in p.relative_to(ROOT/'native_xxiii').parts and '__pycache__' not in p.parts:files.add(p)
    preliminary={'3bea0.asm','7610.asm','3bea0_full.asm','block_clamp.asm'}
    for p in OUT.iterdir():
        if p.is_file() and p.name not in preliminary|{'MANIFEST.json'} and (p.suffix in ('.json','.asm','.bin','.md','.txt','.gz')):
            files.add(p)
    files.update(p for p in (OUT/'reference_traces').iterdir() if p.is_file())
    return sorted(files)

def archive(path,files):
    with zipfile.ZipFile(path,'w',compression=zipfile.ZIP_DEFLATED,compresslevel=6) as z:
        for p in files:z.write(p,str(p.relative_to(ROOT)),compress_type=zipfile.ZIP_STORED if p.suffix=='.gz' else zipfile.ZIP_DEFLATED)
    with zipfile.ZipFile(path) as z:assert z.testzip() is None
    print(path.name,'bytes',path.stat().st_size,'sha256',hashlib.sha256(path.read_bytes()).hexdigest())

def main():
    ap=argparse.ArgumentParser();ap.add_argument('--verify',action='store_true');ap.add_argument('--verify-native',action='store_true');args=ap.parse_args()
    if args.verify or args.verify_native:
        manifest=json.loads((OUT/('NATIVE_TRACES_MANIFEST.json' if args.verify_native else 'MANIFEST.json')).read_text())
        for filename,expected in manifest['files'].items():assert description(ROOT/filename)==expected,filename
        print('Verified',len(manifest['files']),'files');return
    native=sorted((OUT/'native_long').glob('*.jsonl.gz'))+sorted((OUT/'native_long').glob('*.report.json'))
    assert len(native)==16,'Expected eight complete native captures and eight reports'
    nm=OUT/'NATIVE_TRACES_MANIFEST.json'
    nm.write_text(json.dumps({'date':'2026-10-29','scope':'Eight Linux adapted component captures; no Windows acceptance',
        'files':{str(p.relative_to(ROOT)):description(p) for p in native}},indent=2)+'\n')
    files=selected();manifest=OUT/'MANIFEST.json'
    manifest.write_text(json.dumps({'date':'2026-10-29','reference_head':'e871c5d53a816c4a163423243d3347f3a8fd82dc',
        'scope':'Source + comparison evidence. Native full logs are in the separate archive.',
        'files':{str(p.relative_to(ROOT)):description(p) for p in files}},indent=2)+'\n')
    archive(ROOT/'pafet_jack_xxiii_sources_evidence.zip',files+[manifest])
    archive(ROOT/'pafet_jack_xxiii_native_traces.zip',native+[nm])

if __name__=='__main__':main()
