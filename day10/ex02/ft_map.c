/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shaukkal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 16:56:41 by shaukkal          #+#    #+#             */
/*   Updated: 2022/07/12 17:35:10 by shaukkal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(char *tab, int length, int (*f) (int))
{
	int	i;
	int	*r;

	i = 0;
	r = (malloc(sizeof(int) * length));
	while (i < length)
	{
		r[i] = (*f)(tab[i]);
		i++;
	}
	return (r);
}
