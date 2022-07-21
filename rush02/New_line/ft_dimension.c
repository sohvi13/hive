/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dimension.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shaukkal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 16:48:17 by shaukkal          #+#    #+#             */
/*   Updated: 2022/07/16 16:48:41 by shaukkal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_dimension(char *str)
{
	int	line;
	int	count;

    count = 0;
	line = 0;
	while (str[line] != '\0')
	{
		if (str[line] == '\n')
            count++;
        line++;
    }
    return(count);
}
