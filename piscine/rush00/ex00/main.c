/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gelambin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/01 22:18:35 by gelambin          #+#    #+#             */
/*   Updated: 2017/09/16 15:55:35 by gelambin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft/libft.h"

int		rush(int x, int y);

int		main(int argc, char **argv)
{
	argc--;
	argv++;
	if (argc == 2)
		rush(ft_atoi(argv[0]), ft_atoi(argv[1]));
	return (0);
}
