#include <stdio.h>

int	ft_str_is_uppercase(char *str);

int	main(void)
{
	char		str1[] = "HAHAHAHA";
	char		str2[] = "UAHUAhUAhUAH";
	char		str3[] = "";

	printf("%d\n", ft_str_is_uppercase(str1));
	printf("%d\n", ft_str_is_uppercase(str2));
	printf("%d\n", ft_str_is_uppercase(str3));
}

