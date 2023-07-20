int		ft_str_is_numspace(char *str);
int		ft_strlen(char *str);
void	ft_putchar(char c);

int	ft_get_game(char *argv, int *tab)
{
	int	i;

	if (ft_strlen(argv) != 31)
	{
		return (0);
	}
	if (ft_str_is_numspace(argv) == 0)
	{
		return (0);
	}
	i = 0;
	while (i < 31)
	{
		if (i != 0 && argv[i - 1] != ' ')
		{
			return (0);
		}
		tab[i / 2] = argv[i] - '0';
		i = i + 2;
	}
	return (1);
}
