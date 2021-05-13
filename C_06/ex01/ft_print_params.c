/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfelipe- <rfelipe-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 20:12:27 by rfelipe-          #+#    #+#             */
/*   Updated: 2021/04/15 21:00:25 by rfelipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int n;
	int pos;

	if (argc > 1)
	{
		n = 1;
		while (n < argc)
		{
			pos = 0;
			while (argv[n][pos] != '\0')
			{
				write(1, &argv[n][pos], 1);
				pos++;
			}
			write(1, "\n", 1);
			n++;
		}
	}
	return (0);
}
