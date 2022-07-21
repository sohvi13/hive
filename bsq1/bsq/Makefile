NAME = bsq 
FILES = main.c ft_putstr.c ft_strcpy.c ft_fgets.c ft_putchar.c ft_strlen.c ft_atoi.c ft_putnbr.c ft_charcat.c algo.c validity.c funcs1.c funcs2.c funcs3.c

all: $(NAME)

$(NAME):
	gcc -Wall -Wextra -Werror $(FILES) -o $(NAME)

debug:
	gcc $(FILES) -g -o $(NAME)

clean:
	rm -f $(NAME)

fclean: clean
	
re: fclean all
