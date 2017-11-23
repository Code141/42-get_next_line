/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   point.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gelambin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/18 23:12:44 by gelambin          #+#    #+#             */
/*   Updated: 2017/09/19 19:02:21 by gelambin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "context.h"
#include "point.h"

t_point	*ft_create_point(int x, int y)
{
	t_point *point;

	point = (t_point*)malloc(sizeof(*point));
	point->x = x;
	point->y = y;
	return (point);
}
