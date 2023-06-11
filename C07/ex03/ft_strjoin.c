/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtroiano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/04 15:12:33 by gtroiano          #+#    #+#             */
/*   Updated: 2023/06/04 20:19:55 by gtroiano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(int size, char **strs, char *sep)
{	
	int	len1;
	int	len2;
	int	lentotal;

	if (size == 0)
		return (0);
	len1 = sizeof(strs) - 1;
	len2 = sizeof(sep) - 1;
	lentotal = (size * (len1 + len2)) - len2;
	return (lentotal);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*output;
	int		a;
	int		b;
	int		c;

	output = malloc(sizeof(char) * ft_strlen(size, strs, sep) + 1);
	if (output == NULL)
		return (NULL);
	a = 0;
	c = 0;
	while (a < size)
	{
		b = 0;
		while (strs[a][b] != '\0')
			output[c++] = strs[a][b++];
		b = 0;
		while ((a < size - 1) && sep[b] != '\0')
			output[c++] = sep[b++];
		a++;
	}
	output[c] = '\0';
	return (output);
}
/*
int	main(void)
{
	char *s[4];
	char *sep = " ";
	
	s[0] = "My";
	s[1] = "name";
	s[2] = "is";
	s[3] = "Giovanni";

	printf("%s", ft_strjoin(4, s, sep));
	return (0);
}
*/