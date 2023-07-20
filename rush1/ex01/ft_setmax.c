/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_setmax.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgacougn <fgacougn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 21:58:53 by fgacougn          #+#    #+#             */
/*   Updated: 2023/07/09 22:18:10 by fgacougn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_set_case(int *tab, int ligne, int colonne, int valeur);
void	ft_putchar(char c);

void	ft_setligne_max(int *tab, int ligne)
{
	int	i;

	i = 0;
	while (i < tab[0])
	{
		if (ligne < tab[0])
			ft_set_case(tab, ligne, i, i + 1);
		if (ligne >= tab[0])
			ft_set_case(tab, ligne - tab[0], tab[0] - 1 - i, i + 1);
		i++;
	}
}

void	ft_setcolonne_max(int *tab, int colonne)
{
	int	i;

	i = 0;
	while (i < tab[0])
	{
		if (colonne < tab[0])
			ft_set_case(tab, i, colonne, i + 1);
		if (colonne >= tab[0])
			ft_set_case(tab, tab[0] - 1 - i, colonne - tab[0], i + 1);
		i++;
	}
}

void	ft_setmax(int *tab)
{
	int	i;

	i = 0;

	while (i < 4 * tab[0])
	{
		if (tab[i + 1] == tab[0])
		{
			if (i < 2 * tab[0])
			{
				ft_setcolonne_max(tab, i);
			}
			else
				ft_setligne_max(tab, i - tab[0] * 2);
		}
		i++;
	}
}
