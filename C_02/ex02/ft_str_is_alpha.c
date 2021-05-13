/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfelipe- <rfelipe-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 03:17:38 by rfelipe-          #+#    #+#             */
/*   Updated: 2021/04/08 22:30:03 by rfelipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int pos;
	int is_alpha;

	pos = 0;
	is_alpha = 1;
	while (str[pos] != '\0')
	{
		if (!((str[pos] >= 'a' && str[pos] <= 'z')
					|| (str[pos] >= 'A' && str[pos] <= 'Z')))
		{
			is_alpha = 0;
			break ;
		}
		pos++;
	}
	return (is_alpha);
}
