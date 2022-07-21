/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shaukkal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 19:07:32 by shaukkal          #+#    #+#             */
/*   Updated: 2022/07/04 20:10:28 by shaukkal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_putchar(char c);

void	ft_putnbr(int nb)
{
    if (nb == -2147483648)
    {
        ft_putnbr(214748364 * -1);
        ft_putnbr(+8);
    }
    else if (nb < 0)
    {
    ft_putchar('-');
    ft_putnbr(nb * -1);
    }
    else if (nb > 9)
    {
    ft_putnbr(nb / 10);
    ft_putnbr(nb % 10);
    }
    else
    ft_putchar(nb + '0');
}