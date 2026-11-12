/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bavayra <x.bavayra@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/12 15:02:12 by bavayra           #+#    #+#             */
/*   Updated: 2026/11/12 15:02:12 by bavayra          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_rev_print(char *str)
{
	int	i;
	int	last;

	i = 0;
	while (str[i])
		i++;
	last = i - 1;
	while (last >= 0)
	{
		write(1, &str[last], 1);
		last--;
	}
	write(1, "\n", 1);
	return (str);
}
