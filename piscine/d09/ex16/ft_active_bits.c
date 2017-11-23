/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_active_bits.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gelambin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/08 14:32:38 by gelambin          #+#    #+#             */
/*   Updated: 2017/09/08 16:00:30 by gelambin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_active_bits(int value)
{
	int count_bits;

	count_bits = 0;
	while (value)
	{
		if (value % 2 == 1)
			count_bits++;
		value = value >> 1;
	}
	return (count_bits);
}
