/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gelambin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/15 09:53:50 by gelambin          #+#    #+#             */
/*   Updated: 2017/09/18 13:27:44 by gelambin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIST_H
# define FT_LIST_H

t_list			*ft_create_elem(void *data);
typedef struct	s_list	t_list;
struct			s_list
{
	void	*data;
	t_list	*next;
};

#endif
