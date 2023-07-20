/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_soluce.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgacougn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 21:14:39 by fgacougn          #+#    #+#             */
/*   Updated: 2023/07/09 21:14:41 by fgacougn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_play_game(char *tab);
char	ft_bruteforce(char *tab);

char	ft_get_soluce(char *tab)
{
	ft_play_game(tab);
	return (ft_bruteforce(tab));
}
