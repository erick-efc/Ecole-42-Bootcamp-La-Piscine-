#include <string.h>
#include <stdio.h>

int	ft_strcmp(char *s1, char *s2);

int	main(void)
{
	const char *s1 = "iajIAjIJAD22";
	const char *s2 = "iajIAjIJAD22";
	char *s3 = "iajIAjIJAD22";
	char *s4 = "iajIAjIJAD22";

	printf("%s\n", s1);
	printf("%s\n", s2);
	printf("\n");
	printf("%d", strcmp(s1, s2));
	printf("\n");
	printf("%d", ft_strcmp(s3, s4));	
	printf("\n");
}
