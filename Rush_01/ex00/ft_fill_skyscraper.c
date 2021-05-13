/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fill_skyscraper.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfelipe- <rfelipe-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/10 20:02:23 by rfelipe-          #+#    #+#             */
/*   Updated: 2021/04/11 20:44:16 by rfelipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char g_matrix[4][4];

void	ft_fourth_two_rule_column(char *columns)
{
	int position;
	int j;
	
	position = 0;
	while (columns[position] != '\0')
	{
		if (columns[position] == '2')
		{
			if (position < 7)
			{
				j = position / 2;
				if (g_matrix[2][j] == '4' && g_matrix[3][j] == '3' 
					&& g_matrix[0][j] == 'x' && g_matrix[1][j] == 'x')
				{
					g_matrix[0][j] = '2';
					g_matrix[1][j] = '1';
				}
			}
			else
			{
				j = (position - 8) / 2;
				if (g_matrix[1][j] == '4' && g_matrix[0][j] == '3' 
					&& g_matrix[3][j] == 'x' && g_matrix[2][j] == 'x')
				{
					g_matrix[3][j] = '2';
					g_matrix[2][j] = '1';
				}
			}
		}
		position++;
	}
}

void	ft_fourth_two_rule_row(char *rows)
{
	int position;
	int i;
	
	position = 0;
	while (rows[position] != '\0')
	{
		if (rows[position] == '2')
		{
			if (position < 7)
			{
				i = position / 2;
				if (g_matrix[i][2] == '4' && g_matrix[i][3] == '3' 
					&& g_matrix[i][0] == 'x' && g_matrix[i][1] == 'x')
				{
					g_matrix[i][0] = '2';
					g_matrix[i][1] = '1';
				}
			}
			else
			{
				i = (position - 8) / 2;
				if (g_matrix[i][1] == '4' && g_matrix[i][0] == '3' 
					&& g_matrix[i][3] == 'x' && g_matrix[i][2] == 'x')
				{
					g_matrix[i][3] = '2';
					g_matrix[i][2] = '1';
				}
			}
		}
		position++;
	}
}

void	ft_third_two_rule_row(char *rows)
{
	int position;
	int i;
	
	position = 0;
	while (rows[position] != '\0')
	{
		if (rows[position] == '2')
		{
			if (position < 7)
			{
				i = position / 2;
				if (g_matrix[i][3] != 'x' && g_matrix[i][3] != '4' 
					&& g_matrix[i][2] != 'x' && g_matrix[i][2] != '4')
					g_matrix[i][1] = '4';
			}
			else
			{
				i = (position - 8) / 2;
				if (g_matrix[i][0] != 'x' && g_matrix[i][0] != '4' 
					&& g_matrix[i][1] != 'x' && g_matrix[i][1] != '4')
					g_matrix[i][2] = '4';
			}
		}
		position++;
	}
}

void	ft_third_two_rule_column(char *columns)
{
	int position;
	int j;
	
	position = 0;
	while (columns[position] != '\0')
	{
		if (columns[position] == '2')
		{
			if (position < 7)
			{
				j = position / 2;
				if (g_matrix[3][j] != 'x' && g_matrix[3][j] != '4' 
					&& g_matrix[2][j] != 'x' && g_matrix[2][j] != '4')
					g_matrix[1][j] = '4';
			}
			else
			{
				j = (position - 8) / 2;
				if (g_matrix[0][j] != 'x' && g_matrix[0][j] != '4' 
					&& g_matrix[1][j] != 'x' && g_matrix[1][j] != '4')
					g_matrix[2][j] = '4';
			}
		}
		position++;
	}
}

void	ft_fourth_three_rule_row(char *rows)
{
	int i;
	int j;
	int column_free[4];
	int position;

	i = 0;
	j = 0;
	position = 0;
	while(i < 4)
	{
		column_free[i] = 1;
		i++;
	}
	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			if(g_matrix[i][j] == '3')
			{
				column_free[j] = 0;
				break ;
			}
			j++;
		}
		i++;
	}
	while (rows[position] != '\0')
	{
		if(rows[position] == '3')
		{
			if (position < 7)
			{
				i = position / 2;
				if (column_free[0] == 1 && column_free[1] == 1 && column_free[2] == 0
					&& column_free[3] == 0 && g_matrix[i][1] == 'x')
					g_matrix[i][1] = '3';
			}
			else
			{
				i = (position - 8) / 2;
				if (column_free[3] == 1 && column_free[2] == 1 && column_free[1] == 0
					&& column_free[0] == 0 && g_matrix[i][2] == 'x')
					g_matrix[i][2] = '3';
			}
		}
		position++;
	}
}

void	ft_fourth_three_rule_column(char *columns)
{
	int i;
	int j;
	int row_free[4];
	int position;

	i = 0;
	j = 0;
	while(i < 4)
	{
		row_free[i] = 1;
		i++;
	}
	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			if(g_matrix[i][j] == '3')
			{
				row_free[i] = 0;
				break ;
			}
			j++;
		}
		i++;
	}
	position = 0;
	while (columns[position] != '\0')
	{
		if(columns[position] == '3')
		{
			if (position < 7)
			{
				j = position / 2;
				if (row_free[0] == 1 && row_free[1] == 1 && row_free[2] == 0
					&& row_free[3] == 0 && g_matrix[1][j] == 'x')
					g_matrix[1][j] = '3';
			}
			else
			{
				j = (position - 8) / 2;
				if (row_free[3] == 1 && row_free[2] == 1 && row_free[1] == 0
					&& row_free[0] == 0 && g_matrix[2][j] == 'x')
					g_matrix[2][j] = '3';
			}
		}
		position++;
	}
}

void	ft_second_two_rule_in_row(char *rows)
{
	int position;
	int i;

	position = 0;
	while (rows[position] != '\0')
	{
		if (rows[position] == '2')
		{
			if (position < 7)
			{
				i = position / 2;
				if (g_matrix[i][3] == '1' && g_matrix[i][2] == '4')
				{
					g_matrix[i][0] = '3';
					g_matrix[i][1] = '2';
				}
			}
			else
			{
				i = (position - 8) / 2;
				if (g_matrix[i][0] == '1' && g_matrix[i][1] == '4')
				{
					g_matrix[i][2] = '2';
					g_matrix[i][3] = '3';
				}
			}
		}
		position++;
	}
}
void	ft_second_two_rule_in_column(char *columns)
{
	int position;
	int j;

	position = 0;
	while (columns[position] != '\0')
	{
		if (columns[position] == '2')
		{
			if (position < 7)
			{
				j = position / 2;
				if (g_matrix[3][j] == '1' && g_matrix[2][j] == '4')
				{
					g_matrix[0][j] = '3';
					g_matrix[1][j] = '2';
				}
			}
			else
			{
				j = (position - 8) / 2;
				if (g_matrix[0][j] == '1' && g_matrix[1][j] == '4')
				{
					g_matrix[2][j] = '2';
					g_matrix[3][j] = '3';
				}
			}
		}
		position++;
	}
}

void	ft_third_three_rule_row(char *rows, char *columns)
{
	int position;

	position = 0;
	while (position < 7)
	{
		if (rows[position] == '3')
		{
			if (g_matrix[position / 2][3] == '4')
			{
				if (position == 0)
				{
					if(columns[4] == '3' && g_matrix[position / 2][1] == 'x')
							g_matrix[position / 2][1] = '3';
					else if (columns[2] == '3'  && g_matrix[position / 2][2] == 'x')
							g_matrix[position / 2][2] = '3';
				}
				else
				{
					if(columns[10] == '3' && g_matrix[position / 2][2] == 'x')
							g_matrix[position / 2][2] = '3';
					else if (columns[12] == '3'  && g_matrix[position / 2][1] == 'x')
							g_matrix[position / 2][1] = '3';
				}
			}
		}
		position += 6;
	}
	position = 8;
	while (position < 15)
	{
		if (rows[position] == '3')
		{
			if (g_matrix[(position - 8) / 2][0] == '4')
			{
				if (position == 8)
				{
					if(columns[2] == '3' && g_matrix[position / 2][2] == 'x')
							g_matrix[position / 2][2] = '3';
					else if (columns[4] == '3'  && g_matrix[position / 2][1] == 'x')
							g_matrix[position / 2][1] = '3';
				}
				else
				{
					if(columns[10] == '3' && g_matrix[position / 2][2] == 'x')
							g_matrix[position / 2][2] = '3';
					else if (columns[12] == '3'  && g_matrix[position / 2][1] == 'x')
							g_matrix[position / 2][1] = '3';
				}
			}
		}
		position += 6;
	}
}

void	ft_third_three_rule_column(char *rows, char *columns)
{
	int position;

	position = 0;
	while (position < 7)
	{
		if (columns[position] == '3')
		{
			if (g_matrix[3][position / 2] == '4')
			{
				if (position == 0)
				{
					if(rows[4] == '3' && g_matrix[1][position / 2] == 'x')
							g_matrix[1][position / 2] = '3';
					else if (rows[2] == '3'  && g_matrix[2][position / 2] == 'x')
							g_matrix[2][position / 2] = '3';
				}
				else
				{
					if(rows[10] == '3' && g_matrix[2][position / 2] == 'x')
							g_matrix[2][position / 2] = '3';
					else if (rows[12] == '3'  && g_matrix[1][position / 2] == 'x')
							g_matrix[1][position / 2] = '3';
				}
			}
		}
		position += 6;
	}
	position = 8;
	while (position < 15)
	{
		if (columns[position] == '3')
		{
			if (g_matrix[0][(position - 8) / 2] == '4')
			{
				if (position == 8)
				{
					if(rows[2] == '3' && g_matrix[2][position / 2] == 'x')
							g_matrix[2][position / 2] = '3';
					else if (rows[4] == '3'  && g_matrix[1][position / 2] == 'x')
							g_matrix[1][position / 2] = '3';
				}
				else
				{
					if(rows[10] == '3' && g_matrix[2][position / 2] == 'x')
							g_matrix[2][position / 2] = '3';
					else if (rows[12] == '3'  && g_matrix[1][position / 2] == 'x')
							g_matrix[1][position / 2] = '3';
				}
			}
		}
		position += 6;
	}
}

void	ft_second_three_rule_row(char *rows)
{
	int position;
	int i;
	
	position = 0;
	while (rows[position] != '\0')
	{
		if (rows[position] == '3')
		{
			if (position < 7)
			{
				i = position / 2;
				if(g_matrix[i][3] == '4' && g_matrix[i][2] == '3')
				{
					g_matrix[i][0] = '2';
					g_matrix[i][1] = '1';
				}
				if(g_matrix[i][3] == '3')
				{
					g_matrix[i][0] = '1';
					g_matrix[i][1] = '2';
					g_matrix[i][2] = '4';
				}
			}	
			else
			{
				i = (position - 8) / 2;
				if(g_matrix[i][0] == '4' && g_matrix[i][1] == '3')
				{
					g_matrix[i][3] = '2';
					g_matrix[i][2] = '1';
				}
				if(g_matrix[i][0] == '3')
				{
					g_matrix[i][3] = '1';
					g_matrix[i][2] = '2';
					g_matrix[i][1] = '4';
				}
			}
		}
		position++;
	}
}

void	ft_second_three_rule_column(char *columns)
{
	int position;
	int j;
	
	position = 0;
	while (columns[position] != '\0')
	{
		if (columns[position] == '3')
		{
			if (position < 7)
			{
				j = position / 2;
				if(g_matrix[3][j] == '4' && g_matrix[2][j] == '3')
				{
					g_matrix[0][j] = '2';
					g_matrix[1][j] = '1';
				}
				if(g_matrix[3][j] == '3')
				{
					g_matrix[0][j] = '1';
					g_matrix[1][j] = '2';
					g_matrix[2][j] = '4';
				}
			}	
			else
			{
				j = (position - 8) / 2;
				if(g_matrix[0][j] == '4' && g_matrix[1][j] == '3')
				{
					g_matrix[3][j] = '2';
					g_matrix[2][j] = '1';
				}
				if(g_matrix[0][j] == '3')
				{
					g_matrix[3][j] = '1';
					g_matrix[2][j] = '2';
					g_matrix[1][j] = '4';
				}
			}
		}
		position++;
	}
}

void	ft_try_put_three_in_matrix()
{
	int i;
	int j;
	int threes;
	int column;
	int row;
	
	i = 0;
	j = 0;
	threes = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			if (g_matrix[i][j] == '3')
			{
				threes++;
				break ;
			}
			j++;
		}
		if (j == 4)
			row = i;
		i++;
	}
	if (threes == 3)
	{
		j = 0;
		while (j < 4)
		{
			i = 0;
			while (i < 4)
			{
				if (g_matrix[i][j] == '3')
					break ;
				i++;
			}
			if (i == 4)
				column = j;
			j++;
		}
		g_matrix[row][column] = '3';
	}
}

void	ft_two_rule_in_column(char *columns)
{
	int position;
	int j;
	
	position = 0;
	while (columns[position] != '\0')
	{
		if (columns[position] == '2')
		{
			if (position < 7)
			{
				j = position / 2;
				if(g_matrix[3][j] == '4')
					g_matrix[0][j] = '3';
			}	
			else
			{
				j = (position - 8) / 2;
				if(g_matrix[0][j] == '4')
					g_matrix[3][j] = '3';
			}
		}
		position++;
	}
}

void	ft_two_rule_in_row(char *rows)
{
	int position;
	int i;
	
	position = 0;
	while (rows[position] != '\0')
	{
		if (rows[position] == '2')
		{
			if (position < 7)
			{
				i = position / 2;
				if(g_matrix[i][3] == '4')
					g_matrix[i][0] = '3';
			}	
			else
			{
				i = (position - 8) / 2;
				if(g_matrix[i][0] == '4')
					g_matrix[i][3] = '3';
			}
		}
		position++;
	}
}

void	ft_try_put_three_in_column()
{
	int i;
	int j;
	int row_free[4];
	int is_possible;

	i = 0;
	j = 0;
	while(i < 4)
	{
		row_free[i] = 1;
		i++;
	}
	i = 0;
	while (j < 4)
	{
		is_possible = 0;
		i = 0;
		while(i < 4)
		{
			if (g_matrix[i][j] == '3')
				row_free[i] = 0;
			i++;
		}
		j++;
	}
	j = 0;
	while (j < 4)
	{
		i = 0;
		while (i < 4)
		{
			if(g_matrix[i][j] == '3')
				break ;
			i++;
		}
		if (i == 4)
		{
			i = 0;
			while (i < 4)
			{
				if (g_matrix[i][j] == 'x' && row_free[i] == 1)
					is_possible++;
				i++;
			}
			if(is_possible == 1)
			{
				i = 0;
				while (i < 4)
				{
					if (g_matrix[i][j] == 'x' && row_free[i] == 1)
					{
						g_matrix[i][j] = '3';
						row_free[i] = 0;
						break ;
					}
					i++;
				}
			}
		}
		j++;
	}
}

void	ft_try_put_three_in_row()
{
	int i;
	int j;
	int column_free[4];
	int is_possible;

	i = 0;
	j = 0;
	while(i < 4)
	{
		column_free[i] = 1;
		i++;
	}
	i = 0;
	while (i < 4)
	{
		is_possible = 0;
		j = 0;
		while(j < 4)
		{
			if (g_matrix[i][j] == '3')
				column_free[j] = 0;
			j++;
		}
		i++;
	}
	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			if(g_matrix[i][j] == '3')
				break ;
			j++;
		}
		if (j == 4)
		{
			j = 0;
			while (j < 4)
			{
				if (g_matrix[i][j] == 'x' && column_free[j] == 1)
					is_possible++;
				j++;
			}
			if(is_possible == 1)
			{
				j = 0;
				while (j < 4)
				{
					if (g_matrix[i][j] == 'x' && column_free[j] == 1)
					{
						g_matrix[i][j] = '3';
						column_free[j] = 0;
						break ;
					}
					j++;
				}
			}
		}
		i++;
	}
}

void	ft_three_rule_row(char *rows, char *columns)
// se as duas ultimas posições opostas ao parâmetro 3 estão ocupadas por números 
// diferentes de 3, então coloca 3 na outra posição disponível
{
	int position;
	int i;
	int j;
	int x;
	
	position = 0;
	while (rows[position] != '\0')
	{
		if (rows[position] == '3')
		{
			x = 0;
			if (position < 7)
			{
				i = position / 2;
				j = 1;
				while (j < 4)
				{
					if (position == 0)
					{
						if (g_matrix[i][j] == 'x' && columns[j * 2] != '3')
							x++;
					}
					else if (position == 6)
					{
						if (g_matrix[i][j] == 'x' && columns[j * 2 + 8] != '3')
							x++;
					}
					else
					{
						if (g_matrix[i][j] == 'x' && g_matrix[0][j] != '3'
							&& g_matrix[1][j] != '3' && g_matrix[2][j] != '3'
								&& g_matrix[3][j] != '3')
							x++;
					}
					j++;
				}
				if (x == 1)
				{
					j = 1;
					x = 0;
					while (j < 4)
					{
						if(g_matrix[i][j] == '3')
							x++;
						j++;
					}
					if (x == 0)
					{
						j = 1;
						while (j < 4)
						{
							if (position == 0)
							{
								if (g_matrix[i][j] == 'x' && columns[j * 2] != '3')
									g_matrix[i][j] = '3';
							}
							else if (position == 6)
							{
								if (g_matrix[i][j] == 'x' && columns[j * 2 + 8] != '3')
									g_matrix[i][j] = '3';
							}
							else
							{
								if (g_matrix[i][j] == 'x' 
									&& g_matrix[0][j] != '3'
										&& g_matrix[1][j] != '3'
											&& g_matrix[2][j] != '3'
												&& g_matrix[3][j] != '3')
									g_matrix[i][j] = '3';
							}
							j++;
						}
					}
				}
			}
			else
			{
				i = (position - 8) / 2;
				j = 0;
				while (j < 3)
				{
					if (position == 8)
					{
						if (g_matrix[i][j] == 'x' && columns[j * 2] != '3')
							x++;
					}
					else if (position == 14)
					{
						if (g_matrix[i][j] == 'x' && columns[j * 2 + 8] != '3')
							x++;
					}
					else
					{
						if (g_matrix[i][j] == 'x'  && g_matrix[0][j] != '3'
							&& g_matrix[1][j] != '3' && g_matrix[2][j] != '3'
								&& g_matrix[3][j] != '3')
							x++;
					}
					j++;
				}
				if (x == 1)
				{
					j = 0;
					x = 0;
					while (j < 3)
					{
						if(g_matrix[i][j] == '3')
							x++;
						j++;
					}
					if (x == 0)
					{
						j = 0;
						while (j < 3)
						{
							if (position == 8)
							{
								if (g_matrix[i][j] == 'x' && columns[j * 2] != '3')
									g_matrix[i][j] = '3';
							}
							else if (position == 14)
							{
								if (g_matrix[i][j] == 'x' && columns[j * 2 + 8] != '3')
									g_matrix[i][j] = '3';
							}
							else
							{
								if (g_matrix[i][j] == 'x' 
									&& g_matrix[0][j] != '3'
										&& g_matrix[1][j] != '3'
											&& g_matrix[2][j] != '3'
												&& g_matrix[3][j] != '3')
									g_matrix[i][j] = '3';
							}
							j++;
						}
					}
				}
			}
		}
		position++;
	}
}

void	ft_three_rule_column(char *rows, char *columns) 
// se as duas ultimas posições opostas ao parâmetro 3 estão ocupadas por números 
// diferentes de 3, então coloca 3 na outra posição disponível
{
	int position;
	int i;
	int j;
	int x;
	
	position = 0;
	while (columns[position] != '\0')
	{
		if (columns[position] == '3')
		{
			x = 0;
			if (position < 7)
			{
				j = position / 2;
				i = 1;
				while (i < 4)
				{
					if (position == 0)
					{
						if (g_matrix[i][j] == 'x' && rows[i * 2] != '3')
							x++;
					}
					else if (position == 6)
					{
						if (g_matrix[i][j] == 'x' && rows[i * 2 + 8] != '3')
							x++;
					}
					else
					{
						if (g_matrix[i][j] == 'x' && g_matrix[i][0] != '3'
							&& g_matrix[i][1] != '3' && g_matrix[i][2] != '3'
								&& g_matrix[i][3] != '3')
							x++;
					}
					i++;
				}
				if (x == 1)
				{
					i = 1;
					x = 0;
					while (i < 4)
					{
						if(g_matrix[i][j] == '3')
							x++;
						i++;
					}
					if (x == 0)
					{
						i = 1;
						while (i < 4)
						{
							if (position == 0)
							{
								if (g_matrix[i][j] == 'x' && rows[i * 2] != '3')
									g_matrix[i][j] = '3';
							}
							else if (position == 6)
							{
								if (g_matrix[i][j] == 'x' && rows[i * 2 + 8] != '3')
									g_matrix[i][j] = '3';
							}
							else
							{
								if (g_matrix[i][j] == 'x'
									&& g_matrix[i][0] != '3'
										&& g_matrix[i][1] != '3'
											&& g_matrix[i][2] != '3'
												&& g_matrix[i][3] != '3')
									g_matrix[i][j] = '3';
							}
							i++;
						}
					}
				}
			}
			else
			{
				j = (position - 8) / 2;
				i = 0;
				while (i < 3)
				{
					if (position == 8)
					{
						if (g_matrix[i][j] == 'x' && rows[i * 2] != '3')
							x++;
					}
					else if (position == 14)
					{
						if (g_matrix[i][j] == 'x' && rows[i * 2 + 8] != '3')
							x++;
					}
					else
					{
						if (g_matrix[i][j] == 'x' && g_matrix[i][0] != '3'
							&& g_matrix[i][1] != '3' && g_matrix[i][2] != '3'
								&& g_matrix[i][3] != '3')
							x++;
					}
					i++;
				}
				if (x == 1)
				{
					i = 0;
					x = 0;
					while (i < 3)
					{
						if(g_matrix[i][j] == '3')
							x++;
						i++;
					}
					if (x == 0)
					{
						i = 0;
						while (i < 3)
						{
							if (position == 8)
							{
								if (g_matrix[i][j] == 'x' && rows[i * 2] != '3')
									g_matrix[i][j] = '3';
							}
							else if (position == 14)
							{
								if (g_matrix[i][j] == 'x' && rows[i * 2 + 8] != '3')
									g_matrix[i][j] = '3';
							}
							else
							{
								if (g_matrix[i][j] == 'x'
									&& g_matrix[i][0] != '3'
										&& g_matrix[i][1] != '3'
											&& g_matrix[i][2] != '3'
												&& g_matrix[i][3] != '3')
									g_matrix[i][j] = '3';
							}
							i++;
						}
					}
				}
			}
		}
		position++;
	}
}

void	ft_fill_last_position_in_row()
{
	int i;
	int j;
	int x;
	int y;
	
	i = 0;
	j = 0;
	x = 0;
	y = 0;
	while (y < 4)
	{
		i = 0;
		while (i < 4)
		{
			j = 0;
			x = 0;
			while (j < 4)
			{
				if (g_matrix[i][j] == 'x')
					x++;
				if (x > 1)
					break ;
				j++;
			}
			if (x == 1)
				break ;
			i++;
		}
		if (i != 4)
		{
			x = 0;
			j = 0;
			while (j < 4)
			{
				if (g_matrix[i][j] != 'x')
					x += g_matrix[i][j] - 48;
				j++;
			}
			j = 0;
			while (j < 4)
			{
				if (g_matrix[i][j] == 'x')
				{
					g_matrix[i][j] = (10 - x) + 48;
					break ;
				}
				j++;
			}
		}
		y++;
	}
}

void	ft_fill_last_position_in_column()
{
	int i;
	int j;
	int x;
	int y;
	
	i = 0;
	j = 0;
	x = 0;
	y = 0;
	while (y < 4)
	{
		j = 0;
		while (j < 4)
		{
			i = 0;
			x = 0;
			while (i < 4)
			{
				if (g_matrix[i][j] == 'x')
					x++;
				if (x > 1)
					break ;
				i++;
			}
			if (x == 1)
				break ;
			j++;
		}
		if (j != 4)
		{
			x = 0;
			i = 0;
			while (i < 4)
			{
				if (g_matrix[i][j] != 'x')
					x += g_matrix[i][j] - 48;
				i++;
			}
			i = 0;
			while (i < 4)
			{
				if (g_matrix[i][j] == 'x')
				{
					g_matrix[i][j] = (10 - x) + 48;
					break ;
				}
				i++;
			}
		}
		y++;
	}
}

void	ft_try_put_four_in_matrix()
{
	int i;
	int j;
	int fours;
	int column;
	int row;
	
	i = 0;
	j = 0;
	fours = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			if (g_matrix[i][j] == '4')
			{
				fours++;
				break ;
			}
			j++;
		}
		if (j == 4)
			row = i;
		i++;
	}
	if (fours == 3)
	{
		j = 0;
		while (j < 4)
		{
			i = 0;
			while (i < 4)
			{
				if (g_matrix[i][j] == '4')
					break ;
				i++;
			}
			if (i == 4)
				column = j;
			j++;
		}
		g_matrix[row][column] = '4';
	}
}

void	ft_find_one_in_rows_parameters(char *rows)
{
	int position;

	position = 0;
	while (rows[position] != '\0')
	{
		if (rows[position] == '1')
		{
			if (position < 7)
				g_matrix[position / 2][0] = '4';
			else
				g_matrix[(position - 8) / 2][3] = '4';
		}
		position++;
	}
}

void	ft_find_one_in_columns_parameters(char *columns)
{
	int position;

	position = 0;
	while (columns[position] != '\0')
	{
		if (columns[position] == '1')
		{
			if (position < 7)
				g_matrix[0][position / 2] = '4';
			else
				g_matrix[3][(position - 8) / 2] = '4';
		}
		position++;
	}
}

void	ft_find_four_in_rows_parameters(char *rows)
{
	int position;

	position = 0;
	while (rows[position] != '\0')
	{
		if (rows[position] == '4')
		{
			if (position < 7)
			{
				g_matrix[position / 2][0] = '1';
				g_matrix[position / 2][1] = '2';
				g_matrix[position / 2][2] = '3';
				g_matrix[position / 2][3] = '4';
			}
			else
			{
				g_matrix[(position - 8) / 2][0] = '4';
				g_matrix[(position - 8) / 2][1] = '3';
				g_matrix[(position - 8) / 2][2] = '2';
				g_matrix[(position - 8) / 2][3] = '1';
			}
		}
		position++;
	}
}

void	ft_find_four_in_columns_parameters(char *columns)
{
	int position;

	position = 0;
	while (columns[position] != '\0')
	{
		if (columns[position] == '4')
		{
			if (position < 7)
			{
				g_matrix[0][position / 2] = '1';
				g_matrix[1][position / 2] = '2';
				g_matrix[2][position / 2] = '3';
				g_matrix[3][position / 2] = '4';
			}
			else
			{
				g_matrix[0][(position - 8) / 2] = '4';
				g_matrix[1][(position - 8) / 2] = '3';
				g_matrix[2][(position - 8) / 2] = '2';
				g_matrix[3][(position - 8) / 2] = '1';
			}
		}
		position++;
	}
}

void	ft_print_matrix()
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			write(1, &g_matrix[i][j], 1);
			if (j < 3)
				write(1, " ", 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}

void	ft_fill_skyscraper(char *columns, char *rows)
{
	int i;
	int j;
	int x;
	
	i = 0;
	j = 0;
	x = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			g_matrix[i][j] = 'x';
			j++;
		}
		i++;
	}
	ft_find_four_in_columns_parameters(columns);
	ft_find_four_in_rows_parameters(rows);
	ft_find_one_in_columns_parameters(columns);
	ft_find_one_in_rows_parameters(rows);
	while (x < 10)
	{
		ft_try_put_four_in_matrix();
		ft_three_rule_row(rows, columns);
		ft_three_rule_column(rows, columns);
		ft_try_put_three_in_row();
		ft_two_rule_in_row(rows);
		ft_two_rule_in_column(columns);
		ft_try_put_three_in_matrix();
		ft_second_three_rule_row(rows);
		ft_second_three_rule_column(columns);
		ft_third_three_rule_row(rows, columns);
		ft_third_three_rule_column(rows, columns);
		ft_second_two_rule_in_row(rows);
		ft_second_two_rule_in_column(columns);
		ft_fourth_three_rule_row(rows);
		ft_fourth_three_rule_column(columns);
		ft_third_two_rule_row(rows);
		ft_third_two_rule_column(columns);
		ft_fourth_two_rule_column(columns);
		ft_fourth_two_rule_row(rows);
		ft_fill_last_position_in_column();
		ft_fill_last_position_in_row();
		x++;
	}
	ft_print_matrix();
}
