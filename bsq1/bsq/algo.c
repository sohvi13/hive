/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvuorenm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 10:13:36 by jvuorenm          #+#    #+#             */
/*   Updated: 2022/07/20 23:38:20 by shaukkal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "bsq_header.h"

t_vars	find_largest_square(t_vars vars)
{
	int	y;
	int	x;
	int	tmp_larg;

	vars.arr = malloc((vars.size * vars.size) * sizeof(int));
	vars = init_zero(vars);
	tmp_larg = 0;
	y = 0;
	vars.largest = 0;
	vars.square_x = 0;
	while (y < vars.size)
	{
		x = 0;
		while (x < vars.size)
		{
			if (is_valid(vars, x, y))
			{
				if (x == 0 || y == 0)
					vars.arr[y][x] = 1;
				else
				{
					tmp_larg = min_empties_around(vars.arr, x, y) + 1;
					vars.arr[y][x] = tmp_larg;
				}
				if (tmp_larg > vars.largest)
				{
					vars.largest = tmp_larg;
					vars.square_x = x;
					vars.square_y = y;
					ft_putnbr(tmp_larg);
					ft_putstr("\n");
				}
			}
			if (vars.map[y][x] == vars.valid_c[1])
				vars.arr[y][x] = 1;
			x++;
		}
		y++;
	}
	draw_square(vars);
	return (vars);
}

int	draw_square(t_vars vars)
{
	int	y;
	int	x;

	y = vars.square_y - vars.largest + 1;
	while (y <= vars.square_y)
	{
		x = vars.square_x - vars.largest + 1;
		while (x <= vars.square_x)
		{
			vars.map[y][x] = vars.valid_c[2];
			x++;
		}
		y++;
	}
	print_map(vars);
	return (0);
}

t_vars	init_zero(t_vars vars)
{
	int	i;
	int	k;

	vars = allocate_int_arr(vars);
	i = 0;
	while (i < vars.size)
	{
		k = 0;
		while (k < vars.size)
		{
			vars.arr[i][k] = 0;
			k++;
		}
		i++;
	}
	return (vars);
}

int	min_empties_around(int **arr, int x, int y)
{
	int	left;
	int	top;
	int	ltop;
	int	minimum;

	left = arr[y][x - 1];
	top = arr[y - 1][x];
	ltop = arr[y - 1][x - 1];
	minimum = (min(ltop, min(left, top)));
	if (minimum == 0)
		return (1);
	return (minimum);
}

int	min(int a, int b)
{
	if (a <= b)
		return (a);
	else
		return (b);
}

t_bool	empty(t_vars vars, int x, int y)
{
	if (vars.map[y][x] == vars.valid_c[0])
	{
		return (TRUE);
	}
	return (FALSE);
}

t_bool	top_left_empty(t_vars vars, int x, int y)
{
	if ((y - 1 >= 0) && (x - 1 >= 0))
	{
		if (vars.map[y - 1][x - 1] == vars.valid_c[0])
			return (TRUE);
	}
	return (FALSE);
}

t_bool	left_empty(t_vars vars, int x, int y)
{
	if (((x - 1) >= 0))
	{
		if (vars.map[y][x - 1] == vars.valid_c[0])
			return (TRUE);
	}
	return (FALSE);
}

t_bool	top_empty(t_vars vars, int x, int y)
{
	if (((y - 1) >= 0))
	{
		if (vars.map[y - 1][x] == vars.valid_c[0])
			return (TRUE);
	}
	return (FALSE);
}

t_vars	mark_square(t_vars vars, int x, int y)
{
	vars.map[y][x] = vars.valid_c[2];
	return (vars);
}

t_bool	is_valid(t_vars vars, int x, int y)
{
	if (!empty(vars, x, y))
		return (FALSE);
	if ((x != 0) && (y != 0) && !top_left_empty(vars, x, y))
		return (FALSE);
	return (TRUE);
}
