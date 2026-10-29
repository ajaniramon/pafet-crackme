#!/usr/bin/env python3
"""Package recovery sources, projections and fresh native Windows traces."""
import argparse,hashlib,json,pathlib,zipfile
ROOT=pathlib.Path(__file__).resolve().parents[1];OUT=ROOT/'jack_xxiii_evidence'
def describe(path):
    b=path.read_bytes();return {'bytes':len(b),'sha256':hashlib.sha256(b).hexdigest()}
def main():
    ap=argparse.ArgumentParser();ap.add_argument('--verify',action='store_true');args=ap.parse_args()
    if args.verify:
        for name in ('MANIFEST.json','NATIVE_TRACES_MANIFEST.json'):
            manifest=json.loads((OUT/name).read_text())
            for file,expected in manifest['files'].items():assert describe(ROOT/file)==expected,file
            print('Verified',name,len(manifest['files']),'files')
        return
    selected=[]
    for folder in ('src','scripts','docs','historical_recovery'):
        selected.extend(p for p in (ROOT/folder).rglob('*') if p.is_file() and '__pycache__' not in p.parts and p.suffix not in {'.obj','.so','.pyc','.exe'})
    selected.extend([ROOT/'pafet.bin',ROOT/'pafet_pass8.exe',ROOT/'README.md',ROOT/'LICENSE',ROOT/'PAFET_JACK_XXIII.md'])
    selected.extend(p for p in (ROOT/'vm_pools_evidence').iterdir() if p.name in {
        'h3bea0_vectors_xiii.json','h14a00_vectors_xvi.json','user_bytecode_canonical_vi.bin',
        'user_bytecode_at_executor_vi.bin','usuario_blob_enc.bin','usuario_vm_handlers_full.json'})
    selected.extend(p for p in OUT.iterdir() if p.is_file() and p.suffix in {'.json','.md','.txt','.asm','.bin','.gz'} and p.name not in {'MANIFEST.json','NATIVE_TRACES_MANIFEST.json'})
    selected.extend(p for p in (OUT/'reference_traces').iterdir() if p.is_file())
    selected.extend(p for p in (OUT/'windows').glob('*.summary.json'))
    executable=OUT/'build/original_vm_xxiii.exe'
    if executable.exists():selected.append(executable)
    traces=sorted((OUT/'windows').glob('*.jsonl.gz'));assert len(traces)==13
    for filename,files in [('MANIFEST.json',sorted(set(selected))),('NATIVE_TRACES_MANIFEST.json',traces)]:
        manifest=OUT/filename
        manifest.write_text(json.dumps({'reference_head':'e871c5d53a816c4a163423243d3347f3a8fd82dc','date':'2026-10-29',
            'scope':'Recovered sources and regenerated Windows evidence; historical Linux traces unavailable',
            'files':{p.relative_to(ROOT).as_posix():describe(p) for p in files}},indent=2)+'\n')
        archive=ROOT.parent/('pafet_jack_xxiii_recuperado.zip' if filename=='MANIFEST.json' else 'pafet_jack_xxiii_trazas_windows.zip')
        with zipfile.ZipFile(archive,'w',zipfile.ZIP_DEFLATED,compresslevel=6) as z:
            for p in files+[manifest]:z.write(p,p.relative_to(ROOT).as_posix(),compress_type=zipfile.ZIP_STORED if p.suffix=='.gz' else zipfile.ZIP_DEFLATED)
        with zipfile.ZipFile(archive) as z:assert z.testzip() is None
        print(archive.name,describe(archive))
if __name__=='__main__':main()
