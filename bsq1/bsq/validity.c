/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validity.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shaukkal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 15:36:17 by shaukkal          #+#    #+#             */
/*   Updated: 2022/07/20 22:57:51 by shaukkal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "bsq_header.h"

t_bool	validate_map(t_vars vars)
{
	if (!row_valid(vars))
		return (FALSE);
	return (TRUE);
}

t_bool	end_in_linebreak(t_vars vars, int row)
{
	if (vars.map[row][vars.size] != '\n')
	{
		ft_putstr("map error\n");
		ft_putstr("1\n");
		return (FALSE);
	}
	return (TRUE);
}

t_bool	only_valid_chars(t_vars vars, int row)
{
	char	c;
	int		i;
	int		valid;

	i = 0;
	while (vars.map[row][i] != '\n')
	{
		valid = 0;
		c = vars.map[row][i];
		if (c == vars.valid_c[0])
			valid++;
		if (c == vars.valid_c[1])
			valid++;
		if (valid == 0)
		{
			ft_putstr("map error\n");
			ft_putstr("2\n");
			return (FALSE);
		}
		i++;
	}
	return (TRUE);
}

t_bool	row_valid(t_vars vars)
{
	int	row;

	row = 0;
	while (row < vars.size)
	{
		if ((ft_strlen(vars.map[row]) - 1) != vars.size)
		{
			ft_putstr("map error\n");
			ft_putstr("3\n");
			return (FALSE);
		}
		if (!only_valid_chars(vars, row))
			return (FALSE);
		if (!end_in_linebreak(vars, row))
			return (FALSE);
		row++;
	}
	return (TRUE);
}

t_bool	size_valid(t_vars vars)
{
	int	row;
	int	col;

	if (vars.size == 0)
	{
		ft_putstr("map error\n");
		ft_putstr("4\n");
		return (FALSE);
	}
	col = 0;
	row = 0;
	while (vars.map[row][col] != '\0')
	{
		while (vars.map[row][col] != '\n')
			col++;
		row++;
	}
	row--;
	if (row != vars.size)
	{
		ft_putstr("map error\n");
		ft_putstr("5\n");
		return (FALSE);
	}	
	return (TRUE);
}
