/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prueba.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crmanzan <crmanzan@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 08:57:39 by crmanzan          #+#    #+#             */
/*   Updated: 2023/08/31 09:03:28 by crmanzan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_atoi(char *str){
  
  int i;
  int neg;
  int nb;
  
  i = 0;
  neg = 0;
  nb = 0;
  
  while(str[i] == '\t' || str[i] == '\n' || str[i] == '\v' || str[i] == '\f' || str[i] == '\r'){
    i++;
  }
  while(str[i] == '-' || str[i] == '+'){
    if(str[i] == '-'){
      neg++;
    }
    i++;
  }
  while(str[i] >= '0' && str[i] <= '9'){
    nb *= 10;
    nb += str[i] - 48;
    i++;
  }
  if(neg % 2 != 0){
    nb *= -1;
  }
  return nb;
  
  
}




int main(int argc, char *argv[])
{
	int i = 0;
  if(argc == 2){
    while(argv[1][i] != '\0'){
      printf("%d", ft_atoi(&argv[1][i]));
  
  		i++;
	}
  }
    return 0;
}
