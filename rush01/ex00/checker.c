void	ft_populate_rules(char arr_t[], char arr1[2][4], char arr2[2][4]);
void	ft_redefine_arr(char arr[4][4]);
void	ft_checkall_col(char arr_rule_col[2][4], char arr_ans[4][4]);
void	ft_checkall_row(char arr_rule_row[2][4], char arr_ans[4][4]);
void	checker(char rules[16], char arr_ans[4][4]);

void	checker(char rules[16], char arr_ans[4][4])
{
	char	col_up_down[2][4]; [0 e 1 ] [0 1 2 3] //[0][X]{ 2 2 2 2} [1][X}{2 2 2 2 } {2 2 2 2} {2 2 2 2}
	char	row_left_right[2][4];

	ft_populate_rules(rules, col_up_down, row_left_right);
	ft_redefine_arr(arr_ans);
	ft_checkall_col(col_up_down, arr_ans);
	ft_checkall_row(row_left_right, arr_ans);
}
