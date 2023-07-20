int		ft_str_is_numspace(char *str, char *tab);
int		ft_strlen(char *str);

char	ft_get_game(char *argv, char *tab)
{
	int	i;

	if (ft_strlen(argv) != 31)
		return (0);
	tab[0] = 4;
	if (ft_str_is_numspace(argv, tab) == 0)
		return (0);
	i = 0;
	while (i < 31)
	{
		if (i != 0 && argv[i - 1] != ' ')
			return (0);
		tab[1 + i / 2] = argv[i] - '0';
		i = i + 2;
	}
	return (1);
}
