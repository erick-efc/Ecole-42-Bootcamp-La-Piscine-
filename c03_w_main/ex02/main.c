#include <string.h>
#include <stdio.h>

char	*ft_strcat(char *dest, char *src);

int	main(void)
{
	char s1[20] = "Ola";
	const char s2[20] = " mundo";
	char s3[20] = " novo";
	
	// printf("%s\n", strcat(s1, s2));
	// printf("%s\n", strcat(s1, s3));
	// printf("%d\n", s1[15]);
	printf("%s\n", ft_strcat(s1, (char*)(s2)));
	printf("%s\n", ft_strcat(s1, s3));
	printf("%d\n", s1[15]);
}
