/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gelambin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/20 11:57:26 by gelambin          #+#    #+#             */
/*   Updated: 2017/09/21 15:04:11 by gelambin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "context.h"
#include "zone.h"
#include "ft_heap.h"
#include "io.h"

void	ft_print(t_meta *meta, t_heap *heap)
{
	int		i;
	int		j;
	t_zone	*zone;

	if (heap && meta->x * meta->y != meta->nb_obs)
	{
		zone = (t_zone *)FT_HEAP_PEEK(heap);
		if (zone->w <= zone->h)
			zone->h = zone->w;
		else
			zone->w = zone->h;
		i = zone->y;
		while (i < zone->y + zone->h)
		{
			j = zone->x;
			while (j < zone->x + zone->w)
			{
				meta->map[i * (meta->y + 1) + j] = meta->square_symbol;
				++j;
			}
			++i;
		}
	}
	ft_putstr(meta->map);
}
