/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bruteforce.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjaaball <sjaaball@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 21:23:14 by fgacougn          #+#    #+#             */
/*   Updated: 2023/07/11 14:35:21 by sjaaball         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_check_plateau(int *tab);
int		ft_check_possible(int *tab, int *possible, int iter);
int		ft_init_tab(int *tab, int size, int valeur);
void	ft_putchar(char c);
int		ft_print_game(int *tab);
int		ft_print_game(int *tab);
void	ft_print_possible(int iter, int *possible, int *tab);

int	ft_bruteforce_recursif(int *tab, int iter)
{
	int	boo;
	int	possible[9];
	int	i;

	ft_init_tab(possible, tab[0], 1);
	boo = ft_check_plateau(tab);
	ft_print_game(tab);
	i = 0;
	if (boo != 0)
		return (boo);
	while (tab[iter])
		iter++;
	i = tab[0];
	if (ft_check_possible(tab, possible, iter) == 0)
		return (0);
	ft_print_possible(iter, possible, tab);
	while (i--)
	{
		if (possible[i])
		{
			tab[iter] = i + 1;
			if (ft_bruteforce_recursif(tab, iter + 1) == 1)
				return (1);
			tab[iter] = 0;
		}
	}
	return (0);
}

int	ft_bruteforce(int *tab)
{
	return (ft_bruteforce_recursif(tab, tab[0] * 4));
}
