/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gelambin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/06 19:20:55 by gelambin          #+#    #+#             */
/*   Updated: 2017/11/06 19:38:50 by gelambin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int i;
	int *tab;

	if (min >= max)
		return (0);
	tab = (int*)malloc(sizeof(*tab) * (max - min + 1));
	if (!tab)
		return (0);
	i = 0;
	while (min < max)
	{
		tab[i] = min++;
		i++;
	}
	return (tab);
}
