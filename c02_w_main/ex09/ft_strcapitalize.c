char	*ft_strcapitalize(char *str);
int		ft_a_z_9(char c);


char	*ft_strcapitalize(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		while (str[i] && !ft_a_z_9(str[i]))
			i++;
		if (str[i] && ((str[i] >= 'a') && (str[i] <= 'z')))
			str[i] = (str[i] - 32);
		i++;
		while (str[i] && ft_a_z_9(str[i]))
		{
			if ((str[i] >= 'A') && (str[i] <= 'Z'))
				str[i] = (str[i] + 32);
			i++;
		}
	}
	return (str);
}

int	ft_a_z_9(char c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	if (c >= 'A' &&  c <= 'Z')
		return (1);
	if (c >= '0' &&  c <= '9')
		return (1);
	return (0);
}
