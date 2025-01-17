section .text
    global ft_write

    ft_write:
        mov rax, 1          ; syscall number for sys_write
        mov rdi, rdi        ; Save the file descriptor
        mov rsi, rsi        ; Save the buffer
        mov rdx, rdx        ; Save the buffer length
        syscall             ; Call the kernel
        ret