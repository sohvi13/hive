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

int	ft_strlen(char *src);

char	*ft_strcpy(char *src, char *dst)
{
	int	i;
	int	len;

	len = ft_strlen(src);
	i = 0;
	while (i <= len)
	{
		dst[i] = src[i];
		i++;
	}
	return (dst);
}
