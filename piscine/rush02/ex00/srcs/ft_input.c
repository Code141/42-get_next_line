/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_input.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gelambin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/16 12:00:42 by gelambin          #+#    #+#             */
/*   Updated: 2017/09/17 20:26:27 by gelambin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_input.h"

void	ft_get_size(int *x, int *y, char *input_str)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (input_str[i])
	{
		if (input_str[i] == '\n')
			j++;
		if (input_str[i] == '\n' && *x == 0)
			*x = i;
		i++;
	}
	*x = *x;
	*y = j;
}

char	*ft_read(void)
{
	char	input[2];
	int		size;
	char	*save;
	char	*str;

	save = (char*)malloc(sizeof(*save));
	str = (char*)malloc(sizeof(*str));
	str[0] = '\0';
	input[1] = '\0';
	while (read(0, input, 1))
	{
		size = ft_strlen(str) + 1;
		free(save);
		save = (char*)malloc(sizeof(*save) * (size));
		ft_strcpy(save, str);
		free(str);
		str = (char*)malloc(sizeof(*str) * (size + 1));
		ft_strcpy(str, save);
		ft_strcat(str, input);
	}
	return (str);
}
