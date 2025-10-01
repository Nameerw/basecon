/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namaloma <namaloma@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/13 14:59:09 by namaloma          #+#    #+#             */
/*   Updated: 2025/09/14 17:32:26 by namaloma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb(int *comb, int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		ft_putchar(comb[i] + '0');
		i++;
	}
	if (comb[0] != (10 - n))
		write(1, ", ", 2);
}

void	ft_increment_comb(int *comb, int n)
{
	int	i;
	int	j;

	i = n - 1;
	while (i >= 0 && comb[i] == 9 - (n - 1 - i))
		i--;
	if (i < 0)
	{
		comb[0] = -1;
		return ;
	}
	comb[i]++;
	j = i + 1;
	while (j < n)
	{
		comb[j] = comb[j - 1] + 1;
		j++;
	}
}

void	ft_print_combn(int n)
{
	int	comb[10];
	int	i;

	if (n <= 0 || n >= 10)
		return ;
	i = 0;
	while (i < n)
	{
		comb[i] = i;
		i++;
	}
	while (comb[0] != -1)
	{
		ft_print_comb(comb, n);
		ft_increment_comb(comb, n);
	}
}
