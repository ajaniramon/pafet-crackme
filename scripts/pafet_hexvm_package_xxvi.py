#!/usr/bin/env python3
"""Package the exact native executable validated by the standalone corpus."""
import hashlib,json,pathlib,shutil,zipfile
from pafet_hexvm_literal_diff_xxvi import ROOT,OUT,BUILD

def main():
    exe=BUILD/'pafet_hexvm_xxvi.exe';image=BUILD/'original_mapped_image.bin'
    report=OUT/'standalone_msvc_differential.json';checked=json.loads(report.read_bytes())
    assert checked['passes']==10 and all(c['executor_128_bytes_match'] for c in checked['cases'])
    assert checked['executable_sha256']==hashlib.sha256(exe.read_bytes()).hexdigest(),'executable differs from tested binary'
    detailed=json.loads((OUT/'executor_msvc_differential.json').read_bytes())
    assert detailed['all_native_pushes_match']==286214 and detailed['full_0x1200_context_matches']
    manifest={'date':'2026-10-29','scope':'complete literal Hex-VM executor; finite native corpus, semantic reduction remains partial',
              'files':{p.name:hashlib.sha256(p.read_bytes()).hexdigest() for p in [exe,image,report]},
              'native_input_cases':checked['passes'],'detailed_matching_pushes':detailed['all_native_pushes_match']}
    readme='''JACK XXVI - literal Hex-VM executor for Windows x64

Run in PowerShell from this extracted folder:
  .\\pafet_hexvm_xxvi.exe original_mapped_image.bin deadbeef

The output contains decoded bytes, the 128-byte virtual register file and
execution counters. Python, Frida, Unicorn and WSL are not runtime dependencies.
The data image supplies the original tables; its native code is never called.

This is the complete literal C++ executor, including initialization and cleanup.
The separate small semantic core remains partial. Validation is a finite corpus,
not a proof for every seed, branch or OS failure. See the included report.
'''
    archive=BUILD/'pafet_hexvm_xxvi_windows.zip'
    with zipfile.ZipFile(archive,'w',zipfile.ZIP_DEFLATED,compresslevel=9) as z:
        for p in [exe,image,report,ROOT/'PAFET_JACK_XXVI_CLOSURE.md',ROOT/'LICENSE']:z.write(p,p.name)
        z.writestr('README.txt',readme);z.writestr('manifest.json',json.dumps(manifest,indent=2)+'\n')
    with zipfile.ZipFile(archive) as z:
        assert z.testzip() is None
        for name,digest in manifest['files'].items():assert hashlib.sha256(z.read(name)).hexdigest()==digest
    manifest['archive_sha256']=hashlib.sha256(archive.read_bytes()).hexdigest()
    manifest['archive_bytes']=archive.stat().st_size
    release=OUT/'releases'/archive.name
    release.parent.mkdir(exist_ok=True)
    shutil.copyfile(archive,release)
    manifest['versioned_archive']=release.relative_to(ROOT).as_posix()
    (OUT/'windows_package.json').write_text(json.dumps(manifest,indent=2)+'\n')
    print(json.dumps({'archive':str(archive),'bytes':archive.stat().st_size,'sha256':manifest['archive_sha256']},indent=2))

if __name__=='__main__':main()
