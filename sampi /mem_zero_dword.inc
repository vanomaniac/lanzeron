;********************************
; 17.02.2024
; mem_zero_dword.inc
; Chekashkin Ivan
; chiacorp@mail.ru
; vanomaniac@gmail.com
; flat assembler 1.73.31
;********************************
mem_zero_dword:;eax-address,ecx-count dword
        test ecx,ecx
          jz .exit
       .next:
         mov dword[eax],0
         add eax,4
        loop .next
       .exit:
         ret
