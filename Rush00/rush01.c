/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bavayra <x.bavayra@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/07 17:03:13 by bavayra           #+#    #+#             */
/*   Updated: 2026/11/07 17:03:13 by bavayra          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	print_char(int x, int y, int current_x, int current_y)
{
	if (current_y == 1)
	{
		if (current_x == 1)
			ft_putchar('/');
		else if (current_x == x)
			ft_putchar('\\');
		else
			ft_putchar('*');
	}
	else if (current_y == y)
	{
		if (current_x == 1)
			ft_putchar('\\');
		else if (current_x == x)
			ft_putchar('/');
		else
			ft_putchar('*');
	}
	else if (current_x == 1 || current_x == x)
		ft_putchar('*');
	else
		ft_putchar(' ');
}

void	rush(int x, int y)
{
	int	current_x;
	int	current_y;

	if (x <= 0 || y <= 0 || x > 2000 || y > 2000)
		return ;
	current_y = 1;
	while (current_y <= y)
	{
		current_x = 1;
		while (current_x <= x)
		{
			print_char(x, y, current_x, current_y);
			current_x++;
		}
		ft_putchar('\n');
		current_y++;
	}
}
