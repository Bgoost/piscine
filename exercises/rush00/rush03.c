/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raqubarr <raqubarr@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 11:02:01 by raqubarr          #+#    #+#             */
/*   Updated: 2023/08/13 16:52:01 by raqubarr         ###   ########.fr       */
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
			if ((h == 0 || h == y - 1) && (w == 0))
				ft_putchar('A');
			else if ((w == 0 || h == y - 1) && (w == x - 1))
				ft_putchar('C');
			else if (h == 0 || h == y - 1 || w == 0 || w == x - 1)
				ft_putchar('B');
			else
				ft_putchar(' ');
			w++;
		}
		if (x > 0 && y > 0)
			ft_putchar('\n');
		h++;
	}
}
