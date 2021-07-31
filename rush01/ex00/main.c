#include <unistd.h>

void	ft_print_solution(char arr[4][4]);
char	*ft_get_argv(char *argv[], char arr[16]);
void	checker(char rules[16], char arr_ans[4][4]);

int	main(int argc, char *argv[])
{
	char	rules[16]; 
	char	arr_ans[4][4];

	if (argc == 2)
	{
		ft_get_argv(argv, rules);
		checker(rules, arr_ans);
		ft_print_solution(arr_ans);
	}
	else
		write(1, "Too few arg\n", 12);
	return (0);
}

