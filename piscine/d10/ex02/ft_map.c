/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gelambin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/13 09:01:02 by gelambin          #+#    #+#             */
/*   Updated: 2017/09/18 11:34:13 by gelambin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int *tab_r;
	int i;

	i = 0;
	tab_r = (int*)malloc(sizeof(*tab) * length);
	if (!tab_r)
		return (tab_r);
	while (i < length)
	{
		tab_r[i] = f(tab[i]);
		i++;
	}
	return (tab_r);
}
