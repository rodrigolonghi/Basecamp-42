/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfelipe- <rfelipe-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 20:21:13 by rfelipe-          #+#    #+#             */
/*   Updated: 2021/04/15 21:05:13 by rfelipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_strcmp(char *s1, char *s2)
{
	int	pos;

	pos = 0;
	while (s1[pos] != '\0' || s2[pos] != '\0')
	{
		if (s1[pos] != s2[pos])
			return ((unsigned char)s1[pos] - (unsigned char)s2[pos]);
		pos++;
	}
	return (0);
}

void	ft_print_args(int argc, char *argv[])
{
	int x;
	int y;

	x = 1;
	while (x < argc)
	{
		y = 0;
		while (argv[x][y] != '\0')
		{
			write(1, &argv[x][y], 1);
			y++;
		}
		write(1, "\n", 1);
		x++;
	}
}

int		main(int argc, char *argv[])
{
	char	*aux;
	int		x;
	int		y;

	x = 1;
	if (argc > 1)
	{
		while (x < argc - 1)
		{
			y = x + 1;
			while (y < argc)
			{
				if (ft_strcmp(argv[x], argv[y]) > 0)
				{
					aux = argv[x];
					argv[x] = argv[y];
					argv[y] = aux;
				}
				y++;
			}
			x++;
		}
		ft_print_args(argc, argv);
	}
	return (0);
}
