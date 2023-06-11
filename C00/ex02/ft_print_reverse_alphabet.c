/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtroiano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 12:20:03 by gtroiano          #+#    #+#             */
/*   Updated: 2023/05/17 12:31:10 by gtroiano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	letter;

	letter = 122;
	while (letter > 96)
	{
		write (1, &letter, 1);
		letter--;
	}
}
/*
int main(void)
{
	ft_print_reverse_alphabet();
	return 0;
}
*/
