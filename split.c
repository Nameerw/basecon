/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namaloma <namaloma@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/24 10:36:48 by namaloma          #+#    #+#             */
/*   Updated: 2025/09/24 16:43:50 by namaloma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char	**split(char *string,char *seperators, int count)
{
	int len = strlen(string);
	*count = 0;
	int i = 0;
	while (i < len)
	{
		while (i < len)
		{
			if (strchr(seperators, string[i] == NULL))
				break;
			i ++;
		}
		int old_i = i;
		while (i < len)
		{
			if (strchr(seperators, string[i]) != NULL)
				break;
			i ++;
		}
		if (i > old_i)
			*count = *count + 1;
	}
	char **string = malloc(sizeof(char *) * *count)
	i = 0;
	char buffer[16384];
	int string_index = 0;
        while (i < len)
        {
                while (i < len)
                {
                        if (strchr(seperators, string[i] == NULL))
                                break;
                        i ++;
                }
                int j = 0;
                while (i < len)
                {
                        if (strchr(seperators, string[i]) != NULL)
                                break;
			buffer[j] = string[i];
                        i ++;
			j ++;
                }
		buffer[j] = char	*s1;
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
		len += ft_strlen(st'\0';
		int to_allocate = sizeof(char) * (strlen(buffer) + 1);
                if (i > old_i)
                        *count = *count + 1;
        }

}
