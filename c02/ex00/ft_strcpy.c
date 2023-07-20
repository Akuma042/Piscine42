/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjaaball <sjaaball@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/02 13:48:28 by sjaaball          #+#    #+#             */
/*   Updated: 2023/07/04 11:09:54 by sjaaball         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

// 
// int	main(void)
// {
	// char	src[];
	// char	dest[8];
// 
	// src[] = "uiyiyiyi";
	// 
	// *dest = *ft_strcpy(dest, src);
	// write(1, &dest, 8);
	// return (0);
// }
// 