1f1000 mov      r10d, edx
1f1003 movabs   rax, 0x9e3779b97f4a7c15
1f100d imul     r10, rax
1f1011 movabs   rax, 0xd6e8feb86659fd93
1f101b and      r8d, 1
1f101f imul     r8, rax
1f1023 mov      eax, r9d
1f1026 movabs   rdx, 0xc2b2ae3d27d4eb4f
1f1030 imul     rax, rdx
1f1034 xor      r10, r8
1f1037 xor      r10, rax
1f103a mov      eax, dword ptr [rcx + 0x384]
1f1040 xor      r10, rax
1f1043 xor      r10, qword ptr [rcx + 0x350]
1f104a xor      r10, qword ptr [rcx + 0x260]
1f1051 movabs   rcx, 0xff51afd7ed558ccd
1f105b xor      r10, 0x42525441
1f1062 mov      rax, r10
1f1065 shr      rax, 0x21
1f1069 xor      rax, r10
1f106c imul     rax, rcx
1f1070 mov      rcx, rax
1f1073 shr      rcx, 0x21
1f1077 xor      rcx, rax
1f107a movabs   rax, 0xc4ceb9fe1a85ec53
1f1084 imul     rcx, rax
1f1088 mov      rax, rcx
1f108b shr      rax, 0x21
1f108f xor      rax, rcx
1f1092 ret      
