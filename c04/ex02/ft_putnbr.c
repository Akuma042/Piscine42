/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjaaball <sjaaball@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 18:22:19 by sjaaball          #+#    #+#             */
/*   Updated: 2023/07/09 10:08:13 by sjaaball         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print(char a)
{
	write(1, &a, 1);
}

void	ft_putnbr(int nb)
{
	long int	a;

	a = nb;
	if (a < 0)
	{
		write(1, "-", 1);
		a = -a;
	}
	if (a > 9)
		ft_putnbr(a / 10);
	print('0' + (a % 10));
}
