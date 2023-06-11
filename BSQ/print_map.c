/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_map.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npaturzo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 17:28:17 by npaturzo          #+#    #+#             */
/*   Updated: 2023/06/07 18:26:28 by npaturzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"
#include <stdio.h>

void	print_map(struct s_map *map)
{
	int		x;
	int		y;
	char	c;
	int		pos;

	x = 0;
	y = 0;
	c = 0;
	while (y < map->height)
	{
		while (x < map->width)
		{
			pos = map->arr[y][x];
			c = map->c[pos];
			write(1, &c, 1);
			x++;
		}
		write(1, "\n", 1);
		x = 0;
		y++;
	}
	write(1, "\n", 1);
}
