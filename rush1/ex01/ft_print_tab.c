/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_tab.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgacougn <fgacougn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 21:57:34 by fgacougn          #+#    #+#             */
/*   Updated: 2023/07/09 21:57:35 by fgacougn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

char	ft_print_tab(int *tab)
{
	int	i;

	i = 4 * tab[0] + 1;
	while (i < 1 + 4 * tab[0] + tab[0] * tab[0])
	{
		ft_putchar(tab[i] + '0');
		if ((i - 1) % tab[0] == tab[0] - 1)
		{
			ft_putchar('\n');
		}
		else
		{
			ft_putchar(' ');
		}
		i++;
	}
	return (1);
}
