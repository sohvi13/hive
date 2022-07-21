/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvuorenm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 10:13:36 by jvuorenm          #+#    #+#             */
/*   Updated: 2022/07/04 11:01:25 by jvuorenm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "bsq_header.h"

int		ft_strlen(char *src);

char	*ft_charcat(char src, char *dst)
{
	int		len;
	char	*new;

	len = ft_strlen(dst);
	new = malloc((sizeof(char) * len) + 2);
	new = ft_strcpy(dst, new);
	new[len] = src;
	new[len + 1] = '\0';
	return (new);
}
