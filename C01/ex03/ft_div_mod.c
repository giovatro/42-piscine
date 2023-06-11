/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtroiano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/21 09:47:57 by gtroiano          #+#    #+#             */
/*   Updated: 2023/05/21 10:54:56 by gtroiano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>
#include<stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	if (b)
	{
		*div = a / b;
		*mod = a % b;
	}
}

/*
int main(void)
{
	int a;
	int b;
	int div;
	int mod;

	a = 20;
	b = 5;
	ft_div_mod(a, b, &div, &mod);
	printf("%d div %d = %d and %d %% %d = %d", a, b, div, a, b, mod);
}
*/
