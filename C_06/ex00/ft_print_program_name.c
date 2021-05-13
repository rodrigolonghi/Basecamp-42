/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfelipe- <rfelipe-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 18:57:15 by rfelipe-          #+#    #+#             */
/*   Updated: 2021/04/15 21:00:15 by rfelipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int pos;

	pos = 0;
	if (argc > 0)
	{
		while (argv[0][pos] != '\0')
		{
			write(1, &argv[0][pos], 1);
			pos++;
		}
		write(1, "\n", 1);
	}
	return (0);
}
