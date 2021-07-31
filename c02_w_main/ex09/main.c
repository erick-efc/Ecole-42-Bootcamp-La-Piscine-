#include <stdio.h>

char	*ft_strcapitalize(char *str);

int	main(void)
{
	char		str1[] = "oLa muN4do ola Mundo";
	char		str2[] = "oala MuNDo";

	printf("%s", str1);
	printf("\n");
	printf("%s", str2);
	printf("\n");
	printf("%s\n", ft_strcapitalize(str1));
	printf("%s\n", ft_strcapitalize(str2));
}
