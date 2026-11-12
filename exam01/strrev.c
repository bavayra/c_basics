/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strrev.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bavayra <x.bavayra@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/12 17:59:41 by bavayra           #+#    #+#             */
/*   Updated: 2026/11/12 17:59:41 by bavayra          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrev(char *str)
{
	int	i;
	int	last;
	int	temp;

	i = 0;
	while (str[i])
	{
		i++;
	}
	last = i - 1;
	i = 0;
	while (i < last)
	{
		temp = str[i];
		str[i] = str[last];
		str[last] = temp;
		i++;
		last--;
	}
	return (str);
}
