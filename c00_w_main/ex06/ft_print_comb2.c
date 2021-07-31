#include <unistd.h>

void	ft_print_comb2(void);
void	ft_spare_n_print(int a);

void	ft_print_comb2(void)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < 99)
	{
		j = i + 1;
		while (j < 100)
		{
			ft_spare_n_print(i);
			write(1, " ", 1);
			ft_spare_n_print(j);
			if (i == 98 && j == 99)
				break ;
			write(1, ",", 1);
			write(1, " ", 1);
			j++;
		}
		i++;
	}
}

void	ft_spare_n_print(int a)
{
	char	uni;
	char	ten;

	if (a > 9 && a < 100)
	{
		uni = (a % 10) + '0';
		ten = (a / 10) + '0';
		write(1, &ten, 1);
		write(1, &uni, 1);
	}
	else
	{
		write(1, "0", 1);
		uni = a % 10 + '0';
		write(1, &uni, 1);
	}
}
