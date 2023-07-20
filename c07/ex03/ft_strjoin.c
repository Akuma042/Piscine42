/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjaaball <sjaaball@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 05:06:43 by sjaaball          #+#    #+#             */
/*   Updated: 2023/07/19 18:36:36 by sjaaball         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
#include <stdlib.h>
// #include <string.h>

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

int	boom(char **str, int size, char *sep)
{
	int	i;
	int	lg;

	i = 0;
	lg = 0;
	while (i < size)
	{
		lg = lg + ft_strlen(str[i]);
		i++;
	}
	lg = lg + (size - 1) * ft_strlen(sep) + 1;
	return (lg);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	char	*result;

	if (size == 0)
	{
		result = malloc(sizeof(char));
		*result = 0;
		return (result);
	}
	result = malloc(sizeof(char) * boom(strs, size, sep));
	if (!result)
		return (NULL);
	*result = 0;
	i = 0;
	while (i < size)
	{
		ft_strcat(result, strs[i]);
		if (i < size - 1)
			ft_strcat(result, sep);
		i++;
	}
	return (result);
}

#include <stdio.h>

char	*ft_strjoin(int size, char **strs, char *sep);

int	main(int argc, char **argv)
{
	printf("hello___world :\n");
	printf("%s\n", ft_strjoin(argc, argv, "___"));
}
