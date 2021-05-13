/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfelipe- <rfelipe-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 20:54:25 by rfelipe-          #+#    #+#             */
/*   Updated: 2021/04/15 01:37:43 by rfelipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_number(char number[40])
{
	unsigned int pos;

	pos = 40;
	while (pos--)
	{
		if (number[pos] != 0)
			write(1, &number[pos], 1);
	}
}

int		ft_check_base(char *base)
{
	int size;
	int pos;

	size = 0;
	while (base[size] != '\0')
	{
		if (base[size] == '-' || base[size] == '+')
			return (0);
		pos = size + 1;
		while (base[pos] != '\0')
		{
			if (base[size] == base[pos])
				return (0);
			pos++;
		}
		size++;
	}
	if (size < 2)
		return (0);
	return (size);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int				size;
	unsigned int	pos;
	char			new_number[40];

	size = ft_check_base(base);
	pos = 40;
	while (pos--)
		new_number[pos] = 0;
	if (nbr == 0)
		new_number[pos] = base[0];
	if (nbr < 0 && size != 0)
		write(1, "-", 1);
	pos = 0;
	while (nbr != 0 && size != 0)
	{
		if (nbr < 0)
			new_number[pos] = base[(nbr % size) * -1];
		else
			new_number[pos] = base[nbr % size];
		nbr /= size;
		pos++;
	}
	if (size != 0)
		ft_print_number(new_number);
}
