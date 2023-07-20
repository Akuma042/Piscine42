/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjaaball <sjaaball@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 21:54:15 by sjaaball          #+#    #+#             */
/*   Updated: 2023/07/06 15:18:55 by sjaaball         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	j = 0;
	if (*to_find == '\0')
		return (str);
	if (*str == '\0')
		return (0);
	i = 0;
	while (str[i])
	{
		j = 0;
		while (str[i + j] == to_find[j])
		{
			j++;
			if (to_find[j] == '\0')
			{
				return (str + i);
			}
		}
		i++;
	}
	return (0);
}

// #include <stdio.h>
// #include <string.h>
// 
// int	main(void)
// {
	// char	a[];
	// char	b[];
// 
	// a[] = "Bonjour les amis";
	// b[] = "jlksdka";
	// printf("%s", ft_strstr(a, b));
	// printf("%s", strstr(a, b));
// }
