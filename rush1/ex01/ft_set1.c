/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_set1.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgacougn <fgacougn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 21:58:09 by fgacougn          #+#    #+#             */
/*   Updated: 2023/07/09 22:09:31 by fgacougn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_set_case(int *tab, int ligne, int colonne, int valeur);

void	ft_setligne_1(int *tab, int ligne)
{
	if (ligne < tab[0])
		ft_set_case(tab, ligne, 0, tab[0]);
	if (ligne >= tab[0])
		ft_set_case(tab, ligne - tab[0], tab[0] - 1, tab[0]);
}

void	ft_setcolonne_1(int *tab, int colonne)
{
	if (colonne < tab[0])
		ft_set_case(tab, 0, colonne, tab[0]);
	if (colonne >= tab[0])
		ft_set_case(tab, tab[0] - 1, colonne - tab[0], tab[0]);
}

void	ft_set1(int *tab)
{
	int	i;

	i = 0;
	while (i < 4 * tab[0])
	{
		if (tab[i + 1] == 1)
		{
			if (i < 2 * tab[0])
			{
				ft_setcolonne_1(tab, i);
			}
			else
				ft_setligne_1(tab, i - (2 * tab[0]));
		}
		i++;
	}
}
