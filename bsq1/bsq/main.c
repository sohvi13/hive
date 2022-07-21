/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvuorenm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 10:13:36 by jvuorenm          #+#    #+#             */
/*   Updated: 2022/07/20 17:48:37 by shaukkal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <errno.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include "bsq_header.h"
#include <stdio.h>
#define BUFF_SIZE 4096

int	main(int argc, char **argv)
{
	int		map_count;
	t_vars	vars;

	vars.size = 0;
	map_count = argc;
	if (argc == 1)
	{
		handle_stdin(vars);
		return (1);
	}
	handle_files(vars, map_count, argv);
	return (0);
}

int	handle_stdin(t_vars vars)
{
	vars = init_vars(vars);
	vars = read_stdin(vars);
	vars = setup_map(vars);
	if (vars.err == -1)
		return (0);
	if (validate_map(vars))
	{
		vars = find_largest_square(vars);
	}
	return (0);
}

int	handle_files(t_vars vars, int map_count, char **argv)
{
	int	i;

	i = 0;
	while (i < map_count)
	{
		vars = init_vars(vars);
		vars = init_map(vars);
		if (vars.err == -1)
		{
			ft_putstr("Malloc failed with map initialization. Restarting.");
			continue ;
		}
		vars.map = read_map(argv[1], vars.map);
		vars = setup_map(vars);
		if (vars.err == -1)
			return (0);
		if (validate_map(vars))
		{
			vars = find_largest_square(vars);
		}
		i++;
	}
	return (0);
}

t_vars	read_stdin(t_vars vars)
{
	char	buffer[BUFF_SIZE + 1];
	int		i;

	vars.map = malloc(sizeof(char *) * BUFF_SIZE);
	vars.map = allocate_memory(vars.map, BUFF_SIZE);
	i = 0;
	while (ft_fgets(buffer, BUFF_SIZE, 0))
	{
		ft_strcpy(buffer, vars.map[i]);
		i++;
	}
	return (vars);
}

int	read_multiple_maps(char **files)
{
	int		i;
	char	*name;

	name = files[0];
	ft_putstr(name);
	i = 0;
	files = files + 1;
	while (files[i])
	{
		i++;
	}
	return (0);
}
