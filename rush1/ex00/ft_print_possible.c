/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_possible.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgacougn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 21:23:53 by fgacougn          #+#    #+#             */
/*   Updated: 2023/07/09 21:23:55 by fgacougn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_possible(int iter, int *possible)
{
	int	i;

	ft_putchar((iter - 16) / 4 + 48);
	ft_putchar(' ');
	ft_putchar(iter % 4 + 48);
	ft_putchar(':');
	i = 0;
	while (i < 4)
	{
		ft_putchar(possible[i] + 48);
		ft_putchar(' ');
		i++;
	}
	ft_putchar('\n');
}
