void	ft_putchar(char f);

void	ft_print_firstline(char *tab)
{
	int	i;

	i = 0;
	ft_putchar(' ');
	ft_putchar(' ');
	while (i < 4)
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
}

void	ft_print_lastline(char *tab)
{
	int	i;

	i = 4;
	ft_putchar(' ');
	ft_putchar(' ');
	while (i < 8)
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
}

void	ft_print_line(char *tab, char line)
{
	int	i;

	i = 16 + line * 4;
	ft_putchar(tab[8 + line] + '0');
	ft_putchar(' ');
	while (i < 16 + (line + 1) * 4)
	{
		ft_putchar(tab[i] + '0');
		ft_putchar(' ');
		i++;
	}
	ft_putchar(tab[12 + line] + '0');
	ft_putchar('\n');
}

char	ft_print_game(char *tab)
{
	int	i;

	i = 0;
	ft_print_firstline(tab);
	while (i < 4)
	{
		ft_print_line(tab, i);
		i++;
	}
	ft_print_lastline(tab);
	return (1);
}
