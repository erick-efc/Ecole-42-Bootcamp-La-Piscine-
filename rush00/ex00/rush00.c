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
	const char	a = 'o';
	const char	b = '-';
	const char	c = '|';

	if ((column == 0 || column == x - 1) && (row == 0 || row == y - 1))
	{
		ft_putchar(a);
	}
	else if (column == 0 || column == x - 1)
	{
		ft_putchar(c);
	}
	else
	{
		ft_putchar(b);
	}
}
