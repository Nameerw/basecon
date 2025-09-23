/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namaloma <namaloma@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/20 18:06:23 by namaloma          #+#    #+#             */
/*   Updated: 2025/09/21 09:33:29 by namaloma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*rng;
	int	i;
	int	size;

	if (min >= max)
		return (NULL);
	size = max - min;
	rng = (int *)malloc(sizeof(int) * size);
	if (!rng)
		return (NULL);
	i = 0;
	while (i < size)
	{
		rng[i] = min + i;
		i ++;
	}
	return (rng);
}
