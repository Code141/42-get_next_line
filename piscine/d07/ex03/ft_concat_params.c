/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gelambin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/05 23:18:56 by gelambin          #+#    #+#             */
/*   Updated: 2017/09/13 18:46:51 by gelambin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strcat(char *dest, char *src)
{
	unsigned int i;
	unsigned int j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (src[j])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

int		ft_total_params_size(int argc, char **argv)
{
	int size;
	int i;
	int j;

	argv++;
	argc -= 1;
	size = 0;
	i = 0;
	j = 0;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j])
			j++;
		size += j + 1;
		i++;
	}
	return (size);
}

char	*ft_concat_params(int argc, char **argv)
{
	int		i;
	int		size;
	char	*str;

	i = 1;
	size = ft_total_params_size(argc, argv);
	str = (char*)malloc(sizeof(*str) * size + 1);
	if (!str)
		return (str);
	while (i < argc)
	{
		ft_strcat(str, argv[i]);
		if (i < argc - 1)
			ft_strcat(str, "\n");
		i++;
	}
	return (str);
}
