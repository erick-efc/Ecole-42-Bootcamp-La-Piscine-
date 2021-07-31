void	ft_redefine_arr(char arr[4][4]);

void	ft_redefine_arr(char arr[4][4])
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (j < 4)
	{
		i = 0;
		while (i < 4)
		{
			arr[j][i] = 0;
			i++;
		}
		j++;
	}
}
