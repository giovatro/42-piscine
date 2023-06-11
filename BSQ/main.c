/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npaturzo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 18:24:48 by npaturzo          #+#    #+#             */
/*   Updated: 2023/06/07 18:27:03 by npaturzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int	main(int argc, char *argv[])
{
	int				i;
	struct s_map	map;

	i = 1;
	if (argc == 1)
	{
	}
	else
	{
		while (i < argc)
		{
			if (open_map(argv[i], &map) == 0)
			{
				write(1, "map error\n", 10);
			}
			else
				pre_solve_map(&map);
			i++;
		}
	}
}
