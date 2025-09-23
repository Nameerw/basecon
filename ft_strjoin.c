/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namaloma <namaloma@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/21 16:23:04 by namaloma          #+#    #+#             */
/*   Updated: 2025/09/23 18:06:35 by namaloma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i ++;
	}
	return (i);
}

char	*ft_copy(char **strs, char *str, int size, char *sep)
{
	int	i;
	int	j;
	int	k;

	i = -1;
	k = 0;
	while (++i < size)
	{
		j = 0;
		while (strs[i][j] != '\0')
		{
			str[k] = strs[i][j];
			j ++;
			k ++;
		}
		j = 0;
		while ((i < size - 1 && sep[j] != '\0'))
		{
			str[k] = sep[j];
			j ++;
			k ++;
		}
	}
	str[k] = '\0';
	return (str);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*s1;
	int		len;
	int		i;

	i = 0;
	len = 0;
	if (size == 0)
	{
		s1 = malloc (1);
		s1[0] = '\0';
		return (s1);
	}
	while (i < size)
	{
		len += ft_strlen(strs[i]);
		i ++;
	}
	len += ft_strlen(sep);
	s1 = (char *)malloc (len * sizeof(char));
	s1 = ft_copy (strs, s1, size, sep);
	return (s1);
}
/*
int main ()
{
	char *dd[] = {"Nameer", "typing!"};
	printf("%s\n", ft_strjoin(2, dd, "/\\"));
}*/
