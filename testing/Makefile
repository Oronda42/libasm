CC = gcc
NASM = nasm
CFLAGS = -Wall -Wextra -Werror
NASMFLAGS = -f elf64

# Targets
TARGET = main

ASM_SRC = ../libasm/ft_strlen.s ../libasm/ft_strcpy.s
ASM_OBJ = $(ASM_SRC:.s=.o)

C_SRC = test_ft_strlen.c test_ft_strcpy.c main.c utils.c


# Rules
all: $(TARGET)

$(ASM_OBJ): $(ASM_SRC)
	$(NASM) $(NASMFLAGS) -o $@ $<

$(TARGET): $(ASM_OBJ) $(C_SRC)
	$(CC) $(CFLAGS) -o $@ $^

clean:
	rm -f $(TARGET) $(ASM_OBJ)

.PHONY: all clean