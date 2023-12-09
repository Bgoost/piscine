/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crmanzan <crmanzan@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 14:41:17 by crmanzan          #+#    #+#             */
/*   Updated: 2023/08/21 17:40:58 by crmanzan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	is_next;

	i = 0;
	is_next = 1;
	while (*str != '\0')
	{
		if ((*str >= '0' && *str <= '9') 
			|| (*str >= 'a' && *str <= 'z') 
			|| (*str >= 'A' && *str <= 'Z'))
		{
			if ((is_next == 1) && (*str >= 'a' && *str <= 'z'))
				*str = *str - 32;
			if ((is_next == 0) && (*str >= 'A' && *str <= 'Z'))
				*str = *str + 32;
			is_next = 0;
		}
		else
			is_next = 1;
		i++;
		str++;
	}
	str -= i;
	return (str);
}
