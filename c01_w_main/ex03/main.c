#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod);

int	main(void)
{
	int	x;
	int	y;
	int	divisao;
	int	modulo;

	x = 42;
	y = 24;
	ft_div_mod(x, y, &divisao, &modulo);
	printf("Divisão de %d por %d é = %d\n", x, y, divisao);
	printf("E seu módulo é = %d\n", modulo);
}
