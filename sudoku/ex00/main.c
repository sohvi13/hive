/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhesso <jhesso@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 19:32:24 by jhesso            #+#    #+#             */
/*   Updated: 2022/07/10 22:25:57 by jhesso           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sudoku.h"

int	main(int argc, char **argv)
{
	int	i;
	int	j;
	int	sudoku_board[9][9];

	i = 0;
	j = 0;
	if (argc != 10)
	{
		ft_putstr("Error\n");
		return (0);
	}
	create_board(sudoku_board, argv, i, j);
	print_sudoku(sudoku_board, i, j);
	ft_putstr("-----------------\n");
	solve(sudoku_board);
	print_sudoku(sudoku_board, i, j);
	return (0);
}
