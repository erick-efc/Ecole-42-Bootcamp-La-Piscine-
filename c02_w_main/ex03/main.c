#include <stdio.h>

int	ft_str_is_numeric(char *str);

int	main(void)
{
	char		str1[] = "12344";
	char		str2[] = "Te2st 2";
	char		str3[] = "";

	printf("%d\n", ft_str_is_numeric(str1));
	printf("%d\n", ft_str_is_numeric(str2));
	printf("%d\n", ft_str_is_numeric(str3));
}

