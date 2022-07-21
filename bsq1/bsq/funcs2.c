/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvuorenm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 10:13:36 by jvuorenm          #+#    #+#             */
/*   Updated: 2022/07/20 23:24:41 by shaukkal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "bsq_header.h"
#include <errno.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include "bsq_header.h"
#include <stdio.h>
#define BUFF_SIZE 4096

char	**read_map(char *file, char **map)
{
	int		fd;
	char	buffer[BUFF_SIZE + 1];
	int		i;

	fd = open(file, O_RDONLY);
	if (fd == -1)
	{
		ft_putstr("map error\n");
	}
	i = 0;
	while (ft_fgets(buffer, BUFF_SIZE, fd))
	{
		ft_strcpy(buffer, map[i]);
		i++;
	}
	if (close(fd) == -1)
	{
		ft_putstr("map error\n");
	}
	return (map);
}

t_vars	allocate_int_arr(t_vars vars)
{
	int	i;

	i = 0;
	while (i <= vars.size)
	{
		vars.arr[i] = malloc((sizeof(int) * vars.size) + 1);
		i++;
	}
	return (vars);
}

t_vars	init_map(t_vars vars)
{
	vars.map = malloc((sizeof(char) * (BUFF_SIZE * BUFF_SIZE)));
	vars = is_map_set(vars);
	if (vars.err == -1)
		return (vars);
	vars.map = allocate_memory(vars.map, BUFF_SIZE);
	return (vars);
}

t_vars	is_map_set(t_vars vars)
{
	if (!vars.map)
	{
		ft_putstr("map error\n");
		vars.err = -1;
		return (vars);
	}
	return (vars);
}

t_vars	get_size(t_vars vars, char *map)
{
	int		i;
	char	*num;

	num = malloc(sizeof(char) * 9);
	i = 0;
	while ((int) map[i] > 47 && (int) map[i] < 58)
	{
		num = ft_charcat(map[i], num);
		i++;
	}
	vars.size = ft_atoi(num);
	return (vars);
}
