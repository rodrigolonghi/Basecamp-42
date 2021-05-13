/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfelipe- <rfelipe-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 00:49:27 by rfelipe-          #+#    #+#             */
/*   Updated: 2021/04/09 04:36:30 by rfelipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_hexadecimal(unsigned char c)
{
	char	*hexadecimal_table;
	int		div;
	int		mod;

	hexadecimal_table = "0123456789abcdef";
	div = c / 16;
	mod = c % 16;
	write(1, "\\", 1);
	write(1, &hexadecimal_table[div], 1);
	write(1, &hexadecimal_table[mod], 1);
}

void	ft_putstr_non_printable(char *str)
{
	int pos;

	pos = 0;
	while (str[pos] != '\0')
	{
		if (str[pos] >= 32 && str[pos] <= 126)
			write(1, &str[pos], 1);
		else
			ft_print_hexadecimal(*(unsigned char *)(str + pos));
		pos++;
	}
}
