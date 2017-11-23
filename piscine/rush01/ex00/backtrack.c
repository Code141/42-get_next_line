/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   backtrack.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gelambin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/09 16:33:06 by gelambin          #+#    #+#             */
/*   Updated: 2017/09/12 13:44:46 by gelambin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sudoku.h"
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <time.h>

void	ft_backtrack(char **tab, int index, int *count, char **save)
{
	int x;
	int y;
	char n;
	
	n = '1';
	x = index % 9;
	y = index / 9;
	if (index == 81)
	{
		if (count == 0)
			ft_save(save, tab);
		count++;
		return ;
	}
	if (tab[x][y] == '.')
	{
		while (n <= '9')
		{
			tab[x][y] = n;
			if (ft_try_number(tab, x, y))
			{
				system("clear");
				ft_print_sudo(tab);
				usleep(1600);

				ft_backtrack(tab, index + 1, count, save);
			}
			else
				tab[x][y] = '.';
			n++;
		}
	}
	else
		ft_backtrack(tab, index + 1, count, save);
}
