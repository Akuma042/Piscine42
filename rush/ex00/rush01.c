/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abasdere <abasdere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 17:37:53 by abasdere          #+#    #+#             */
/*   Updated: 2023/07/02 13:23:43 by abasdere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);
void	ft_print_line(int x, char c1, char c2, char c3);

void	rush(int x, int y)
{
	int	temp;

	temp = y;
	while (temp > 0)
	{
		if (temp == y)
			ft_print_line(x, '/', '*', '\\');
		else if (temp - 1 == 0)
			ft_print_line(x, '\\', '*', '/');
		else
			ft_print_line(x, '*', ' ', '*');
		temp--;
	}
}

void	ft_print_line(int x, char c1, char c2, char c3)
{
	int	temp;

	temp = x;
	while (temp > 0)
	{
		if (temp == x)
		{
			ft_putchar(c1);
			if (temp - 1 == 0)
				ft_putchar('\n');
		}
		else if (temp - 1 == 0)
		{
			ft_putchar(c3);
			ft_putchar('\n');
		}
		else
			ft_putchar(c2);
		temp--;
	}
}
