/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numspace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgacougn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 21:15:00 by fgacougn          #+#    #+#             */
/*   Updated: 2023/07/09 21:15:02 by fgacougn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numspace(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] < 49 || str[i] > 52) && str[i] != ' ')
			return (0);
		i++;
	}
	return (1);
}