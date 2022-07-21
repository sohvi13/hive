/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shaukkal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 18:56:02 by shaukkal          #+#    #+#             */
/*   Updated: 2022/07/11 21:25:58 by shaukkal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_foreach(int *tab, int length, void(*f)(int));
void	ft_putnbr(int nb);

int	main(void)
{
	int tab[100] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	ft_foreach(tab, 3, &ft_putnbr);
	return (0);
}
