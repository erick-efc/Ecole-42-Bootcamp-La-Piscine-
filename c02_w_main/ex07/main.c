#include <stdio.h>

char	*ft_strupcase(char *str);

int	main(void)
{
	char		str1[] = "ola mundo";
	char		str2[] = "oLa MuNdo";

	printf("%s", str1);
	printf("\n");
	printf("%s", str2);
	printf("\n");
	printf("%s\n", ft_strupcase(str1));
	printf("%s\n", ft_strupcase(str2));
}
