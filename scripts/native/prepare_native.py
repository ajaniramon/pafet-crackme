from pathlib import Path
from fh4_metadata import MetadataReader as Probe, BASE
import struct
from capstone import Cs,CS_ARCH_X86,CS_MODE_64
from capstone.x86_const import X86_REG_RBP,X86_REG_RSP,X86_REG_RAX
p=Probe();Path('native_image.bin').write_bytes(p.pe.get_memory_mapped_image())
md=Cs(CS_ARCH_X86,CS_MODE_64);md.detail=True
out=['#include <stdint.h>','typedef struct {uint32_t start,end,unwind; uint32_t type,adj,off; uint64_t fn,cont; int32_t bp_offset;} Rf;','static Rf rfs[]={']
for e in p.rf:
    hs=p.handlers(e);ty,adj,off,fn,cont=hs[0] if hs else (0,0,0,0,[])
    delta=0;bp=None;rax=None
    prolog=p.pe.get_data(e.struct.UnwindData+1,1)[0]
    for ins in md.disasm(p.pe.get_data(e.struct.BeginAddress,prolog),BASE+e.struct.BeginAddress):
        if ins.mnemonic=='push':delta-=8
        if ins.mnemonic=='mov' and ins.op_str.startswith('eax, '):
            if ins.operands[1].type==2:rax=ins.operands[1].imm
        if ins.mnemonic=='sub' and ins.operands[0].type==1 and ins.operands[0].reg==X86_REG_RSP:
            if ins.operands[1].type==2:delta-=ins.operands[1].imm
            elif ins.operands[1].reg==X86_REG_RAX and rax is not None:delta-=rax
        if ins.mnemonic=='lea' and ins.operands[0].reg==X86_REG_RBP and ins.operands[1].mem.base==X86_REG_RSP:
            bp=delta+ins.operands[1].mem.disp
    bp_offset=bp-delta if bp is not None else -1
    out.append('{%s},'%','.join(hex(v) for v in [e.struct.BeginAddress,e.struct.EndAddress,e.struct.UnwindData,ty,adj,off,fn,cont[0] if cont else 0,bp_offset]))
out+=['};','typedef struct {uint32_t rva;const char *name;} Import;','static Import imports[]={']
for dll in p.pe.DIRECTORY_ENTRY_IMPORT:
    for imp in dll.imports:out.append('{%s,"%s"},'%(hex(imp.address-BASE),imp.name.decode()))
out+=['};']
Path('native_meta.h').write_text('\n'.join(out))
# Context: g[16], rip, flags, xmm[16][16], padding.
regs=['rax','rcx','rdx','rbx','rsp','rbp','rsi','rdi','r8','r9','r10','r11','r12','r13','r14','r15']
lines=['.text','.globl capture_exception','capture_exception:','sub $0x208, %rsp']
for i,r in enumerate(regs):
    if r!='rsp':lines.append('mov %'+r+', '+str(i*8)+'(%rsp)')
lines+=['lea 0x208(%rsp), %rax','mov %rax, 32(%rsp)','pushfq','popq 136(%rsp)']
for i in range(16):lines.append('movdqu %xmm'+str(i)+', '+str(144+i*16)+'(%rsp)')
lines+=['mov %rsp, %rdi','call handle_exception','jmp restore_context','.globl capture_catch_return','capture_catch_return:','call handle_catch_return','jmp restore_context','.globl restore_context','restore_context:']
for i in range(16):lines.append('movdqu '+str(144+i*16)+'(%rax), %xmm'+str(i))
lines+=['pushq 136(%rax)','popfq','mov 32(%rax), %rsp','sub $8, %rsp','mov 128(%rax), %rdx','mov %rdx, (%rsp)']
for i,r in enumerate(regs):
    if r not in ['rax','rsp']:lines.append('mov '+str(i*8)+'(%rax), %'+r)
lines+=['mov (%rax), %rax','ret','.section .note.GNU-stack,"",@progbits']
Path('native_context.S').write_text('\n'.join(lines)+'\n')
print('Native metadata prepared:',len(p.rf),'functions')
