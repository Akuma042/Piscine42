/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_play_game.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgacougn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 18:35:37 by fgacougn          #+#    #+#             */
/*   Updated: 2023/07/09 18:35:39 by fgacougn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_set4(int *tab);
void	ft_set1(int *tab);
void	ft_set5(int *tab);

void	ft_play_game(int *tab)
{
	ft_set4(tab);
	ft_set1(tab);
	ft_set5(tab);
}
