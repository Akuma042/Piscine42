/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_play_game.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgacougn <fgacougn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 21:56:41 by fgacougn          #+#    #+#             */
/*   Updated: 2023/07/09 22:38:50 by fgacougn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_setmax(int *tab);
void	ft_set1(int *tab);
void	ft_setmaxp(int *tab);
void	ft_set3(int *tab);
void	ft_print_game(int *tab);
void ft_putchar(char c);
int	ft_check_case(int *tab, int ligne, int colonne);


void	ft_play_game(int *tab)
{
	ft_setmax(tab);
	ft_set1(tab);
	ft_setmaxp(tab);
	ft_set3(tab);
	ft_putchar(ft_check_case(tab, 0, 0) + 'a' );
	ft_putchar('\n');
	ft_print_game(tab);
}
