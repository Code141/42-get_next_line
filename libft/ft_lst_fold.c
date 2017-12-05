/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_fold.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gelambin <gelambin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/05 18:18:42 by gelambin          #+#    #+#             */
/*   Updated: 2017/12/05 18:24:21 by gelambin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	*ft_lst_fold(t_list *alst)
{
	void			*data;
	void			*tmp;

	data = (void*)malloc(ft_lst_weight(alst));
	if (!data)
		return (0);
	tmp = data;
	while (alst)
	{
		ft_memcpy(tmp, alst->content, alst->content_size);
		tmp = ((char*)tmp) + alst->content_size;
		alst = alst->next;
	}
	return (data);
}

