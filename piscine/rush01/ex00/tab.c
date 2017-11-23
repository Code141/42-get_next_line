/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tab.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gelambin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/10 16:01:45 by gelambin          #+#    #+#             */
/*   Updated: 2017/09/10 22:33:19 by gelambin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sudoku.h"

void	ft_reverse_xy(char **dest, char **src)
{
	int x;
	int y;

	x = 0;
	y = 0;
	while (y < 9)
	{

		x = 0;
		while (x < 9)
		{
			dest[x][y] = src[y][x];
			x++;
		}
		y++;
	}
}

void	ft_save(char **dest, char **src)
{
	int		x;
	int		y;
	
	x = 0;
	y = 0;
	while (y < 9)
	{
		x = 0;
		while (x < 9)
		{
			dest[x][y] = src[x][y];
			x++;
		}
		y++;
	}
}

char	**ft_allocate_tab(void)
{
	char **tab;
	int x;
	int y;

	x = 0;
	y = 0;
	tab = (char**)malloc(sizeof(*tab) * 9);
		if (!tab)
			return (tab);
	while (x < 9)
	{
		tab[x] = (char*)malloc(sizeof(**tab) * 9);
		y = 0;
		while (y < 9)
		{
			tab[x][y] = 46;
			y++;
		}
		x++;
	}
	return (tab);
}

/* FREE---------------------------------------------------------
char	**ft_allocate_tab(void)
{
	char **tab;
	int x;
	int y;

	x = 0;
	y = 0;
	tab = (char**)malloc(sizeof(*tab) * 9);
		if (!tab)
			return (tab);
	while (x < 9)
	{
		tab[x] = (char*)malloc(sizeof(**tab) * 9);
		y = 0;
		while (y < 9)
		{
			tab[x][y] = 46;
			y++;
		}
		x++;
	}
	return (tab);
}
*/
