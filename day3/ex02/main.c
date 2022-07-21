/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shaukkal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 13:55:05 by shaukkal          #+#    #+#             */
/*   Updated: 2022/07/05 14:44:03 by shaukkal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b);

int	main(void)
{
	int	a;
	int	b;
	a = 1;
	b = 95;
	int *first;
	int *second;
	first = &a;
	second = &b;
	printf("%d \n", a);
	printf("%d \n", b);
	ft_swap(first, second);
	printf("%d \n", a);
	printf("%d \n", b);
	return (0);
}
