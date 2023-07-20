/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_plateau.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgacougn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 21:23:01 by fgacougn          #+#    #+#             */
/*   Updated: 2023/07/09 21:23:03 by fgacougn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_check_case(int *tab, int ligne, int colonne);
int		ft_print_game(int *tab);
void	ft_putchar(char c);
int		ft_init_tab(int *tab, int size, int valeur);

// int ft_check_vue_lignfi(char *tab, char ligne, int *i4, int i)
// {
//     int curseur;
//     int max;
//     int vue;

//     max = 0;
//     vue = 0;

//     if (ligne < 4)
// 			curseur = ft_check_case(tab, ligne, i);
// 		if (ligne >= 4)
// 			curseur = ft_check_case(tab, ligne - 4, 3 - i);
// 		if (curseur > max)
// 		{
// 			max = curseur;
// 			vue = -1;
// 		}
// 		if (curseur == 4)
// 			*i4 = i;
// 		if (curseur == 0)
// 			vue = 0;
//     return (vue);
// }

// 0 i
// 1 vue
// 2 max
// 3 curseur
// 4 zeros
int	ft_check_vue_ligne(int *tab, int ligne, int *i4)
{
	int	i[5];

	ft_init_tab(i, 3, 0);
	i[1] = tab[ligne + 8];
	i[4] = -1;
	while (i[0] < 4 && i[1] != -1)
	{
		if (ligne < 4)
			i[3] = ft_check_case(tab, ligne, i[0]);
		if (ligne >= 4)
			i[3] = ft_check_case(tab, ligne - 4, 3 - i[0]);
		if (i[3] > i[2])
		{
			i[2] = i[3];
			i[1]--;
		}
		if (i[3] == 4)
			*i4 = i[0];
		if (i[3] == 0)
			i[4] = 1;
		i[0]++;
	}
	if (i[4] != -1)
		return (1);
	return (i[1]);
}

// 0 i
// 1 vue
// 2 max
// 3 curseur
// 4 zeros
int	ft_check_vue_colonne(int *tab, int colonne, int *i4)
{
	int	i[5];

	ft_init_tab(i, 3, 0);
	i[1] = tab[colonne];
	i[4] = -1;
	while (i[0] < 4 && i[1] != -1)
	{
		if (colonne < 4)
			i[3] = ft_check_case(tab, i[0], colonne);
		if (colonne >= 4)
			i[3] = ft_check_case(tab, 3 - i[0], colonne - 4);
		if (i[3] > i[2])
		{
			i[2] = i[3];
			i[1]--;
		}
		if (i[3] == 4)
			*i4 = i[0];
		if (i[3] == 0)
			i[4] = 1;
		i[0]++;
	}
	if (i[4] != -1)
		return (1);
	return (i[1]);
}

int	ft_check_plateau(int *tab)
{
	int	i;
	int	i4;
	int	boo;
	int	soluce;

	i = 0;
	while (i < 16 && tab[i + 16] != 0)
		i++;
	soluce = i;
	i = 0;
	while (i < 16)
	{
		if (i < 8)
			boo = ft_check_vue_colonne(tab, i, &i4);
		else
			boo = ft_check_vue_ligne(tab, i - 8, &i4);
		if (boo < 0 || (boo == 0 && i4 == -1))
			return (-1);
		if (i++ != 100 && boo == 0)
			soluce++;
	}
	if (soluce == 32)
		return (1);
	return (0);
}
