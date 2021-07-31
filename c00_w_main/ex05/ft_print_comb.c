#include <unistd.h>

void	ft_print_comb(void);
void	ft_putchar_space(char i, char j, char k);

void	ft_print_comb(void)
{	
	char	i;
	char	j;
	char	k;

	i = '0';
	j = '1';
	k = '2';
	while (i <= '7')
	{
		j = i + 1;
		while (j <= '8')
		{	
			k = j + 1;
			while (k <= '9')
			{
				ft_putchar_space(i, j, k);
				k++;
			}
			j++;
		}
		i++;
	}
}

void	ft_putchar_space(char i, char j, char k)
{
	write(1, &i, 1);
	write(1, &j, 1);
	write(1, &k, 1);
	if (i != '7')
		write(1, ", ", 2);
}
