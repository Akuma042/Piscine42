/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_set5.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgacougn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 21:17:14 by fgacougn          #+#    #+#             */
/*   Updated: 2023/07/09 21:17:16 by fgacougn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_set_case(char *tab, int ligne, int colonne, char valeur);

void	ft_set5(char *tab)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (tab[i] + tab[i + 4] == 5)
		{
			ft_set_case(tab, tab[i] - 1, i, 4);
		}
		i++;
	}
	i = 8;
	while (i < 12)
	{
		if (tab[i] + tab[i + 4] == 5)
		{
			ft_set_case(tab, i - 8, tab[i] - 1, 4);
		}
		i++;
	}
}
