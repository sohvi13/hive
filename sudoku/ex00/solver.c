/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solver.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhesso <jhesso@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 11:51:28 by jhesso            #+#    #+#             */
/*   Updated: 2022/07/10 22:44:48 by jhesso           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sudoku.h"

void	create_board(int sudoku_board[9][9], char **argv, int i, int j)
{
	while (i < 9)
	{
		while (j < 9)
		{
			if (argv[i + 1][j] == '.')
			{
				sudoku_board[i][j] = 0;
				j++;
			}
			else
			{
				sudoku_board[i][j] = argv[i + 1][j] - '0';
				j++;
			}
		}
		j = 0;
		i++;
	}
}

int	solve(int sudoku_board[9][9])
{
	int	x;
	int	y;
	int	n;
	int	no_solution;

	y = 0;
	while (y < 9)
	{
		x = 0;
		while (x < 9)
		{
			if (sudoku_board[y][x] == 0)
			{
				n = 1;
				while (n < 10)
				{
					if (is_valid(sudoku_board, y, x, n))
					{
						sudoku_board[y][x] = n;
						no_solution = solve(sudoku_board);
						if (no_solution == 0)
							return (0);
						sudoku_board[y][x] = 0;
					}
					n++;
				}
				return (1);
			}
			x++;
		}
		y++;
	}
	return (0);
}
