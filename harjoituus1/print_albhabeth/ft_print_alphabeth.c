/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabeth.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shaukkal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 10:01:55 by shaukkal          #+#    #+#             */
/*   Updated: 2022/07/17 10:34:08 by shaukkal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_putchar(char c);

int	main()
{
	int	abc;

	abc = 'A';
	while ('A'<= 'Z')
		abc++;
		putchar(abc);
	return (0);
}
