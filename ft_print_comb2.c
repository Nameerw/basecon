/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namaloma <namaloma@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/13 11:01:35 by namaloma          #+#    #+#             */
/*   Updated: 2025/09/13 14:53:10 by namaloma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print(char ch)
{
	write (1, &ch, 1);
}

void	ft_print_comb2(void)
{
	int	nb1;
	int	nb2;

	nb1 = -1;
	while (nb1 ++ < 98)
	{
		nb2 = nb1;
		while (nb2 ++ < 99)
		{
			ft_print((nb1 / 10) + '0');
			ft_print((nb1 % 10) + '0');
			ft_print(' ');
			ft_print((nb2 / 10) + '0');
			ft_print((nb2 % 10) + '0');
			if (nb1 != 98)
			{
				ft_print(',');
				ft_print(' ');
			}
		}
	}
}
