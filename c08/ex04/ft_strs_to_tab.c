/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjaaball <sjaaball@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 19:00:59 by sjaaball          #+#    #+#             */
/*   Updated: 2023/07/21 00:42:04 by sjaaball         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

char	*ft_strdup(char *src)
{
	int		i;
	char	*dest;
	int		len;

	i = 0;
	len = ft_strlen(src);
	dest = (char *)malloc((sizeof(char)) * (len + 1));
	if (!dest)
	{
		return (NULL);
		i = 0;
	}
	while (i < len)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int				i;
	t_stock_str		*tab;

	i = 0;
	tab = malloc((ac + 1) * sizeof(t_stock_str));
	if (!tab)
		return (NULL);
	else
	{
		while (i < ac)
		{
			tab[i].copy = ft_strdup(av[i]);
			tab[i].size = ft_strlen(av[i]);
			tab[i].str = av[i];
			i++;
		}
		tab[i].str = 0;
		return (tab);
	}
}
