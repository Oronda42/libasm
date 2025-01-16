section .text
    global _ft_strcpy

_ft_strcpy:
    mov rdi, rsi        ; Save the destination pointer
    .copy_loop:
        mov al, [rsi + rdx] ; Load byte from source
        mov [rdi + rdx], al ; Store byte to destination
        inc rdx             ; Increment index
        test al, al         ; Check if byte is null terminator
        jnz .copy_loop      ; If not, continue loop
    ret


