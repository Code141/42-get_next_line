/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gelambin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/19 20:52:45 by gelambin          #+#    #+#             */
/*   Updated: 2017/09/21 21:32:07 by gelambin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <assert.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include "context.h"
#include "ft_list.h"
#include "read_input.h"
#include "check_input.h"
#include "zone.h"
#include "ft_heap.h"
#include "io.h"

void	do_nothing(void *unused)
{
	(void)unused;
}

int		ft_treat_input(int fd, t_meta *meta)
{
	int i;

	i = 0;
	if (!ft_get_meta(read_input(fd), meta))
		return (0);
	while (i++ < meta->nb_obs / 8)
		ft_blend_list(&meta->obstacles);
	return (1);
}

void	ft_zonning(t_meta *meta, t_heap **heap, t_zone *zone, t_list *n_zones)
{
	t_list	*next;

	zone->x = 0;
	zone->y = 0;
	zone->w = meta->x;
	zone->h = meta->y;
	zone->obs = meta->obstacles;
	ft_heap_insert(heap, zone, (int(*)(void*, void*))compare_zone);
	while (((t_zone *)FT_HEAP_PEEK(*heap))->obs != NULL)
	{
		n_zones = split_zone((t_zone *)FT_HEAP_PEEK(*heap));
		ft_heap_pop(heap, (int (*)(void *, void *))compare_zone, do_nothing);
		while (n_zones != NULL)
		{
			ft_heap_insert(heap, n_zones->data,
					(int (*)(void *, void *))compare_zone);
			next = n_zones->next;
			free(n_zones);
			n_zones = next;
		}
	}
}

void	ft_execute(int fd)
{
	t_meta	*meta;
	t_heap	*heap;
	t_list	*n_zones;
	t_zone	*zone;

	heap = NULL;
	n_zones = NULL;
	meta = (t_meta *)malloc(sizeof(*meta));
	zone = (t_zone *)malloc(sizeof(*zone));
	if (ft_treat_input(fd, meta))
	{
		if (meta->x * meta->y != meta->nb_obs)
		{
			ft_zonning(meta, &heap, zone, n_zones);
		}
		ft_print(meta, heap);
	}
	else
		ft_putstr("map error\n");
	ft_heap_clear(&heap, free);
	ft_list_clear(&meta->obstacles, free);
	free(meta->raw_map);
	free(meta);
}

void	ft_bsq(char **files, int nb_files)
{
	int		fd;
	int		map;

	map = 0;
	if (nb_files > 0)
	{
		while (map < nb_files)
		{
			fd = open(files[map], O_RDONLY);
			if (map != 0)
				printf("\n");
			ft_execute(fd);
			map++;
		}
	}
	else
		ft_execute(0);
}
