/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfelipe- <rfelipe-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/05 01:59:37 by rfelipe-          #+#    #+#             */
/*   Updated: 2021/04/06 02:52:52 by rfelipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	g_combn[9];

void	ft_put_combn(char combn[])
{
	int count;
	int x;

	count = 0;
	x = 0;
	while (count < 9)
	{
		if (combn[count] != 'x')
			write(1, &combn[count], 1);
		else
			x++;
		count++;
	}
	if (g_combn[x] != 1 + x + '0')
		write(1, ", ", 2);
}

void	ft_increase_combn(int y)
{
	g_combn[y - 1]++;
	while (y < 9)
	{
		g_combn[y] = g_combn[y - 1] + 1;
		y++;
	}
}

void	ft_print_four_to_eight(void)
{
	while (g_combn[4] <= '5' || g_combn[4] == 'x')
	{
		while (g_combn[5] <= '6' || g_combn[5] == 'x')
		{
			while (g_combn[6] <= '7' || g_combn[6] == 'x')
			{
				while (g_combn[7] <= '8' || g_combn[7] == 'x')
				{
					while (g_combn[8] <= '9')
					{
						ft_put_combn(g_combn);
						g_combn[8]++;
					}
					ft_increase_combn(8);
				}
				ft_increase_combn(7);
			}
			ft_increase_combn(6);
		}
		ft_increase_combn(5);
	}
	ft_increase_combn(4);
}

void	ft_print_zero_to_three(void)
{
	while (g_combn[0] <= '1' || g_combn[0] == 'x')
	{
		while (g_combn[1] <= '2' || g_combn[1] == 'x')
		{
			while (g_combn[2] <= '3' || g_combn[2] == 'x')
			{
				while (g_combn[3] <= '4' || g_combn[3] == 'x')
				{
					ft_print_four_to_eight();
				}
				ft_increase_combn(3);
			}
			ft_increase_combn(2);
		}
		ft_increase_combn(1);
	}
}

void	ft_print_combn(int n)
{
	int		count;
	char	x;

	count = 0;
	x = '0';
	if (n > 0 && n < 10)
	{
		while (count < 9 - n)
		{
			g_combn[count] = 'x';
			count++;
		}
		while (count < 9)
		{
			g_combn[count] = x;
			count++;
			x++;
		}
		ft_print_zero_to_three();
	}
}
