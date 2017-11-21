/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gelambin <gelambin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/15 17:24:12 by gelambin          #+#    #+#             */
/*   Updated: 2017/11/17 16:42:02 by gelambin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *list;
	t_list *elem;

	if (!lst)
		return (NULL);
	list = f(ft_lstnew(lst->content, lst->content_size));
	if (!list)
		return (NULL);
	elem = list;
	while (lst->next)
	{
		elem->next = ft_lstnew(lst->next->content, lst->next->content_size);
		if (!elem->next)
			return (NULL);
		elem->next = f(elem->next);
		elem = elem->next;
		lst = lst->next;
	}
	return (list);
}
