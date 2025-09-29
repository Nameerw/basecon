/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namaloma <namaloma@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/29 13:17:10 by namaloma          #+#    #+#             */
/*   Updated: 2025/09/29 14:07:05 by namaloma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	char	*cdest;

	cdest = dest;
	while (*cdest)
		cdest ++;
	while (*src)
	{
		*cdest = *src;
		cdest++;
		src++;
	}
	*cdest = '\0';
	return (dest);
}
