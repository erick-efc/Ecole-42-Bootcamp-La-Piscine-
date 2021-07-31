#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);

int	main(void)
{
	char		str1[11] = "Ola Camper";
	char		str2[11];

	printf("%s\n", str1);
	ft_strncpy(str2, str1, 5);
	printf("%s\n", str2);
}
