/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   only_z.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shaukkal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 14:00:38 by shaukkal          #+#    #+#             */
/*   Updated: 2022/07/21 14:01:57 by shaukkal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>

int	main(void)
{
	write (1, "z", 1);
	return (0);
}