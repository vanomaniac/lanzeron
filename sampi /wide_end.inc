;********************************
; 17.02.2024
; wide_end.inc
; Chekashkin Ivan
; chiacorp@mail.ru
; vanomaniac@gmail.com
; flat assembler 1.73.31
;********************************
wide_end:;eax-address
         sub eax,2
          @@:
         add eax,2
         cmp word[eax],0
         jne @b
         ret
