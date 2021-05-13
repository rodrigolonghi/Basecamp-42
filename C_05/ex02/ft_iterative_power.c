/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfelipe- <rfelipe-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 05:46:10 by rfelipe-          #+#    #+#             */
/*   Updated: 2021/04/15 06:57:59 by rfelipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int result;

	result = 1;
	if (power < 0)
		return (0);
	else if (power == 1)
		return (nb);
	else if (power > 1)
	{
		while (power > 0)
		{
			result *= nb;
			power--;
		}
	}
	return (result);
}
