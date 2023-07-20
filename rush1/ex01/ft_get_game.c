/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_game.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgacougn <fgacougn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 21:55:52 by fgacougn          #+#    #+#             */
/*   Updated: 2023/07/09 21:55:54 by fgacougn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_numspace(char *str, int *tab);
int		ft_strlen(char *str);

int	ft_get_game(char *argv, int *tab)
{
	int	i;

	if (ft_strlen(argv) != 31)
		return (0);
	tab[0] = 4;
	if (ft_str_is_numspace(argv, tab) == 0)
		return (0);
	i = 0;
	while (i < 31)
	{
		if (i != 0 && argv[i - 1] != ' ')
			return (0);
		tab[1 + i / 2] = argv[i] - '0';
		i = i + 2;
	}
	return (1);
}
