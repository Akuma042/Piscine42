char	ft_init_tab(char *tab, int size, int valeur);
char	ft_get_game(char *argv, char *tab);
void	ft_put_error(void);
char	ft_get_soluce(char *tab);
char	ft_print_tab(char *tab);
char	ft_print_game(char *tab);

int	main(int argc, char **argv)
{
	char	tab[1 + 4 * 9 + 9 * 9];

	ft_init_tab(tab, 1 + 4 * 9 + 9 * 9, 0);
	tab[0] = 4;
	argc *= 1;
	argv[0][0] *= 1;
	if (argc != 2 || ft_get_game(argv[1], tab) != 1 || ft_get_soluce(tab) != 1)
	{
		ft_put_error();
		return (0);
	}
	ft_print_game(tab);
	return (0);
}
