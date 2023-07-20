/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjaaball <sjaaball@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 19:41:24 by sjaaball          #+#    #+#             */
/*   Updated: 2023/07/12 23:52:20 by sjaaball         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	long	i;

	i = 2;
	if (nb <= 1)
		return (0);
	while (i * i <= nb)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (ft_is_prime(nb) == 1)
		return (nb);
	while (ft_is_prime(nb) == 0)
	{
		nb++;
	}
	return (nb);
}

// #include <stdio.h>

// int	main(void)
// {
// 	printf("%d", ft_find_next_prime(10));
// 	return (0);
// }
