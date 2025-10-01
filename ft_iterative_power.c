/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namaloma <namaloma@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/15 12:39:28 by namaloma          #+#    #+#             */
/*   Updated: 2025/09/15 14:56:32 by namaloma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	result;
	int	i;

	result = 1;
	i = 0;
	if (nb == 0 && power == 0)
		return (1);
	if (power < 0)
	{
		return (0);
	}
	while (i < power)
	{
		result *= nb;
		i ++;
	}
	return (result);
}
