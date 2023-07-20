/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjaaball <sjaaball@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 15:40:34 by sjaaball          #+#    #+#             */
/*   Updated: 2023/07/17 18:35:39 by sjaaball         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BOOLEAN_H
# define FT_BOOLEAN_H
# include <unistd.h>
# define TRUE 1
# define FALSE 0
# define SUCCESS 0
# define EVEN(nbr) (nbr % 2 == 0)
# define EVEN_MSH "I an even number of arguments.\n"
# define ODD_MSG "I have an odd number of arguments.\n"

typedef int	t_bool;

#endif