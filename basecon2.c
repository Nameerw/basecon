// Simple strlen
int	ft_strlen(char *str)
{
	int i = 0;
	while (str[i])
		i++;
	return (i);
}

// Returns number of characters needed to represent number in base
int	ft_digit_places(int nbr, char *base)
{
	int	len = 0, b_len = ft_strlen(base);
	long n = nbr;

	if (n <= 0)
	{
		n = -n;
		len++;  // for '-' or '0'
	}
	while (n)
	{
		n /= b_len;
		len++;
	}
	return (len);
}

// Converts decimal to given base, stores in `converted`
void	ft_putnbr_base(int nbr, char *base, char *converted)
{
	int		b_len = ft_strlen(base);
	long	n = nbr;
	int		len = ft_digit_places(nbr, base);

	converted[len--] = '\0';
	if (n < 0)
	{
		converted[0] = '-';
		n = -n;
	}
	if (n == 0)
		converted[0] = base[0];
	while (n > 0)
	{
		converted[len--] = base[n % b_len];
		n /= b_len;
	}
}

