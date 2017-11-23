/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_sudo.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gelambin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/10 14:55:11 by gelambin          #+#    #+#             */
/*   Updated: 2017/09/10 23:32:52 by gelambin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sudoku.h"

int	ft_check_line(char **tab, int x, int y)
{
	int column_i;

	column_i = 0;
	while (column_i < 9)
	{
		if (tab[x][y] != tab[column_i][y] || column_i == x)
			column_i++;
		else
			return (0);
	}
	return (1);
}

int	ft_check_column(char **tab, int x, int y)
{
	int line_i;

	line_i = 0;
	while (line_i < 9)
	{
		if (tab[x][y] != tab[x][line_i] || line_i == y)
			line_i++;
		else
			return (0);
	}
	return (1);
}

int	ft_check_block(char **tab, int x, int y)
{
	int bloc_x;
	int bloc_y;
	int i;

	i = 0;
	bloc_x = (x / 3) * 3;
	bloc_y = (y / 3) * 3;
	while (i < 9)
	{
		if (tab[bloc_x + i % 3][bloc_y + i / 3] == tab[x][y]
			&& (bloc_x + i % 3 != x && bloc_y + i / 3 != y))
			return (0);
		i++;
	}
	return (1);
}

int		ft_try_number(char **tab, int x, int y)
{
	int error;

	error = 1;
	//	error = (ft_check_line(tab, x, y)) ? 1 : 0;
	//	error = (error && ft_check_column(tab, x, y)) ? 1 : 0;
	error = (error && ft_check_block(tab, x, y)) ? 1 : 0;
	return (error);
}
