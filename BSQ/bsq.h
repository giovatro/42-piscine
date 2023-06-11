/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npaturzo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 18:25:09 by npaturzo          #+#    #+#             */
/*   Updated: 2023/06/07 19:27:34 by npaturzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BSQ_H
# define BSQ_H

# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>

struct s_map
{
	char	c[3];
	int		height;
	int		width;
	int		**arr;
};

int		open_map(char *map_file, struct s_map *map);

int		pre_solve_map(struct s_map *map);

int		make_map(char *buffer, struct s_map *map);

void	print_map(struct s_map *map);

int		first_line(char *buffer, struct s_map *map);

#endif
