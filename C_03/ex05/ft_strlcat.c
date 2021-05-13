/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfelipe- <rfelipe-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 00:51:36 by rfelipe-          #+#    #+#             */
/*   Updated: 2021/04/14 19:53:38 by rfelipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int length;

	length = 0;
	while (*dest != '\0' && length < size)
	{
		dest++;
		length++;
	}
	while (*src != '\0' && length + 1 < size)
	{
		*dest = *src;
		dest++;
		src++;
		length++;
	}
	if (length < size)
		*dest = '\0';
	while (*src != '\0')
	{
		src++;
		length++;
	}
	return (length);
}
