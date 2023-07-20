/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjaaball <sjaaball@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 15:38:03 by sjaaball          #+#    #+#             */
/*   Updated: 2023/07/18 16:00:36 by sjaaball         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
		write(1, &c, 1);
}

int	ctr_l(char x)
{
	int	rpt;

	if (x >= 'A' && x <= 'Z')
		rpt = x - 'A' + 1;
	else if (x >= 'a' && x <= 'z')
		rpt = x - 'a' + 1;
	else
		rpt = 1;
	return (rpt);
}

int	main(int ac, char **av)
{
	int rpt;
	
	if (ac == 2)
	 while (*av[1])
		{
			rpt = ctr_l(*av[1]);
			while (rpt--)
				write(1, av[1], 1);
			av[1]++;
		}
	ft_putchar('\n');
}
