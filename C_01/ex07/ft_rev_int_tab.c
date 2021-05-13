/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfelipe- <rfelipe-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 04:08:07 by rfelipe-          #+#    #+#             */
/*   Updated: 2021/04/06 13:36:56 by rfelipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int x;
	int temp;

	x = 0;
	while (x < (size / 2))
	{
		temp = tab[x];
		tab[x] = tab[size - 1 - x];
		tab[size - 1 - x] = temp;
		x++;
	}
}
