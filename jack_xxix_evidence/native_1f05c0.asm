1f05c0 mov      qword ptr [rsp + 0x10], rbx
1f05c5 push     rdi
1f05c6 sub      rsp, 0x20
1f05ca mov      rax, qword ptr [rcx + 0xb50]
1f05d1 cmp      edx, 0x67
1f05d4 mov      edi, 0x66
1f05d9 mov      rbx, rcx
1f05dc cmovb    edi, edx
1f05df mov      dword ptr [rcx + 0xb5c], edi
1f05e5 test     rax, rax
1f05e8 je       0x1401f061a
1f05ea cmp      dword ptr [rcx + 0xb58], 0
1f05f1 je       0x1401f061a
1f05f3 cmp      edi, 0x67
1f05f6 jae      0x1401f061a
1f05f8 cmp      byte ptr [rdi + rax], 0
1f05fc mov      qword ptr [rsp + 0x30], rsi
1f0601 jne      0x1401f0615
1f0603 mov      edx, edi
1f0605 call     0x1401f0410
1f060a mov      rax, qword ptr [rbx + 0xb50]
1f0611 mov      byte ptr [rdi + rax], 1
1f0615 mov      rsi, qword ptr [rsp + 0x30]
1f061a lea      edx, [rdi + 1]
1f061d cmp      edx, 0x67
1f0620 jae      0x1401f0652
1f0622 mov      rax, qword ptr [rbx + 0xb50]
1f0629 test     rax, rax
1f062c je       0x1401f0652
1f062e cmp      dword ptr [rbx + 0xb58], 0
1f0635 je       0x1401f0652
1f0637 cmp      byte ptr [rdx + rax], 0
1f063b mov      edi, edx
1f063d jne      0x1401f0652
1f063f mov      rcx, rbx
1f0642 call     0x1401f0410
1f0647 mov      rax, qword ptr [rbx + 0xb50]
1f064e mov      byte ptr [rdi + rax], 1
1f0652 mov      rbx, qword ptr [rsp + 0x38]
1f0657 add      rsp, 0x20
1f065b pop      rdi
1f065c ret      
