;********************************
; 17.02.2024
; mem_move_word.inc
; Chekashkin Ivan
; chiacorp@mail.ru
; vanomaniac@gmail.com
; flat assembler 1.73.31
;********************************
mem_move_word:;eax-dest,ecx-count word,edx-source
        push ebx
          @@:
         mov bx,[edx]
         mov [eax],bx
         add edx,2
         add eax,2
        loop @b
         pop ebx
         ret


