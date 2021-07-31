void	ft_ultimate_div_mod(int *a, int *b);

void	ft_ultimate_div_mod(int *a, int *b)
{
	int		divisao;
	int		modulo;

	divisao = *a / *b;
	modulo = *a % *b;
	*a = divisao;
	*b = modulo;
}
