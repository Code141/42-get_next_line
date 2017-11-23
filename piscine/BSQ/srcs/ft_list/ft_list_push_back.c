/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sboilard <sboilard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/07 14:30:20 by sboilard          #+#    #+#             */
/*   Updated: 2017/09/19 09:45:08 by gelambin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	**ft_list_push_back(t_list **begin_list, void *data)
{
	t_list	*elem;
	t_list	*iter;

	elem = ft_create_elem(data);
	if (*begin_list == NULL)
		*begin_list = elem;
	else
	{
		iter = *begin_list;
		while (iter->next != NULL)
			iter = iter->next;
		iter->next = elem;
	}
	return (&elem->next);
}
