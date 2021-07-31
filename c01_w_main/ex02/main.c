#include <stdio.h>

void	ft_swap(int *a, int *b);

int	main(void)
{
	int a = 42;
	int b = 35;

	printf("a = %d, b = %d ", a, b);
	ft_swap(&a, &b);
	printf("a = %d, b = %d\n", a, b);

}