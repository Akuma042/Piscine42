/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_game.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgacougn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 21:18:18 by fgacougn          #+#    #+#             */
/*   Updated: 2023/07/09 21:18:19 by fgacougn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_numspace(char *str);
int		ft_strlen(char *str);

char	ft_get_game(char *argv, char *tab)
{
	int	i;

	if (ft_strlen(argv) != 31)
		return (0);
	if (ft_str_is_numspace(argv) == 0)
		return (0);
	i = 0;
	while (i < 31)
	{
		if (i != 0 && argv[i - 1] != ' ')
			return (0);
		tab[i / 2] = argv[i] - '0';
		i = i + 2;
	}
	return (1);
}
