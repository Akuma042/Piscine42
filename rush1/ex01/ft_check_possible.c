/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_possible.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgacougn <fgacougn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 21:55:16 by fgacougn          #+#    #+#             */
/*   Updated: 2023/07/09 22:40:34 by fgacougn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_check_case(int *tab, int ligne, int colonne);
void	ft_print_possible(int iter, int *possible, int *tab);

void	ft_putchar(char c);


void	ft_check_possible_ligne(int *tab, int ligne, int valeur, int *pos)
{
	int	colonne;

	colonne = 0;
	while (colonne < tab[0] && pos[valeur - 1])
	{
		if (pos[valeur - 1] && ft_check_case(tab, ligne, colonne) == valeur)
			pos[valeur - 1] = 0;
		colonne++;
	}
}

void	ft_check_possible_colonne(int *tab, int colonne, int valeur,
		int *pos)
{
	int	ligne;

	ligne = 0;
	while (ligne < tab[0] && pos[valeur - 1])
	{
	// ft_putchar(ligne + '0');
	// ft_putchar(':');
	// ft_putchar(colonne + '0');
	// ft_putchar(':');
	// ft_putchar(ft_check_case(tab, ligne, colonne) + '0');
	// ft_putchar(':');
	// ft_putchar(valeur + '0');
	// ft_putchar('/');
		if (pos[valeur - 1] && ft_check_case(tab, ligne, colonne) == valeur)
			pos[valeur - 1] = 0;
		ligne++;
	}
}

int	ft_check_possible(int *tab, int *possible, int iter)
{
	int		j;
	int		colonne;
	int		ligne;
	int	*pos;
	int	boo;

	j = 1;
	boo = 0;
	pos = possible;
	colonne = (iter - 1) % tab[0];
	colonne *= 1;
	ligne = (iter - 1 - 4 * tab[0]) / tab[0];
	ligne *=1;
	while (j < tab[0] + 1)
	{
		ft_check_possible_colonne(tab, colonne, j, pos);
		ft_check_possible_ligne(tab, ligne, j, pos);
		j++;
		// ft_print_possible(iter, possible, tab);
	}
	j = 0;
	while (j < tab[0])
		boo += pos[j++];
	if (boo == 0)
		return (0);
	return (1);
}
