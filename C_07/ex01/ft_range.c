/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfelipe- <rfelipe-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 22:59:04 by rfelipe-          #+#    #+#             */
/*   Updated: 2021/04/16 18:27:41 by rfelipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int *matrix;
	int pos;

	if (min >= max)
		matrix = NULL;
	else
	{
		matrix = malloc(4 * (max - min));
		pos = 0;
		while (min < max)
		{
			matrix[pos] = min;
			min++;
			pos++;
		}
	}
	return (matrix);
}
