int	ft_atoi(char *str);

int	ft_atoi(char *str)
{
	int	i;
	int	value;
	int	signal;

	i = 0;
	signal = 1;
	value = 0;
	if ((str[i] >= '\t' && str[i] <= '\r') || str[i] == ' ')
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			signal *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		value = (str[i] - '0') + (value * 10);
		i++;
	}
	return (value * signal);
}
