/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shaukkal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 20:52:00 by shaukkal          #+#    #+#             */
/*   Updated: 2022/07/07 09:53:21 by shaukkal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int ft_strcmp(char *s1, char *s2)
{
	int	answer;
    answer = 0;
    
	while( s2[answer] != '\0' || s1[answer] != '\0')
    {
        if (s1[answer] < s2[answer])
        {
            return(-1);
        }
    else if (s1[answer] > s2[answer])
    {
        return(1);
    }
        answer++;
    }
    return(0);
}
