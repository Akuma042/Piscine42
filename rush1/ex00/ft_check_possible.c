/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_possible.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgacougn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 21:25:02 by fgacougn          #+#    #+#             */
/*   Updated: 2023/07/09 21:25:04 by fgacougn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_check_case(int *tab, int ligne, int colonne);

void	ft_check_possible_ligne(int *tab, int ligne, int valeur, int *pos)
{
	int	colonne;

	colonne = 0;
	while (colonne < 4 && pos[valeur - 1])
	{
		if (pos[valeur - 1] && ft_check_case(tab, ligne, colonne) == valeur)
			pos[valeur - 1] = 0;
		colonne++;
	}
}

void	ft_check_possible_colonne(int *tab, int colonne, int valeur, int *pos)
{
	int	ligne;

	ligne = 0;
	while (ligne < 4 && pos[valeur - 1])
	{
		if (pos[valeur - 1] && ft_check_case(tab, ligne, colonne) == valeur)
			pos[valeur - 1] = 0;
		ligne++;
	}
}

int	ft_check_possible(int *tab, int *possible, int iter)
{
	int	j;
	int	colonne;
	int	ligne;
	int	*pos;

	j = 1;
	pos = possible;
	colonne = iter % 4;
	ligne = (iter - 16) / 4;
	tab[0] *= 1;
	while (j < 5)
	{
		ft_check_possible_colonne(tab, colonne, j, pos);
		ft_check_possible_ligne(tab, ligne, j, pos);
		j++;
	}
	if (!pos[0] && !pos[1] && !pos[2] && !pos[3])
		return (0);
	return (1);
}
