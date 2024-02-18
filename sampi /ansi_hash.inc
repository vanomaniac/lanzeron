;********************************
; 17.02.2024
; ansi_hash.inc
; Chekashkin Ivan
; chiacorp@mail.ru
; vanomaniac@gmail.com
; flat assembler 1.73.31
;********************************
ansi_hash:;eax-text,ecx-length
        push ebx edx esi
         mov esi,eax
         mov eax,ecx
         mov ebx,$04030201
         xor edx,edx
         mov ecx,4
         div ecx
         mov ecx,eax
         xor eax,eax
          @@:
        test ecx,ecx
          jz @f
         add eax,[esi]
         xor eax,ebx
         add ebx,$04040404
         add ebx,0
         dec ecx
         add esi,4
         jmp @b
          @@:
         cmp edx,1
          je .one
         cmp edx,2
          je .two
         cmp edx,3
          je .three
         jmp .exit
        .one:
         add al,[esi]
         xor al,bl
         jmp .exit
        .two:
         add ax,[esi]
         xor ax,bx
         jmp .exit
      .three:
         mov ecx,eax
         add eax,[esi]
         xor eax,ebx
         and eax,$00FFFFFF
         and ecx,$FF000000
          or eax,ecx
       .exit:
       bswap eax
         pop esi edx ebx
         ret
