/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudoku.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhesso <jhesso@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 20:24:39 by jhesso            #+#    #+#             */
/*   Updated: 2022/07/10 22:19:02 by jhesso           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUDOKU_H
# define SUDOKU_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

void	ft_putchar(char c);
void	ft_putstr(char *str);
void	print_sudoku(int sudoku_board[9][9], int i, int j);
void	create_board(int sudoku_board[9][9], char **argv, int i, int j);
int		is_valid(int sudoku_board[9][9], int x, int y, int nbr);
int		check_arguments(char **argv, int i, int j);
int		solve(int sudoku_board[9][9]);

#endif