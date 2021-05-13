/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfelipe- <rfelipe-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 04:51:12 by rfelipe-          #+#    #+#             */
/*   Updated: 2021/04/09 02:46:54 by rfelipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int pos;
	int after_non_alphanumeric;

	pos = 0;
	after_non_alphanumeric = 1;
	while (str[pos] != '\0')
	{
		if (str[pos] >= 'A' && str[pos] <= 'Z')
			str[pos] += 32;
		if (after_non_alphanumeric == 1)
		{
			if (str[pos] >= 'a' && str[pos] <= 'z')
				str[pos] -= 32;
			after_non_alphanumeric = 0;
		}
		if (!((str[pos] >= '0' && str[pos] <= '9') ||
				(str[pos] >= 'a' && str[pos] <= 'z') ||
					(str[pos] >= 'A' && str[pos] <= 'Z')))
			after_non_alphanumeric = 1;
		pos++;
	}
	return (str);
}
