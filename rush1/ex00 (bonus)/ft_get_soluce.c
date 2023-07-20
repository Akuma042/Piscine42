void    ft_play_game(char *tab);
char    ft_bruteforce(char *tab);

char	ft_get_soluce(char *tab)
{
    ft_play_game(tab);
    return (ft_bruteforce(tab));
}