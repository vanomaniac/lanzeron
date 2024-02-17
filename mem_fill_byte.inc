;********************************
; 17.02.2024
; mem_fill_byte.inc
; Chekashkin Ivan
; chiacorp@mail.ru
; vanomaniac@gmail.com
; flat assembler 1.73.31
;********************************
mem_fill_byte:;eax-address,ecx-count byte,edx-data dl
        test ecx,ecx
          jz .exit
       .next:
         mov [eax],dl
         inc eax
        loop .next
       .exit:
         ret