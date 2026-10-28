#!/usr/bin/env python3
"""Find enclosing function of 0x1401afa6a via .pdata RUNTIME_FUNCTION entries."""
import pefile, struct

PE_PATH = r'C:\Users\Ramón\Desktop\pafet.bin'
TARGETS = [0x1401afa6a, 0x1401af6b0]
IMAGE_BASE = 0x140000000

pe = pefile.PE(PE_PATH)
pdata = None
for s in pe.sections:
    name = s.Name.rstrip(b'\x00').decode()
    if name == '.pdata':
        pdata = s
        break
if pdata is None:
    print('No .pdata section'); import sys; sys.exit(1)
pdata_data = pdata.get_data()
print(f'.pdata size={len(pdata_data):x}  entries={len(pdata_data)//12}')

# Each RUNTIME_FUNCTION is 12 bytes: BeginAddress, EndAddress, UnwindInfoAddress (all RVAs)
entries = []
for off in range(0, len(pdata_data), 12):
    beg, end, uw = struct.unpack('<III', pdata_data[off:off+12])
    if beg == 0 and end == 0: break
    entries.append((beg, end))
entries.sort()
print(f'Parsed {len(entries)} function entries')

def find_fn(va):
    rva = va - IMAGE_BASE
    for beg, end in entries:
        if beg <= rva < end:
            return (IMAGE_BASE + beg, IMAGE_BASE + end)
    return None

for t in TARGETS:
    r = find_fn(t)
    if r:
        print(f'  VA 0x{t:x} is in function [0x{r[0]:x} .. 0x{r[1]:x})  size=0x{r[1]-r[0]:x}')
    else:
        print(f'  VA 0x{t:x} NOT in any .pdata entry')

# Dead-code paths removed — using .pdata only
import sys; sys.exit(0)
for s in pe.sections:
    name = s.Name.rstrip(b'\x00').decode()
    if name == '.text':
        text = s
        break

text_data = text.get_data()
text_va = IMAGE_BASE + text.VirtualAddress
target_off = TARGET_VA - text_va
print(f'.text VA={text_va:x} size={len(text_data):x} target_off={target_off:x}')

# Scan backward looking for CC CC CC... CC (int3 pad) followed by function prologue
# Typical MSVC x64 prologues: 48 83 EC (sub rsp, imm8), 48 81 EC (sub rsp, imm32),
# 40 53 (push rbx), 48 89 5C 24 (mov [rsp+..], rbx), 4C 89 44 24 (mov [rsp+..], r8), etc.
# Also 48 8B C4 (mov rax, rsp — common frame-less prologue)

# Walk back from target: look for runs of CC (>=1 is pad terminator). The byte AFTER the last CC is function start.
i = target_off
# First find a nearby CC
while i > 0 and text_data[i] != 0xcc:
    i -= 1

# Now walk back over runs of CC
while i > 0 and text_data[i-1] == 0xcc:
    i -= 1

fn_start_off = i + 1  # Function starts after the last CC
# But if we scanned back and hit a non-CC, we may be inside a function. Re-check: walk forward from an INT3 run.
# Actually we need: last byte before function = CC. First byte of function = fn_start_off.
# Verify: byte at fn_start_off should look like a prologue
print(f'\nCandidate fn_start_off = {fn_start_off:x} VA = {text_va + fn_start_off:x}')
prologue = text_data[fn_start_off:fn_start_off+16]
print(f'First 16 bytes: {" ".join(f"{b:02x}" for b in prologue)}')

# Verify prologue
plausible = (
    prologue[0:3] == b'\x48\x83\xec' or
    prologue[0:3] == b'\x48\x81\xec' or
    prologue[0:2] == b'\x40\x53' or
    prologue[0:4] == b'\x48\x89\x5c\x24' or
    prologue[0:4] == b'\x4c\x89\x44\x24' or
    prologue[0:3] == b'\x48\x8b\xc4' or
    prologue[0:3] == b'\x4c\x8b\xdc' or
    prologue[0] == 0x55 or  # push rbp
    prologue[0] == 0x53 or  # push rbx
    prologue[0] == 0x56 or  # push rsi
    prologue[0] == 0x57     # push rdi
)
print(f'Plausible prologue: {plausible}')

# Also walk FORWARD a bit from target to confirm we're inside the function (no CC between target and some epilogue)
print(f'\nBytes at target VA 0x{TARGET_VA:x} (±8):')
print(f'  {" ".join(f"{b:02x}" for b in text_data[target_off-8:target_off+16])}')

# Find enclosing function by scanning forward from fn_start_off looking for the NEXT CC run
j = fn_start_off
while j < len(text_data) - 1:
    if text_data[j] == 0xcc:
        # Found possible end
        k = j
        while k < len(text_data) and text_data[k] == 0xcc:
            k += 1
        if k - j >= 1:
            fn_end_off = j
            break
    j += 1
print(f'Fn ends at off {fn_end_off:x} VA 0x{text_va + fn_end_off:x}')
print(f'Fn size: 0x{fn_end_off - fn_start_off:x} bytes')
print(f'Target 0x{TARGET_VA:x} is {"INSIDE" if fn_start_off <= target_off < fn_end_off else "OUTSIDE"} this range')

# Also check whether 0x1401af6b0 is a function start
test_off = 0x1af6b0
pre = text_data[test_off-4:test_off]
at = text_data[test_off:test_off+8]
print(f'\n0x1401af6b0 context:')
print(f'  pre:  {" ".join(f"{b:02x}" for b in pre)}')
print(f'  at:   {" ".join(f"{b:02x}" for b in at)}')
print(f'  pre has CC: {0xcc in pre}')
