int	ft_check_case(char *tab, int ligne, int colonne)
{
	return (tab[1 + 4 * tab[0] + tab[0] * ligne + colonne]);
}