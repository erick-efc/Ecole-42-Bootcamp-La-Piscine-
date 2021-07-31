#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b);

int	main(void)
{
	int	x;
	int	y;

	x = 42;
	y = 24;
	ft_ultimate_div_mod(&x, &y);
	printf("Divisão de 42 por 24 é %d\n", x);
	printf("E seu módulo é = %d\n", y);
}
