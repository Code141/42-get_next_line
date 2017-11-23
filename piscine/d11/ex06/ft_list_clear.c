/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gelambin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/21 18:45:34 by gelambin          #+#    #+#             */
/*   Updated: 2017/09/21 22:13:15 by gelambin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_clear(t_list **begin_list)
{
	t_list *next;

	while ((*begin_list)->next)
	{
		next = (*begin_list)->next;	
		free(*begin_list);
		*begin_list = next;
	}
	free(*begin_list);
	*begin_list = NULL;
}
