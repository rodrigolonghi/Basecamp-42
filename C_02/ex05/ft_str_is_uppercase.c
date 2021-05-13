/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfelipe- <rfelipe-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 04:19:03 by rfelipe-          #+#    #+#             */
/*   Updated: 2021/04/08 19:28:29 by rfelipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int pos;
	int is_uppercase;

	pos = 0;
	is_uppercase = 1;
	while (str[pos] != '\0')
	{
		if (!(str[pos] >= 'A' && str[pos] <= 'Z'))
		{
			is_uppercase = 0;
			break ;
		}
		pos++;
	}
	return (is_uppercase);
}
