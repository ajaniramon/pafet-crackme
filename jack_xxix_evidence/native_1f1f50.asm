1f1f50 mov      qword ptr [rsp + 8], rbx
1f1f55 mov      qword ptr [rsp + 0x10], rsi
1f1f5a push     rdi
1f1f5b sub      rsp, 0x20
1f1f5f mov      eax, edx
1f1f61 mov      rbx, rcx
1f1f64 imul     rsi, rax, 0x3e
1f1f68 mov      edi, r8d
1f1f6b cmp      r8d, 0x3d
1f1f6f jne      0x1401f1f94
1f1f71 call     0x1401f1d80
1f1f76 lea      edx, [rax + 0x3e]
1f1f79 add      rdx, rsi
1f1f7c movzx    eax, word ptr [rbx + rdx*2 + 0x4ce]
1f1f84 mov      rbx, qword ptr [rsp + 0x30]
1f1f89 mov      rsi, qword ptr [rsp + 0x38]
1f1f8e add      rsp, 0x20
1f1f92 pop      rdi
1f1f93 ret      
1f1f94 cmp      edi, 0x3c
1f1f97 jne      0x1401f1fbc
1f1f99 call     0x1401f1d80
1f1f9e lea      ecx, [rax + 0x3e]
1f1fa1 add      rcx, rsi
1f1fa4 movzx    eax, word ptr [rbx + rcx*2 + 0x4ce]
1f1fac mov      rbx, qword ptr [rsp + 0x30]
1f1fb1 mov      rsi, qword ptr [rsp + 0x38]
1f1fb6 add      rsp, 0x20
1f1fba pop      rdi
1f1fbb ret      
1f1fbc call     0x1401ee070
1f1fc1 lea      rax, [rsi + rdi]
1f1fc5 mov      rsi, qword ptr [rsp + 0x38]
1f1fca movzx    eax, word ptr [rbx + rax*2 + 0x4ce]
1f1fd2 mov      rbx, qword ptr [rsp + 0x30]
1f1fd7 add      rsp, 0x20
1f1fdb pop      rdi
1f1fdc ret      
