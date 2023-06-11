/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   open_map2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npaturzo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 19:04:11 by npaturzo          #+#    #+#             */
/*   Updated: 2023/06/07 19:23:26 by npaturzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int	get_chars(char *buffer, struct s_map *map)
{
	int	c;
	int	i;

	i = 0;
	c = 2;
	while (buffer[i] != '\n')
		i++;
	i--;
	while (c >= 0)
	{
		if (buffer[i] < ' ' || buffer[i] > '~')
			return (0);
		map->c[c] = buffer[i];
		i--;
		c--;
	}
	return (1);
}

int	first_line(char *buffer, struct s_map *map)
{
	int	i;
	int	base;
	int	nlines;

	i = 0;
	base = 1;
	nlines = 0;
	if (get_chars(buffer, map) == 0)
		return (0);
	while (buffer[i] != '\n')
		i++;
	if (i < 3)
		return (0);
	i -= 4;
	while (i >= 0)
	{
		if (buffer[i] < '0' || buffer[i] > '9')
			return (0);
		nlines += ((buffer[i] - '0') * base);
		base *= 10;
		i--;
	}
	map->height = nlines;
	return (1);
}
