/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_input.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gelambin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/18 19:53:45 by gelambin          #+#    #+#             */
/*   Updated: 2017/09/20 23:11:43 by sboilard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "context.h"
#include "io.h"
#include "ft_list.h"
#include "point.h"
#include <stdio.h>

void		ft_register_obstacle(int x, int y, t_meta *meta)
{
	t_point	*point;

	point = ft_create_point(x, y);
	ft_list_push_back(&meta->obstacles, point);
}

int			ft_check_pattern(char c, t_meta *meta)
{
	if (c != meta->blank_symbol
		&& c != meta->obstacle_symbol
		&& c != meta->square_symbol)
		return (0);
	return (1);
}

int			ft_read_map(t_meta *meta)
{
	int i;

	i = 0;
	while (meta->map[i])
	{
		if (meta->map[i] == '\n')
		{
			meta->y++;
			if (meta->x == 0)
				meta->x = i;
			else if ((((i % meta->x) - (meta->y - 1)) != 0)
				|| (i - (meta->y - 1) != meta->x * meta->y))
				return (0);
		}
		else if (!ft_check_pattern(meta->map[i], meta))
			return (0);
		if (meta->map[i] == meta->obstacle_symbol)
		{
			meta->nb_obs++;
			ft_register_obstacle(meta->x == 0
				? i : (i - meta->y) % meta->x, meta->y, meta);
		}
		i++;
	}
	return ((meta->given_y == meta->y) ? 1 : 0);
}

int			ft_get_meta(char *input, t_meta *meta)
{
	int i;

	i = 0;
	while (input[i] && input[i] != '\n')
		i++;
	meta->square_symbol = input[i - 1];
	meta->obstacle_symbol = input[i - 2];
	meta->blank_symbol = input[i - 3];
	input[i - 3] = '\0';
	meta->given_y = ft_atoi(input);
	meta->x = 0;
	meta->y = 0;
	meta->raw_map = input;
	meta->map = input + i + 1;
	meta->obstacles = NULL;
	meta->nb_obs = 0;
	if (!ft_read_map(meta) || (!meta->x || !meta->y))
		return (0);
	return (1);
}
