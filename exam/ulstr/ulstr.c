/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ulstr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjaaball <sjaaball@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 16:04:25 by sjaaball          #+#    #+#             */
/*   Updated: 2023/07/18 19:13:27 by sjaaball         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int main(int ac, char **av)
{
int i;

i = 0;
if (ac == 2)
{
	while(av[1][i])
	{
		if(av[1][i] >= 'A' && av[1][i] <= 'Z')
			ft_putchar(av[1][i] - 'A' + 'a');
		else if(av[1][i] >= 'a' && av[1][i] <= 'z')
			ft_putchar(av[1][i] - 'a' + 'A');
		else
			ft_putchar(av[1][i]);
		i++;
	}
}
	ft_putchar('\n');
	return(0);
}
