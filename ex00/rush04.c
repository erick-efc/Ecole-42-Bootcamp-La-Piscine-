void	ft_putchar(char c);
void	print_char(int x, int y, int column, int row);

void	rush(int x, int y)
{
	int	i;
	int	j;

	i = 0;
	while (i < y)
	{
		j = 0;
		while (j < x)
		{
			if ((i == 0 || i == y - 1) || (j == 0 || j == x - 1))
			{
				print_char(x, y, j, i);
			}
			else
			{
				ft_putchar(' ');
			}
			++j;
		}
		ft_putchar('\n');
		++i;
	}
}

void	print_char(int x, int y, int column, int row)
{
	const char	a = 'A';
	const char	b = 'B';
	const char	c = 'C';

	if ((row == 0 && column == 0))
	{
		ft_putchar(a);
	}
	else if ((row == y - 1 && column == x - 1) && (row > 0 && column > 0))
	{
		ft_putchar(a);
	}
	else if ((row == 0 && column == x - 1) || (row == y - 1 && column == 0))
	{
		ft_putchar(c);
	}
	else
	{
		ft_putchar(b);
	}
}
