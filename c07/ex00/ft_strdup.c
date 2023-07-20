/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjaaball <sjaaball@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 01:16:43 by sjaaball          #+#    #+#             */
/*   Updated: 2023/07/16 20:24:29 by sjaaball         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
#include <stdlib.h>

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

// int main(int ac, char **av)
// {
// 	printf("%s",ft_strdup(av[1]));
// 	return(0);
// }