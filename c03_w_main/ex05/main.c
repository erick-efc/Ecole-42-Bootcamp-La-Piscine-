#include <string.h>
#include <stdio.h>
//unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);

int	main(void)
{
	char s1[20] = "Ola";
	const char s2[20] = " mundo";
	char s3[20] = " novo";
	
	printf("%u\n", strlcat(s1, s2, 3));
	printf("%u\n", strlcat(s1, s3, 2));
	printf("%u\n", ft_strlcat(s1, (char*)(s2), 3));
	printf("%u\n", ft_strlcat(s1, s3, 2));
}
