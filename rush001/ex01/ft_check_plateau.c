/*  Verifie si le tableau est resolu ( si toutes les cases sont remplies et qu'on a le bon nombre de vues)
	Si le plateau est resolu on renvoit 1
	Si le plateau est impossible on renvoit -1
	Si le plateau est possible mais non resolu ( avec encore des 0) on renvoit 0


*/
#include "ft.h"

int		ft_check_case(int *tab, int ligne, int colonne);
int		ft_print_game(int *tab);
void	ft_putchar(char c);

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
	int	i;
	int	vue;
	int	max;
	int	curseur;
	int	zeros;

	i = 0;
	max = 0;
	vue = tab[ligne + 8];
	*i4 = -1;
	while (i < 4 && vue != -1)
	{
		if (ligne < 4)
			curseur = ft_check_case(tab, ligne, i);
		if (ligne >= 4)
			curseur = ft_check_case(tab, ligne - 4, 3 - i);
		if (curseur > max)
		{
			max = curseur;
			vue--;
		}
		if (curseur == 4)
			*i4 = i;
		if (curseur == 0)
			zeros = 1;
		i++;
	}
	if (zeros != -1)
		return (1);
	return (vue);
}

int	ft_check_vue_colonne(int *tab, int colonne, int *i4)
{
	int	i;
	int	vue;
	int	max;
	int	curseur;
	int	zeros;

	i = 0;
	max = 0;
	vue = tab[colonne];
	*i4 = -1;
	zeros = -1;
	while (i < 4 && vue != -1)
	{
		if (colonne < 4)
			curseur = ft_check_case(tab, i, colonne);
		if (colonne >= 4)
			curseur = ft_check_case(tab, 3 - i, colonne - 4);
		if (curseur > max)
		{
			max = curseur;
			vue--;
		}
		if (curseur == 4)
			*i4 = i;
		if (curseur == 0)
			zeros = 1;
		i++;
	}
	if (zeros != -1)
		return (1);
	return (vue);
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
		{
			boo = ft_check_vue_colonne(tab, i, &i4);
		}
		else
			boo = ft_check_vue_ligne(tab, i - 8, &i4);
		if (boo < 0)
			return (-1);
		if (boo == 0 && i4 == -1)
			return (-1);
		i++;
		if (boo == 0)
			soluce++;
	}
	if (soluce == 32)
		return (1);
	return (0);
}
