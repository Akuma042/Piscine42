/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_error.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgacougn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 21:15:42 by fgacougn          #+#    #+#             */
/*   Updated: 2023/07/09 21:15:44 by fgacougn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_put_error(void)
{
	char	*error;
	int		i;

	error = "Error\n";
	i = 0;
	while (error[i])
		ft_putchar(error[i++]);
}
