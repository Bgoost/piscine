/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crmanzan <crmanzan@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 11:39:09 by crmanzan          #+#    #+#             */
/*   Updated: 2023/08/13 16:40:50 by crmanzan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	error_handling(int a, int b)
{
	if (a <= 0 || b <= 0)
	{
		write(1, "X y Y deben ser mayores que 0!\n", 30);
	}
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
			if (h == 0 && (w == 0 || w == x - 1))
				ft_putchar('A');
			else if (h == y - 1 && (w == 0 || w == x - 1))
				ft_putchar('C');
			else if (h == 0 || h == y - 1 || w == 0 || w == x - 1)
				ft_putchar('B');
			else
				ft_putchar('*');
			w++;
		}
		if (x > 0 && y > 0)
			ft_putchar('\n');
		h++;
	}
}
