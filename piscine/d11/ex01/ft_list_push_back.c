/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gelambin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/15 09:53:07 by gelambin          #+#    #+#             */
/*   Updated: 2017/09/18 13:00:18 by gelambin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void ft_list_push_back(t_list **begin_list, void *data)
{
	t_list	*element;

	element = *begin_list;
	while (element->next)
		element = element->next;
	element->next = ft_create_elem(data);
}
