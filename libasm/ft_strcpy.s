section .text
    global _ft_strcpy

_ft_strcpy:
        mov rdi, rdi        ; Save the destination pointer
        mov rsi, rsi        ; Save the source pointer
    
    .copy_loop:
        mov al, [rsi]       ; Load byte from source
        mov [rdi], al       ; Store byte to destination
        inc rsi             ; Increment source pointer
        inc rdi             ; Increment destination pointer
        test al, al         ; Check if byte is null terminator
        jnz .copy_loop      ; If not, continue loop
        ret
    mov rax, rdi        ; Move destination pointer to rax
    ret
