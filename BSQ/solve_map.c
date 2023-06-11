/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve_map.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npaturzo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 18:25:36 by npaturzo          #+#    #+#             */
/*   Updated: 2023/06/07 18:54:03 by npaturzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"
#include <stdio.h>

int	check_obs(struct s_map *map, int size, int offset[2])
{
	int	xpos;
	int	ypos;

	xpos = offset[0];
	ypos = offset[1];
	while (ypos < (size + offset[1]))
	{
		while (xpos < (size + offset[0]))
		{
			if (map->arr[ypos][xpos] == 1)
			{
				return (0);
			}
			xpos++;
		}
		xpos = offset[0];
		ypos++;
	}
	return (1);
}

int	move_offset(struct s_map *map, int size, int offset[2])
{
	int	max_x;
	int	max_y;

	max_x = (map->width - size);
	max_y = (map->height - size);
	if (offset[1] == max_y && offset[0] == max_x)
	{
		offset[0] = 0;
		offset[1] = 0;
		return (0);
	}
	if (offset[0] < max_x)
	{
		offset[0]++;
		return (1);
	}
	else if (offset[0] == max_x)
	{
		offset[1]++;
		offset[0] = 0;
		return (1);
	}
	return (0);
}

void	fill_arr(struct s_map *map, int size, int offset[2])
{
	int	xpos;
	int	ypos;

	xpos = offset[0];
	ypos = offset[1];
	while (ypos < (size + offset[1]))
	{
		while (xpos < (size + offset[0]))
		{
			map->arr[ypos][xpos] = 2;
			xpos++;
		}
		xpos = offset[0];
		ypos++;
	}
}

int	solve_map(struct s_map *map, int size_down, int offset[2])
{
	int	size;

	size = 0;
	if (map->height < map->width)
		size = (map->height - size_down);
	else
		size = (map->width - size_down);
	if (size <= 0)
		return (0);
	if (check_obs(map, size, offset) == 1)
	{
		fill_arr(map, size, offset);
		return (1);
	}
	else if (move_offset(map, size, offset) == 1)
		return (solve_map(map, size_down, offset));
	else
		return (solve_map(map, size_down + 1, offset));
	return (0);
}

int	pre_solve_map(struct s_map *map)
{
	int	size_down;
	int	offset[2];

	size_down = 0;
	offset[0] = 0;
	offset[1] = 0;
	if (solve_map(map, size_down, offset) == 1)
	{
		print_map(map);
		return (1);
	}
	return (0);
}
