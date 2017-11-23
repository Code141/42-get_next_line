/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zone.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sboilard <sboilard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/18 22:31:29 by sboilard          #+#    #+#             */
/*   Updated: 2017/09/20 16:12:32 by gelambin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <assert.h>
#include "ft_list.h"
#include "context.h"
#include "zone.h"

static void	split_horiz(t_zone *zone, t_point *obs, t_list **new_zones)
{
	t_zone	*temp;

	if (obs->y - zone->y > 0)
	{
		temp = (t_zone*)malloc(sizeof(*temp));
		temp->x = zone->x;
		temp->w = zone->w;
		temp->y = zone->y;
		temp->h = obs->y - zone->y;
		temp->obs = zone->obs->next;
		ft_list_push_front(new_zones, temp);
	}
	if (zone->h - (obs->y - zone->y + 1) > 0)
	{
		temp = (t_zone*)malloc(sizeof(*temp));
		temp->x = zone->x;
		temp->w = zone->w;
		temp->y = obs->y + 1;
		temp->h = zone->h - (obs->y - zone->y + 1);
		temp->obs = zone->obs->next;
		ft_list_push_front(new_zones, temp);
	}
}

static void	split_vert(t_zone *zone, t_point *obs, t_list **new_zones)
{
	t_zone	*temp;

	if (obs->x - zone->x > 0)
	{
		temp = (t_zone*)malloc(sizeof(*temp));
		temp->x = zone->x;
		temp->w = obs->x - zone->x;
		temp->y = zone->y;
		temp->h = zone->h;
		temp->obs = zone->obs->next;
		ft_list_push_front(new_zones, temp);
	}
	if (zone->w - (obs->x - zone->x + 1) > 0)
	{
		temp = (t_zone*)malloc(sizeof(*temp));
		temp->x = obs->x + 1;
		temp->w = zone->w - (obs->x - zone->x + 1);
		temp->y = zone->y;
		temp->h = zone->h;
		temp->obs = zone->obs->next;
		ft_list_push_front(new_zones, temp);
	}
}

t_list		*split_zone(t_zone *zone)
{
	t_point	*obs;
	t_list	*new_zones;

	assert(zone != NULL);
	assert(zone->x != 0x55555555);
	assert(zone->y != 0x55555555);
	assert(zone->w != 0x55555555);
	assert(zone->h != 0x55555555);
	assert(zone->obs != (void *)0x5555555555555555);
	assert(zone->obs->data != NULL);
	obs = (t_point *)zone->obs->data;
	new_zones = NULL;
	if (zone->x + zone->w <= obs->x || obs->x < zone->x
		|| zone->y + zone->h <= obs->y || obs->y < zone->y)
	{
		zone->obs = zone->obs->next;
		ft_list_push_front(&new_zones, zone);
	}
	else
	{
		split_horiz(zone, obs, &new_zones);
		split_vert(zone, obs, &new_zones);
		free(zone);
	}
	return (new_zones);
}

int			compare_zone(t_zone *a, t_zone *b)
{
	int	sa;
	int	sb;

	sa = a->h < a->w ? a->h : a->w;
	sb = b->h < b->w ? b->h : b->w;
	if (sa != sb)
		return (sa - sb);
	if (a->y != b->y)
		return (b->y - a->y);
	return (b->x - a->x);
}
