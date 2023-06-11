/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   make_map.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npaturzo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 15:00:14 by npaturzo          #+#    #+#             */
/*   Updated: 2023/06/07 18:49:31 by npaturzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int	make_arr(struct s_map *map)
{
	int	x;
	int	y;

	x = 0;
	y = 0;
	map->arr = malloc(sizeof(int *) * map->height);
	if (map->arr == 0)
		return (0);
	while (y < map->height)
	{
		map->arr[y] = malloc(sizeof(int) * map->width);
		y++;
	}
	return (1);
}

void	fill_map(struct s_map *map, char *buffer)
{
	int	i;
	int	x;
	int	y;

	i = 0;
	y = 0;
	x = -1;
	while (buffer[i] != '\n')
		i++;
	while (buffer[i])
	{
		x++;
		if (buffer[i] == '\n')
		{
			y++;
			x = -1;
		}
		if (buffer[i] == map->c[1])
			map->arr[y -1][x] = 1;
		i++;
	}
}

int	make_map(char *buffer, struct s_map *map)
{
	if (make_arr(map) == 0)
		return (0);
	fill_map(map, buffer);
	return (1);
}
