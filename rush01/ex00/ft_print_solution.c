void	ft_print_solution(char arr[4][4]);
void	ft_putchar(char c);

void	ft_print_solution(char arr[4][4])
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < 4)
	{
		while (j < 4)
		{
			ft_putchar(arr[j][i] + '0');
			ft_putchar(' ');
			j++;
		}
		ft_putchar('\n');
		j = 0;
		i++;
	}
}
