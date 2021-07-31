void	ft_check1x3_col(char arr_rule[2][4], char arr_ans[4][4]);
void	ft_check2x3_col(char arr_rule[2][4], char arr_ans[4][4]);
void	ft_check4_col(char arr_rule[2][4], char arr_ans[4][4]);
void	ft_checkall_col(char arr_rule_col[2][4], char arr_ans[4][4]);

void	ft_checkall_col(char arr_rule_col[2][4], char arr_ans[4][4])
{
	ft_check1x3_col(arr_rule_col, arr_ans);
	ft_check2x3_col(arr_rule_col, arr_ans);
	ft_check4_col(arr_rule_col, arr_ans);
}

void	ft_check1x3_col(char arr_rule[2][4], char arr_ans[4][4])
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (arr_rule[0][i] == 1 && arr_rule[1][i] == 2)
			arr_ans[3][i] = 3;
		if (arr_rule[0][i] == 1)
			arr_ans[0][i] = 4;
		if (arr_rule[0][i] == 2 && arr_rule[1][i] == 1)
			arr_ans[0][i] = 3;
		if (arr_rule[1][i] == 1)
			arr_ans[1][i] = 4;
		i++;
	}
}

void	ft_check2x3_col(char arr_rule[2][4], char arr_ans[4][4])
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (arr_rule[0][i] == 3 && arr_rule[1][i] == 2)
		{
			arr_ans[2][i] = 4;
		}
		else if (arr_rule[0][i] == 2 && arr_rule[1][i] == 3)
		{
			arr_ans[1][i] = 4;
		}
		i++;
	}
}

void	ft_check4_col(char arr_rule[2][4], char arr_ans[4][4])
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (arr_rule[0][i] == 4)
		{
			arr_ans[0][i] = 1;
			arr_ans[1][i] = 2;
			arr_ans[2][i] = 3;
			arr_ans[3][i] = 4;
		}
		if (arr_rule[1][i] == 4)
		{
			arr_ans[0][i] = 4;
			arr_ans[1][i] = 3;
			arr_ans[2][i] = 2;
			arr_ans[3][i] = 1;
		}
		i++;
	}
}
