1ee1c0 mov      qword ptr [rsp + 8], rbx
1ee1c5 mov      qword ptr [rsp + 0x10], rdi
1ee1ca mov      r11, qword ptr [rcx + 0x100]
1ee1d1 mov      rdi, rcx
1ee1d4 movzx    edx, byte ptr [rcx + 0x162]
1ee1db mov      rax, qword ptr [rcx + 0xd8]
1ee1e2 movzx    r9d, byte ptr [rcx + 0xe8]
1ee1ea mov      r10, qword ptr [rcx + 0xe0]
1ee1f1 mov      r8, qword ptr [rcx + 0xd0]
1ee1f8 movabs   rcx, 0x9e3779b97f4a7c15
1ee202 lea      rbx, [rax + rax*2]
1ee206 imul     rdx, r10
1ee20a xor      rdx, r8
1ee20d xor      rdx, rbx
1ee210 mov      rax, rdx
1ee213 xor      rax, r11
1ee216 sub      r11, rdx
1ee219 test     r9b, r9b
1ee21c cmove    r11, rax
1ee220 mov      rax, qword ptr [rdi + 0x1b0]
1ee227 inc      qword ptr [rdi + 0x1b8]
1ee22e mov      rdx, r11
1ee231 imul     rax, rcx
1ee235 movabs   rcx, 0x2545f4914f6cdd1d
1ee23f add      rax, rcx
1ee242 mov      qword ptr [rdi + 0x1b0], rax
1ee249 shr      rax, 0x1b
1ee24d movzx    ecx, al
1ee250 mov      eax, r11d
1ee253 mov      byte ptr [rdi + 0x162], cl
1ee259 imul     rcx, r10
1ee25d xor      rcx, r8
1ee260 xor      rcx, rbx
1ee263 mov      rbx, qword ptr [rsp + 8]
1ee268 xor      rdx, rcx
1ee26b add      rcx, r11
1ee26e test     r9b, r9b
1ee271 cmove    rcx, rdx
1ee275 mov      qword ptr [rdi + 0x100], rcx
1ee27c mov      rdi, qword ptr [rsp + 0x10]
1ee281 ret      
