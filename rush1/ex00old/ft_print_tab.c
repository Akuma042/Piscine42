/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_tab.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgacougn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 21:17:29 by fgacougn          #+#    #+#             */
/*   Updated: 2023/07/09 21:17:31 by fgacougn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char f);

char	ft_print_tab(char *tab)
{
	int	i;

	i = 16;
	while (i < 32)
	{
		ft_putchar(tab[i] + '0');
		if (i % 4 == 3)
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
