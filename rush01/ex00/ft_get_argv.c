#include <unistd.h>
char	*ft_get_argv(char *argv[], char arr[16]);

char	*ft_get_argv(char *argv[], char arr[16])
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (argv[1][i] != '\0')
	{
		if (argv[1][i] >= '1' && argv[1][i] <= '4')
		{
			arr[j] = argv[1][i] - '0'; // arr[232232324123]
			j++;
		}
		else if (argv[1][i] != ' ')
			write(1, "Erro\n", 5);
		i++;
	}
	return (arr);
}
