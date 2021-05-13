/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfelipe- <rfelipe-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/03 00:26:06 by gfelicio          #+#    #+#             */
/*   Updated: 2021/04/03 18:30:31 by rfelipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c, int n);

void	ft_print_first_n_last_lines(int x)
{
	if (x == 1)
		ft_putchar('o', 1);
	else if (x == 2)
		ft_putchar('o', 2);
	else
	{
		ft_putchar('o', 1);
		ft_putchar('-', x - 2);
		ft_putchar('o', 1);
	}
}

void	ft_print_middle_lines(int x)
{
	if (x == 1)
		ft_putchar('|', 1);
	else if (x == 2)
		ft_putchar('|', 2);
	else
	{
		ft_putchar('|', 1);
		ft_putchar(' ', x - 2);
		ft_putchar('|', 1);
	}
}

void	rush(int x, int y)
{
	int count_y;

	count_y = 0;
	if (x > 0 && y > 0)
	{
		while (count_y < y)
		{
			if (count_y == 0)
				ft_print_first_n_last_lines(x);
			else if (count_y == y - 1)
				ft_print_first_n_last_lines(x);
			else
				ft_print_middle_lines(x);
			ft_putchar('\n', 1);
			count_y++;
		}
	}
}
