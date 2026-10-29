#!/usr/bin/env python3
"""Build the frozen Linux probe, optionally reproducing the old frame metadata."""
import argparse,os,pathlib,subprocess,sys
ROOT=pathlib.Path(__file__).resolve().parents[1]
def main():
    ap=argparse.ArgumentParser();ap.add_argument('--legacy-frame-aliases',action='store_true');args=ap.parse_args()
    env=dict(os.environ)
    if args.legacy_frame_aliases:env['XXIII_LEGACY_FRAME_ALIASES']='1'
    else:env.pop('XXIII_LEGACY_FRAME_ALIASES',None)
    subprocess.run([sys.executable,str(ROOT/'native_xxiii/build_blind.py')],cwd=ROOT,env=env,check=True)
    path=ROOT/'native_xxiii/native'
    subprocess.run(['gcc','-O2','-fno-pie','-no-pie','-o',str(path/'blind_probe'),str(path/'blind_probe.c'),str(path/'native_context.S')],check=True)
if __name__=='__main__':main()
