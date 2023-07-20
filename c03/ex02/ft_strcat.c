/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjaaball <sjaaball@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 16:11:19 by sjaaball          #+#    #+#             */
/*   Updated: 2023/07/06 11:55:50 by sjaaball         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	i = ft_strlen(dest);
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

//  #include <stdio.h>
//  #include <stdlib.h>
//  #include <string.h>
//
//  int	main(int ac, char **av)
// {
//  char	d[10]="0123";
//  char	e[10]="0123";
//
//
// printf("ft = %s\n", ft_strcat(d, av[1]));
// printf("vrai =%s\n", strcat(e, av[1]));
//
//  }
