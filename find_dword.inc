;********************************
; 17.02.2024
; find_dword.inc
; Chekashkin Ivan
; chiacorp@mail.ru
; vanomaniac@gmail.com
; flat assembler 1.73.31
;********************************
find_dword:;eax-value,ecx-count,edx-memory
        test ecx,ecx
          jz .exit
       .next:
         cmp eax,[edx]
          je .exit
         add edx,4
        loop .next
       .exit:
         mov eax,ecx
         ret
