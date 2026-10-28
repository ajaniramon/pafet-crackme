#!/usr/bin/env python3
"""Unicorn emulation of handler 10 (0x140396b2e..0x140396c31) with 0x14003f540.
Stubs: operator new, memset, memcpy, QueryPerformanceCounter.
Goal: given a username, produce s18 offline.
"""
import struct
from unicorn import Uc, UC_ARCH_X86, UC_MODE_64, UC_HOOK_CODE, UC_HOOK_MEM_UNMAPPED
from unicorn.x86_const import *

PE_PATH = r'C:\Users\Ramón\Desktop\pafet.bin'

def load_pe(path):
    d = open(path, 'rb').read()
    pe_off = struct.unpack_from('<I', d, 0x3c)[0]
    sz_opt = struct.unpack_from('<H', d, pe_off+20)[0]
    image_base = struct.unpack_from('<Q', d, pe_off+24+24)[0]
    sec_tbl = pe_off+24+sz_opt
    sections = []
    nsec = struct.unpack_from('<H', d, pe_off+6)[0]
    for i in range(nsec):
        off = sec_tbl + 40*i
        name = d[off:off+8].rstrip(b'\0').decode(errors='replace')
        vs, va, rs, rp = struct.unpack_from('<IIII', d, off+8)
        sections.append({'name': name, 'va': image_base+va, 'vs': vs, 'rp': rp, 'rs': rs})
    return d, image_base, sections

# Load
PE_BYTES, IMAGE_BASE, SECTIONS = load_pe(PE_PATH)

# Create emulator
mu = Uc(UC_ARCH_X86, UC_MODE_64)

