/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gelambin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/14 22:44:26 by gelambin          #+#    #+#             */
/*   Updated: 2017/09/14 22:52:32 by gelambin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIST_H
# define FT_LIST_H

typedef struct	s_list	t_list;
struct	s_list
{
	void	*data;
	t_list	*next;
};

t_list *ft_create_elem(void *data);

#endif
