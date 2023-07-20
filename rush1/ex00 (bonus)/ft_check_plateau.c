/*  Verifie si le tableau est resolu ( si toutes les cases sont remplies et qu'on a le bon nombre de vues)
    Si le plateau est resolu on renvoit 1
    Si le plateau est impossible on renvoit -1
    Si le plateau est possible mais non resolu ( avec encore des 0) on renvoit 0


*/
int ft_check_case(char *tab, int ligne, int colonne);
char	ft_print_game(char *tab);
void	ft_putchar(char c);

int ft_check_vue_ligne(char *tab, char ligne, int *imax)
{
    int     i;
    char    vue;
    char    max;
    char    curseur;

    i = 0;
    max = 0;
    vue = tab[1 + ligne + 2 * tab[0]];
    *imax = -1;
    while (i < tab[0] && vue != -1)
    {       
        if (ligne < tab[0])
            curseur = ft_check_case(tab,ligne,i);
        if (ligne >= tab[0])
            curseur = ft_check_case(tab,ligne, tab[0] - 1 - i);
        if (curseur > max)
        {
            max = curseur;
            vue--;
        }
        if (curseur == tab[0])
            *imax = i;
        i++;
    }
    return (vue);
}

int ft_check_vue_colonne(char *tab, int colonne, int *imax)
{
    int     i;
    char    vue;
    char    max;
    char    curseur;

    i = 0;
    max = 0;
    vue = tab[1 + colonne];
    *imax = -1;
    while (i < tab[0] && vue != -1)
    {       
        if (colonne < tab[0])
            curseur = ft_check_case(tab,i, colonne);
        if (colonne >= tab[0])
            curseur = ft_check_case(tab,tab[0] - i, colonne);
        if (curseur > max)
        {
            max = curseur;
            vue--;
        }
        if (curseur == tab[0])
            *imax = i;
        i++;
    }
    return (vue);
}

char    ft_check_plateau(char *tab)
{
    int i;
    int imax;
    char boo;
    char    soluce;

    i = 0;
    while(i < tab[0] * 4 && tab[i + tab[0] * 4 + 1] != 0)
        i++;
    soluce = i;
    i = 0;
    while (i < tab[0] * 4)
    {
        if(i < tab[0] * 2)
        {
            boo = ft_check_vue_ligne(tab, i, &imax);
        }
        else
        {
            boo = ft_check_vue_colonne(tab, i - 2 * tab[i], &imax);
        }
        if (boo < 0)
            return (-1);
        ft_putchar(i + 'a');
        ft_putchar(':');
        ft_putchar(boo + 'b');
        ft_putchar(':');
        ft_putchar(imax + 'b');
        ft_putchar('/');
        if (boo == 0 && imax == -1)
            return (-1);
        i++;
        if (boo == 0)
            soluce++;
    }
   if (soluce == 8 * tab[0])
        return (1);
    return (0);
}