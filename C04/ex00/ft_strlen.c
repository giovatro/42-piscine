/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtroiano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/27 18:07:27 by gtroiano          #+#    #+#             */
/*   Updated: 2023/05/27 19:09:10 by gtroiano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	lenght;

	lenght = 0;
	while (str[lenght])
	{
		lenght++;
	}
	return (lenght);
}
/*
int	main(void)
{
	char *s;
   	int size;

	s	= "Saturday 27th of May";
	size = ft_strlen(s);
	printf("%i", size);
}
*/
