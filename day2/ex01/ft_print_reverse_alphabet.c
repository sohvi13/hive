/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shaukkal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 14:02:08 by shaukkal          #+#    #+#             */
/*   Updated: 2022/06/30 22:46:42 by shaukkal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_reverse_alphabet(void)
{
	char	letter;

	letter = 'a';
	while (letter <= 'z')
	{
		ft_putchar(letter);
		letter--;
	}
	ft_putchar('\n');
}
