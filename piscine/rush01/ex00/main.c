/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gelambin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/09 16:33:11 by gelambin          #+#    #+#             */
/*   Updated: 2017/09/10 23:37:46 by gelambin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sudoku.h"

int		main(int argc, char **argv)
{
	char	**tab;
	char	**save;
	char	error;
	int		count;

	argc--;
	error = 0;
	if (argc == 9)
	{
		if (!ft_input_check(argv + 1))
			error = 1;
		tab = ft_allocate_tab();
		save = ft_allocate_tab();
		ft_reverse_xy(tab, argv + 1);
	}
	else
	{
		error = 1;
	}
	if (!error)
		ft_backtrack(tab, 0, &count, save);
	if (!error)
		ft_print_sudo(save);
	//----------------------------------------FREE ALL
	if (error)
		ft_putstr("Error\n");
	return (0);
}
