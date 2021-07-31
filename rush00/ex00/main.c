void	rush(int x, int y);
int		ft_atoi(char *str);
int		check_signal(char signal);

int	main(int argc, char *argv[])
{
	int	row;
	int	column;

	row = 0;
	column = 1;
	if (argc == 3)
	{
		column = ft_atoi(argv[1]);
		row = ft_atoi(argv[2]);
	}
	rush(column, row);
	return (0);
}

int	ft_atoi(char *str)
{
	char	*p;
	int		value;
	int		base;
	int		signal;

	value = 0;
	base = 1;
	signal = check_signal(*str);
	if (signal)
		++str;
	p = str;
	while (*p != '\0' && (*p >= '0' && *p <= '9'))
		++p;
	--p;
	while (p >= str)
	{
		value = value + base * (*p - '0');
		base = base * 10;
		--p;
	}
	if (signal)
		return (value * signal);
	return (value);
}

int	check_signal(char signal)
{
	if (signal == '-')
	{
		return (-1);
	}
	else if (signal == '+')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
