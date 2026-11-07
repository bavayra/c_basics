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
//int x here is the max width, int y height

//Helper function that takes 4 ints as coordinates
void	print_char(int x, int y, int current_x, int current_y)
{
	//Top row logic - checking if we are at the top (1st) row
	if (current_y == 1)
	{
		//we are the top left corner
		if (current_x == 1)
			ft_putchar('/');
		//we are the max width point - top right corner
		else if (current_x == x)
			ft_putchar('\\');
		//we are at the 1st row but NOT in the 1st and last column
		else
			ft_putchar('*');
	}
	//Bottom row logic (we are at max -height)
	else if (current_y == y)
	{
		//we are in the 1st column, last row - left bot corner
		if (current_x == 1)
			ft_putchar('\\');
		//the last (max width y) column, bot row - right bot corner
		else if (current_x == x)
			ft_putchar('/');
		//we are at the last row but NOT in the 1st and last column
		else
			ft_putchar('*');
	}
	//we are not at the 1st and last row BUT in the 1st OR last column - borders
	else if (current_x == 1 || current_x == x)
		ft_putchar('*');
	//not at the 1st/last row, nor in the right-left borders - we're inside
	else
		ft_putchar(' ');
}

//takes user input for rows and columns
void	rush(int x, int y)
{
	int	current_x;
	int	current_y;

	//guard for edge cases (manually chosen max values for practical use)- just exit (no SegFault)
	if (x <= 0 || y <= 0 || x > 2000 || y > 2000)
		return ;
	//setting the counter of rows to 1 to start from the top
	current_y = 1;
	//outside cycle, iterates vertically until we hit the max height
	while (current_y <= y)
	{
		//reset the column value so it will start from the left every time/row
		current_x = 1;
		//inside cycle, iterates horizontally until we hit last col (max width)
		while (current_x <= x)
		{
			//calling with using user's input and current coordinates 
			print_char(x, y, current_x, current_y);
			//increment - moves to the next column at the same row
			current_x++;
		}
		//moves to the next line when hit the last column
		ft_putchar('\n');
		//increment - moves to the next row while back to 1st column
		current_y++;
	}
}
