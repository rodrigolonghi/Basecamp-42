/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfelipe- <rfelipe-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 00:12:11 by rfelipe-          #+#    #+#             */
/*   Updated: 2021/04/08 19:30:34 by rfelipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int pos;

	pos = 0;
	if (size > 0)
	{
		while (pos < size - 1)
		{
			dest[pos] = src[pos];
			pos++;
		}
		dest[pos] = '\0';
	}
	pos = 0;
	while (src[pos] != '\0')
	{
		pos++;
	}
	return (pos);
}
