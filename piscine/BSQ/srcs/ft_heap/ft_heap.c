/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_heap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sboilard <sboilard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/18 16:23:46 by sboilard          #+#    #+#             */
/*   Updated: 2017/09/21 21:32:09 by gelambin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_heap.h"

t_heap	*ft_heap_create_elem(void *data)
{
	t_heap	*elem;

	elem = (t_heap*)malloc(sizeof(*elem));
	elem->data = data;
	elem->next = NULL;
	return (elem);
}

void	ft_heap_merge(t_heap **heap1, t_heap *heap2,
						int (*cmpf)(void *, void *))
{
	if (heap2 == NULL)
		return ;
	if (*heap1 == NULL)
		*heap1 = heap2;
	else if ((*cmpf)((*heap1)->data, heap2->data) > 0)
		ft_list_push_front(&(*heap1)->next, heap2);
	else
	{
		ft_list_push_front(&heap2->next, *heap1);
		*heap1 = heap2;
	}
}

void	ft_heap_insert(t_heap **heap, void *data, int (*cmpf)(void *, void *))
{
	ft_heap_merge(heap, ft_heap_create_elem(data), cmpf);
}

void	ft_heap_pop(t_heap **heap, int (*cmpf)(void *, void *),
					void (*freef)(void *))
{
	t_list	*iter;
	t_list	*next;
	t_heap	*temp;

	iter = (*heap)->next;
	(*freef)((*heap)->data);
	free(*heap);
	*heap = NULL;
	while (iter != NULL && iter->next != NULL)
	{
		temp = (t_heap *)iter->data;
		ft_heap_merge(&temp, (t_heap *)iter->next->data, cmpf);
		ft_heap_merge(heap, temp, cmpf);
		next = iter->next;
		free(iter);
		iter = next;
		next = iter->next;
		free(iter);
		iter = next;
	}
	if (iter != NULL)
	{
		ft_heap_merge(heap, (t_heap *)iter->data, cmpf);
		free(iter);
	}
}

void	ft_heap_clear(t_heap **heap, void (*freef)(void *))
{
	t_list	*iter;
	t_list	*next;

	if (*heap)
	{
		iter = (*heap)->next;
		while (iter != NULL)
		{
			ft_heap_clear((t_heap **)&iter->data, freef);
			next = iter->next;
			free(iter);
			iter = next;
		}
		(*freef)((*heap)->data);
		free(*heap);
		*heap = NULL;
	}
}
