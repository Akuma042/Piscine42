/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjaaball <sjaaball@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 04:19:07 by sjaaball          #+#    #+#             */
/*   Updated: 2023/07/17 19:39:21 by sjaaball         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	ft_checkbase(char *base)
{
	int	i;
	int	j;

	i = 0;
	if (ft_strlen(base) < 2)
		return (0);
	while (base[i])
	{
		if ((base[i] <= 13 && base[i] >= 9) || base[i] == 45 || base[i] == 43
			|| base[i] == ' ')
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	long long int	a;

	if (ft_checkbase(base) == 0)
	{
		write(1, "0", 1);
		return ;
	}
	a = nbr;
	if (a < 0)
	{
		write(1, "-", 1);
		a = -a;
	}
	if (a >= ft_strlen(base))
		ft_putnbr_base(a / ft_strlen(base), base);
	write(1, &base[a % ft_strlen(base)], 1);
}

// int	main(int ac, char **av)
// {
// 	if (ac)
// 		ft_putnbr_base(atoi(av[1]), av[2]);
// 	return (0);
// }
