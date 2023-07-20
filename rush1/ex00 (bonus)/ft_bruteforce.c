char	ft_check_plateau(char *tab);
int		ft_check_possible(char *tab, char *possible, int iter);
char	ft_init_tab(char *tab, int size, int valeur);
void	ft_putchar(char c);
char	ft_print_game(char *tab);
char	ft_print_game(char *tab);
void	ft_print_possible(int iter, char *possible, char *tab);

char	ft_bruteforce_recursif(char *tab, int iter)
{
	char	boo;
	char	possible[9];
	int		i;

	ft_init_tab(possible, tab[0], 1);
	boo = ft_check_plateau(tab); ft_putchar('\n');
	ft_putchar(boo + 'b'); ft_putchar('\n');
	ft_print_game(tab);
	i = 0;
	if (iter == 1 + 4 * tab[0] + tab[0] * tab[0])
		return 1;
	if (boo != 0)
		return (boo);
	while (tab[iter])
		iter++;
	i = tab[0];
	if (ft_check_possible(tab, possible, iter) == 0)
		return (0);
	while (i--)
	{
		if (possible[i])
		{
			tab[iter] = i + 1;
			if (ft_bruteforce_recursif(tab, iter + 1) == 1)
				return (1);
			tab[iter] = 0;
		}
	}
	return (0);
}

char	ft_bruteforce(char *tab)
{
	return (ft_bruteforce_recursif(tab, 1 + 1 * 4 * tab[0]));
}