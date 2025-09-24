/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   spliit.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namaloma <namaloma@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/24 16:44:05 by namaloma          #+#    #+#             */
/*   Updated: 2025/09/24 17:47:12 by namaloma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	len;

	while(*str)
		len ++;
	return (len);
}
int	ft_check_sep(char chk, char *charset)
{
	int	l;
	int	i;

	l = ft_strlen(charset);
	i = 0;
	while(i < charset[i])
	{
		if (chk == charset[i])
			return(1);
		i ++;
	}

}

int	ft_count_words(char *sen, char *split)
{
	int	i;
	int	len;
	int	j;
	int	found;

	i = 0;
	len = 0;
	while (sen[i])
	{
		found = 0;
		j = 0;
		while (split[j] && !found)
		{
			if (sen[i] == split[j])
				found = 1;
			j ++;
		}
		if (!found)
			len ++;
		i ++;
	}
	return (len);
}
char **ft_split(char *str, char *charset)
{
	char **splitted;
	int		i;
	int		j;

	i = 0;
	j = 0;
	splitted = (char **) malloc(sizeof(char *) * (count_words(str, charset) + 1))
	length = ft_strlen(str);
	while (i < length)
	{
		while (str[i])
		{
			if (ft_check_sep(str[i], charset))
				ft_add()
		}
	}

}
