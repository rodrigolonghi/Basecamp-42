/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfelipe- <rfelipe-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/09 05:53:46 by rfelipe-          #+#    #+#             */
/*   Updated: 2021/04/09 06:15:37 by rfelipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	int size;
	int pos;

	size = 0;
	pos = 0;
	while (dest[size] != '\0')
		size++;
	while (src[pos] != '\0')
	{
		dest[size] = src[pos];
		pos++;
		size++;
	}
	dest[size] = '\0';
	return (dest);
}
