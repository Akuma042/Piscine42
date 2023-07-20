/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex02.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjaaball <sjaaball@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/14 00:46:02 by sjaaball          #+#    #+#             */
/*   Updated: 2023/07/14 01:07:56 by sjaaball         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>


void	print(char a)
{
	write(1, &a, 1);
}

int	ft_putnbr(int nb)
{
	long int	a;

	a = nb;

	if(a < 0)
	{
		write(1, "-", 1);
		a = -a;
	}
	
	if(a > 9)
		ft_putnbr(a / 10);
	print('0' + (a % 10));
}

int main()
{
	ft_putnbr(9);
	return(0);
}