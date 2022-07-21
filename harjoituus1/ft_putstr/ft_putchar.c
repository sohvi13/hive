/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shaukkal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 21:33:40 by shaukkal          #+#    #+#             */
/*   Updated: 2022/07/20 21:45:39 by shaukkal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str);

void	ft_putchar(char c);
int	main(void)
{
	char	str[] = "Hello";

	ft_putchar(str);
	ft_putchar('\0')
	return (0);
}

