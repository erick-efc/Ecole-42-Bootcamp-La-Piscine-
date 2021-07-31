#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, sizeof(char));
}
