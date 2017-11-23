/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gelambin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/01 22:18:35 by gelambin          #+#    #+#             */
/*   Updated: 2017/09/16 17:45:56 by gelambin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/main.h"

int		main(void)
{
	char	*input_str;
	int		x;
	int		y;

	x = 0;
	y = 0;
	input_str = ft_read();
	ft_get_size(&x, &y, input_str);
	ft_gen_rush(x, y, input_str);
	ft_putchar('\n');
	return (0);
}
