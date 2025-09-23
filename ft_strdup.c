/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namaloma <namaloma@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/20 17:38:19 by namaloma          #+#    #+#             */
/*   Updated: 2025/09/20 18:01:35 by namaloma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*dsrc;
	int		i;
	int		length;

	length = 0;
	while (src[length])
		length ++;
	dsrc = (char *)malloc(sizeof (char) * length + 1);
	if (dsrc == NULL)
		return (NULL);
	i = 0;
	while (i < length)
	{
		dsrc[i] = src[i];
		i ++;
	}
	dsrc[i] = '\0';
	return (dsrc);
}
