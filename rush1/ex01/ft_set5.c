void	ft_set_case(int *tab, int ligne, int colonne, int valeur);

void	ft_set5(int *tab)
{
	int i;

	i = 0;
	while (i < 4)
	{
		if (tab[i] + tab[i + 4] == 5)
		{
			ft_set_case(tab, tab[i] - 1, i, 4);
		}
		i++;
	}
	i = 8;
	while (i < 12)
	{
		if (tab[i] + tab[i + 4] == 5)
		{
			ft_set_case(tab, i - 8, tab[i] - 1, 4);
		}
		i++;
	}
}