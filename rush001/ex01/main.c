int		ft_init_tab(int *tab, int size, int valeur);
int		ft_get_game(char *argv, int *tab);
void	ft_put_error(void);
int		ft_get_soluce(int *tab);
int		ft_print_tab(int *tab);
int		ft_print_game(int *tab);
void	ft_putchar(char c);

int	main(int argc, char **argv)
{
	int	tab[32];

	ft_init_tab(tab, 32, 0);
	argv[0][0] *= 1;
	if (argc != 2 || ft_get_game(argv[1], tab) != 1 || ft_get_soluce(tab) != 1)
	{
		ft_put_error();
		return (0);
	}
	ft_print_tab(tab);
	return (0);
}
