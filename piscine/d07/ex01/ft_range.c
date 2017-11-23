/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gelambin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/05 22:28:02 by gelambin          #+#    #+#             */
/*   Updated: 2017/09/13 16:31:20 by gelambin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int *tab;
	int size;

	tab = 0;
	if (min >= max)
		return (tab);
	size = max - min;
	tab = (int*)malloc(sizeof(*tab) * size);
	if (!tab)
		return (tab);
	while (size >= 0)
	{
		tab[size] = min + size;
		size--;
	}
	return (tab);
}
