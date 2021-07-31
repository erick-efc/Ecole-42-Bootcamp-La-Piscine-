#include <stdio.h>

char	*ft_strcpy(char *dest, char *src);

int	main(void)
{
	char	str1[11] = "Ola Camper";
	char	str2[11];

	printf("%s\n", str1);
	ft_strcpy(str2, str1);
	printf("%s\n", str2);
}
