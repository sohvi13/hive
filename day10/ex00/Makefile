# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: shaukkal <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/11 16:38:12 by shaukkal          #+#    #+#              #
#    Updated: 2022/07/11 16:41:48 by shaukkal         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
INCLUDES = includes/*.h
OBJEKTIVES = ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o

SRC = srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strcmp.c srcs/ft_strlen.c srcs/ft_swap.c

all: $(NAME)
	
$(NAME):
	gcc -Wall -Wextra -Werror  -c $(SRC) -I$(INCLUDES)
	ar rc $(NAME) $(OBJEKTIVES)

clean:
	/bin/rm -f $(OBJEKTIVES)

fclean : clean
	/bin/rm -f $(NAME)

re: fclean all

