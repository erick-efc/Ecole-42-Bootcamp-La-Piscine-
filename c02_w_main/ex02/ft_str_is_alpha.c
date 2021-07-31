int	ft_str_is_alpha(char *str);
int	ft_a_z(char c);

int	ft_str_is_alpha(char *str)
{
	int		i;

	if (*str == 0)
		return (1);
	i = 0;
	while (str[i])
	{
		if (!ft_a_z(str[i]))
			return (0);
		i++;
	}
	return (1);
}

int	ft_a_z(char c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' &&  c <= 'Z'))
		return (1);
	return (0);
}
