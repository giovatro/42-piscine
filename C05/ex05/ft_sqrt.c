/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtroiano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 10:51:38 by gtroiano          #+#    #+#             */
/*   Updated: 2023/05/31 16:55:47 by gtroiano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	guess;

	guess = 0;
	if (nb < 0)
		return (0);
	while ((guess * guess) <= nb && guess <= 46340)
	{
		if ((guess * guess) == nb)
			return (guess);
		guess++;
	}
	return (0);
}
/*
int	main(void)
{
	printf("%i\n", ft_sqrt(5));
	printf("%i\n", ft_sqrt(2147483647));
	printf("%i\n", ft_sqrt(0));
}
*/