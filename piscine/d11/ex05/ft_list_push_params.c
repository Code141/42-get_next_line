/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gelambin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/15 12:00:31 by gelambin          #+#    #+#             */
/*   Updated: 2017/09/21 18:44:51 by gelambin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_push_params(int ac, char **av)
{
	t_list	*list;
	t_list	*tmp;
	int		i;

	i = 1;
	list = NULL;
	while (i <ac)
	{
		tmp = ft_create_elem(av[i++]);
		tmp->next = list;
		list = tmp;
	}	
	return (list);
}
