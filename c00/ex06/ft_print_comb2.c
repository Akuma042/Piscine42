/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjaaball <sjaaball@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 15:51:04 by sjaaball          #+#    #+#             */
/*   Updated: 2023/07/02 13:07:22 by sjaaball         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print(char a)
{
	write(1, &a, 1);
}

void	ft_print_comb2(void)

{
	int	a;
	int	b;

	a = 0;
	while (a <= 98)
	{
		b = a;
		while (b <= 99)
		{
			if (a != b)
			{
				print(a / 10 + '0');
				print(a % 10 + '0');
				write(1, " ", 1);
				print(b / 10 + '0');
				print(b % 10 + '0');
				if (a != 98)
					write(1, ", ", 2);
			}
			b++;
		}
		a++;
	}
}
/*
int	main(void)
{
	ft_print_comb2();
	return(0);
}
*/