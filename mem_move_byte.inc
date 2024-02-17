;********************************
; 17.02.2024
; mem_move_byte.inc
; Chekashkin Ivan
; chiacorp@mail.ru
; vanomaniac@gmail.com
; flat assembler 1.73.31
;********************************
mem_move_byte:;eax-dest,ecx-count byte,edx-source
        push ebx
          @@:
         mov bl,[edx]
         mov [eax],bl
         inc edx
         inc eax
        loop @b
         pop ebx
         ret


