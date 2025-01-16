   

section .data 
    hello db "Hello World!",10,0
    pouet db "pouet",10,0

section .text
    global _start
    
_exit:
    mov rax,60
    mov rdi,0
    syscall
    ret

_print:
    push rax
    mov rbx , 0

_printLoop:
    inc rax
    inc rbx
    mov cl , [rax]
    cmp cl, 0
    jne _printLoop

    mov rax, 1
    mov rdi, 1
    pop rsi       
    mov rdx, rbx
    syscall

    ret

_start:
    
    mov rax, hello
    call _print

    mov rax ,  pouet
    call _print

    call _exit