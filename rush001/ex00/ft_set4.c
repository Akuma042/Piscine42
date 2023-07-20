void	ft_set_case(char *tab, int ligne, int colonne, char valeur);
void	ft_putchar(char c);

void	ft_setligne_4(char *tab, int ligne)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (ligne < 4)
			ft_set_case(tab, ligne, i, i + 1);
		if (ligne >= 4)
			ft_set_case(tab, ligne - 4, 3 - i, i + 1);
		i++;
	}
}

void	ft_setcolonne_4(char *tab, int colonne)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (colonne < 4)
			ft_set_case(tab, i, colonne, i + 1);
		if (colonne >= 4)
			ft_set_case(tab, 3 - i, colonne - 4, i + 1);
		i++;
	}
}

void	ft_set4(char *tab)
{
	int	i;

	i = 0;
	while (i < 16)
	{
		if (tab[i] == 4)
		{
			if (i < 8)
			{
				ft_setcolonne_4(tab, i);
			}
			else
				ft_setligne_4(tab, i - 8);
		}
		i++;
	}
}
