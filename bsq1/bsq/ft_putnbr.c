/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvuorenm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 15:37:06 by jvuorenm          #+#    #+#             */
/*   Updated: 2022/07/04 15:37:15 by jvuorenm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);
void	handle_minimum(char *str, int i);

void	ft_putnbr(int nb)
{
	char	*str;
	int		i;

	i = 0;
	str = "-2147483648";
	if (nb == -2147483648)
	{
		handle_minimum(str, i);
	}
	else
	{
		if (nb < 0)
		{
			ft_putchar('-');
			nb = nb * -1;
		}
		if (nb > 9)
		{
			ft_putnbr(nb / 10);
		}
		ft_putchar('0' + (nb % 10));
	}
}

void	handle_minimum(char *str, int i)
{
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}	
}
