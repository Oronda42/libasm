section .text
    global _ft_read

_ft_read:
    mov rax, 0          ; syscall number for sys_read
    mov rdi, [rsp+8]    ; Save the file descriptor
    mov rsi, [rsp+16]   ; Save the buffer
    mov rdx, [rsp+24]   ; Save the buffer length
    syscall             ; Call the kernel
    ret