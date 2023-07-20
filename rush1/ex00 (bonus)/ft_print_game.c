void    ft_putchar(char f);

void    ft_print_firstline(char *tab)
{
    int i;

    i = 0;
    ft_putchar(' ');
    ft_putchar(' ');
    while(i < tab[0])
    {
        ft_putchar(tab[i + 1] + '0');
        if(i % tab[0] == tab[0] - 1)
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

void    ft_print_lastline(char *tab)
{
    int i;

    i = tab[0];
    ft_putchar(' ');
    ft_putchar(' ');
    while(i < tab[0] * 2)
    {
        ft_putchar(tab[i + 1] + '0');
        if(i % tab[0] == tab[0] - 1)
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

void    ft_print_line(char *tab, char line)
{
    int i;

    i = 4 * tab[0] + line * tab[0];
    ft_putchar(tab[1 + tab[0] * 2 + line] + '0');
    ft_putchar(' ');
    while(i < 4 * tab[0] + (line + 1) * tab[0])
    {
        ft_putchar(tab[1 + i] + '0');
        ft_putchar(' ');
        i++;
    }
    ft_putchar(tab[3 * tab[0] + 1 + line] + '0');
    ft_putchar('\n');
}

char	ft_print_game(char *tab)
{
    int i;

    i = 0;
    ft_print_firstline(tab);
    while(i < tab[0])
    {
        ft_print_line(tab, i);
        i++;
    }
    ft_print_lastline(tab);
    return (1);
}