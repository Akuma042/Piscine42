/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bruteforce.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgacougn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 21:23:14 by fgacougn          #+#    #+#             */
/*   Updated: 2023/07/09 21:23:16 by fgacougn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_check_plateau(int *tab);
int		ft_check_possible(int *tab, int *possible, int iter);
int		ft_init_tab(int *tab, int size, int valeur);
void	ft_putchar(char c);
int		ft_print_game(int *tab);
int		ft_print_game(int *tab);
void	ft_print_possible(int iter, int *possible);

char	ft_bruteforce_recursif(int *tab, int iter)
{
	int	boo;
	int	possible[4];
	int	i;

	ft_init_tab(possible, 4, 1);
	boo = ft_check_plateau(tab);
	i = 0;
	if (boo != 0)
		return (boo);
	while (tab[iter])
		iter++;
	i = 4;
	if (ft_check_possible(tab, possible, iter) == 0)
		return (0);
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

char	ft_bruteforce(int *tab)
{
	return (ft_bruteforce_recursif(tab, 16));
}
