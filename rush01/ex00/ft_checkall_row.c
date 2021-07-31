void	ft_check1x3_row(char arr_rule[2][4], char arr_ans[4][4]);
void	ft_check2x3_row(char arr_rule[2][4], char arr_ans[4][4]);
void	ft_check4_row(char arr_rule[2][4], char arr_ans[4][4]);
void	ft_checkall_row(char arr_rule_row[2][4], char arr_ans[4][4]);

void	ft_checkall_row(char arr_rule_row[2][4], char arr_ans[4][4])
{
	ft_check1x3_row(arr_rule_row, arr_ans);
	ft_check2x3_row(arr_rule_row, arr_ans);
	ft_check4_row(arr_rule_row, arr_ans);
}

void	ft_check1x3_row(char arr_rule[2][4], char arr_ans[4][4])
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (arr_rule[0][i] == 1 && arr_rule[1][i] == 2)
			arr_ans[i][3] = 3;
		if (arr_rule[0][i] == 1)
			arr_ans[i][0] = 4;
		if (arr_rule[0][i] == 2 && arr_rule[1][i] == 1)
			arr_ans[i][0] = 3;
		if (arr_rule[1][i] == 1)
			arr_ans[i][1] = 4;
		i++;
	}
}

void	ft_check2x3_row(char arr_rule[2][4], char arr_ans[4][4])
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (arr_rule[0][i] == 3 && arr_rule[1][i] == 2)
		{
			arr_ans[i][2] = 4;
		}
		else if (arr_rule[0][i] == 2 && arr_rule[1][i] == 3)
		{
			arr_ans[i][1] = 4;
		}
		i++;
	}
}

void	ft_check4_row(char arr_rule[2][4], char arr_ans[4][4])
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (arr_rule[0][i] == 4)
		{
			arr_ans[i][0] = 1;
			arr_ans[i][1] = 2;
			arr_ans[i][2] = 3;
			arr_ans[i][3] = 4;
		}
		if (arr_rule[1][i] == 4)
		{
			arr_ans[i][0] = 4;
			arr_ans[i][1] = 3;
			arr_ans[i][2] = 2;
			arr_ans[i][3] = 1;
		}
		i++;
	}
}
