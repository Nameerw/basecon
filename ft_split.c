/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namaloma <namaloma@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/01 15:56:18 by namaloma          #+#    #+#             */
/*   Updated: 2025/10/01 17:17:40 by namaloma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
int     ft_isspace(char c);
int     count_words(char *str);

char	*malloc_word(char *str)
{
	char *word;
	int i = 0;
	while (str[i] && !ft_isspace(str[i]))
		i++;
	word = (char *)malloc(sizeof(char) *(i +1));
	if (!word)
		return NULL;
	i = 0;
	while (str[i] && !ft_isspace(str[i]))
	{
		word[i] = str[i];
		i ++;
	}
	word[i] = '\0';
	return word;
}
int	ft_isspace(char c)
{
	return ((c >= 9 && c <= 13) || c == ' ');
}
int	count_words(char *str)
{
	int len = 0;
	while (*str)
	{
		while(*str && ft_isspace(*str))
		str++;
		if (*str && !ft_isspace(*str))
		{
			len ++;
			while(*str && !ft_isspace(*str))
                		str++;
		}
	}
	return len;
}

char	**ft_split(char *str)
{
	char	**splitted;
	splitted = (char **)malloc(sizeof(char *) * (count_words(str) + 1));
	if (!splitted)
		return NULL;
	int i = 0;
	while (*str)
	{
		while (*str && ft_isspace(*str))
			str++;
		if (*str && !ft_isspace(*str))
		{
			splitted[i] = malloc_word(str);
			if (!splitted[i])
				return NULL;
			i++;
			while (*str && !ft_isspace(*str))
				str++;
		}
	}
	splitted[i] = NULL;
	return splitted;

}
#include <stdio.h>
int main (){
	 char **arr;
    char *phrase = "   Hello,   Flavio\t Wuensche!  ";
    arr = ft_split(phrase);
    if (arr)  // Ensure the split was successful
    {
        for (int i = 0; arr[i]; i++)
            printf("%s\n", arr[i]);
        // Don't forget to free allocated memory (good practice):
        for (int i = 0; arr[i]; i++)
            free(arr[i]);
        free(arr);
    }
    return 0;;

}

