/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfelipe- <rfelipe-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 04:23:20 by rfelipe-          #+#    #+#             */
/*   Updated: 2021/04/08 22:37:20 by rfelipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int pos;
	int is_printable;

	pos = 0;
	is_printable = 1;
	while (str[pos] != '\0')
	{
		if (str[pos] < 32 || str[pos] > 126)
		{
			is_printable = 0;
			break ;
		}
		pos++;
	}
	return (is_printable);
}
