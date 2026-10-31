#!/usr/bin/env python3
"""Run the recovered Serial-VM candidate to HALT and print the work buffer.

End-to-end check for serial.cpp: the candidate transforms the same bytes that
serial.cpp does. Event recording is disabled (buffer-only; keeps memory flat).
"""
import gzip
import json
import pathlib
import sys
import pefile

ROOT = pathlib.Path(__file__).resolve().parents[1]
sys.path.insert(0, str(ROOT))
from devirt.serial_loop import LoopSerialVMState
from devirt.serial_continuous import UnsupportedSerialRoute


def final_buffer(case):
    e = json.loads(gzip.decompress((ROOT / f'jack_xxxv_evidence/captures/{case}/frame_00.entry.json.gz').read_bytes()))
    s = LoopSerialVMState.from_initial_capture(e, pefile.PE(str(ROOT / 'pafet.bin')))
    s.record = lambda *a, **k: None  # buffer-only; events not needed here
    rec = s.receiver
    # Fields hold pointers: R9 -> &len, R11 -> &data(char*). Deref twice.
    r9 = int.from_bytes(s.read(rec + 8 + 8 * 9, 8), 'little')
    r11 = int.from_bytes(s.read(rec + 8 + 8 * 11, 8), 'little')
    n = int.from_bytes(s.read(r9, 8), 'little')
    data = int.from_bytes(s.read(r11, 8), 'little')
    before = bytes(s.read(data, n))
    steps = 0
    halt = None
    try:
        while True:
            s.step()
            steps += 1
    except UnsupportedSerialRoute as ex:
        halt = str(ex)
    after = bytes(s.read(data, n))
    return dict(case=case, steps=steps, halt=halt, before=before.hex(), after=after.hex())


if __name__ == '__main__':
    r = final_buffer(sys.argv[1] if len(sys.argv) > 1 else 'seventeen_b')
    print(json.dumps(r))
