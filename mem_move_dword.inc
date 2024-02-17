;********************************
; 17.02.2024
; mem_move_dword.inc
; Chekashkin Ivan
; chiacorp@mail.ru
; vanomaniac@gmail.com
; flat assembler 1.73.31
;********************************
mem_move_word:;eax-dest,ecx-count dword,edx-source
        push ebx
          @@:
         mov ebx,[edx]
         mov [eax],ebx
         add edx,4
         add eax,4
        loop @b
         pop ebx
         ret


