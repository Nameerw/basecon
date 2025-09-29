/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namaloma <namaloma@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/29 14:09:02 by namaloma          #+#    #+#             */
/*   Updated: 2025/09/29 15:05:08 by namaloma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int		i;
	char				*cdest;

	cdest = dest;
	while (*cdest)
		cdest ++;
	i = 0;
	while (i < nb && src)
	{
		*cdest = *src;
		cdest++;
		src++;
		i++;
	}
	*cdest = '\0';
	return (dest);
}
