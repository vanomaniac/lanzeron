;********************************
; 17.02.2024
; ansi_end.inc
; Chekashkin Ivan
; chiacorp@mail.ru
; vanomaniac@gmail.com
; flat assembler 1.73.31
;********************************
ansi_end:;eax-address
         dec eax
          @@:
         inc eax
         cmp byte[eax],0
         jne @b
         ret
