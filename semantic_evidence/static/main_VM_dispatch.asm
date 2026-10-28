000000014038eb64 440fb68424f0100000       movzx r8d, byte ptr [rsp + 0x10f0]
000000014038eb6d 488d8c2490010000         lea rcx, [rsp + 0x190]
000000014038eb75 4183f83e                 cmp r8d, 0x3e
000000014038eb79 732d                     jae 0x14038eba8
000000014038eb7b 48ff8424d0090000         inc qword ptr [rsp + 0x9d0]
000000014038eb83 33d2                     xor edx, edx
000000014038eb85 e8666effff               call 0x1403859f0
000000014038eb8a 448bc0                   mov r8d, eax
000000014038eb8d 33d2                     xor edx, edx
000000014038eb8f 488d8c2490010000         lea rcx, [rsp + 0x190]
000000014038eb97 e8b465faff               call 0x140335150
000000014038eb9c 488d8c2490010000         lea rcx, [rsp + 0x190]
000000014038eba4 ffd0                     call rax
000000014038eba6 eb32                     jmp 0x14038ebda
