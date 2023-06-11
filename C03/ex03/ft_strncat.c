/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtroiano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 16:28:43 by gtroiano          #+#    #+#             */
/*   Updated: 2023/05/25 16:28:52 by gtroiano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	s;
	unsigned int	d;

	s = 0;
	d = 0;
	while (dest[d] != '\0')
	{
		d++;
	}
	while (src[s] != '\0' && s < nb)
	{
		dest[d] = src[s];
		d++;
		s++;
	}
	dest[d] = '\0';
	return (dest);
}
/*
int	main(void)
{
	char source[] = "";
	char destination[] = "";

	ft_strncat(destination, source, 35);
	printf("%s", destination);
}
*/
