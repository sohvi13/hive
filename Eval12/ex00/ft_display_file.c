/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shaukkal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 20:26:45 by shaukkal          #+#    #+#             */
/*   Updated: 2022/07/14 21:00:57 by shaukkal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <fcntl.h>

void	ft_putstr(char *str);

void	ft_display_file(char **argv)
{
	int		function;
	int		ret;
	char	buf[4096];

	function = open(argv[1], O_RDONLY);
	ret = read(function, buf, 4096);
	while (ret != 0)
	{
		buf[ret] = '\0';
		ft_putstr(buf);
		ret = read(function, buf, 4096);
	}
	if (function == -1)
	{
		ft_putstr("open() error");
	}	
}

int	main(int argc, char **argv)
{
	if (argc < 2)
	{
		write(1, "File name missing.\n", 19);
		return (1);
	}
	else if (argc > 2)
	{
		write(1, "Too many arguments.\n", 20);
		return (2);
	}
	else if (argc == 2)
	{
		ft_display_file(argv);
		return (0);
	}
}
