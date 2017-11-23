/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_blend_list.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gelambin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/19 15:25:37 by gelambin          #+#    #+#             */
/*   Updated: 2017/09/20 19:25:43 by sboilard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"
#include "ft_rand.h"

void	ft_split_list(t_list *list, t_list **list_a, t_list **list_b)
{
	ft_list_push_front(list_a, list->data);
	if (list->next)
	{
		ft_list_push_front(list_b, list->next->data);
	}
}

void	ft_blend_list(t_list **list)
{
	t_list	*right;
	t_list	*left;
	t_list	*next;

	left = NULL;
	right = NULL;
	while ((*list)->next)
	{
		if (ft_rand())
			ft_split_list(*list, &right, &left);
		else
			ft_split_list(*list, &right, &left);
		next = (*list)->next;
		free(*list);
		*list = next;
		if ((*list)->next)
		{
			next = (*list)->next;
			free(*list);
			*list = next;
		}
	}
	ft_list_merge(&left, right);
	*list = left;
}
