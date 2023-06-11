/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtroiano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/03 18:10:11 by gtroiano          #+#    #+#             */
/*   Updated: 2023/06/03 19:58:14 by gtroiano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	*output;
	int	index;
	int	len;

	index = 0;
	len = max - min;
	if (min >= max)
		return (NULL);
	output = (int *)malloc(sizeof(int) * len);
	if (output == NULL)
		return (NULL);
	while (min < max)
	{
		output[index] = min;
		min++;
		index++;
	}
	return (output);
}
/*
int	main(void)
{
	int	*array;
	int	index;

	index = 0;
	array = ft_range(5, 22);
	while (index < (22 - 5))
		printf("%i ", array[index++]);
}
*/