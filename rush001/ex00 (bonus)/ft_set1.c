void	ft_set_case(char *tab, int ligne, int colonne, char valeur);

void	ft_setligne_1(char *tab, int ligne)
{
	if (ligne < tab[0])
		ft_set_case(tab, ligne, 0, tab[0]);
	if (ligne >= tab[0])
		ft_set_case(tab, ligne - tab[0], tab[0] - 1, tab[0]);
}

void	ft_setcolonne_1(char *tab, int colonne)
{
	if (colonne < tab[0])
		ft_set_case(tab, 0, colonne, tab[0]);
	if (colonne >= tab[0])
		ft_set_case(tab, tab[0] - 1, colonne - tab[0], tab[0]);
}

void	ft_set1(char *tab)
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
