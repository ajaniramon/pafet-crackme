#!/usr/bin/env python3
"""Static scan for anti-debug / timing / integrity-check patterns in pafet.bin.
Reports addresses — nothing is patched. Caller decides."""
import struct
from capstone import Cs, CS_ARCH_X86, CS_MODE_64

PE = r'C:\Users\Ramón\Desktop\pafet.bin'
d = open(PE, 'rb').read()
pe = struct.unpack_from('<I', d, 0x3c)[0]
sz_opt = struct.unpack_from('<H', d, pe+20)[0]
image_base = struct.unpack_from('<Q', d, pe+24+24)[0]
sec_tbl = pe+24+sz_opt
sections = []
nsec = struct.unpack_from('<H', d, pe+6)[0]
for i in range(nsec):
    off = sec_tbl + 40*i
    name = d[off:off+8].rstrip(b'\0').decode(errors='replace')
    vs, va, rs, rp = struct.unpack_from('<IIII', d, off+8)
    sections.append((name, va, vs, rp, rs))

def va_to_fo(va):
    for n, sva, svs, rp, rs in sections:
        v0 = image_base + sva; v1 = v0 + max(svs, rs)
        if v0 <= va < v1: return rp + (va - v0)
    return None

def fo_to_va(fo):
    for n, sva, svs, rp, rs in sections:
        if rp <= fo < rp + rs: return image_base + sva + (fo - rp)
    return None

text_sec = next(s for s in sections if s[0] == '.text')
tname, tva, tvs, trp, trs = text_sec
text_va_base = image_base + tva
text_bytes = d[trp:trp + tvs]
print(f'[*] .text @ VA 0x{text_va_base:x} size 0x{tvs:x}')

# Byte-pattern scan for small opcodes
patterns = {
    'rdtsc':   b'\x0f\x31',
    'rdtscp':  b'\x0f\x01\xf9',
    'cpuid':   b'\x0f\xa2',
    'int3':    b'\xcc',           # noisy
    'ud2':     b'\x0f\x0b',
    'xor_edx_edx_rdtsc': b'\x31\xd2\x0f\x31',
    'fast_fail_11': b'\xcd\x29',  # int 29h = __fastfail
}
# Scan .text for each (count + first ~10 addresses)
print('\n[*] Byte-pattern scan over .text:')
for name, p in patterns.items():
    hits = []
    i = 0
    while True:
        j = text_bytes.find(p, i)
        if j < 0: break
        hits.append(text_va_base + j)
        i = j + 1
    print(f'   {name:>22s}: {len(hits)} hits')
    for va in hits[:16]:
        print(f'      0x{va:x}')
    if len(hits) > 16:
        print(f'      ... (+{len(hits)-16} more)')

# Imports: look at IAT entries
print('\n[*] Import directory scan:')
# Data directory at pe+24+112
imp_rva = struct.unpack_from('<I', d, pe+24+96)[0]  # IMPORT_DIRECTORY
imp_sz  = struct.unpack_from('<I', d, pe+24+100)[0]
imp_fo = va_to_fo(image_base + imp_rva) if imp_rva else None
print(f'   import RVA=0x{imp_rva:x} sz=0x{imp_sz:x} FO=0x{imp_fo:x}' if imp_fo else '   no imports')
anti_debug_names = [
    'IsDebuggerPresent','CheckRemoteDebuggerPresent','NtQueryInformationProcess',
    'OutputDebugString','RtlAddVectoredExceptionHandler','AddVectoredExceptionHandler',
    'SetUnhandledExceptionFilter','UnhandledExceptionFilter','RaiseException',
    'GetTickCount','QueryPerformanceCounter','QueryPerformanceFrequency',
    'NtQuerySystemInformation','NtSetInformationThread','NtQueryObject',
    'ZwQueryInformationProcess','DebugActiveProcess','FindWindow','GetForegroundWindow',
    'EnumWindows','BlockInput','SwitchDesktop','CreateToolhelp32Snapshot',
    'Process32First','Process32Next','OpenProcess','TerminateProcess',
    '__security_check_cookie','_report_rangecheckfailure','__report_gsfailure',
    '__GSHandlerCheck','abort','_abort','exit','_exit','ExitProcess','FatalExit',
    '__fastfail',
]
# Walk descriptors
if imp_fo:
    k = 0
    while True:
        d_oft, d_ts, d_fc, d_name, d_fthunk = struct.unpack_from('<IIIII', d, imp_fo + k*20)
        if d_oft == 0 and d_name == 0: break
        name_fo = va_to_fo(image_base + d_name)
        if name_fo:
            end = d.index(b'\0', name_fo)
            dllname = d[name_fo:end].decode(errors='replace')
        else:
            dllname = '???'
        # Walk INT (original FT) if present else FT
        int_rva = d_oft or d_fthunk
        int_fo = va_to_fo(image_base + int_rva)
        hits_here = []
        if int_fo:
            m = 0
            while True:
                entry = struct.unpack_from('<Q', d, int_fo + m*8)[0]
                if entry == 0: break
                if not (entry & (1<<63)):
                    hint_fo = va_to_fo(image_base + (entry & 0xFFFFFFFF))
                    if hint_fo:
                        end = d.index(b'\0', hint_fo + 2)
                        fn = d[hint_fo+2:end].decode(errors='replace')
                        for ad in anti_debug_names:
                            if ad.lower() == fn.lower() or ad.lower() in fn.lower():
                                iat_fo = va_to_fo(image_base + d_fthunk) + m*8
                                hits_here.append((fn, iat_fo, image_base + d_fthunk + m*8))
                                break
                m += 1
        if hits_here:
            print(f'   DLL {dllname}:')
            for fn, iat_fo, iat_va in hits_here:
                print(f'       {fn:40s} IAT @ VA 0x{iat_va:x}')
        k += 1
