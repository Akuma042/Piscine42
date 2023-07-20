/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_setmaxp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgacougn <fgacougn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 21:59:04 by fgacougn          #+#    #+#             */
/*   Updated: 2023/07/09 21:59:05 by fgacougn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_set_case(int *tab, int ligne, int colonne, int valeur);

void	ft_setmaxp(int *tab)
{
	int	i;

	i = 0;
	while (i < tab[0])
	{
		if (tab[i + 1] + tab[1 + i + tab[0]] == tab[0] + 1)
		{
			ft_set_case(tab, tab[i + 1] - 1, i, tab[0]);
		}
		i++;
	}
	i = 2 * tab[0];
	while (i < 3 * tab[0])
	{
		if (tab[i + 1] + tab[1 + i + tab[0]] == tab[0] + 1)
		{
			ft_set_case(tab, i - 2 * tab[0], tab[i + 1] - 1, tab[0]);
		}
		i++;
	}
}
