;********************************
; 17.02.2024
; mem_zero_word.inc
; Chekashkin Ivan
; chiacorp@mail.ru
; vanomaniac@gmail.com
; flat assembler 1.73.31
;********************************
mem_zero_dword:;eax-address,ecx-count word
        test ecx,ecx
          jz .exit
       .next:
         mov word[eax],0
         add eax,2
        loop .next
       .exit:
         ret