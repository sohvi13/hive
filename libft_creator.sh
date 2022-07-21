# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    libft_creator.sh                                   :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: shaukkal <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/08 11:03:46 by shaukkal          #+#    #+#              #
#    Updated: 2022/07/08 11:39:05 by shaukkal         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#include <stdio.h>

char	*ft_strcpy(char *s1, char *s2)
{
	int	answer;

	answer = 0;
	while(s2[answer])
		{
			s1[answer] = s2[answer];
			answer++;
		}
		s1[answer] = '\0';
		return (s1);
}

int	 main(void)
{
	char	str[] = "testing";
	char	dst[] = "";
	printf("%s:\n", dst);
	ft_strcpy(dst, src);
	printf("%s:\n", dst);
	return (0);

}
