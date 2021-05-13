/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfelipe- <rfelipe-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/03 21:41:27 by rfelipe-          #+#    #+#             */
/*   Updated: 2021/04/06 18:12:23 by rfelipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_number(char digit)
{
	if (digit != 'x')
		write(1, &digit, 1);
}

void	ft_putnbr(int nb)
{
	char	digit[10];
	int		column;

	column = 0;
	while (column < 10)
	{
		if (nb < 0)
		{
			digit[column] = (nb % 10) * (-1) + '0';
			if (column == 0)
				write(1, "-", 1);
		}
		else if (nb == 0 && column != 0)
			digit[column] = 'x';
		else
			digit[column] = nb % 10 + '0';
		nb /= 10;
		column++;
	}
	column = 9;
	while (column >= 0)
	{
		ft_print_number(digit[column]);
		column--;
	}
}
