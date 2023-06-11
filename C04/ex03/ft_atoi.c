/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtroiano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 09:56:47 by gtroiano          #+#    #+#             */
/*   Updated: 2023/05/29 13:59:33 by gtroiano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi(char *str)
{
	int	representation;
	int	sign;

	representation = 0;
	sign = 1;
	while ((*str >= 9 && *str <= 13) || *str == 32)
		str++;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign = -sign;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{	
		representation *= 10;
		representation += *str - 48;
		str++;
	}
	representation *= sign;
	return (representation);
}
/*
int	main(void)
{
	char *s;
	int output;

	s = "  ---+--+1234ab567";
	printf("original char string %s\n", s);
	output = ft_atoi(s);
	printf("int representation %i", output);
}
*/
