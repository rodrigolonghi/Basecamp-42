/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfelipe- <rfelipe-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 13:16:53 by rfelipe-          #+#    #+#             */
/*   Updated: 2021/04/06 22:53:40 by rfelipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int c;

	c = *b;
	*b = *a;
	*a = c;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int i;
	int j;
	int min_pos;

	i = 0;
	while (i < size)
	{
		min_pos = i;
		j = i + 1;
		while (j < size)
		{
			if (tab[j] < tab[min_pos])
				min_pos = j;
			j++;
		}
		ft_swap(&tab[i], &tab[min_pos]);
		i++;
	}
}
