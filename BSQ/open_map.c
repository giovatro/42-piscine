/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   open_map.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npaturzo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 11:18:26 by npaturzo          #+#    #+#             */
/*   Updated: 2023/06/07 19:25:52 by npaturzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

/*
 * int	first_line(char *buffer, struct s_map *map)
{
	int	i;
	int	c;
	int	base;
	int	nlines;

	i = 0;
	c = 2;
	base = 1;
	nlines = 0;
	while (buffer[i] != '\n')
		i++;
	i--;
	if (i < 3)
		return (0);
	while (c >= 0)
	{
		if (buffer[i] < ' ' || buffer[i] > '~')
			return (0);
		map->c[c] = buffer[i];
		i--;
		c--;
	}
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
*/

int	line_num(char *buffer, struct s_map *map)
{
	int	lcount;
	int	i;

	i = 0;
	lcount = -1;
	while (buffer[i])
	{
		if (buffer[i] == '\n')
			lcount++;
		i++;
	}
	if (map->height != lcount)
		return (0);
	i = 0;
	return (1);
}

int	char_check(char *buffer, struct s_map *map)
{
	int		i;
	char	a;
	char	b;

	a = map->c[0];
	b = map->c[1];
	i = 0;
	if (map->c[0] == map->c[1] || map->c[0] == map->c[2])
		return (0);
	if (map->c[1] == map->c[2])
		return (0);
	while (buffer[i] != '\n')
		i++;
	while (buffer[i])
	{
		if (buffer[i] != a && buffer[i] != b && buffer[i] != '\n')
			return (0);
		i++;
	}
	return (1);
}

int	len_check(char *buffer, struct s_map *map)
{
	int	i;
	int	count;

	i = 0;
	count = -1;
	map->width = 0;
	while (buffer[i] != '\n')
		i++;
	while (buffer[i])
	{
		count++;
		if (buffer[i] == '\n')
		{
			if (map->width == 0)
				map->width = count;
			if (count != map->width && map->width != 0)
				return (0);
			count = -1;
		}
		i++;
	}
	return (1);
}

int	read_map(char *buffer, struct s_map *map)
{
	if (first_line(buffer, map) == 0)
		return (0);
	if (line_num(buffer, map) == 0)
		return (0);
	if (char_check(buffer, map) == 0)
		return (0);
	if (len_check(buffer, map) == 0)
		return (0);
	if (make_map(buffer, map) == 0)
		return (0);
	return (1);
}

int	open_map(char *map_file, struct s_map *map)
{
	int		open_ret;
	int		read_ret;
	int		map_check;
	char	*buffer;

	if (map_file == 0)
		return (0);
	buffer = malloc(sizeof(char) * 5000);
	if (buffer == 0)
		return (-1);
	open_ret = open(map_file, O_RDONLY);
	read_ret = read(open_ret, buffer, 5000);
	close(open_ret);
	map_check = read_map(buffer, map);
	free(buffer);
	return (map_check);
}
