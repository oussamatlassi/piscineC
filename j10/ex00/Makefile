NAME = libft.a

# Définition des variables
CC = gcc
CFLAGS = -Wall -Wextra -Werror

SRC =	srcs/ft_putchar.c \
		srcs/ft_putstr.c \
		srcs/ft_strcmp.c \
		srcs/ft_strlen.c \
		srcs/ft_swap.c

HEADERS = includes/

all: $(NAME)

$(NAME):
	@$(CC) $(CFLAGS) -c $(SRC)
	@ar rc $(NAME)
	@ranlib $(NAME)

clean:
	@rm
	@echo "Files .o deleted"

fclean: clean
	@rm -f $(NAME)
	@echo "Binary libft.a deleted"

re: fclean all