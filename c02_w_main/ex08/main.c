#include <stdio.h>

char	*ft_strlowcase(char *str);

int	main(void)
{
	char		str1[] = "OLA MUNDO";
	char		str2[] = "oLa MuNdo";

	printf("%s", str1);
	printf("\n");
	printf("%s", str2);
	printf("\n");
	printf("%s\n", ft_strlowcase(str1));
	printf("%s\n", ft_strlowcase(str2));
}
