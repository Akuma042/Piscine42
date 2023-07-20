void	ft_putchar(char c);

void	ft_print_possible(int iter, char *possible, char *tab)
{
    int i;

    ft_putchar((iter - 1 - 4 * tab[0]) / tab[0] + 48);
    ft_putchar(' ');
    ft_putchar((iter - 1) % tab[0] + 48);
    ft_putchar(':');
    i = 0;
    while(i < tab[0])
    {
        ft_putchar(possible[i] + 48);
        ft_putchar(' ');
        i++;
    }
    ft_putchar('\n');
}