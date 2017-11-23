/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   doop.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gelambin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/14 09:06:46 by gelambin          #+#    #+#             */
/*   Updated: 2017/09/20 16:55:36 by gelambin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_doop.h"
#include "../includes/ft_opp.h"

void	ft_usage(int a, int b)
{
	t_opp	*operators;

	operators = g_opptab;
	ft_putstr("error : only [ ");
	while (operators->op[0])
	{
		ft_putstr(operators->op);
		ft_putstr(" ");
		operators++;
	}
	ft_putstr("] are accepted.");
}

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

void	ft_doop(int a, int b, char *op)
{
	t_opp	*operators;
	int		i;

	operators = g_opptab;
	i = 0;
	while (ft_strcmp(operators->op, op) != 0 && operators->op[0])
	{
		operators++;
	}
	operators->f(a, b);
}
