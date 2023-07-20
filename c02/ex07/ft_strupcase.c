/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjaaball <sjaaball@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 18:03:04 by sjaaball          #+#    #+#             */
/*   Updated: 2023/07/04 14:50:18 by sjaaball         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
// #include<stdio.h>
// 
char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 32;
		i++;
	}
	return (str);
}

		// str[i] -= 32;
// 
// int main (void)
// {
	// char str[30] = "uUtrtTTTT6";
	// printf("%s\n", ft_strupcase(str));
	// return(0);
//  }
