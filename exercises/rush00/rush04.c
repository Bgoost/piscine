/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emikhayl <emikhayl@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 13:31:27 by emikhayl          #+#    #+#             */
/*   Updated: 2023/08/13 17:15:33 by crmanzan         ###   ########.fr       */
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
				ft_putchar('A');
			else if (y != 1 && x != 1 && h == y - 1 && w == x - 1)
				ft_putchar('A');
			else if ((h == 0 || h == y - 1) && (w == 0 || w == x - 1))
				ft_putchar('C');
			else if (h == 0 || h == y - 1 || w == 0 || w == x - 1)
				ft_putchar('B');
			else
				ft_putchar(' ');
			w++;
		}
		if (h > 0 && w > 0)
			ft_putchar('\n');
		h++;
	}
}
