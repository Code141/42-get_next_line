/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_doop.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gelambin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/14 09:55:45 by gelambin          #+#    #+#             */
/*   Updated: 2017/09/20 21:07:44 by gelambin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_DOOP_H
# define FT_DOOP_H
# include "../includes/ft_math.h"

void			ft_usage(int a, int b);
int				ft_atoi(char *str);
typedef struct	s_opp
{
	char	*op;
	void	(*f)(int, int);
}				t_opp;

t_opp	g_opptab[] =
{
	{"+", &ft_add},
	{"-", &ft_sub},
	{"*", &ft_mul},
	{"/", &ft_div},
	{"%", &ft_mod},
	{"", &ft_usage}
};

#endif
