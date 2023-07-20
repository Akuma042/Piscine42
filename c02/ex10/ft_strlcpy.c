/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjaaball <sjaaball@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 22:30:40 by sjaaball          #+#    #+#             */
/*   Updated: 2023/07/07 10:18:03 by sjaaball         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	while (i < size - 1 && size != 0)
	{
		dest[i] = src[i];
		i++;
	}
	if (size != 0)
	{
		dest[i] = '\0';
	}
	i = 0;
	while (src[i] != '\0')
	{
		i++;
	}
	return (i);
}

#include <stdio.h>
int	main(void)
{
	char src[100] = "";
	char dest[100] = "world";
	
	unsigned int size;
	size = 0;

	printf("%d", ft_strlcpy(dest, src, size));

	return(0);
}
