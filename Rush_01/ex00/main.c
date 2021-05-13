/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfelipe- <rfelipe-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/10 03:21:44 by rfelipe-          #+#    #+#             */
/*   Updated: 2021/04/11 19:29:03 by rfelipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void	ft_fill_skyscraper(char *columns, char *rows);

int		ft_check_valid_parameters(char *str)
{
	int	position;

	position = 0;
	while (*(str + position) != '\0')
	{
		if (position % 2 == 0)
		{
			if (!(*(str + position) >= '1' && *(str + position) <= '4'))
				return (1);
		}
		else
		{
			if (!(*(str + position) == 32))
				return (1);
		}
		position++;
	}
	return (0);
}

int		ft_fill_parameters(char *columns, char *rows, char *arg)
{
	int size;

	size = 0;
	while (*(arg + size) != '\0')
		size++;
	if (size == 31)
	{
		size = 0;
		while (size < 15)
		{
			*(columns + size) = *(arg + size);
			size++;
		}
		*(columns + 15) = '\0';
		size = 16;
		while (size < 32)
		{
			*(rows + size - 16) = *(arg + size);
			size++;
		}
		return (0);
	}
	else
		return (1);
}

int		main(int argc, char *argv[])
{
	char	*col_up_n_down;
	char	*row_left_n_right;

	col_up_n_down = (char *)malloc(16);
	row_left_n_right = (char *)malloc(16);
	if (argc == 2)
	{
		if (!(ft_fill_parameters(col_up_n_down, row_left_n_right, argv[1])))
		{
			if (!(ft_check_valid_parameters(col_up_n_down)))
			{
				if (!(ft_check_valid_parameters(row_left_n_right)))
					ft_fill_skyscraper(col_up_n_down, row_left_n_right);
				else
					write(1, "Error\n", 6);
			}
			else
				write(1, "Error\n", 6);
		}
		else
			write(1, "Error\n", 6);
	}
	else
		write(1, "Error\n", 6);
	return (0);
}
