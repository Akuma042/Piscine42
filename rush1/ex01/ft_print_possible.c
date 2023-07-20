/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_possible.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgacougn <fgacougn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 21:57:23 by fgacougn          #+#    #+#             */
/*   Updated: 2023/07/09 21:57:24 by fgacougn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_possible(int iter, int *possible, int *tab)
{
	int	i;

	ft_putchar((iter - 1 - 4 * tab[0]) / tab[0] + 48);
	ft_putchar(' ');
	ft_putchar((iter - 1) % tab[0] + 48);
	ft_putchar(':');
	i = 0;
	while (i < tab[0])
	{
		ft_putchar(possible[i] + 48);
		ft_putchar(' ');
		i++;
	}
	ft_putchar('\n');
}
