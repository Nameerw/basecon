/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namaloma <namaloma@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/12 15:21:42 by namaloma          #+#    #+#             */
/*   Updated: 2025/09/12 17:03:45 by namaloma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_printcar(char nb1, char nb2, char nb3)
{
	write(1, &nb1, 1);
	write(1, &nb2, 1);
	write(1, &nb3, 1);
	if (!(nb1 == '7' && nb2 == '8' && nb3 == '9'))
		write (1, ", ", 2);
}

void	ft_print_comb(void)
{
	char	nb1;
	char	nb2;
	char	nb3;

	nb1 = '0';
	while (nb1 <= '7')
	{
		nb2 = nb1 + 1;
		while (nb2 <= '8')
		{
			nb3 = nb2 + 1;
			while (nb3 <= '9')
			{
				ft_printcar(nb1, nb2, nb3);
				nb3 ++;
			}
			nb2 ++;
		}
		nb1 ++;
	}
}
