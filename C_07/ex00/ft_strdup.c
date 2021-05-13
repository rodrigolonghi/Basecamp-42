/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfelipe- <rfelipe-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 22:44:44 by rfelipe-          #+#    #+#             */
/*   Updated: 2021/04/16 18:28:17 by rfelipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int length;

	length = 0;
	while (str[length] != '\0')
		length++;
	return (length);
}

char	*ft_strcpy(char *dest, char *src)
{
	int pos;

	pos = 0;
	while (src[pos] != '\0')
	{
		dest[pos] = src[pos];
		pos++;
	}
	dest[pos] = '\0';
	return (dest);
}

char	*ft_strdup(char *src)
{
	char *dup;

	dup = (char *)malloc(ft_strlen(src));
	dup = ft_strcpy(dup, src);
	return (dup);
}
