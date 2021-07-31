#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		write(1, str, 1);
		str++;
	}
}

int	main(int argc, char *argv[])
{
	int	control;

	control = argc;
	argc = 2;
	while (argc <= control)
	{
		ft_putstr(argv[argc - 1]);
		ft_putstr("\n");
		argc++;
	}
	return (0);
}
