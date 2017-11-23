/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_doop.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gelambin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/14 09:55:45 by gelambin          #+#    #+#             */
/*   Updated: 2017/09/20 16:56:22 by gelambin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_DOOP_H
# define FT_DOOP_H

int				ft_atoi(char *str);
void			ft_putchar(char c);
void			ft_usage(int a, int b);
void			ft_doop(int a, int b, char op);
typedef struct	s_opp
{
	char	*op;
	void	(*f)(int, int);
}				t_opp;

#endif
