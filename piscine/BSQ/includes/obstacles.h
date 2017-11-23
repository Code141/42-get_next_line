/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   obstacles.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gelambin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/18 22:07:51 by gelambin          #+#    #+#             */
/*   Updated: 2017/09/19 18:58:06 by gelambin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef OBSTACLES_H
# define OBSTACLES_H

typedef struct	s_list
{
	int				x;
	int				y;
	struct s_list	next;
}				t_list;

#endif
