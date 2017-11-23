/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gelambin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/14 09:02:50 by gelambin          #+#    #+#             */
/*   Updated: 2017/09/19 11:41:58 by gelambin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_doop.h"

int		main(int argc, char **argv)
{
	argc--;
	argv++;
	if (argc == 3)
	{
		if (!argv[1][1] && (argv[1][0] == '+' || argv[1][0] == '-'
			|| argv[1][0] == '*' || argv[1][0] == '/' || argv[1][0] == '%'))
			ft_doop(ft_atoi(argv[0]), ft_atoi(argv[2]), argv[1][0]);
		else
			ft_putchar('0');
		ft_putchar('\n');
	}
	return (0);
}
