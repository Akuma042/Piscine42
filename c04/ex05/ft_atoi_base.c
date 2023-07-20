/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjaaball <sjaaball@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 09:57:37 by sjaaball          #+#    #+#             */
/*   Updated: 2023/07/17 19:34:02 by sjaaball         ###   ########.fr       */
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

char	ft_char(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (base[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

int	ft_atoi_base(char *str, char *base)
{
	long int	i;
	long int	sign;
	long int	nb;
	long int	lbase;

	nb = 0;
	i = 0;
	sign = 1;
	lbase = ft_strlen(base);
	if (ft_checkbase(base) == 0)
		return (0);
	while (str[i] == 32 || (str[i] >= '\t' && str[i] <= '\r'))
		i++;
	while ((str[i] == '-') || (str[i] == '+'))
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] && ft_char(str[i], base) >= 0)
	{
		nb = nb * lbase + ft_char(str[i], base);
		i++;
	}
	return (nb * sign);
}

int	main(int ac, char **av)
{
	(void)ac;
	printf("%d", ft_atoi_base(av[1], av[2]));
	return (0);
}