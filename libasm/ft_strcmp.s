section .text
global _ft_strcmp

_ft_strcmp:

.loop:
    mov al, [rdi]       ; Load byte from destination
    mov bl, [rsi]       ; Load byte from source
    cmp al, bl          ; Compare the two bytes
    jne .end           ; If not equal, jump to end
    test al, al         ; Check if byte is null terminator
    jz .end            ; If null terminator, jump to end
    inc rdi             ; Increment destination pointer
    inc rsi             ; Increment source pointer
    jmp .loop           ; Repeat loop

.end:
    mov eax, 0          ; Clear eax register
    sub eax, ebx        ; Subtract source byte from destination byte
    ret