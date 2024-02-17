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
         add eax,ebx
         add eax,[esi]
         add ebx,$04040404
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
         add al,bl
         add al,[esi]
         jmp .exit
        .two:
         add ax,bx
         add ax,[esi]
         jmp .exit
      .three:
         xor ecx,ecx
         add ecx,ebx
         add ecx,[esi]
         and ecx,$00FFFFFF
         add eax,ecx
       .exit:
       bswap eax
         pop esi edx ebx
         ret