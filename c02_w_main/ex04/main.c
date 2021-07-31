#include <stdio.h>

int	ft_str_is_lowercase(char *str);

int	main(void)
{
	char		str1[] = "hahahah";
	char		str2[] = "UAHUAhUAhUAH";
	char		str3[] = "";

	printf("%d\n", ft_str_is_lowercase(str1));
	printf("%d\n", ft_str_is_lowercase(str2));
	printf("%d\n", ft_str_is_lowercase(str3));
}

