/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_remove.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gelambin <gelambin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/15 15:05:36 by gelambin          #+#    #+#             */
/*   Updated: 2017/12/09 16:04:30 by gelambin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

t_list	*ft_lst_remove(t_list *alst, t_list *elem)
{
	if (!alst || !elem)
		return (NULL);
	while (alst->next && alst->next != elem)
		alst = alst->next;
	if (alst->next == elem)
	{
		if (elem->next)
			alst->next = elem->next;
		else
			alst->next = NULL;
		elem->next = NULL;
		return (elem);
	}
	return (NULL);
}
