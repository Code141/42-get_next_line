/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gelambin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/14 09:02:50 by gelambin          #+#    #+#             */
/*   Updated: 2017/09/20 16:42:08 by gelambin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/main.h"

int		main(int argc, char **argv)
{
	argc--;
	argv++;
	if (argc == 3)
	{
		ft_doop(ft_atoi(argv[0]), ft_atoi(argv[2]), argv[1]);
		ft_putchar('\n');
	}
	return (0);
}
