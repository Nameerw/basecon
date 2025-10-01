/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namaloma <namaloma@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/27 18:31:36 by namaloma          #+#    #+#             */
/*   Updated: 2025/09/28 13:10:01 by namaloma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	last;
	int	j;

	last = argc - 1;
	while (last > 0)
	{
		j = 0;
		while (argv[last][j])
		{
			write (1, &argv[last][j], 1);
			j ++;
		}
		write (1, "\n", 1);
		last --;
	}
	return (0);
}
