CC = gcc
NASM = nasm
CFLAGS = -Wall -Wextra -Werror -g
NASMFLAGS = -f elf64

# Targets
TARGET = main

ASM_SRC = ../libasm/ft_strlen.s ../libasm/ft_strcpy.s
ASM_OBJ = $(ASM_SRC:.s=.o)

C_SRC = test_ft_strcpy.c test_ft_strlen.c main.c utils.c

# Rules
all: $(TARGET)

%.o: %.s
	@echo "Assembling $< to $@"
	$(NASM) $(NASMFLAGS) -o $@ $<

$(TARGET): $(ASM_OBJ) $(C_SRC)
	@echo "Compiling and linking $(TARGET)"
	$(CC) $(CFLAGS) -o $@ $(ASM_OBJ) $(C_SRC)

re: clean all

clean:
	@echo "Cleaning up..."
	rm -f $(TARGET) $(ASM_OBJ)

.PHONY: all clean