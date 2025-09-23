/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namaloma <namaloma@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/23 15:20:02 by namaloma          #+#    #+#             */
/*   Updated: 2025/09/23 17:19:18 by namaloma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		ft_digit_places(int nbr, char *base, int i);
void	ft_putnbr_base(int nbr, char *base, char *converted_str);

int	ft_check_base(char *str)
{
	int	i;
	int	j;

	i = 0;
	if (str[0] == '\0' || str[1] == '\0')
		return (0);
	while (str[i])
	{
		if (str[i] <= 32 || str[i] == 127 || str[i] == '+' || str[i] == '-')
			return (0);
		j = i + 1;
		while (str[j])
		{
			if (str[i] == str[j])
				return (0);
			j ++;
		}
		i ++;
	}
	return (i);
}

int	ft_base_match(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (c == base[i])
			return (i);
		i ++;
	}
	return (-1);
}

int	ft_pre_digits(char *str, int *ptr_sign)
{
	int	sign;
	int	i;

	sign = 1;
	i = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i ++;
	while (str[i] && (str[i] == '+' || str[i] == '-'))
	{
		if (str[i] == '-')
			sign *= -1;
		i ++;
	}
	*ptr_sign = sign;
	return (i);
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	sum;
	int	sign;
	int	base_size;

	sign = 1;
	sum = 0;
	base_size = ft_check_base(base);
	if (base_size >= 2)
	{
		i = ft_pre_digits(str, &sign);
		while (ft_base_match(str[i], base) != -1)
		{
			sum = (sum * base_size) + ft_base_match(str[i], base);
			i ++;
		}
		return (sign * sum);
	}
	return (0);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	char	*converted;
	int		decimal;
	int		i;

	if (ft_check_base(base_from) == 0 || ft_check_base(base_to) == 0)
		return (0);
	decimal = ft_atoi_base(nbr, base_from);
	i = ft_digit_places(decimal, base_to, 0);
	converted = (char *)malloc(sizeof(char) * (i + 1));
	if (converted == NULL)
		return (0);
	ft_putnbr_base(decimal, base_to, converted);
	converted[i] = '\0';
	return (converted);
}
/*
int main (void)
{
	char *nbr = " -5A";
	char *base_from = "0123456789ABCDEF";
	char *base_to = "0123456789";
	printf("%s", ft_convert_base(nbr, base_from, base_to));
	return (0);
}*/
