#include <stdlib.h>

// Prototypes from ft_convert_base2.c
int		ft_digit_places(int nbr, char *base);
void	ft_putnbr_base(int nbr, char *base, char *converted_str);

// Validate the base and return its length, or 0 if invalid
int	ft_check_base(char *str)
{
	int i = 0, j;

	if (!str[0] || !str[1])
		return (0);
	while (str[i])
	{
		if (str[i] <= 32 || str[i] == 127 || str[i] == '+' || str[i] == '-')
			return (0);
		j = i + 1;
		while (str[j])
			if (str[i] == str[j++])
				return (0);
		i++;
	}
	return (i);
}

// Returns index of char in base, or -1 if not found
int	ft_base_match(char c, char *base)
{
	for (int i = 0; base[i]; i++)
		if (c == base[i])
			return (i);
	return (-1);
}

// Skips whitespaces and sign, returns start index, updates sign via pointer
int	ft_pre_digits(char *str, int *ptr_sign)
{
	int i = 0, sign = 1;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;
	while (str[i] == '+' || str[i] == '-')
		sign *= (str[i++] == '-') ? -1 : 1;
	*ptr_sign = sign;
	return (i);
}

// Converts from base to integer (base 10)
int	ft_atoi_base(char *str, char *base)
{
	int i = 0, sign = 1, result = 0, b_len = ft_check_base(base), val;

	if (b_len < 2)
		return (0);
	i = ft_pre_digits(str, &sign);
	while ((val = ft_base_match(str[i++], base)) != -1)
		result = result * b_len + val;
	return (sign * result);
}

// Converts number from one base to another
char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		decimal, len;
	char	*converted;

	if (ft_check_base(base_from) < 2 || ft_check_base(base_to) < 2)
		return (0);
	decimal = ft_atoi_base(nbr, base_from);
	len = ft_digit_places(decimal, base_to);
	if (!(converted = malloc(len + 1)))
		return (0);
	ft_putnbr_base(decimal, base_to, converted);
	converted[len] = '\0';
	return (converted);
}

