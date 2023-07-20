/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjaaball <sjaaball@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 03:01:15 by sjaaball          #+#    #+#             */
/*   Updated: 2023/07/18 05:55:08 by sjaaball         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*t;

	t = (int *)malloc(sizeof(*t) * (max - min));
	if (!t)
		return (NULL);
	if (max <= min)
	{ 
		return (NULL);
	}
	i = 0;
	while (min < max)
	{
		t[i] = min;
		min++;
		i++;
	}
	return (t);
}

int	main(int ac, char **av)
{
	int *tab = ft_range(atoi(av[1]), atoi(av[2]));
	printf("%d, %d, %d, %d ,%d", tab[0], tab[1], tab[2], tab[3], tab[4]);
	return (0);
}