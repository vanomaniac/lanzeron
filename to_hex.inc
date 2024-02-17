;********************************
; 17.02.2024
; to_hex.inc
; Chekashkin Ivan
; chiacorp@mail.ru
; vanomaniac@gmail.com
; flat assembler 1.73.31
;********************************
to_hex:;eax-value,ecx-buffer
        push edx ebx edi
       bswap eax
         mov ebx,eax
         mov edi,ecx
         mov ecx,4
          @@:
       movzx edx,bl
       movzx eax,bl
         and edx,$0F
         shr eax,4
         mov al,[.hex+eax]
         mov ah,[.hex+edx]
       stosw
         shr ebx,8
         dec ecx
         jnz @b
         xor eax,eax
       stosb
         pop edi ebx edx
         ret
        .hex db '0123456789ABCDEF'