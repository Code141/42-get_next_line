/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_push_back.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gelambin <gelambin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/02 16:13:11 by gelambin          #+#    #+#             */
/*   Updated: 2017/12/02 21:54:14 by gelambin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lst_push_back(t_list **alst, t_list *new)
{
	t_list	*element;
	
	element = *alst;
	if (!element)
	{
		element = new;
		return ;
	}
	while (element->next)
		element = element->next;
	element->next = new;
}
