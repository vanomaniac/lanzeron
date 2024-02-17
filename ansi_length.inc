;********************************
; 17.02.2024
; ansi_length.inc
; Chekashkin Ivan
; chiacorp@mail.ru
; vanomaniac@gmail.com
; flat assembler 1.73.31
;********************************
ansi_length:;eax-address
         mov [esp-4],eax
         dec eax
          @@:
         inc eax
         cmp byte[eax],0
         jne @b
         sub eax,[esp-4]
         ret