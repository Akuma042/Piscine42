/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjaaball <sjaaball@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 02:09:54 by sjaaball          #+#    #+#             */
/*   Updated: 2023/07/12 01:05:28 by sjaaball         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb == 0 || nb == 1)
		return (1);
	else if (nb < 0)
		return (0);
	else
		return (ft_recursive_factorial(nb - 1) * nb);
}

// int	main(void)
// {
// 	printf("%d", ft_recursive_factorial(12));
// 	return (0);
// }
