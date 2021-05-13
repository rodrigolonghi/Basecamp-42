/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfelipe- <rfelipe-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 04:38:56 by rfelipe-          #+#    #+#             */
/*   Updated: 2021/04/13 05:29:30 by rfelipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int pos;
	int minus;
	int number;

	pos = 0;
	minus = 0;
	number = 0;
	while (str[pos] != '\0')
	{
		if (!((str[pos] >= '0' && str[pos] <= '9') || str[pos] == '-'
				|| str[pos] == '+' || str[pos] <= 32))
			break ;
		if (str[pos] == '-')
			minus++;
		if (str[pos] >= '0' && str[pos] <= '9')
		{
			number *= 10;
			if (minus % 2 != 0)
				number -= str[pos] - 48;
			else
				number += str[pos] - 48;
		}
		pos++;
	}
	return (number);
}
