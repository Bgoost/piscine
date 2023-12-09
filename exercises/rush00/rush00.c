/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raqubarr <raqubarr@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 15:58:30 by raqubarr          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2023/08/13 16:52:42 by raqubarr         ###   ########.fr       */
=======
>>>>>>> a425e1ffafbe897c3e9fa878a0e368528342f32e
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	h;
	int	w;

	h = 0;
	w = 0;
	if (x <= 0 || y <= 0)
<<<<<<< HEAD
		write(1, "Error: solo se pueden introducir valores mayores de 0\n", 54);
=======
>>>>>>> a425e1ffafbe897c3e9fa878a0e368528342f32e
	while (h < y)
	{
		while (w < x)
		{
			if ((h == 0 || h == y - 1) && (w == 0 || w == x - 1))
				ft_putchar('o');
			else if (h == 0 || h == y - 1)
				ft_putchar('-');
			else if (w == 0 || w == x - 1)
				ft_putchar('|');
			else
				ft_putchar(' ');
			w++;
		}
		if (x > 0 && y > 0)
			ft_putchar('\n');
		h++;
		w = 0;
	}
}
