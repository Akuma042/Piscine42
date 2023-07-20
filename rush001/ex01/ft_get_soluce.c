void	ft_play_game(int *tab);
int		ft_bruteforce(int *tab);

int	ft_get_soluce(int *tab)
{
	ft_play_game(tab);
	return (ft_bruteforce(tab));
}
