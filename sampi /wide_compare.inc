;********************************
; 17.02.2024
; wide_compare.inc
; Chekashkin Ivan
; chiacorp@mail.ru
; vanomaniac@gmail.com
; flat assembler 1.73.31
;********************************
wide_compare:;eax-adress,ecx-length,edx-address
        test ecx,ecx
          jz .exit
        push ebx
       .next:
         mov bx,[edx]
         cmp bx,[eax]
         jne .exit
         add edx,2
         add eax,2
        loop .next
         pop ebx
       .exit:
         mov eax,ecx
         ret
