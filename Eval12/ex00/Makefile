# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: shaukkal <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/13 19:38:26 by shaukkal          #+#    #+#              #
#    Updated: 2022/07/14 21:03:13 by shaukkal         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file
SRC = ft_putchar.c ft_putstr.c ft_display_file.c

all: $(NAME)
	
$(NAME):
	gcc -Wall -Wextra -Werror -o $(NAME) $(SRC)

clean:
	/bin/rm -f *.o

fclean : clean
	/bin/rm -f $(NAME)
