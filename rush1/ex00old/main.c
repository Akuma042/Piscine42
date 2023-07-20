/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgacougn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 21:18:03 by fgacougn          #+#    #+#             */
/*   Updated: 2023/07/09 21:18:06 by fgacougn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	ft_init_tab(char *tab, int size, int valeur);
char	ft_get_game(char *argv, char *tab);
void	ft_put_error(void);
char	ft_get_soluce(char *tab);
char	ft_print_tab(char *tab);
char	ft_print_game(char *tab);

int	main(int argc, char **argv)
{
	char	tab[32];

	ft_init_tab(tab, 32, 0);
	if (argc != 2 || ft_get_game(argv[1], tab) != 1 || ft_get_soluce(tab) != 1)
	{
		ft_put_error();
		return (0);
	}
	ft_print_tab(tab);
	return (0);
}
