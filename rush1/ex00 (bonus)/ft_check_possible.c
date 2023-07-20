int ft_check_case(char *tab, int ligne, int colonne);

void ft_check_possible_ligne(char *tab, int ligne, char valeur, char *pos)
{
    int colonne;

    colonne = 0;
    while(colonne < tab[0] && pos[valeur - 1])
    {
        if(pos[valeur - 1] && ft_check_case(tab, ligne, colonne) == valeur)
            pos[valeur - 1] = 0;
        colonne++;
    }
}


void ft_check_possible_colonne(char *tab, int colonne, char valeur, char *pos)
{
    int ligne;

    ligne = 0;
    while(ligne < tab[0] && pos[valeur - 1])
    {
        if(pos[valeur - 1] && ft_check_case(tab, ligne, colonne) == valeur)
            pos[valeur - 1] = 0;
        ligne++;
    }
}

int	ft_check_possible(char *tab, char *possible, int iter)
{
    int j;
    int colonne;
    int ligne;
    char *pos;
    char boo;

    j = 1;
    boo = 0;
    pos = possible;
    colonne = (iter - 1) % tab[0];
    ligne = (iter - 1 - 4 * tab[0]) / tab[0];
    while (j < tab[0] + 1)
    {
        ft_check_possible_colonne(tab, colonne, j, pos);
        ft_check_possible_ligne(tab, ligne, j, pos);
        j++;
    }
    j = 0;
    while (j < tab[0])
        boo += pos[j++];
    if (boo == 0)
        return (0);
    return (1);
}