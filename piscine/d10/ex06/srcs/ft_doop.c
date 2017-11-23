/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   doop.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gelambin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/14 09:06:46 by gelambin          #+#    #+#             */
/*   Updated: 2017/09/20 18:00:02 by gelambin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_doop.h"
#include "../includes/ft_opp.h"

void	ft_usage(int a, int b)
{
	(void)a;
	(void)b;
	ft_putstr("0");
}

void	ft_doop(int a, int b, char op)
{
	t_opp	*operators;
	int		i;

	operators = g_opptab;
	i = 0;
	while (operators->op[0] != op && operators->op[0])
	{
		operators++;
	}
	operators->f(a, b);
}
