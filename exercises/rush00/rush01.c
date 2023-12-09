/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raqubarr <raqubarr@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 12:10:46 by raqubarr          #+#    #+#             */
/*   Updated: 2023/08/13 17:08:34 by emikhayl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	error_handling(int a, int b)
{
	if (a <= 0 || b <= 0)
		write(1, "X y Y deben ser mayores que 0!\n", 32);
}

void	rush(int x, int y)
{
	int	h;
	int	w;

	error_handling(x, y);
	h = 0;
	while (h < y)
	{
		w = 0;
		while (w < x)
		{
			if (h == 0 && w == 0)
				ft_putchar('/');
			else if (h == y - 1 && w == x - 1 && x > 1 && y > 1)
				ft_putchar('/');
			else if ((h == 0 && w == x - 1) || (h == y - 1 && w == 0))
				ft_putchar('\\');
			else if (h == 0 || w == 0 || w == x - 1 || h == y - 1)
				ft_putchar('*');
			else
				ft_putchar(' ');
			w++;
		}
		if (x > 0 && y > 0)
			ft_putchar('\n');
		h++;
	}
}
