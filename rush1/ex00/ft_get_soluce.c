/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_soluce.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgacougn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 21:23:28 by fgacougn          #+#    #+#             */
/*   Updated: 2023/07/09 21:23:30 by fgacougn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_play_game(int *tab);
int		ft_bruteforce(int *tab);

int	ft_get_soluce(int *tab)
{
	ft_play_game(tab);
	return (ft_bruteforce(tab));
}
