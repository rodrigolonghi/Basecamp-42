/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfelipe- <rfelipe-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 03:51:18 by rfelipe-          #+#    #+#             */
/*   Updated: 2021/04/08 19:28:18 by rfelipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int pos;
	int is_lowercase;

	pos = 0;
	is_lowercase = 1;
	while (str[pos] != '\0')
	{
		if (!(str[pos] >= 'a' && str[pos] <= 'z'))
		{
			is_lowercase = 0;
			break ;
		}
		pos++;
	}
	return (is_lowercase);
}
