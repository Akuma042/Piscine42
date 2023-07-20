/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjaaball <sjaaball@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 20:51:51 by sjaaball          #+#    #+#             */
/*   Updated: 2023/07/04 11:08:47 by sjaaball         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

char	*all_lowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	all_lowcase(str);
	while (str[i] != '\0')
	{
		if (!((str[i - 1] >= 'a' && str[i - 1] <= 'z') || (str[i - 1] >= 'A'
					&& str[i - 1] <= 'Z') || (str[i - 1] >= '0' && str[i
						- 1] <= '9')))
		{
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}

// #include <stdio.h>
// #include <stdlib.h>
// 
// int	main(void)
// {
	// return(0);
// }
// 
