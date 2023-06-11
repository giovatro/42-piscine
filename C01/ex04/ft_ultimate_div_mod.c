/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtroiano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/21 11:04:43 by gtroiano          #+#    #+#             */
/*   Updated: 2023/05/21 12:28:42 by gtroiano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>
#include<stdio.h>

void	ft_ultimate_div_mod(int *a, int*b)
{
	int	temp;

	if (*b)
	{
	temp = *a;
	*a = *a / *b;
	*b = temp % *b;
	}				
}
/*
int	main(void)
{
	int	a;
	int	b;
	int	c;
	int	d;

	a = 20;
	b = 3;
	c = a;
	d = b;
	ft_ultimate_div_mod(&c, &d);
	printf("%d div %d = %d and %d mod %d = %d", a, b, c, a, b, d);
}
*/
