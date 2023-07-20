/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjaaball <sjaaball@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 21:26:09 by fgacougn          #+#    #+#             */
/*   Updated: 2023/07/11 14:10:31 by sjaaball         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_init_tab(int *tab, int size, int valeur);
int		ft_get_game(char *argv, int *tab);
void	ft_put_error(void);
int		ft_get_soluce(int *tab);
int		ft_print_tab(int *tab);
int		ft_print_game(int *tab);
void	ft_putchar(char c);

int	main(int argc, char **argv)
{
	int	tab[32];

	ft_init_tab(tab, 32, 0);
	argv[0][0] *= 1;
	if (argc != 2 || ft_get_game(argv[1], tab) != 1 || ft_get_soluce(tab) != 1)
	{
		ft_put_error();
		return (0);
	}
	ft_print_game(tab);
	return (0);
}
