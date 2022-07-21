/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shaukkal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 12:06:52 by shaukkal          #+#    #+#             */
/*   Updated: 2022/07/06 13:08:42 by shaukkal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void    ft_putchar(char c);

void	ft_putstr(char *str)
{
	int index;
    
	index = 0;
    while (str[index] != '\0')
    {
        ft_putchar(str[index]);
		++index;
    }
}
