;********************************
; 17.02.2024
; ansi_compare.inc
; Chekashkin Ivan
; chiacorp@mail.ru
; vanomaniac@gmail.com
; flat assembler 1.73.31
;********************************
ansi_compare:;eax-adress,ecx-length,edx-address
        test ecx,ecx
          jz .exit
        push ebx
       .next:
         mov bl,[edx]
         cmp bl,[eax]
         jne .exit
         inc edx
         inc eax
        loop .next
         pop ebx
       .exit:
         mov eax,ecx
         ret
