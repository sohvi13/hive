/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shaukkal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 21:16:03 by shaukkal          #+#    #+#             */
/*   Updated: 2022/07/20 21:46:00 by shaukkal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);
void	ft_putstr(char *str)
{
	int	index;
	index = 0;
	while (str[index])
	{
		index++;
		write (1, str, index);
	}

}
