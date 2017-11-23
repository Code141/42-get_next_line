/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_point.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gelambin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/11 18:39:47 by gelambin          #+#    #+#             */
/*   Updated: 2017/09/12 10:35:44 by gelambin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_point.h"
#include "stdio.h"

void	set_point(t_point *point)
{
	point->x = 42;
	point->y = 21;
}

int		main(void)
{
	t_point point;

	set_point(&point);
	printf("x : %d; y : %d;", point.x, point.y);
	return (0);
}
