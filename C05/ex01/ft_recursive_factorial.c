/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtroiano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 22:05:34 by gtroiano          #+#    #+#             */
/*   Updated: 2023/05/29 22:35:21 by gtroiano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	int	accumulator;

	accumulator = nb;
	if (nb < 0)
		return (0);
	if (nb == 0 || nb == 1)
		return (1);
	if (nb > 1)
		accumulator *= ft_recursive_factorial(nb - 1);
	return (accumulator);
}
/*
int	main(void)
{
	printf("%i\n", ft_recursive_factorial(4));
	printf("%i\n", ft_recursive_factorial(1));
	printf("%i\n", ft_recursive_factorial(-42));
}
*/
