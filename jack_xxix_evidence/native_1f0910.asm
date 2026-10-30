1f0910 sub      rsp, 0x28
1f0914 mov      r10, rcx
1f0917 cmp      edx, dword ptr [rcx + 0x1d8]
1f091d jae      0x1401f09be
1f0923 mov      ecx, edx
1f0925 movabs   rax, 0x9e3779b97f4a7c15
1f092f imul     rcx, rax
1f0933 mov      r9d, edx
1f0936 xor      rcx, qword ptr [r10 + 0x20]
1f093a xor      rcx, qword ptr [r10 + 0x58]
1f093e xor      rcx, qword ptr [r10 + 0x50]
1f0942 mov      rax, rcx
1f0945 shr      rax, 0x21
1f0949 xor      rax, rcx
1f094c movabs   rcx, 0xff51afd7ed558ccd
1f0956 imul     rax, rcx
1f095a mov      rcx, rax
1f095d shr      rcx, 0x21
1f0961 xor      rcx, rax
1f0964 movabs   rax, 0xc4ceb9fe1a85ec53
1f096e imul     rcx, rax
1f0972 mov      r8, rcx
1f0975 shr      r8, 0x21
1f0979 xor      r8, rcx
1f097c mov      rcx, r8
1f097f mov      rax, r8
1f0982 shr      rax, 0x18
1f0986 shr      rcx, 0x28
1f098a xor      cl, al
1f098c mov      eax, 0x5a
1f0991 xor      cl, r8b
1f0994 movzx    edx, cl
1f0997 cmove    edx, eax
1f099a mov      rax, qword ptr [r10 + 0x1d0]
1f09a1 or       r8, 1
1f09a5 xor      byte ptr [rax + r9], dl
1f09a9 mov      rax, qword ptr [r10 + 0x48]
1f09ad xor      byte ptr [rax + r9], dl
1f09b1 inc      qword ptr [r10 + 0x58]
1f09b5 mov      qword ptr [r10 + 0x50], r8
1f09b9 add      rsp, 0x28
1f09bd ret      
1f09be mov      edx, 0x534d4351
1f09c3 call     0x1401ed830
1f09c8 int3     
