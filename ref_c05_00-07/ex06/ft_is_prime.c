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
