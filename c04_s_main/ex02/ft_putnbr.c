#include <unistd.h>
void	ft_putnbr(int nb);
int		set_div(int a);

void	ft_putnbr(int nb)
{
	int	div;
	int	c;

	if (nb == -2147483648)
	{
		write(1, "-2", 2);
		nb = 147483648;
	}
	if (nb < 0)
	{
		write(1, "-", 1);
		nb = -nb;
	}
	div = set_div(nb);
	while (div > 0)
	{
		c = (nb / div) + '0';
		write(1, &c, 1);
		nb = nb % div;
		div = div / 10;
	}
}

int	set_div(int a)
{
	int	div;

	div = 1;
	while (a >= 10)
	{
		a = a / 10;
		div = div * 10;
	}
	return (div);
}
