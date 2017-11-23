/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sboilard <sboilard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/07 15:07:32 by sboilard          #+#    #+#             */
/*   Updated: 2017/09/20 16:54:22 by sboilard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

void	ft_list_clear(t_list **begin_list, void (*freef)(void *))
{
	t_list	*next;

	while (*begin_list != NULL)
	{
		next = (*begin_list)->next;
		(*freef)((*begin_list)->data);
		free(*begin_list);
		*begin_list = next;
	}
}
