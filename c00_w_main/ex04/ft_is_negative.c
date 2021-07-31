#include <unistd.h>

void	ft_is_negative(int n);

void	ft_is_negative(int n)
{
	char	c;
	char	b;

	c = 'P';
	b = 'N';
	if (n >= 0)
	{
		write(1, &c, 1);
	}
	else
	{
		write(1, &b, 1);
	}
}
