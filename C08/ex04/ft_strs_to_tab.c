/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtroiano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/10 13:09:36 by gtroiano          #+#    #+#             */
/*   Updated: 2023/06/10 21:58:15 by gtroiano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int	str_len(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

char	*str_dup(char *str)
{
	char	*dup;
	int		index;

	index = 0;
	dup = malloc(sizeof(char) * (str_len(str) + 1));
	if (dup == NULL)
		return (NULL);
	while (str[index])
	{
		dup[index] = str[index];
		index++;
	}
	dup[index] = '\0';
	return (dup);
}

struct	s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*array;
	int			i;

	i = 0;
	array = malloc(sizeof(t_stock_str) * (ac + 1));
	if (array == NULL)
		return (NULL);
	while (i < ac)
	{
		array[i].size = str_len(av[i]);
		array[i].str = av[i];
		array[i].copy = str_dup(av[i]);
		i++;
	}
	array[i].size = 0;
	array[i].str = 0;
	array[i].copy = 0;
	return (array);
}
