/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_heap.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sboilard <sboilard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/18 16:23:38 by sboilard          #+#    #+#             */
/*   Updated: 2017/09/20 23:22:24 by sboilard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_HEAP_H
# define FT_HEAP_H
# include "ft_list.h"

typedef struct	s_heap
{
	void	*data;
	t_list	*next;
}				t_heap;
t_heap			*ft_heap_create_elem(void *data);
void			ft_heap_merge(t_heap **heap1, t_heap *heap2,
	int (*cmpf)(void *, void *));
void			ft_heap_insert(t_heap **heap, void *data,
	int (*cmpf)(void *, void *));
void			ft_heap_pop(t_heap **heap, int (*cmpf)(void *, void *),
	void (*freef)(void *));
void			ft_heap_clear(t_heap **heap, void (*freef)(void *));

# define FT_HEAP_PEEK(h) ((h)->data)
# define FT_HEAP_IS_EMPTY(h) ((h) == (t_heap *)0)
#endif
