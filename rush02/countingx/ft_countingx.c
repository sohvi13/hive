/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_countingx.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shaukkal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 16:45:49 by shaukkal          #+#    #+#             */
/*   Updated: 2022/07/16 16:45:56 by shaukkal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_countingx(char *str)
{
	int len;
	int	line;

	len = 0;
	line = 0;
	while (str[line] != '\n')
	{
		len++;
		line++;
	}
		
	return (line);
	
}

