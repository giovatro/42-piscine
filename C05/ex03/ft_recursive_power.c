/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtroiano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 12:13:23 by gtroiano          #+#    #+#             */
/*   Updated: 2023/05/30 13:56:20 by gtroiano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	if (power > 1)
		nb = nb * ft_recursive_power(nb, power - 1);
	return (nb);
}
/*
int	main(void)
{
	printf("%i\n", ft_recursive_power(0, -42));
	printf("%i\n", ft_recursive_power(0, 0));
	printf("%i\n", ft_recursive_power(2, 4));
}
*/
