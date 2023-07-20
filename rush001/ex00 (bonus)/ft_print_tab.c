void	ft_putchar(char f);

char	ft_print_tab(char *tab)
{
	int	i;

	i = 4 * tab[0] + 1;
	while (i < 1 + 4 * tab[0] + tab[0] * tab[0])
	{
		ft_putchar(tab[i] + '0');
		if ((i - 1) % tab[0] == tab[0] - 1)
		{
			ft_putchar('\n');
		}
		else
		{
			ft_putchar(' ');
		}
		i++;
	}
	return (1);
}
