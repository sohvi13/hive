/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvuorenm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 10:13:36 by jvuorenm          #+#    #+#             */
/*   Updated: 2022/07/20 23:42:45 by shaukkal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "bsq_header.h"

t_vars	setup_map(t_vars vars)
{
	vars = get_size(vars, vars.map[0]);
	vars.valid_c = get_valid_chars(vars.map[0]);
	vars = remove_first_line(vars);
	return (vars);
}

t_vars	init_vars(t_vars vars)
{
	vars.size = 0;
	vars.valid_c = "xxx";
	vars.square_x = 0;
	vars.square_y = 0;
	vars.largest = 0;
	vars.err = 0;
	return (vars);
}

void	free_memory(t_vars vars)
{
	int	i;

	i = 0;
	while (i < vars.size)
	{
		free(vars.map[i]);
		i++;
	}
	free(vars.map);
}

char	*get_valid_chars(char *map)
{
	int		i;
	char	*valid_chars;

	valid_chars = malloc(sizeof(char) * 5);
	i = 0;
	while (map[i] != '\0')
	{
		if ((int) map[i] > 57 || ((int) map[i] > 31 && (int) map[i] < 48))
			valid_chars = ft_charcat(map[i], valid_chars);
		i++;
	}
	return (valid_chars);
}
