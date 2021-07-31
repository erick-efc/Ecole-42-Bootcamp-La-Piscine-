#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size);

int	main(void)
{
	int	a[] = {41, 22, 23236, 532320, 99883, 72, 14};
	int	i;

	i = 0;
	ft_sort_int_tab(a, 7);
	while (i < 7)
	{
		printf("%d ", a[i]);
		i++;
	}
	printf("\n");
}
