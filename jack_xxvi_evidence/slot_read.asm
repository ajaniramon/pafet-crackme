000000014004a0e0  mov r9d, dword ptr [rcx + 0x750]
000000014004a0e7  mov r11, rcx
000000014004a0ea  movzx r10d, dl
000000014004a0ee  add r9d, r10d
000000014004a0f1  mov eax, r10d
000000014004a0f4  imul rax, qword ptr [rcx + 0x268]
000000014004a0fc  movzx edx, byte ptr [r10 + rcx + 0xa15]
000000014004a105  and r9d, 1
000000014004a109  imul rdx, qword ptr [rcx + 0x1170]
000000014004a111  shl r9d, 8
000000014004a115  xor rdx, rax
000000014004a118  add r9d, r10d
000000014004a11b  xor rdx, qword ptr [rcx + 0x260]
000000014004a122  mov rax, qword ptr [rcx + 0x288]
000000014004a129  mov r8, qword ptr [rax + r9*8]
000000014004a12d  mov rax, r8
000000014004a130  sub r8, rdx
000000014004a133  xor rax, rdx
000000014004a136  cmp byte ptr [rcx + 0x754], 0
000000014004a13d  movabs rcx, 0x9e3779b97f4a7c15
000000014004a147  cmove r8, rax
000000014004a14b  mov rax, qword ptr [r11 + 0x1180]
000000014004a152  inc qword ptr [r11 + 0x1188]
000000014004a159  imul rax, rcx
000000014004a15d  movabs rcx, 0x2545f4914f6cdd1d
000000014004a167  add rax, rcx
000000014004a16a  mov qword ptr [r11 + 0x1180], rax
000000014004a171  shr rax, 0x1b
000000014004a175  movzx edx, al
000000014004a178  mov rax, r8
000000014004a17b  mov byte ptr [r10 + r11 + 0xa15], dl
000000014004a183  imul rdx, qword ptr [r11 + 0x1170]
000000014004a18b  imul r10, qword ptr [r11 + 0x268]
000000014004a193  xor rdx, r10
000000014004a196  xor rdx, qword ptr [r11 + 0x260]
000000014004a19d  mov rcx, rdx
000000014004a1a0  add rdx, r8
000000014004a1a3  xor rcx, r8
000000014004a1a6  cmp byte ptr [r11 + 0x754], 0
000000014004a1ae  cmove rdx, rcx
000000014004a1b2  mov rcx, qword ptr [r11 + 0x288]
000000014004a1b9  mov qword ptr [rcx + r9*8], rdx
000000014004a1bd  ret
