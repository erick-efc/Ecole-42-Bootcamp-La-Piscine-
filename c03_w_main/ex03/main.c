#include <string.h>
#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb);

int	main(void)
{
	char s1[4] = "Ola";
	const char s2[7] = " mundo";
	char s3[4] = "Ola";
	const char s4[7] = " mundo";

	unsigned int a = 4;	
	
	printf("======%s======\n", strncat(s1, s2, a));
	printf("Size of strcat(s1): %lu\n", sizeof(s1));
	printf("Len of strcat(s1): %lu\n", strlen(s1));
	printf("======%s======\n", ft_strncat(s3,(char *)(s4), a));
	printf("Size ft_: %lu\n", sizeof(s3));
	printf("Len ft_: %lu\n", strlen(s3));

}
