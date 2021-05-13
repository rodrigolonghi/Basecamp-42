/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfelipe- <rfelipe-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 06:17:43 by rfelipe-          #+#    #+#             */
/*   Updated: 2021/04/16 00:33:40 by rfelipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	else if (index == 0)
		return (0);
	else if (index > 0 && index <= 2)
		return (1);
	else if (index == 3)
		return (2);
	return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}
