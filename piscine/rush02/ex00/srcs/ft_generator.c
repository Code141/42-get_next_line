/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_generator.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gelambin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/16 17:32:37 by gelambin          #+#    #+#             */
/*   Updated: 2017/09/16 17:45:31 by gelambin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_generator.h"

void	ft_gen_rush(int x, int y, char *input_str)
{
	int		id;
	int		first;
	char	*gen_str;

	id = 0;
	first = 1;
	gen_str = (char*)malloc(sizeof(*gen_str) * ((x + 1) * y + 1));
	if (gen_str)
	{
		while (id < 5)
		{
			rush(x, y, id, gen_str);
			if (!ft_strcmp(input_str, gen_str))
				ft_show(x, y, id, first);
			if (!ft_strcmp(input_str, gen_str))
				first = 0;
			id++;
		}
		if (first)
			ft_putstr("aucune");
	}
	free(gen_str);
}
