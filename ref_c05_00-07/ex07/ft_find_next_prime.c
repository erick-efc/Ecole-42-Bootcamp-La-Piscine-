int	ft_is_prime(int nb)
{
	int	i;
	int	m;

	i = 2;
	m = nb / 2;
	if (nb < 2)
		return (0);
	while (i <= m)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int	i;

	i = 0;
	if (nb == 2147483647)
		return (nb);
	while ((i == ft_is_prime(nb)) && nb < 2147483647)
		nb++;
	return (nb);
}
