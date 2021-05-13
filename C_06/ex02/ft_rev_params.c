/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfelipe- <rfelipe-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 20:18:27 by rfelipe-          #+#    #+#             */
/*   Updated: 2021/04/15 21:00:43 by rfelipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int n;
	int pos;

	if (argc > 1)
	{
		n = argc - 1;
		while (n > 0)
		{
			pos = 0;
			while (argv[n][pos] != '\0')
			{
				write(1, &argv[n][pos], 1);
				pos++;
			}
			write(1, "\n", 1);
			n--;
		}
	}
	return (0);
}