# Map image, align to page
def page_align(x, down=True):
    PAGE = 0x1000
    return (x // PAGE) * PAGE if down else ((x + PAGE - 1) // PAGE) * PAGE

# Map a single big region covering all sections (lazy approach)
IMG_SIZE = max(s['va'] + max(s['vs'], s['rs']) for s in SECTIONS) - IMAGE_BASE
IMG_SIZE = page_align(IMG_SIZE, down=False) + 0x10000
mu.mem_map(IMAGE_BASE, IMG_SIZE)
# Fill with headers
mu.mem_write(IMAGE_BASE, PE_BYTES[:0x400])
# Write each section's raw data at its VA
for s in SECTIONS:
    data = PE_BYTES[s['rp']:s['rp']+s['rs']]
    if data:
        mu.mem_write(s['va'], data)

# Stack
STACK_BASE = 0x7FFF00000000
STACK_SIZE = 0x100000
mu.mem_map(STACK_BASE, STACK_SIZE)
RSP = STACK_BASE + STACK_SIZE - 0x1000

# Heap for operator new allocations
HEAP_BASE = 0x60000000
HEAP_SIZE = 0x1000000
mu.mem_map(HEAP_BASE, HEAP_SIZE)
heap_ptr = HEAP_BASE

# TLS/TEB region (gs:0x58 needs TEB)
TEB_BASE = 0x30000000
mu.mem_map(TEB_BASE, 0x10000)
mu.reg_write(UC_X86_REG_GS_BASE, TEB_BASE)
# TEB.ThreadLocalStoragePointer @ TEB+0x58 → points to TLS array
TLS_ARRAY = TEB_BASE + 0x1000
TLS_SLOT_0 = TEB_BASE + 0x2000  # TLS slot 0 is a buffer
mu.mem_write(TEB_BASE + 0x58, struct.pack('<Q', TLS_ARRAY))
mu.mem_write(TLS_ARRAY, struct.pack('<Q', TLS_SLOT_0))  # TLS[0] = &TLS_SLOT_0

# Simple heap allocator
def heap_alloc(size):
    global heap_ptr
    size = (size + 15) & ~15  # 16-byte align
    r = heap_ptr
    heap_ptr += size
    mu.mem_write(r, b'\0' * size)
    return r

# Stubs for runtime functions by VA
STUBS = {}

def stub_at(va, name, handler):
    """Replace function at `va` with a tiny stub that returns handler's value in rax."""
    STUBS[va] = (name, handler)

TRACE_COUNT = [0]
TRACE_BUF = []
VERBOSE = False
def hook_code(mu, address, size, user_data):
    TRACE_COUNT[0] += 1
    TRACE_BUF.append(address)
    if len(TRACE_BUF) > 100:
        TRACE_BUF.pop(0)
    if address in STUBS:
        name, handler = STUBS[address]
        if VERBOSE: print(f'  [STUB] {name} @ 0x{address:x}', flush=True)
        ret = handler(mu)
        if ret is not None:
            mu.reg_write(UC_X86_REG_RAX, ret & 0xFFFFFFFFFFFFFFFF)
        rsp = mu.reg_read(UC_X86_REG_RSP)
        ret_addr = struct.unpack_from('<Q', mu.mem_read(rsp, 8))[0]
        mu.reg_write(UC_X86_REG_RSP, rsp + 8)
        mu.reg_write(UC_X86_REG_RIP, ret_addr)
        return

# Add stubs for known runtime addresses:

def _stub_malloc(mu):
    size = mu.reg_read(UC_X86_REG_RCX)
    return heap_alloc(size)

def _stub_memset(mu):
    dst = mu.reg_read(UC_X86_REG_RCX)
    val = mu.reg_read(UC_X86_REG_RDX) & 0xFF
    n   = mu.reg_read(UC_X86_REG_R8)
    mu.mem_write(dst, bytes([val]) * n)
    return dst

def _stub_memcpy(mu):
    dst = mu.reg_read(UC_X86_REG_RCX)
    src = mu.reg_read(UC_X86_REG_RDX)
    n   = mu.reg_read(UC_X86_REG_R8)
    mu.mem_write(dst, bytes(mu.mem_read(src, n)))
    return dst

def _stub_qpc(mu):
    # These wrappers (0x1403a1474/0x1403a1490) take no args — the wrapper itself
    # allocates stack, calls QPC via IAT, reads result into rax, returns.
    # We bypass the IAT by returning fake values directly in rax.
    return 1  # fake count

def _stub_qpf(mu):
    # Fake frequency = 10M → caller's fast-path triggers (result = count * 100)
    return 10_000_000

def _stub_chkstk(mu):
    # __chkstk: just probes pages. Does NOT modify rax (which caller uses next).
    # Return None → stub won't overwrite rax.
    return None

def _stub_vmem_alloc_wrapper(mu):
    # 0x14003e900: wrapper around VirtualAlloc(nullptr, size, 0x3000, 0x40).
    # Rcx = this ptr. Function stores allocated ptr at [rcx+0x70], size info at [rcx+0x78].
    this_ptr = mu.reg_read(UC_X86_REG_RCX)
    size = 0x1f20
    # Allocate from our heap  (need to make sure heap is EXECUTABLE? Not strictly needed if just data)
    addr = heap_alloc(size)
    mu.mem_write(this_ptr + 0x70, struct.pack('<Q', addr))
    mu.mem_write(this_ptr + 0x78, struct.pack('<Q', size))
    return addr  # not sure if function returns something, but set rax anyway

# Known stub addresses (from disasm)
stub_at(0x1403a4080, 'operator new',  _stub_malloc)  # alloc
stub_at(0x1403a6720, 'memset',        _stub_memset)
stub_at(0x1403a2ff0, 'memcpy_or_sim', _stub_memcpy)  # near fn used by VM
stub_at(0x1403a6720, 'memset',        _stub_memset)
stub_at(0x1403a1490, 'QPF',            _stub_qpf)
stub_at(0x1403a1474, 'QPC',            _stub_qpc)
stub_at(0x1403a49a0, '__chkstk',      _stub_chkstk)
stub_at(0x14003e900, 'vmem_alloc',    _stub_vmem_alloc_wrapper)

# Hook unmapped memory → report
def hook_unmapped(mu, access, address, size, value, user_data):
    print(f'[!] UNMAPPED access: addr=0x{address:x} size={size} access={access}')
    return False  # abort

mu.hook_add(UC_HOOK_CODE, hook_code)
mu.hook_add(UC_HOOK_MEM_UNMAPPED, hook_unmapped)

# Set up registers to call 0x14003f540
# Signature (from handler 10): (rcx=output_buf_local, edx=0x10, r8=&struct)
# Where struct contains vtable + ptrs

# Prepare the user std::string
user_bytes = b'alice'
user_str_addr = heap_alloc(0x30)
# MSVC std::string layout: [0..0xf]=SSO buffer or ptr, [0x10]=size, [0x18]=cap
assert len(user_bytes) < 16, 'SSO only in this test'
mu.mem_write(user_str_addr, user_bytes + b'\0' * (16 - len(user_bytes)))
mu.mem_write(user_str_addr + 0x10, struct.pack('<Q', len(user_bytes)))
mu.mem_write(user_str_addr + 0x18, struct.pack('<Q', 15))  # cap < 16 → SSO

# Prepare struct for r8
struct_addr = heap_alloc(0x50)
local_buf_1 = heap_alloc(0x30)  # SSO buffer A
local_buf_2 = heap_alloc(0x30)
output_std_string = heap_alloc(0x30)  # output destination

mu.mem_write(struct_addr + 0x00, struct.pack('<Q', 0x1403f1858))  # vtable
mu.mem_write(struct_addr + 0x08, struct.pack('<Q', local_buf_1))
mu.mem_write(struct_addr + 0x10, struct.pack('<Q', user_str_addr))
mu.mem_write(struct_addr + 0x18, struct.pack('<Q', local_buf_2))
mu.mem_write(struct_addr + 0x20, struct.pack('<Q', output_std_string))

# Output buffer (first arg)
output_local = heap_alloc(0x100)

# Push a sentinel return address
RET_SENTINEL = 0xDEAD0000
mu.mem_write(RSP - 8, struct.pack('<Q', RET_SENTINEL))

# Set regs
mu.reg_write(UC_X86_REG_RSP, RSP - 8)
mu.reg_write(UC_X86_REG_RCX, output_local)
mu.reg_write(UC_X86_REG_RDX, 0x10)
mu.reg_write(UC_X86_REG_R8,  struct_addr)
mu.reg_write(UC_X86_REG_R9,  0)
# Security cookie location (needed for `mov rax, [rip + 0x3cdab9]`)
# The executor reads a cookie from .data; it's already zeroed → cookie=0

# Run
try:
    mu.emu_start(0x14003f540, RET_SENTINEL)
    print('[*] emu_start returned normally')
except Exception as e:
    rip = mu.reg_read(UC_X86_REG_RIP)
    print(f'[*] emu failed @ 0x{rip:x}: {e}')

# Trace of last 30 PCs
print(f'\n[*] Last 30 PCs:')
for a in TRACE_BUF[-30:]:
    print(f'    0x{a:x}')
# Read output
print(f'\n[*] output_std_string @ 0x{output_std_string:x}:')
print(f'    first 32B: {bytes(mu.mem_read(output_std_string, 32)).hex()}')
