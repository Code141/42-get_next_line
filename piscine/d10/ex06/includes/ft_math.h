/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_math.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gelambin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/14 15:02:13 by gelambin          #+#    #+#             */
/*   Updated: 2017/09/19 11:42:39 by gelambin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_MATH_H
# define FT_MATH_H
# include "../includes/libft.h"

char	*ft_strstr(char *str, char *to_find);
void	ft_putchar(char c);
void	ft_putnbr(int nb);
void	ft_add(int a, int b);
void	ft_sub(int a, int b);
void	ft_mul(int a, int b);
void	ft_div(int a, int b);
void	ft_mod(int a, int b);
void	ft_usage(int a, int b);

#endif
