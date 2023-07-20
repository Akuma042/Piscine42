void ft_set_case(char *tab, int ligne, int colonne, char valeur);

void    ft_setmaxp(char *tab)
{
    int i;

    i = 0;
    while (i < tab[0])
    {
        if (tab[i + 1] + tab[1 + i + tab[0]] == tab[0] + 1)
            {
                ft_set_case(tab, tab[i + 1] - 1, i, tab[0]);
            }
        i++;
    }
    i = 2 * tab[0];
    while (i < 3 * tab[0])
    {
        if (tab[i + 1] + tab[1 + i + tab[0]] == tab[0] + 1)
            {
                ft_set_case(tab, i - 2 * tab[0], tab[i + 1] - 1, tab[0]);
            }
        i++;
    }
}