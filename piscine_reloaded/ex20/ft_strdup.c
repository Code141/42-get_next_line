/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gelambin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/06 18:40:08 by gelambin          #+#    #+#             */
/*   Updated: 2017/11/08 10:33:40 by gelambin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		len;
	char	*dest;

	len = 0;
	while (src[len])
		len++;
	dest = (char*)malloc(sizeof(*dest) * (len + 1));
	if (!dest)
		return (dest);
	dest[len + 1] = '\0';
	while (len)
	{
		dest[len] = src[len];
		len--;
	}
	dest[len] = src[len];
	return (dest);
}
