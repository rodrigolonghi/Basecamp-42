/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfelipe- <rfelipe-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/02 05:30:20 by rfelipe-          #+#    #+#             */
/*   Updated: 2021/04/04 00:59:56 by rfelipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_number(char hundred, char dozen, char unity)
{
	write(1, &hundred, 1);
	write(1, &dozen, 1);
	write(1, &unity, 1);
}

void	ft_print_comb(void)
{
	char hundred;
	char dozen;
	char unity;

	hundred = '0';
	dozen = '1';
	unity = '2';
	while (hundred <= '7')
	{
		while (dozen <= '8')
		{
			while (unity <= '9')
			{
				ft_print_number(hundred, dozen, unity);
				if (!(hundred == '7' && dozen == '8' && unity == '9'))
					write(1, ", ", 2);
				unity++;
			}
			dozen++;
			unity = dozen + 1;
		}
		hundred++;
		dozen = hundred + 1;
		unity = dozen + 1;
	}
}
