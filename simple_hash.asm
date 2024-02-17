;********************************
; 17.02.2024
; simple_hash.asm
; Chekashkin Ivan
; chiacorp@mail.ru
; vanomaniac@gmail.com
; flat assembler 1.73.31
;********************************
      format pe console
     include 'win32axp.inc'
        temp equ dword[ebp]
         hin equ dword[ebp-4]
        hout equ dword[ebp-8]
       enter 256,0
         sub ebp,128
         mov ecx,64
         mov eax,esp
        call mem_zero_dword
         lea esi,[ebp+4]
      invoke GetStdHandle,STD_INPUT_HANDLE
         mov hin,eax
      invoke GetStdHandle,STD_OUTPUT_HANDLE
         mov hout,eax
         xor ebx,ebx
next_hash_text:
      invoke ReadFile,hin,esi,128,ebp,0
         cmp temp,2
          je exit_program
         mov ecx,temp
         sub ecx,2
         mov eax,esi
         mov byte[eax+ecx],0
        call ansi_hash
        push eax
         inc ebx
         mov ecx,esi
        call to_hex
         mov word[esi+8],$0D0A
      invoke WriteFile,hout,esi,10,ebp,0
         lea edx,[esp+4]
         lea ecx,[ebx-1]
         mov eax,[esp]
        call find_dword
        test eax,eax
          jz next_hash_text
      invoke WriteFile,hout,_stop,4,ebp,0
         mov ecx,$1FFFFFFF
          @@:
         nop
        loop @b
exit_program:
         add ebp,128
       leave
         ret
       _stop db 'STOP'
     include 'find_dword.inc'
     include 'to_hex.inc'
     include 'mem_zero_dword.inc'
     include 'ansi_hash.inc'
        data import
     library kernel32,'kernel32.dll'
     include 'api\kernel32.inc'
         end data