/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bruteforce.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgacougn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 21:14:14 by fgacougn          #+#    #+#             */
/*   Updated: 2023/07/09 21:14:16 by fgacougn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	ft_check_plateau(char *tab);
int		ft_check_possible(char *tab, char *possible, int iter);
char	ft_init_tab(char *tab, int size, int valeur);
void	ft_putchar(char c);
char	ft_print_game(char *tab);
char	ft_print_game(char *tab);
void	ft_print_possible(int iter, char *possible);

int	ft_bruteforce_recursif(char *tab, int iter)
{
	char	boo;
	char	possible[4];
	char	bf;
	int		i;

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
			bf = ft_bruteforce_recursif(tab, iter + 1);
			if (bf == 1)
				return (1);
			tab[iter] = 0;
		}
	}
	return (0);
}

char	ft_bruteforce(char *tab)
{
	return (ft_bruteforce_recursif(tab, 16));
}
