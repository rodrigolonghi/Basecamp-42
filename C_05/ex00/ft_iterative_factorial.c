/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfelipe- <rfelipe-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 02:40:01 by rfelipe-          #+#    #+#             */
/*   Updated: 2021/04/15 06:57:45 by rfelipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int fatorial;

	fatorial = 1;
	if (nb < 0)
		return (0);
	if (nb > 0)
	{
		while (nb > 0)
		{
			fatorial *= nb;
			nb--;
		}
	}
	return (fatorial);
}
