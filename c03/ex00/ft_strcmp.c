/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjaaball <sjaaball@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 08:15:37 by sjaaball          #+#    #+#             */
/*   Updated: 2023/07/06 05:30:57 by sjaaball         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] && s2[i])
		i++;
	return (s1[i] - s2[i]);
}
//
//  #include <stdio.h>
//  #include <stdlib.h>
// #include <string.h>
//  int	main(void)
//  {
//  char a[] = "ekwfw";
//  char b[] = "";
//  int x = ft_strcmp(a, b);
//  printf("%d vs %d", x, strcmp(a, b));
//  return (0);
//  }
