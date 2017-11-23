/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zone.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sboilard <sboilard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/18 22:34:32 by sboilard          #+#    #+#             */
/*   Updated: 2017/09/20 10:47:31 by sboilard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZONE_H
# define ZONE_H
# include "ft_list.h"

typedef struct	s_zone
{
	int		x;
	int		y;
	int		w;
	int		h;
	t_list	*obs;
}				t_zone;

t_list			*split_zone(t_zone *zone);

int				compare_zone(t_zone *a, t_zone *b);

#endif
