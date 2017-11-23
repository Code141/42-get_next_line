/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gelambin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/07 19:36:47 by gelambin          #+#    #+#             */
/*   Updated: 2017/09/08 15:54:11 by gelambin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdio.h"

void	ft_print(int a, int b, char *str1, char *str2)
{
	printf("THE FOLLOWING TAKES PLACE BETWEEN %d.00 %s", a, str1);
	printf(" AND %d.00 %s", b, str2);
	printf("\n");
}

char	*ft_hour(int hour)
{
	if (hour > 11 && hour < 24)
		return ("P.M.");
	return ("A.M.");
}

void	ft_takes_place(int hour)
{
	int a;
	int b;

	a = (hour % 12);
	b = (hour % 12) + 1;
	a = (a == 0) ? 12 : a;
	b = (b == 0) ? 12 : b;
	ft_print(a, b, ft_hour(hour), ft_hour(hour + 1));
}
