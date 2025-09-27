/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namaloma <namaloma@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/24 09:49:47 by namaloma          #+#    #+#             */
/*   Updated: 2025/09/27 16:25:53 by namaloma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	is_separator(char c, char *sep)
{
	int	i;

	i = 0;
	while (sep[i])
	{
		if (c == sep[i])
			return (1);
		i ++;
	}
	return (0);
}

int	count_word(char *str, char *sep)
{
	int	i;
	int	words;

	i = 0;
	words = 0;
	while (str[i])
	{
		if (!is_separator(str[i], sep))
		{
			words ++;
			while (str[i] && !is_separator(str[i], sep))
				i ++;
		}
		else
			i ++;
	}
	return (words);
}

char	*word_splitter(char *str, char *sep)
{
	char	*word;
	int		i;

	i = 0;
	while (str[i] && !is_separator(str[i], sep))
		i ++;
	word = (char *)malloc(sizeof(char) * (i + 1));
	if (word == NULL)
		return (NULL);
	i = 0;
	while (str[i] && !is_separator(str[i], sep))
	{
		word[i] = str[i];
		i ++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(char *str, char *charset)
{
	char	**splitted;
	int		i;
	int		j;

	i = -1;
	j = 0;
	if (str == NULL || charset == NULL)
		return (NULL);
	splitted = (char **)malloc(sizeof(char *) * (count_word(str, charset) + 1));
	if (splitted == NULL)
		return (NULL);
	while (str[++i])
	{
		if (!is_separator(str[i], charset))
		{
			splitted[j] = word_splitter(&str[i], charset);
			if (splitted[j] == NULL)
				return (NULL);
			while (str[i] && !is_separator(str[i], charset))
				i++;
			j++;
		}
	}
	splitted[j] = NULL;
	return (splitted);
}
