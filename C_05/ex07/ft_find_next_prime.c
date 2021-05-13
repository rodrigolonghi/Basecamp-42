/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfelipe- <rfelipe-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 18:03:13 by rfelipe-          #+#    #+#             */
/*   Updated: 2021/04/16 02:52:30 by rfelipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int q;

	q = 5;
	if (nb <= 1)
		return (0);
	else if (nb != 2 && nb % 2 == 0)
		return (0);
	else if (nb != 3 && nb % 3 == 0)
		return (0);
	else if (nb == 2 || nb == 3)
		return (1);
	else if (nb == 2147483647)
		return (1);
	else
	{
		while (q < (nb / 2))
		{
			if (nb % q == 0)
				return (0);
			q += 2;
		}
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int next_prime;

	next_prime = nb;
	while (ft_is_prime(next_prime) != 1)
		next_prime++;
	return (next_prime);
}
