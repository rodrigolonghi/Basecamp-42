/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfelipe- <rfelipe-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 03:45:16 by rfelipe-          #+#    #+#             */
/*   Updated: 2021/04/08 22:33:47 by rfelipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int pos;
	int is_numeric;

	pos = 0;
	is_numeric = 1;
	while (str[pos] != '\0')
	{
		if (!(str[pos] >= '0' && str[pos] <= '9'))
		{
			is_numeric = 0;
			break ;
		}
		pos++;
	}
	return (is_numeric);
}
