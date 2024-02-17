;********************************
; 17.02.2024
; mem_zero_byte.inc
; Chekashkin Ivan
; chiacorp@mail.ru
; vanomaniac@gmail.com
; flat assembler 1.73.31
;********************************
mem_zero_byte:;eax-address,ecx-count word
        test ecx,ecx
          jz .exit
       .next:
         mov byte[eax],0
         inc eax
        loop .next
       .exit:
         ret