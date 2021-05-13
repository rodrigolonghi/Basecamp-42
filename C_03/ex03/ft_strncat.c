/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfelipe- <rfelipe-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/09 06:28:00 by rfelipe-          #+#    #+#             */
/*   Updated: 2021/04/14 20:05:59 by rfelipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int size;
	unsigned int pos;

	size = 0;
	pos = 0;
	while (dest[size] != '\0')
		size++;
	while (pos < nb && src[pos] != '\0')
	{
		dest[size] = src[pos];
		pos++;
		size++;
	}
	dest[size] = '\0';
	return (dest);
}
