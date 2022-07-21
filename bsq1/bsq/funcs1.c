/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs1.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvuorenm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 10:13:36 by jvuorenm          #+#    #+#             */
/*   Updated: 2022/07/20 23:38:02 by shaukkal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "bsq_header.h"

void	print_map(t_vars vars)
{
	int	i;

	i = 0;
	while (i < vars.size)
	{
		ft_putstr(vars.map[i]);
		i++;
	}
}

void	print_ints(t_vars vars)
{
	int	i;
	int	k;

	i = 0;
	while (i < vars.size)
	{
		k = 0;
		while (k < vars.size)
		{
			ft_putnbr(vars.arr[i][k]);
			k++;
		}
		ft_putstr("\n");
		i++;
	}
}

char	**allocate_memory(char **map, int size_given)
{
	int	i;

	i = 0;
	while (i <= size_given)
	{
		map[i] = (char *) malloc((sizeof(char) * size_given) + 1);
		if (!map[i])
			return (map);
		i++;
	}
	return (map);
}

t_vars	remove_first_line(t_vars vars)
{
	int		i;
	char	**new;

	i = 1;
	if (!size_valid(vars))
	{
		vars.err = -1;
		return (vars);
	}
	new = malloc(((vars.size * vars.size) * sizeof(char)));
	if (!new)
	{
		vars.err = -1;
		return (vars);
	}
	new = allocate_memory(new, vars.size);
	while (i <= vars.size)
	{
		ft_strcpy(vars.map[i], new[i - 1]);
		i++;
	}
	vars.map = new;
	return (vars);
}
