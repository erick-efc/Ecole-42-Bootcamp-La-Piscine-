#include <stdio.h>

void	ft_ft(int *nbr);

int	main(void)
{
	int	a;
	
	a = 77;
	ft_ft(&a);
	printf("%d\n", a);
}