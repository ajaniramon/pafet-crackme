#!/usr/bin/env python3
"""Durable incremental XXIV backups in the repo and this desktop task output."""
import datetime,hashlib,json,pathlib,shutil,zipfile
ROOT=pathlib.Path(__file__).resolve().parents[1]
DELIVER=pathlib.Path('C:/Users/Ramón/Documents/Codex/2026-10-29/https-github-com-ajaniramon-pafet-crackme/outputs')
def main():
    stamp=datetime.datetime.now(datetime.timezone.utc).strftime('%Y%m%dT%H%M%S.%fZ')
    dest=ROOT/'.jack_xxiv_backups';dest.mkdir(exist_ok=True);DELIVER.mkdir(exist_ok=True)
    files=[ROOT/'PAFET_JACK_XXIV.md']
    for folder,pattern in [('scripts','*xxiv.py'),('src','*xxiv*'),('jack_xxiv_evidence','*')]:
        files.extend(p for p in (ROOT/folder).rglob(pattern) if p.is_file() and '__pycache__' not in p.parts and 'build' not in p.relative_to(ROOT/folder).parts)
    files=sorted(set(files));manifest={'base_commit':'8b96567e27f401c389d5cd6dadc564e2a309bbce','utc':stamp,
        'files':{p.relative_to(ROOT).as_posix():{'bytes':p.stat().st_size,'sha256':hashlib.sha256(p.read_bytes()).hexdigest()} for p in files}}
    archive=dest/f'jack_xxiv_{stamp}.zip'
    with zipfile.ZipFile(archive,'w',zipfile.ZIP_DEFLATED,compresslevel=6) as z:
        for p in files:z.write(p,p.relative_to(ROOT).as_posix())
        z.writestr('CHECKPOINT_MANIFEST.json',json.dumps(manifest,indent=2)+'\n')
    with zipfile.ZipFile(archive) as z:assert z.testzip() is None
    copy=DELIVER/archive.name;shutil.copy2(archive,copy)
    assert hashlib.sha256(copy.read_bytes()).digest()==hashlib.sha256(archive.read_bytes()).digest()
    shutil.copy2(ROOT/'PAFET_JACK_XXIV.md',DELIVER/'PAFET_JACK_XXIV.md')
    print(json.dumps({'checkpoint':str(archive),'second_copy':str(copy),'files':len(files),'sha256':hashlib.sha256(archive.read_bytes()).hexdigest()},indent=2))
if __name__=='__main__':main()
