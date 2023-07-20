/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjaaball <sjaaball@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 03:41:15 by sjaaball          #+#    #+#             */
/*   Updated: 2023/07/16 21:28:16 by sjaaball         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	long	start;
	long	middle;
	long	end;
	long	middle_sqrt;

	start = 0;
	end = nb;
	if (nb <= 0)
		return (0);
	if (nb == 1)
		return (1);
	while (start <= end)
	{
		middle = (start + end) / 2;
		middle_sqrt = middle * middle;
		if (middle_sqrt == nb)
			return (middle);
		else if (middle_sqrt < nb)
			start = middle + 1;
		else
			end = middle - 1;
	}
	return (0);
}
int	main(void)
{
	printf("%d", ft_sqrt(2147483647));
	return (0);
}
