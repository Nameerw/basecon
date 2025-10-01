/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namaloma <namaloma@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/14 18:22:05 by namaloma          #+#    #+#             */
/*   Updated: 2025/09/16 09:46:11 by namaloma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	fact;

	fact = 1;
	if (nb == 0 || nb == 1)
	{
		return (fact);
	}
	if (nb < 0)
	{
		return (0);
	}
	while (nb > 1)
	{
		fact *= nb;
		nb --;
	}
	return (fact);
}
