/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validity.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhesso <jhesso@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 20:28:48 by jhesso            #+#    #+#             */
/*   Updated: 2022/07/10 22:18:03 by jhesso           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sudoku.h"

int	row_check(int sudoku_board[9][9], int y, int nbr)
{
	int	index;

	index = 0;
	while (index < 9)
	{
		if (sudoku_board[y][index] == nbr)
			return (1);
		index++;
	}
	return (0);
}

int	col_check(int sudoku_board[9][9], int x, int nbr)
{
	int	index;

	index = 0;
	while (index < 9)
	{
		if (sudoku_board[index][x] == nbr)
			return (1);
		index++;
	}
	return (0);
}

int	box_check(int sudoku_board[9][9], int y, int x, int nbr)
{
	int	x_start;
	int	y_start;

	x_start = (x / 3) * 3;
	y_start = (y / 3) * 3;
	while (y_start <= ((y / 3) * 3 + 2))
	{
		while (x_start <= ((x / 3) * 3 + 2))
		{
			if (sudoku_board[y_start][x_start] == nbr)
				return (1);
			x_start++;
		}
		x_start = (x / 3) * 3;
		y_start++;
	}
	return (0);
}

int	is_valid(int sudoku_board[9][9], int y, int x, int nbr)
{
	int	is_row_valid;
	int	is_col_valid;
	int	is_box_valid;

	is_row_valid = row_check(sudoku_board, y, nbr);
	is_col_valid = col_check(sudoku_board, x, nbr);
	is_box_valid = box_check(sudoku_board, y, x, nbr);
	if (is_row_valid == 0)
		return (1);
	else if (is_col_valid == 0)
		return (1);
	if (is_box_valid == 0)
		return (1);
	else
		return (0);
}
