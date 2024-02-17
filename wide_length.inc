;********************************
; 17.02.2024
; wide_length.inc
; Chekashkin Ivan
; chiacorp@mail.ru
; vanomaniac@gmail.com
; flat assembler 1.73.31
;********************************
wide_length:;eax-address
         mov [esp-4],eax
         sub eax,2
          @@:
         add eax,2
         cmp word[eax],0
         jne @b
         sub eax,[esp-4]
         shr eax,1
         ret