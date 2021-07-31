void	ft_populate_rules(char arr_t[], char arr1[2][4], char arr2[2][4]);

void	ft_populate_rules(char arr_t[], char arr1[2][4], char arr2[2][4])
{
	int		i;

	i = 0;
	while (i < 4)
	{
		arr1[0][i] = arr_t[i];//arr1[0][0] = arr_t[1]
		arr1[1][i] = arr_t[i + 4];//arr1[1][0] = arr_t[5]
		arr2[0][i] = arr_t[i + 8]; //arr2[0][0] = att_t[8]
		arr2[1][i] = arr_t[i + 12];//arr2[1][0] = att_t[12]
		i++;
	}
}

//[0][X]{ 2 2 2 2} [1][X}{2 2 2 2 } {2 2 2 2} {2 2 2 2}