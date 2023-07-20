void	ft_set_case(char *tab, int ligne, int colonne, char valeur)
{
	tab[16 + 4 * ligne + colonne] = valeur;
}
