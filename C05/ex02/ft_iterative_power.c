/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtroiano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 10:35:18 by gtroiano          #+#    #+#             */
/*   Updated: 2023/05/30 12:10:57 by gtroiano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	i;

	i = nb;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (power > 1)
	{
		nb = nb * i;
		power--;
	}
	return (nb);
}
/*
int	main(void)
{
	printf("%i\n", ft_iterative_power(0, -42));
	printf("%i\n", ft_iterative_power(0, 0));
	printf("%i\n", ft_iterative_power(2, 4));
}
*/
