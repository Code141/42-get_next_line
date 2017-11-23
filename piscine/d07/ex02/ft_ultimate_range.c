/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gelambin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/05 22:39:46 by gelambin          #+#    #+#             */
/*   Updated: 2017/09/13 16:31:08 by gelambin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*tab;
	int	size;
	int i;

	i = 0;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	size = max - min;
	tab = (int*)malloc(sizeof(*tab) * size);
	if (!tab)
		return (0);
	while (min + i < max)
	{
		tab[i] = min + i;
		i++;
	}
	*range = tab;
	return (size);
}
