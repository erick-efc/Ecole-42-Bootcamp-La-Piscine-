#include <stdio.h>

char	*ft_strlcpy(char *dest, char *src, unsigned int n);

int	main(void)
{
	char		str1[11] = "Ola Camper";
	char		str2[11];

	printf("%lu\n", sizeof(str1));
	printf("%s\n", str1);
	ft_strlcpy(str2, str1, sizeof(str1));
	printf("%s\n", str2);
}
