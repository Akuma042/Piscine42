/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjaaball <sjaaball@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 03:29:22 by sjaaball          #+#    #+#             */
/*   Updated: 2023/07/11 21:53:25 by sjaaball         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	hexa(unsigned char str)
{
	char	*base;

	base = "0123456789abcdef";
	write(1, "\\", 1);
	write(1, &base[str / 16], 1);
	write(1, &base[str % 16], 1);
}

void	ft_putstr_non_printable(char *str)
{
	unsigned char	c;
	int				i;

	c = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] < 32 || str[i] > 126)
		{
			c = str[i];
			hexa(c);
		}
		if (str[i] >= 32 && str[i] <= 126)
			write(1, &str[i], 1);
		i++;
	}
}

 int main(void)
 {
char str[] = "~!@#$^&*(&*()_)";
ft_putstr_non_printable(str);
	return (0);
}