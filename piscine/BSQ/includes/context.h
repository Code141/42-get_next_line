/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   context.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gelambin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/18 19:43:44 by gelambin          #+#    #+#             */
/*   Updated: 2017/09/20 23:12:12 by sboilard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTEXT_H
# define CONTEXT_H
# include "ft_list.h"

typedef struct		s_meta
{
	char	blank_symbol;
	char	obstacle_symbol;
	char	square_symbol;
	int		x;
	int		y;
	int		given_y;
	char	*raw_map;
	char	*map;
	t_list	*obstacles;
	int		nb_obs;
}					t_meta;

typedef struct		s_point
{
	int x;
	int y;
}					t_point;

#endif
