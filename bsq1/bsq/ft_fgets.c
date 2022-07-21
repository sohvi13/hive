/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fgets.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvuorenm <jvuorenm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 18:29:57 by jvuorenm          #+#    #+#             */
/*   Updated: 2022/07/16 19:17:05 by jvuorenm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

char	*ft_fgets(char str[], int bytes, int stream)
{
	int		i;
	char	t;

	i = 0;
	t = 0;
	if (bytes <= 0)
		return (str);
	while (i < bytes - 1 && ((read(stream, &t, 1)) != 0))
	{
		str[i++] = t;
		if (t == '\n')
			break ;
	}
	str[i] = '\0';
	if (i > 0)
	{
		return (str);
	}
	else
	{
		return (NULL);
	}
}
