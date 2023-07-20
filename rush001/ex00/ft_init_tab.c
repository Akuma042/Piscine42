/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgacougn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 18:36:16 by fgacougn          #+#    #+#             */
/*   Updated: 2023/07/09 18:36:18 by fgacougn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	ft_init_tab(char *tab, int size, int valeur)
{
	int	i;

	i = 0;
	while (i < size)
		tab[i++] = valeur;
	return (1);
}
