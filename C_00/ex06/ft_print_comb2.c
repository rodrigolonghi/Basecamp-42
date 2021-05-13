/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfelipe- <rfelipe-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/03 04:44:31 by rfelipe-          #+#    #+#             */
/*   Updated: 2021/04/04 01:00:31 by rfelipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_num(int num)
{
	char	num_aux;
	int		dozen;
	int		unity;

	if (num < 10)
	{
		num_aux = num + '0';
		write(1, "0", 1);
		write(1, &num_aux, 1);
	}
	else
	{
		dozen = num / 10;
		unity = num % 10;
		num_aux = dozen + '0';
		write(1, &num_aux, 1);
		num_aux = unity + '0';
		write(1, &num_aux, 1);
	}
}

void	ft_print_comb2(void)
{
	int first_num;
	int second_num;

	first_num = 0;
	second_num = 0;
	while (first_num <= 98)
	{
		second_num = first_num + 1;
		while (second_num <= 99)
		{
			ft_print_num(first_num);
			write(1, " ", 1);
			ft_print_num(second_num);
			if (!(first_num == 98 && second_num == 99))
				write(1, ", ", 2);
			second_num++;
		}
		first_num++;
	}
}
