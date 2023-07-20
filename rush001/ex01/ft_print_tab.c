void	ft_putchar(char c);

int	ft_print_tab(int *tab)
{
	int	i;

	i = 16;
	while (i < 32)
	{
		ft_putchar(tab[i] + '0');
		if (i % 4 == 3)
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
