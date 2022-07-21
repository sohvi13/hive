/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhesso <jhesso@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 20:24:03 by jhesso            #+#    #+#             */
/*   Updated: 2022/07/10 22:51:49 by jhesso           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sudoku.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	index;

	index = 0;
	while (str[index] != '\0')
		ft_putchar(str[index++]);
}

void	print_sudoku(int sudoku_board[9][9], int i, int j)
{
	while (i < 9)
	{
		while (j < 9)
		{
			ft_putchar(sudoku_board[i][j] + '0');
			if (j < 8)
				ft_putchar(' ');
			j++;
		}
		ft_putchar('\n');
		j = 0;
		i++;
	}
}
