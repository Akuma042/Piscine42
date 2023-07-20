void	ft_set_case(char *tab, int ligne, int colonne, char valeur)
{
	tab[1 + 4 * tab[0] + tab[0] * ligne + colonne] = valeur;
}
