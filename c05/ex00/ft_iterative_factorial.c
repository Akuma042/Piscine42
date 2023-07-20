/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjaaball <sjaaball@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 11:01:02 by sjaaball          #+#    #+#             */
/*   Updated: 2023/07/13 17:47:29 by sjaaball         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	tmp;

	i = 1;
	tmp = 1;
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	while (i <= nb)
		tmp *= i++;
	return (tmp);
}

int	main(void)
{
	printf("%d", ft_iterative_factorial(5));
	return (0);
}
