/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjaaball <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 11:01:24 by sjaaball          #+#    #+#             */
/*   Updated: 2023/07/01 13:19:53 by sjaaball         ###   ########.fr       */
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

	a = nb ;
	if (a < 0)
	{
		write (1, "-", 1);
		a = -a;
	}
	if (a > 9)
		ft_putnbr(a / 10);
	print('0' + (a % 10));
}
/*
int main()
{
	ft_putnbr(9);
	return(0);
}
*/
