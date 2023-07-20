/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjaaball <sjaaball@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 04:26:05 by sjaaball          #+#    #+#             */
/*   Updated: 2023/07/17 21:43:45 by sjaaball         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*tab;
	int	j;
	int	len;

	j = 0;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	len = max - min;
	tab = malloc((len) * sizeof(int));
	if (!tab)
		return (-1);
	while (j < len)
	{
		tab[j] = min + j;
		j++;
	}
	tab[j] = '\0';
	*range = tab;
	return (len);
}

// int	main(void)
// {
// 	int *range;
// 	int size = ft_ultimate_range(&range, 1, 10);
// 	if (size == -1)
// 	{
// 		printf("Allocation failed.\n");
// 		return (1);
// 	}
// 	else if (size == 0)
// 	{
// 		printf("min is greater than or equal to max.\n");
// 		return (1);
// 	}
// 	else
// 	{
// 		for (int i = 0; i < size; i++)
// 		{
// 			printf("%d ", range[i]);
// 		}
// 		printf("\n");
// 		free(range);
// 		return (0);
// 	}
// }