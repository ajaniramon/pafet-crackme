"""New Windows logical-state evidence; keep historical captures immutable.

python -m devirt.capture
"""
import hashlib
import json
import pathlib
from .uservm import ROOT, ORIGINAL_SHA256
import pafet_windows_capture_xxiii as collector


def main():
    exe = ROOT/'pafet_pass8.exe'; original = (ROOT/'pafet.bin').read_bytes(); variant = exe.read_bytes()
    assert hashlib.sha256(original).hexdigest() == ORIGINAL_SHA256
    assert len(original) == len(variant)
    assert [i for i,(a,b) in enumerate(zip(original,variant)) if a != b] == [0x395efb,0x395efc]
    collector.OUT = ROOT/'jack_xvii_evidence/windows'
    cases = [('fresh_empty', b''), ('fresh_sso15', b'0123456789abcde'),
             ('fresh_heap16', b'0123456789abcdef'), ('fresh_binary23', b'\x00\x7f\x80\xff' + b'0123456789abcdefghi')]
    for label, data in cases: collector.capture(label, data, exe)
    manifest = {'original_sha256': ORIGINAL_SHA256, 'variant_sha256': hashlib.sha256(variant).hexdigest(),
                'collector_sha256': hashlib.sha256((ROOT/'scripts/pafet_windows_capture_xxiii.py').read_bytes()).hexdigest(),
                'wrapper_sha256': hashlib.sha256(pathlib.Path(__file__).read_bytes()).hexdigest(),
                'cases': [{'label': label, 'input_hex': data.hex()} for label,data in cases],
                'scope': 'New Windows pass8 native logical states and actual writer stores; no unmodified acceptance claim.'}
    (collector.OUT/'manifest.json').write_bytes(json.dumps(manifest, indent=2).encode() + b'\n')


if __name__ == '__main__': main()
