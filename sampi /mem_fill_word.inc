;********************************
; 17.02.2024
; mem_fill_word.inc
; Chekashkin Ivan
; chiacorp@mail.ru
; vanomaniac@gmail.com
; flat assembler 1.73.31
;********************************
mem_fill_word:;eax-address,ecx-count word,edx-data dx
        test ecx,ecx
          jz .exit
       .next:
         mov [eax],dx
         add eax,2
        loop .next
       .exit:
         ret
