/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfelipe- <rfelipe-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/16 03:12:27 by rfelipe-          #+#    #+#             */
/*   Updated: 2021/04/16 18:47:07 by rfelipe-         ###   ########.fr       */
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

char	*ft_create_final_str(int size, char **strs, char *sep, char *final_str)
{
	int x;
	int length;

	x = 0;
	length = 0;
	while (x < size)
	{
		length += ft_strlen(strs[x]);
		if (x < size - 1)
			length += ft_strlen(sep);
		x++;
	}
	final_str = malloc(length + 1);
	x = 0;
	while (x < length + 1)
	{
		final_str[x] = '\0';
		x++;
	}
	return (final_str);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		x;
	char	*final_str;

	final_str = NULL;
	final_str = ft_create_final_str(size, strs, sep, final_str);
	if (size <= 0)
		return (NULL);
	else
	{
		x = 0;
		while (x < size)
		{
			final_str = ft_strcat(final_str, strs[x]);
			if (x < size - 1)
				final_str = ft_strcat(final_str, sep);
			x++;
		}
	}
	return (final_str);
}
