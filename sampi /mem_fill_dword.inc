;********************************
; 17.02.2024
; mem_fill_dword.inc
; Chekashkin Ivan
; chiacorp@mail.ru
; vanomaniac@gmail.com
; flat assembler 1.73.31
;********************************
mem_fill_dword:;eax-address,ecx-count word,edx-data edx
        test ecx,ecx
          jz .exit
       .next:
         mov [eax],edx
         add eax,4
        loop .next
       .exit:
         ret
