/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtroiano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/04 09:53:51 by gtroiano          #+#    #+#             */
/*   Updated: 2023/06/04 14:44:55 by gtroiano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	len;
	int	index;

	index = 0;
	if (min >= max)
		return (0);
	len = max - min;
	*range = (int *)malloc(sizeof(int) * len);
	if (*range == NULL)
		return (-1);
	while (min < max)
	{
		(*range)[index] = min;
		min++;
		index++;
	}
	return (index);
}
/*
int main(void)
{
	int	*range;
	int	size;

    size = ft_ultimate_range(&range, 2, 53);
	printf("%i", size);
}
*/