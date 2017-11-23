/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sboilard <sboilard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/07 14:21:32 by sboilard          #+#    #+#             */
/*   Updated: 2017/09/20 17:56:22 by sboilard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIST_H
# define FT_LIST_H
# ifndef NULL
#  define NULL ((void *)0)
# endif

typedef	struct		s_list
{
	struct s_list	*next;
	void			*data;
}					t_list;
t_list				*ft_create_elem(void *data);
void				ft_list_push_front(t_list **begin_list, void *data);
t_list				**ft_list_push_back(t_list **begin_list, void *data);
void				ft_list_merge(t_list **begin_list1, t_list *begin_list2);
void				ft_list_foreach(t_list *begin_list, void (*f)(void *));
void				ft_blend_list(t_list **list);
void				ft_list_clear(t_list **begin_list, void (*freef)(void *));

#endif
