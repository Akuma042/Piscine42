void	ft_set_case(char *tab, int ligne, int colonne, char valeur);

void	ft_setligne_1(char *tab, int ligne)
{
	if (ligne < 4)
		ft_set_case(tab, ligne, 0, 4);
	if (ligne >= 4)
		ft_set_case(tab, ligne - 4, 3, 4);
}

void	ft_setcolonne_1(char *tab, int colonne)
{
	if (colonne < 4)
		ft_set_case(tab, 0, colonne, 4);
	if (colonne >= 4)
		ft_set_case(tab, 3, colonne - 4, 4);
}

void	ft_set1(char *tab)
{
	int	i;

	i = 0;
	while (i < 16)
	{
		if (tab[i] == 1)
		{
			if (i < 8)
			{
				ft_setcolonne_1(tab, i);
			}
			else
				ft_setligne_1(tab, i - 8);
		}
		i++;
	}
}
