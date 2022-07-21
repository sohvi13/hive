/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shaukkal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 16:42:07 by shaukkal          #+#    #+#             */
/*   Updated: 2022/07/12 17:33:45 by shaukkal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		*ft_map(int *tab, int length, int(*f) (int)); 	
void	ft_foreach(int *tab, int length, void(*f)(int));
void	ft_putnbr(int nb);
int		plus_nb(int nbr)
{
	return (nbr + 1);
}
int	main(void)
{
	int	*ntab;
	int tab[100] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	ntab = ft_map(tab, 20, &plus_nb);
	ft_foreach(ntab, 10, &ft_putnbr);
	return (0);
}

