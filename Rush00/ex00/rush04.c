/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihogben <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 10:22:30 by ihogben           #+#    #+#             */
/*   Updated: 2023/05/20 13:08:41 by ihogben          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

int	g_x;
int	g_y;

void	ft_first_row(void)
{
	int	x;

	x = 0;
	while (x < g_x)
	{
		if (x == 0)
			ft_putchar('A');
		else if (x == (g_x - 1) && !(g_x == 1))
			ft_putchar('C');
		else
			ft_putchar('B');
		x++;
	}
	write(1, "\n", 1);
}

void	ft_last_row(void)
{
	int	x;

	x = 0;
	while (x < g_x)
	{
		if (x == 0)
			ft_putchar('C');
		else if (x == (g_x - 1) && !(g_x == 1))
			ft_putchar('A');
		else
			ft_putchar('B');
		x++;
	}
	write(1, "\n", 1);
}

void	ft_middle_rows(void)
{
	int	x;
	int	y;

	x = 0;
	y = 1;
	while (y < (g_y - 1))
	{
		while (x < g_x)
		{
			if (x == 0)
				ft_putchar('B');
			else if (x == (g_x - 1) && !(g_x == 1))
				ft_putchar('B');
			else
				ft_putchar(' ');
			x++;
		}
		x = 0;
		y++;
		write(1, "\n", 1);
	}
}

void	rush(int x, int y)
{
	g_x = x;
	g_y = y;
	if (x == 0 || y == 0)
		return;
	ft_first_row();
	ft_middle_rows();
	if (y > 1)
		ft_last_row();
}
