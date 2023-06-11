/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtroiano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 16:08:40 by gtroiano          #+#    #+#             */
/*   Updated: 2023/05/30 20:06:30 by gtroiano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_fibonacci(int index)
{
	int	term;

	term = index;
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index == 1)
		return (1);
	if (index >= 2)
		term = ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
	return (term);
}
/*
int	main(void)
{
	printf("%i\n", ft_fibonacci(-1));
	printf("%i\n", ft_fibonacci(0));
	printf("%i\n", ft_fibonacci(1));
	printf("%i", ft_fibonacci(7));
}
*/