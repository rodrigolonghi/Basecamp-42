/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfelipe- <rfelipe-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 23:38:18 by rfelipe-          #+#    #+#             */
/*   Updated: 2021/04/16 00:14:39 by rfelipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int *matrix;
	int pos;
	int dif;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	else
	{
		dif = max - min;
		*range = malloc(4 * dif);
		matrix = malloc(4 * dif);
		pos = 0;
		while (min < max)
		{
			matrix[pos] = min;
			min++;
			pos++;
		}
		*range = matrix;
	}
	return (dif);
}
