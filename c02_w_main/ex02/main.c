#include <stdio.h>

int	ft_str_is_alpha(char *str);

int	main(void)
{
	char		str1[] = "OlaCamper";
	char		str2[] = "Te2st 2";
	char		str3[] = "";

	printf("%d\n", ft_str_is_alpha(str1));
	printf("%d\n", ft_str_is_alpha(str2));
	printf("%d\n", ft_str_is_alpha(str3));
}

