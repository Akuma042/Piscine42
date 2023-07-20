/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjaaball <sjaaball@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 15:04:28 by sjaaball          #+#    #+#             */
/*   Updated: 2023/07/08 00:33:44 by sjaaball         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
		return (0);
	while ((unsigned char)s1[i] == (unsigned char)s2[i] && s1[i] && i < (n - 1))
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
//
// int	main(void)
// {
// 	char a[] = "abc";
// 	char b[] = "abcd";
// 	int x = ft_strncmp(a, b, 0);
// 	int y = strncmp(a, b, 0);
// 	printf("%d\n", x);
// 	printf("%d\n", y);
// }

// int main(int ac, char **av)
// {
// 	printf("> strncmp(%s, %s, %d) = %d\n", av[1], av[2],
// 	atoi(av[3]), strncmp(av[1], av[2], atoi(av[3])));
// 	printf("> ft_strncmp(%s, %s, %d) = %d\n", av[1], av[2],
// 	atoi(av[3]), ft_strncmp(av[1], av[2], atoi(av[3])));
// 	return (0);
// }