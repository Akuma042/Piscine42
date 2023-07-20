/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_set3.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgacougn <fgacougn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 21:58:36 by fgacougn          #+#    #+#             */
/*   Updated: 2023/07/09 21:58:37 by fgacougn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_set_case(int *tab, int ligne, int colonne, int valeur);
void	ft_putchar(char c);
int		ft_check_case(int *tab, int ligne, int colonne);

void	ft_set3(int *tab)
{
	int	i;

	i = 0;
	while (i < tab[0])
	{
		if (tab[i + 1] + tab[1 + i + tab[0]] == 3)
		{
			if (tab[i + 1] == 2)
				ft_set_case(tab, 0, i, tab[0] - 1);
			if (tab[i + 1 + tab[0]] == 2)
				ft_set_case(tab, tab[0] - 1, i, tab[0] - 1);
		}
		i++;
	}
	i = 2 * tab[0];
	while (i < 3 * tab[0])
	{
		if (tab[i + 1] + tab[1 + i + tab[0]] == 3)
		{
			ft_putchar(i - 8 + 'a');
			ft_putchar(':');
			ft_putchar(tab[i + 1] + 'a');
			ft_putchar(':');
			ft_putchar(tab[i + 1 + tab[0]] + 'a');
			ft_putchar(':');
			if (tab[i + 1] == 2)
				ft_set_case(tab, i, 0, tab[0] - 1);
			if (tab[i + 1 + tab[0]] == 2)
			{
				ft_putchar('x');
				ft_set_case(tab, i - 2 * tab[0], tab[0] - 1, tab[0] - 1);
			}
			ft_putchar(ft_check_case(tab, i - 2 * tab[0], tab[0] - 1) + 'a');
			ft_putchar(':');
			ft_putchar('\n');
		}
		i++;
	}
}
