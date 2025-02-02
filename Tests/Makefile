CC = gcc
CFLAGS = -Wall -Wextra -Werror -g 


NAME = main

SRC =   utils.c  \
		test_ft_strlen.c  \
		test_ft_strcpy.c  \
		test_ft_strcmp.c \
		test_ft_write.c \
		test_ft_read.c \
		test_ft_strdup.c \
		main.c
OBJ = $(SRC:.c=.o)
LIB = ../libasm.a

all: $(NAME)

%.o: %.c
	@echo "$(GREEN)Assembling $< to $@$(NC)"
	$(CC) $(CFLAGS) -c $< -o $@ 

$(NAME):  $(OBJ)
	@echo  "$(GREEN)Compiling and linking $(NAME)$(NC)"
	$(CC) $(CFLAGS)  -o $@ $(OBJ) $(LIB)

clean:
	@echo "$(RED)Cleaning up...$(NC)"
	rm -f $(NAME) $(OBJ)

fclean: clean
	@echo "Force cleaning up..."
	rm -f $(NAME)

re: fclean all 

rerun: fclean all
	./main
	

.PHONY: all clean fclean re