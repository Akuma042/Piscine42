/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_soluce.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgacougn <fgacougn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 21:56:14 by fgacougn          #+#    #+#             */
/*   Updated: 2023/07/09 22:17:29 by fgacougn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_play_game(int *tab);
int	ft_bruteforce(int *tab);
int	ft_print_game(int *tab);

int	ft_get_soluce(int *tab)
{
	ft_play_game(tab);
	return (ft_bruteforce(tab));
}
